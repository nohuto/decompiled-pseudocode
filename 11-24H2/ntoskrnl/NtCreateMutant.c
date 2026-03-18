/*
 * XREFs of NtCreateMutant @ 0x14083E8C0
 * Callers:
 *     <none>
 * Callees:
 *     ObpPushStackInfo @ 0x1403407AC (ObpPushStackInfo.c)
 *     KeInitializeMutantEx @ 0x140445AB8 (KeInitializeMutantEx.c)
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

__int64 __fastcall NtCreateMutant(__int64 *a1, __int64 a2, int a3, char a4)
{
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v7; // rcx
  POBJECT_TYPE v8; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  _GENERAL_LOOKASIDE *P; // rdi
  __int64 v11; // rdx
  int v12; // ecx
  __int64 v13; // rbx
  _GENERAL_LOOKASIDE *L; // rdi
  __int64 v15; // r9
  int Information; // edi
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int DefaultNonPagedPoolCharge; // ecx
  void *v20; // rcx
  struct _KPRCB *v21; // rdx
  _GENERAL_LOOKASIDE *v22; // rcx
  void *v23; // rbx
  void (__stdcall *FreeEx)(PVOID); // rdx
  __int64 v26; // [rsp+40h] [rbp-58h] BYREF
  __int64 v27; // [rsp+50h] [rbp-48h] BYREF
  __int128 v28; // [rsp+58h] [rbp-40h] BYREF

  v27 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v7 = (__int64)a1;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  v8 = ExMutantObjectType;
  v28 = 0LL;
  v26 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  P = CurrentPrcb->PPLookasideList[4].P;
  ++P->TotalAllocates;
  v13 = (__int64)RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( !v13 )
  {
    ++P->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[4].L;
    ++L->TotalAllocates;
    v13 = (__int64)RtlpInterlockedPopEntrySList(&L->ListHead);
    if ( !v13 )
    {
      ++L->AllocateMisses;
      v13 = guard_dispatch_icall_no_overrides((unsigned int)L->Type, L->Size, L->Tag, v15);
    }
  }
  if ( !v13 )
  {
    Information = -1073741670;
    v23 = 0LL;
    goto LABEL_22;
  }
  *(_DWORD *)v13 = CurrentPrcb->Number;
  LOBYTE(v11) = PreviousMode;
  LOBYTE(v12) = PreviousMode;
  Information = ObpCaptureObjectCreateInformation(v12, v11, a3, (unsigned int)&v28, v13, 0);
  if ( Information < 0 )
    goto LABEL_19;
  if ( (*(_DWORD *)v13 & v8->TypeInfo.InvalidAttributes) != 0 )
  {
    Information = -1073741811;
    goto LABEL_13;
  }
  if ( (*(_DWORD *)v13 & 0x10) != 0 && !SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, PreviousMode) )
  {
    Information = -1073741727;
    goto LABEL_13;
  }
  DefaultNonPagedPoolCharge = v8->TypeInfo.DefaultNonPagedPoolCharge;
  *(_DWORD *)(v13 + 20) = v8->TypeInfo.DefaultPagedPoolCharge;
  *(_DWORD *)(v13 + 24) = DefaultNonPagedPoolCharge;
  LOBYTE(v11) = PreviousMode;
  Information = ObpAllocateObject(v13, v11, (_DWORD)v8, (unsigned int)&v28, 56, (__int64)&v26, 0LL);
  if ( Information < 0 )
  {
LABEL_13:
    if ( *((_QWORD *)&v28 + 1) )
      ObpFreeObjectNameBuffer((__int64)&v28, v11, v17, v18);
    v20 = *(void **)(v13 + 32);
    if ( v20 )
    {
      if ( *(_BYTE *)(v13 + 16) <= 1u )
        ExFreePoolWithTag(v20, 0);
      *(_QWORD *)(v13 + 32) = 0LL;
    }
LABEL_19:
    v21 = KeGetCurrentPrcb();
    v22 = v21->PPLookasideList[4].P;
    ++v22->TotalFrees;
    if ( LOWORD(v22->ListHead.Alignment) < v22->Depth
      || (++v22->FreeMisses,
          v22 = v21->PPLookasideList[4].L,
          ++v22->TotalFrees,
          LOWORD(v22->ListHead.Alignment) < v22->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v22->ListHead, (PSLIST_ENTRY)v13);
    }
    else
    {
      ++v22->FreeMisses;
      FreeEx = (void (__stdcall *)(PVOID))v22->FreeEx;
      if ( FreeEx == ExFreePool )
        ExFreePool((PVOID)v13);
      else
        guard_dispatch_icall_no_overrides(v13, FreeEx, v17, v18);
    }
    v23 = 0LL;
    goto LABEL_22;
  }
  if ( ObpTraceFlags )
  {
    ObpRegisterObject(v26);
    ObpPushStackInfo(v26, 1, 1u, 0x746C6644u);
  }
  v23 = (void *)(v26 + 48);
LABEL_22:
  if ( Information >= 0 )
  {
    LOBYTE(v11) = a4;
    KeInitializeMutantEx((__int64)v23, v11, ExpForceEnableMutantAutoboost != 0);
    Information = ObInsertObjectEx(v23, 0, 0LL, (__int64)&v27);
    LODWORD(v26) = Information;
    if ( Information >= 0 )
      *a1 = v27;
  }
  return (unsigned int)Information;
}
