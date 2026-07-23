/*
 * XREFs of NtCreateMutant @ 0x14083AEC0
 * Callers:
 *     <none>
 * Callees:
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     KeInitializeMutantEx @ 0x14043DE68 (KeInitializeMutantEx.c)
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

NTSTATUS __cdecl NtCreateMutant(
        PHANDLE MutantHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        BOOLEAN InitialOwner)
{
  int v4; // r13d
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v7; // rcx
  POBJECT_TYPE v8; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  _GENERAL_LOOKASIDE *P; // rdi
  __int64 v11; // rdx
  int v12; // ecx
  __int64 v13; // rbx
  _GENERAL_LOOKASIDE *L; // rdi
  int v15; // edx
  NTSTATUS Information; // edi
  unsigned int DefaultNonPagedPoolCharge; // ecx
  void *v18; // rcx
  struct _KPRCB *v19; // rdx
  _GENERAL_LOOKASIDE *v20; // rcx
  void *v21; // rbx
  void (__stdcall *FreeEx)(PVOID); // rdx
  __int64 v24; // [rsp+40h] [rbp-58h] BYREF
  __int64 v25; // [rsp+50h] [rbp-48h] BYREF
  __int128 v26; // [rsp+58h] [rbp-40h] BYREF

  v4 = (int)ObjectAttributes;
  v25 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)MutantHandle < 0x7FFFFFFF0000LL )
      v7 = (__int64)MutantHandle;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  v8 = ExMutantObjectType;
  v26 = 0LL;
  v24 = 0LL;
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
      v13 = guard_dispatch_icall_no_overrides((unsigned int)L->Type, L->Size);
    }
  }
  if ( !v13 )
  {
    Information = -1073741670;
    v21 = 0LL;
    goto LABEL_22;
  }
  *(_DWORD *)v13 = CurrentPrcb->Number;
  LOBYTE(v11) = PreviousMode;
  LOBYTE(v12) = PreviousMode;
  Information = ObpCaptureObjectCreateInformation(v12, v11, v4, (unsigned int)&v26, v13, 0);
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
  LOBYTE(v15) = PreviousMode;
  Information = ObpAllocateObject(v13, v15, (_DWORD)v8, (unsigned int)&v26, 56, (__int64)&v24, 0LL);
  if ( Information < 0 )
  {
LABEL_13:
    if ( *((_QWORD *)&v26 + 1) )
      ObpFreeObjectNameBuffer((__int64)&v26);
    v18 = *(void **)(v13 + 32);
    if ( v18 )
    {
      if ( *(_BYTE *)(v13 + 16) <= 1u )
        ExFreePoolWithTag(v18, 0);
      *(_QWORD *)(v13 + 32) = 0LL;
    }
LABEL_19:
    v19 = KeGetCurrentPrcb();
    v20 = v19->PPLookasideList[4].P;
    ++v20->TotalFrees;
    if ( LOWORD(v20->ListHead.Alignment) < v20->Depth
      || (++v20->FreeMisses,
          v20 = v19->PPLookasideList[4].L,
          ++v20->TotalFrees,
          LOWORD(v20->ListHead.Alignment) < v20->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v20->ListHead, (PSLIST_ENTRY)v13);
    }
    else
    {
      ++v20->FreeMisses;
      FreeEx = (void (__stdcall *)(PVOID))v20->FreeEx;
      if ( FreeEx == ExFreePool )
        ExFreePool((PVOID)v13);
      else
        guard_dispatch_icall_no_overrides(v13, FreeEx);
    }
    v21 = 0LL;
    goto LABEL_22;
  }
  if ( ObpTraceFlags )
  {
    ObpRegisterObject(v24);
    ObpPushStackInfo(v24, 1, 1u, 0x746C6644u);
  }
  v21 = (void *)(v24 + 48);
LABEL_22:
  if ( Information >= 0 )
  {
    LOBYTE(v11) = InitialOwner;
    KeInitializeMutantEx((__int64)v21, v11, ExpForceEnableMutantAutoboost != 0);
    Information = ObInsertObjectEx(v21, 0, 0LL, (__int64)&v25);
    LODWORD(v24) = Information;
    if ( Information >= 0 )
      *MutantHandle = (HANDLE)v25;
  }
  return Information;
}
