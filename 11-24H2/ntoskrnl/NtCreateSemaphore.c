/*
 * XREFs of NtCreateSemaphore @ 0x14083A3C0
 * Callers:
 *     <none>
 * Callees:
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     KeInitializeSemaphore @ 0x1404514E0 (KeInitializeSemaphore.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ObpFreeObjectNameBuffer @ 0x14083AD40 (ObpFreeObjectNameBuffer.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     ObInsertObjectEx @ 0x140853900 (ObInsertObjectEx.c)
 *     ObpAllocateObject @ 0x1408A3930 (ObpAllocateObject.c)
 *     ObpCaptureObjectCreateInformation @ 0x1408A5340 (ObpCaptureObjectCreateInformation.c)
 *     ObpRegisterObject @ 0x140AB162C (ObpRegisterObject.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtCreateSemaphore(
        PHANDLE SemaphoreHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        LONG InitialCount,
        LONG MaximumCount)
{
  unsigned __int8 PreviousMode; // r12
  __int64 v8; // rcx
  POBJECT_TYPE *v9; // r13
  struct _KPRCB *CurrentPrcb; // r14
  _GENERAL_LOOKASIDE *P; // rdi
  __int64 v12; // rbx
  _GENERAL_LOOKASIDE *L; // rdi
  NTSTATUS Information; // edi
  int v15; // ecx
  void *v16; // rcx
  struct _KPRCB *v17; // rdx
  _GENERAL_LOOKASIDE *v18; // rcx
  struct _KSEMAPHORE *v19; // rbx
  __int64 v21; // rbx
  void (__stdcall *FreeEx)(PVOID); // rdx
  __int64 v23; // [rsp+48h] [rbp-60h] BYREF
  __int64 v24; // [rsp+50h] [rbp-58h] BYREF
  _OWORD v25[5]; // [rsp+58h] [rbp-50h] BYREF
  int v27; // [rsp+C0h] [rbp+18h]

  v27 = (int)ObjectAttributes;
  v24 = 0LL;
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
  v25[0] = 0LL;
  v23 = 0LL;
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
      v12 = guard_dispatch_icall_no_overrides((unsigned int)L->Type, L->Size);
    }
  }
  if ( v12 )
  {
    *(_DWORD *)v12 = CurrentPrcb->Number;
    Information = ObpCaptureObjectCreateInformation(PreviousMode, PreviousMode, v27, (unsigned int)v25, v12, 0);
    if ( Information >= 0 )
    {
      if ( (*(_DWORD *)v12 & (_DWORD)v9[9]) != 0 )
      {
        Information = -1073741811;
      }
      else if ( (*(_DWORD *)v12 & 0x10) == 0 || SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, PreviousMode) )
      {
        v15 = *((_DWORD *)v9 + 27);
        *(_DWORD *)(v12 + 20) = *((_DWORD *)v9 + 26);
        *(_DWORD *)(v12 + 24) = v15;
        Information = ObpAllocateObject(v12, PreviousMode, (_DWORD)v9, (unsigned int)v25, 32, (__int64)&v23, 0LL);
        if ( Information >= 0 )
        {
          v21 = v23;
          if ( ObpTraceFlags )
          {
            ObpRegisterObject(v23);
            ObpPushStackInfo(v21, 1, 1u, 0x746C6644u);
          }
          v19 = (struct _KSEMAPHORE *)(v21 + 48);
          goto LABEL_25;
        }
      }
      else
      {
        Information = -1073741727;
      }
      if ( *((_QWORD *)&v25[0] + 1) )
        ObpFreeObjectNameBuffer(v25);
      v16 = *(void **)(v12 + 32);
      if ( v16 )
      {
        if ( *(_BYTE *)(v12 + 16) <= 1u )
          ExFreePoolWithTag(v16, 0);
        *(_QWORD *)(v12 + 32) = 0LL;
      }
    }
    v17 = KeGetCurrentPrcb();
    v18 = v17->PPLookasideList[4].P;
    ++v18->TotalFrees;
    if ( LOWORD(v18->ListHead.Alignment) < v18->Depth
      || (++v18->FreeMisses,
          v18 = v17->PPLookasideList[4].L,
          ++v18->TotalFrees,
          LOWORD(v18->ListHead.Alignment) < v18->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v18->ListHead, (PSLIST_ENTRY)v12);
    }
    else
    {
      ++v18->FreeMisses;
      FreeEx = (void (__stdcall *)(PVOID))v18->FreeEx;
      if ( FreeEx == ExFreePool )
        ExFreePool((PVOID)v12);
      else
        guard_dispatch_icall_no_overrides(v12, FreeEx);
    }
    v19 = 0LL;
  }
  else
  {
    Information = -1073741670;
    v19 = 0LL;
  }
LABEL_25:
  if ( Information >= 0 )
  {
    KeInitializeSemaphore(v19, InitialCount, MaximumCount);
    Information = ObInsertObjectEx(v19, 0, 0LL, (__int64)&v24);
    if ( Information >= 0 )
      *SemaphoreHandle = (HANDLE)v24;
  }
  return Information;
}
