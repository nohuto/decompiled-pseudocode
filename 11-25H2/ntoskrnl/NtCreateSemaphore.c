/*
 * XREFs of NtCreateSemaphore @ 0x14089F4E0
 * Callers:
 *     <none>
 * Callees:
 *     ObpPushStackInfo @ 0x14029C310 (ObpPushStackInfo.c)
 *     KeInitializeSemaphore @ 0x14045D6B0 (KeInitializeSemaphore.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406A85C0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     ObpAllocateObject @ 0x14085AAF0 (ObpAllocateObject.c)
 *     ObpCaptureObjectCreateInformation @ 0x14085C5F0 (ObpCaptureObjectCreateInformation.c)
 *     ObpFreeObjectNameBuffer @ 0x14089F1A0 (ObpFreeObjectNameBuffer.c)
 *     ObInsertObjectEx @ 0x1408A05E0 (ObInsertObjectEx.c)
 *     ObpRegisterObject @ 0x140AB24BC (ObpRegisterObject.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtCreateSemaphore(
        PHANDLE SemaphoreHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        LONG InitialCount,
        LONG MaximumCount)
{
  char PreviousMode; // r13
  __int64 v8; // rcx
  POBJECT_TYPE *v9; // r15
  struct _KPRCB *CurrentPrcb; // r14
  _GENERAL_LOOKASIDE *P; // rdi
  __int64 v12; // rbx
  NTSTATUS Information; // edi
  int v14; // ecx
  void *v15; // rcx
  struct _KPRCB *v16; // rdx
  _GENERAL_LOOKASIDE *v17; // rcx
  struct _KSEMAPHORE *v18; // rbx
  _GENERAL_LOOKASIDE *L; // rdi
  __int64 v21; // rbx
  __int64 v22; // [rsp+48h] [rbp-60h] BYREF
  __int64 v23; // [rsp+50h] [rbp-58h] BYREF
  _OWORD v24[5]; // [rsp+58h] [rbp-50h] BYREF

  v23 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v8 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)SemaphoreHandle < 0x7FFFFFFF0000LL )
      v8 = (__int64)SemaphoreHandle;
    *(_QWORD *)v8 = *(_QWORD *)v8;
  }
  if ( MaximumCount <= 0 || InitialCount < 0 || InitialCount > MaximumCount )
    return -1073741811;
  v9 = ExSemaphoreObjectType;
  v24[0] = 0LL;
  v22 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  P = CurrentPrcb->PPLookasideList[4].P;
  ++P->TotalAllocates;
  v12 = (__int64)RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( !v12 )
  {
    ++P->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[4].L;
    ++L->TotalAllocates;
    v12 = (__int64)RtlpInterlockedPopEntrySList(&L->ListHead);
    if ( !v12 )
    {
      ++L->AllocateMisses;
      v12 = guard_dispatch_icall_no_overrides((unsigned int)L->Type);
    }
  }
  if ( v12 )
  {
    *(_DWORD *)v12 = CurrentPrcb->Number;
    Information = ObpCaptureObjectCreateInformation(PreviousMode, PreviousMode, (__int64)ObjectAttributes, v24, v12, 0);
    if ( Information >= 0 )
    {
      if ( (*(_DWORD *)v12 & (_DWORD)v9[9]) != 0 )
      {
        Information = -1073741811;
      }
      else if ( (*(_DWORD *)v12 & 0x10) == 0 || SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, PreviousMode) )
      {
        v14 = *((_DWORD *)v9 + 27);
        *(_DWORD *)(v12 + 20) = *((_DWORD *)v9 + 26);
        *(_DWORD *)(v12 + 24) = v14;
        Information = ObpAllocateObject((_DWORD *)v12, PreviousMode, (__int64)v9, v24, 32, &v22, 0LL);
        if ( Information >= 0 )
        {
          v21 = v22;
          if ( ObpTraceFlags )
          {
            ObpRegisterObject(v22);
            ObpPushStackInfo(v21, 1, 1u, 0x746C6644u);
          }
          v18 = (struct _KSEMAPHORE *)(v21 + 48);
          goto LABEL_23;
        }
      }
      else
      {
        Information = -1073741727;
      }
      if ( *((_QWORD *)&v24[0] + 1) )
        ObpFreeObjectNameBuffer((__int64)v24);
      v15 = *(void **)(v12 + 32);
      if ( v15 )
      {
        if ( *(_BYTE *)(v12 + 16) <= 1u )
          ExFreePoolWithTag(v15, 0);
        *(_QWORD *)(v12 + 32) = 0LL;
      }
    }
    v16 = KeGetCurrentPrcb();
    v17 = v16->PPLookasideList[4].P;
    ++v17->TotalFrees;
    if ( LOWORD(v17->ListHead.Alignment) < v17->Depth
      || (++v17->FreeMisses,
          v17 = v16->PPLookasideList[4].L,
          ++v17->TotalFrees,
          LOWORD(v17->ListHead.Alignment) < v17->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v17->ListHead, (PSLIST_ENTRY)v12);
    }
    else
    {
      ++v17->FreeMisses;
      if ( (void (__stdcall *)(PVOID))v17->FreeEx == ExFreePool )
        ExFreePool((PVOID)v12);
      else
        guard_dispatch_icall_no_overrides(v12);
    }
    v18 = 0LL;
  }
  else
  {
    Information = -1073741670;
    v18 = 0LL;
  }
LABEL_23:
  if ( Information >= 0 )
  {
    KeInitializeSemaphore(v18, InitialCount, MaximumCount);
    Information = ObInsertObjectEx(v18, 0LL, 0, 0LL, (__int64)&v23);
    if ( Information >= 0 )
      *SemaphoreHandle = (HANDLE)v23;
  }
  return Information;
}
