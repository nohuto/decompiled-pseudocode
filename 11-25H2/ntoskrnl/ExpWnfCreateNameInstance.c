/*
 * XREFs of ExpWnfCreateNameInstance @ 0x140898930
 * Callers:
 *     NtCreateWnfStateName @ 0x1408973D0 (NtCreateWnfStateName.c)
 *     NtQueryWnfStateData @ 0x1408E34F0 (NtQueryWnfStateData.c)
 *     ExpNtUpdateWnfStateData @ 0x1408E4380 (ExpNtUpdateWnfStateData.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140A13B0C (ExpWnfSubscribeWnfStateChange.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     RtlAvlInsertNodeEx @ 0x1402A8320 (RtlAvlInsertNodeEx.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ObDereferenceSecurityDescriptor @ 0x14086EF20 (ObDereferenceSecurityDescriptor.c)
 *     ExpWnfPopulateStateData @ 0x1408986EC (ExpWnfPopulateStateData.c)
 *     ExpWnfFindStateName @ 0x1408988F0 (ExpWnfFindStateName.c)
 *     ObLogSecurityDescriptor @ 0x140899A00 (ObLogSecurityDescriptor.c)
 *     ExpWnfGetPermanentDataStore @ 0x140A86DE4 (ExpWnfGetPermanentDataStore.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  __int64 *v12; // r12
  unsigned int v13; // esi
  __int64 *v14; // rax
  __int64 *v15; // rbp
  struct _EX_RUNDOWN_REF *StateName; // rax
  struct _EX_RUNDOWN_REF *v17; // rbp
  _QWORD *v18; // rdx
  bool v19; // r8
  _QWORD *v20; // rax
  __int64 v21; // r14
  __int64 *v22; // rax
  __int64 *v23; // rbp
  struct _EX_RUNDOWN_REF **v24; // r8
  struct _EX_RUNDOWN_REF *v25; // rdx
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
  v12 = (__int64 *)&v11[9];
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
    v13 = -1073741670;
    goto LABEL_37;
  }
  v13 = ExpWnfPopulateStateData((__int64)v11);
  if ( v13 )
  {
LABEL_37:
    ObDereferenceSecurityDescriptor(*v12, 1u);
    ExFreePoolWithTag(v11, 0x20666E57u);
    return v13;
  }
  v14 = KeAbPreAcquire(a1 + 48, 0LL);
  v15 = v14;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 48), v14, a1 + 48);
  if ( v15 )
    *((_BYTE *)v15 + 10) = 1;
  StateName = (struct _EX_RUNDOWN_REF *)ExpWnfFindStateName(a1, a2);
  v17 = StateName;
  if ( StateName )
  {
    ExAcquireRundownProtection_0(StateName + 1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 48), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 48));
    KeAbPostRelease(a1 + 48);
    ObDereferenceSecurityDescriptor(*v12, 1u);
    Ptr = v11[11].Ptr;
    if ( Ptr )
      ExFreePoolWithTag(Ptr, 0x20666E57u);
    ExFreePoolWithTag(v11, 0x20666E57u);
    *a5 = v17;
    return 0LL;
  }
  ExAcquireRundownProtection_0(v11 + 1);
  v18 = *(_QWORD **)(a1 + 56);
  v19 = 0;
  if ( !v18 )
    goto LABEL_19;
  while ( v11[5].Count < v18[3] )
  {
    v20 = (_QWORD *)*v18;
    if ( !*v18 )
      goto LABEL_19;
LABEL_27:
    v18 = v20;
  }
  v20 = (_QWORD *)v18[1];
  if ( v20 )
    goto LABEL_27;
  v19 = 1;
LABEL_19:
  RtlAvlInsertNodeEx((unsigned __int64 *)(a1 + 56), (unsigned __int64)v18, v19, &v11[2].Count);
  if ( (_DWORD)v6 == 3 )
  {
    v11[19].Count = a4;
    v21 = *(_QWORD *)(a4 + 1512);
    v22 = KeAbPreAcquire(v21 + 56, 0LL);
    v23 = v22;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 56), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v21 + 56), v22, v21 + 56);
    if ( v23 )
      *((_BYTE *)v23 + 10) = 1;
    v24 = *(struct _EX_RUNDOWN_REF ***)(v21 + 72);
    v25 = v11 + 17;
    if ( *v24 != (struct _EX_RUNDOWN_REF *)(v21 + 64) )
      __fastfail(3u);
    v25->Count = v21 + 64;
    v11[18].Count = (unsigned __int64)v24;
    *v24 = v25;
    *(_QWORD *)(v21 + 72) = v25;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + 56), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v21 + 56));
    KeAbPostRelease(v21 + 56);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 48), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 48));
  KeAbPostRelease(a1 + 48);
  *a5 = v11;
  return 0LL;
}
