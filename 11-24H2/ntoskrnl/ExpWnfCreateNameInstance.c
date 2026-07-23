/*
 * XREFs of ExpWnfCreateNameInstance @ 0x140835DA0
 * Callers:
 *     NtCreateWnfStateName @ 0x1408340B0 (NtCreateWnfStateName.c)
 *     NtQueryWnfStateData @ 0x140901E30 (NtQueryWnfStateData.c)
 *     ExpNtUpdateWnfStateData @ 0x1409027E0 (ExpNtUpdateWnfStateData.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140A125DC (ExpWnfSubscribeWnfStateChange.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     RtlAvlInsertNodeEx @ 0x1402903E0 (RtlAvlInsertNodeEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExpWnfPopulateStateData @ 0x140835B5C (ExpWnfPopulateStateData.c)
 *     ExpWnfFindStateName @ 0x140835D60 (ExpWnfFindStateName.c)
 *     ObLogSecurityDescriptor @ 0x140836B60 (ObLogSecurityDescriptor.c)
 *     ObDereferenceSecurityDescriptor @ 0x14087E040 (ObDereferenceSecurityDescriptor.c)
 *     ExpWnfGetPermanentDataStore @ 0x140A87FEC (ExpWnfGetPermanentDataStore.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpWnfCreateNameInstance(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        struct _EX_RUNDOWN_REF **a5)
{
  __int64 v6; // r15
  ULONG_PTR v9; // rcx
  ULONG_PTR v10; // rdx
  struct _EX_RUNDOWN_REF *Pool2; // rax
  struct _EX_RUNDOWN_REF *v12; // rdi
  struct _EX_RUNDOWN_REF *v13; // r12
  unsigned int v14; // esi
  char *v15; // rax
  char *v16; // rbp
  struct _EX_RUNDOWN_REF *StateName; // rax
  struct _EX_RUNDOWN_REF *v18; // rbp
  _QWORD *v19; // rdx
  bool v20; // r8
  _QWORD *v21; // rax
  __int64 v22; // r14
  char *v23; // rax
  char *v24; // rbp
  struct _EX_RUNDOWN_REF **v25; // r8
  struct _EX_RUNDOWN_REF *v26; // rdx
  void *Ptr; // rcx

  v6 = (a2 >> 4) & 3;
  if ( (_DWORD)v6 != 3 || (v9 = 257LL, PsInitialSystemProcess == (PEPROCESS)a4) )
    v9 = 256LL;
  v10 = 184LL;
  if ( !*(_QWORD *)(a3 + 8) )
    v10 = 168LL;
  Pool2 = (struct _EX_RUNDOWN_REF *)ExAllocatePool2(v9, v10, 0x20666E57u);
  v12 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  memset_0(Pool2, 0, 0xA8uLL);
  LODWORD(v12->Count) = 11012355;
  v12[6].Count = a1;
  v12[5].Count = a2;
  LODWORD(v12[7].Count) = *(_DWORD *)a3;
  if ( *(_QWORD *)(a3 + 8) )
  {
    v12[8].Count = (unsigned __int64)&v12[21];
    *(_OWORD *)&v12[21].Count = *(_OWORD *)*(_QWORD *)(a3 + 8);
  }
  v13 = v12 + 9;
  if ( (int)ObLogSecurityDescriptor(*(void **)(a3 + 16)) < 0 )
  {
    ExFreePoolWithTag(v12, 0x20666E57u);
    return 3221225626LL;
  }
  v12[16].Count = (unsigned __int64)&v12[15];
  v12[15].Count = (unsigned __int64)&v12[15];
  v12[14].Count = 0LL;
  v12[10].Count = 0LL;
  if ( (a2 & 0x400) != 0 && (int)ExpWnfGetPermanentDataStore(a1, (unsigned int)v6, 1LL, &v12[13]) < 0 )
  {
    v14 = -1073741670;
    goto LABEL_41;
  }
  v14 = ExpWnfPopulateStateData((__int64)v12);
  if ( v14 )
  {
LABEL_41:
    ObDereferenceSecurityDescriptor(v13->Count, 1LL);
    ExFreePoolWithTag(v12, 0x20666E57u);
    return v14;
  }
  v15 = (char *)KeAbPreAcquire(a1 + 48, 0LL);
  v16 = v15;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 48), v15, a1 + 48);
  if ( v16 )
    v16[10] = 1;
  StateName = (struct _EX_RUNDOWN_REF *)ExpWnfFindStateName(a1, a2);
  v18 = StateName;
  if ( StateName )
  {
    ExAcquireRundownProtection_0(StateName + 1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 48), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 48));
    KeAbPostRelease(a1 + 48);
    ObDereferenceSecurityDescriptor(v13->Count, 1LL);
    Ptr = v12[11].Ptr;
    if ( Ptr )
      ExFreePoolWithTag(Ptr, 0x20666E57u);
    ExFreePoolWithTag(v12, 0x20666E57u);
    *a5 = v18;
    return 0LL;
  }
  ExAcquireRundownProtection_0(v12 + 1);
  v19 = *(_QWORD **)(a1 + 56);
  v20 = 0;
  if ( !v19 )
    goto LABEL_21;
  while ( v12[5].Count < v19[3] )
  {
    v21 = (_QWORD *)*v19;
    if ( !*v19 )
      goto LABEL_21;
LABEL_29:
    v19 = v21;
  }
  v21 = (_QWORD *)v19[1];
  if ( v21 )
    goto LABEL_29;
  v20 = 1;
LABEL_21:
  RtlAvlInsertNodeEx((unsigned __int64 *)(a1 + 56), (unsigned __int64)v19, v20, &v12[2].Count);
  if ( (_DWORD)v6 == 3 )
  {
    v12[19].Count = a4;
    v22 = *(_QWORD *)(a4 + 1512);
    v23 = (char *)KeAbPreAcquire(v22 + 56, 0LL);
    v24 = v23;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 56), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v22 + 56), v23, v22 + 56);
    if ( v24 )
      v24[10] = 1;
    v25 = *(struct _EX_RUNDOWN_REF ***)(v22 + 72);
    v26 = v12 + 17;
    if ( *v25 != (struct _EX_RUNDOWN_REF *)(v22 + 64) )
      __fastfail(3u);
    v26->Count = v22 + 64;
    v12[18].Count = (unsigned __int64)v25;
    *v25 = v26;
    *(_QWORD *)(v22 + 72) = v26;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v22 + 56), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v22 + 56));
    KeAbPostRelease(v22 + 56);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 48), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 48));
  KeAbPostRelease(a1 + 48);
  *a5 = v12;
  return 0LL;
}
