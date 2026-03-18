/*
 * XREFs of NtCreateSemaphore @ 0x14083DDC0
 * Callers:
 *     <none>
 * Callees:
 *     ObpPushStackInfo @ 0x1403407AC (ObpPushStackInfo.c)
 *     KeInitializeSemaphore @ 0x14045C140 (KeInitializeSemaphore.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B3890 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ObpFreeObjectNameBuffer @ 0x14083E740 (ObpFreeObjectNameBuffer.c)
 *     SeSinglePrivilegeCheck @ 0x140853E90 (SeSinglePrivilegeCheck.c)
 *     ObInsertObjectEx @ 0x140857620 (ObInsertObjectEx.c)
 *     ObpAllocateObject @ 0x14089B290 (ObpAllocateObject.c)
 *     ObpCaptureObjectCreateInformation @ 0x14089CCA0 (ObpCaptureObjectCreateInformation.c)
 *     ObpRegisterObject @ 0x140AB735C (ObpRegisterObject.c)
 *     ExFreePool @ 0x140B72CB0 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtCreateSemaphore(__int64 *a1, __int64 a2, int a3, LONG a4, int Limit)
{
  unsigned __int8 PreviousMode; // r12
  __int64 v8; // rcx
  POBJECT_TYPE *v9; // r13
  struct _KPRCB *CurrentPrcb; // r14
  _GENERAL_LOOKASIDE *P; // rdi
  __int64 v12; // rbx
  _GENERAL_LOOKASIDE *L; // rdi
  __int64 v14; // r9
  int Information; // edi
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // ecx
  void *v19; // rcx
  struct _KPRCB *v20; // rdx
  _GENERAL_LOOKASIDE *v21; // rcx
  struct _KSEMAPHORE *v22; // rbx
  __int64 v24; // rbx
  void (__stdcall *FreeEx)(PVOID); // rdx
  __int64 v26; // [rsp+48h] [rbp-60h] BYREF
  __int64 v27; // [rsp+50h] [rbp-58h] BYREF
  _OWORD v28[5]; // [rsp+58h] [rbp-50h] BYREF

  v27 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v8 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v8 = (__int64)a1;
    *(_QWORD *)v8 = *(_QWORD *)v8;
  }
  if ( Limit <= 0 || a4 < 0 || a4 > Limit )
    return 3221225485LL;
  v9 = ExSemaphoreObjectType;
  v28[0] = 0LL;
  v26 = 0LL;
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
      v12 = guard_dispatch_icall_no_overrides((unsigned int)L->Type, L->Size, L->Tag, v14);
    }
  }
  if ( v12 )
  {
    *(_DWORD *)v12 = CurrentPrcb->Number;
    Information = ObpCaptureObjectCreateInformation(PreviousMode, PreviousMode, a3, (unsigned int)v28, v12, 0);
    if ( Information >= 0 )
    {
      if ( (*(_DWORD *)v12 & (_DWORD)v9[9]) != 0 )
      {
        Information = -1073741811;
      }
      else if ( (*(_DWORD *)v12 & 0x10) == 0 || SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, PreviousMode) )
      {
        v18 = *((_DWORD *)v9 + 27);
        *(_DWORD *)(v12 + 20) = *((_DWORD *)v9 + 26);
        *(_DWORD *)(v12 + 24) = v18;
        Information = ObpAllocateObject(v12, PreviousMode, (_DWORD)v9, (unsigned int)v28, 32, (__int64)&v26, 0LL);
        if ( Information >= 0 )
        {
          v24 = v26;
          if ( ObpTraceFlags )
          {
            ObpRegisterObject(v26);
            ObpPushStackInfo(v24, 1, 1u, 0x746C6644u);
          }
          v22 = (struct _KSEMAPHORE *)(v24 + 48);
          goto LABEL_25;
        }
      }
      else
      {
        Information = -1073741727;
      }
      if ( *((_QWORD *)&v28[0] + 1) )
        ObpFreeObjectNameBuffer(v28);
      v19 = *(void **)(v12 + 32);
      if ( v19 )
      {
        if ( *(_BYTE *)(v12 + 16) <= 1u )
          ExFreePoolWithTag(v19, 0);
        *(_QWORD *)(v12 + 32) = 0LL;
      }
    }
    v20 = KeGetCurrentPrcb();
    v21 = v20->PPLookasideList[4].P;
    ++v21->TotalFrees;
    if ( LOWORD(v21->ListHead.Alignment) < v21->Depth
      || (++v21->FreeMisses,
          v21 = v20->PPLookasideList[4].L,
          ++v21->TotalFrees,
          LOWORD(v21->ListHead.Alignment) < v21->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v21->ListHead, (PSLIST_ENTRY)v12);
    }
    else
    {
      ++v21->FreeMisses;
      FreeEx = (void (__stdcall *)(PVOID))v21->FreeEx;
      if ( FreeEx == ExFreePool )
        ExFreePool((PVOID)v12);
      else
        guard_dispatch_icall_no_overrides(v12, FreeEx, v16, v17);
    }
    v22 = 0LL;
  }
  else
  {
    Information = -1073741670;
    v22 = 0LL;
  }
LABEL_25:
  if ( Information >= 0 )
  {
    KeInitializeSemaphore(v22, a4, Limit);
    Information = ObInsertObjectEx(v22, 0, 0LL, (__int64)&v27);
    if ( Information >= 0 )
      *a1 = v27;
  }
  return (unsigned int)Information;
}
