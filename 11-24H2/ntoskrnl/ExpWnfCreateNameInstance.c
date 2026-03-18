/*
 * XREFs of ExpWnfCreateNameInstance @ 0x140837E90
 * Callers:
 *     NtCreateWnfStateName @ 0x140836950 (NtCreateWnfStateName.c)
 *     NtQueryWnfStateData @ 0x1408ABBD0 (NtQueryWnfStateData.c)
 *     ExpNtUpdateWnfStateData @ 0x1408AC580 (ExpNtUpdateWnfStateData.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140A1946C (ExpWnfSubscribeWnfStateChange.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     RtlAvlInsertNodeEx @ 0x14025FDD0 (RtlAvlInsertNodeEx.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExpWnfPopulateStateData @ 0x140837C4C (ExpWnfPopulateStateData.c)
 *     ExpWnfFindStateName @ 0x140837E50 (ExpWnfFindStateName.c)
 *     ObLogSecurityDescriptor @ 0x140838F50 (ObLogSecurityDescriptor.c)
 *     ObDereferenceSecurityDescriptor @ 0x140879D10 (ObDereferenceSecurityDescriptor.c)
 *     ExpWnfGetPermanentDataStore @ 0x140A8BAFC (ExpWnfGetPermanentDataStore.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  struct _EX_RUNDOWN_REF *Pool2; // rax
  struct _EX_RUNDOWN_REF *v11; // rdi
  struct _EX_RUNDOWN_REF *v12; // r12
  __int64 v13; // rdx
  unsigned int v14; // esi
  _QWORD *v15; // rax
  _QWORD *v16; // rbp
  struct _EX_RUNDOWN_REF *StateName; // rax
  struct _EX_RUNDOWN_REF *v18; // rbp
  _QWORD *v19; // rdx
  bool v20; // r8
  _QWORD *v21; // rax
  __int64 v22; // r14
  _QWORD *v23; // rax
  _QWORD *v24; // rbp
  struct _EX_RUNDOWN_REF **v25; // r8
  struct _EX_RUNDOWN_REF *v26; // rdx
  void *Ptr; // rcx

  v6 = (a2 >> 4) & 3;
  if ( (_DWORD)v6 != 3 || (v9 = 257LL, PsInitialSystemProcess == (PEPROCESS)a4) )
    v9 = 256LL;
  Pool2 = (struct _EX_RUNDOWN_REF *)ExAllocatePool2(v9);
  v11 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  memset_0(Pool2, 0, 0xA8uLL);
  LODWORD(v11->Count) = 11012355;
  v11[6].Count = a1;
  v11[5].Count = a2;
  LODWORD(v11[7].Count) = *(_DWORD *)a3;
  if ( *(_QWORD *)(a3 + 8) )
  {
    v11[8].Count = (unsigned __int64)&v11[21];
    *(_OWORD *)&v11[21].Count = *(_OWORD *)*(_QWORD *)(a3 + 8);
  }
  v12 = v11 + 9;
  if ( (int)ObLogSecurityDescriptor(*(void **)(a3 + 16)) < 0 )
  {
    ExFreePoolWithTag(v11, 0x20666E57u);
    return 3221225626LL;
  }
  v11[16].Count = (unsigned __int64)&v11[15];
  v11[15].Count = (unsigned __int64)&v11[15];
  v11[14].Count = 0LL;
  v11[10].Count = 0LL;
  if ( (a2 & 0x400) != 0 && (int)ExpWnfGetPermanentDataStore(a1, (unsigned int)v6, 1LL, &v11[13]) < 0 )
  {
    v14 = -1073741670;
    goto LABEL_39;
  }
  v14 = ExpWnfPopulateStateData((__int64)v11, v13);
  if ( v14 )
  {
LABEL_39:
    ObDereferenceSecurityDescriptor(v12->Count, 1LL);
    ExFreePoolWithTag(v11, 0x20666E57u);
    return v14;
  }
  v15 = KeAbPreAcquire(a1 + 48, 0LL);
  v16 = v15;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 48), (__int64)v15, a1 + 48);
  if ( v16 )
    *((_BYTE *)v16 + 10) = 1;
  StateName = (struct _EX_RUNDOWN_REF *)ExpWnfFindStateName(a1, a2);
  v18 = StateName;
  if ( StateName )
  {
    ExAcquireRundownProtection(StateName + 1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 48), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 48));
    KeAbPostRelease(a1 + 48);
    ObDereferenceSecurityDescriptor(v12->Count, 1LL);
    Ptr = v11[11].Ptr;
    if ( Ptr )
      ExFreePoolWithTag(Ptr, 0x20666E57u);
    ExFreePoolWithTag(v11, 0x20666E57u);
    *a5 = v18;
    return 0LL;
  }
  ExAcquireRundownProtection(v11 + 1);
  v19 = *(_QWORD **)(a1 + 56);
  v20 = 0;
  if ( !v19 )
    goto LABEL_19;
  while ( v11[5].Count < v19[3] )
  {
    v21 = (_QWORD *)*v19;
    if ( !*v19 )
      goto LABEL_19;
LABEL_27:
    v19 = v21;
  }
  v21 = (_QWORD *)v19[1];
  if ( v21 )
    goto LABEL_27;
  v20 = 1;
LABEL_19:
  RtlAvlInsertNodeEx((unsigned __int64 *)(a1 + 56), (unsigned __int64)v19, v20, &v11[2].Count);
  if ( (_DWORD)v6 == 3 )
  {
    v11[19].Count = a4;
    v22 = *(_QWORD *)(a4 + 1512);
    v23 = KeAbPreAcquire(v22 + 56, 0LL);
    v24 = v23;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 56), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v22 + 56), (__int64)v23, v22 + 56);
    if ( v24 )
      *((_BYTE *)v24 + 10) = 1;
    v25 = *(struct _EX_RUNDOWN_REF ***)(v22 + 72);
    v26 = v11 + 17;
    if ( *v25 != (struct _EX_RUNDOWN_REF *)(v22 + 64) )
      __fastfail(3u);
    v26->Count = v22 + 64;
    v11[18].Count = (unsigned __int64)v25;
    *v25 = v26;
    *(_QWORD *)(v22 + 72) = v26;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v22 + 56), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v22 + 56));
    KeAbPostRelease(v22 + 56);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 48), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 48));
  KeAbPostRelease(a1 + 48);
  *a5 = v11;
  return 0LL;
}
