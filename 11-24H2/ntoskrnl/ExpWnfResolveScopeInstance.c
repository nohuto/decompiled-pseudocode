/*
 * XREFs of ExpWnfResolveScopeInstance @ 0x1409032C0
 * Callers:
 *     ExpNtDeleteWnfStateData @ 0x1407BFBF8 (ExpNtDeleteWnfStateData.c)
 *     NtCreateWnfStateName @ 0x1408340B0 (NtCreateWnfStateName.c)
 *     NtDeleteWnfStateName @ 0x140900ED0 (NtDeleteWnfStateName.c)
 *     NtQueryWnfStateData @ 0x140901E30 (NtQueryWnfStateData.c)
 *     ExpNtUpdateWnfStateData @ 0x1409027E0 (ExpNtUpdateWnfStateData.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140A125DC (ExpWnfSubscribeWnfStateChange.c)
 *     NtQueryWnfStateNameInformation @ 0x140AE4930 (NtQueryWnfStateNameInformation.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquireRundownProtection @ 0x1402F60C0 (ExfAcquireRundownProtection.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     PsGetServerSiloGlobals @ 0x1403C2DC0 (PsGetServerSiloGlobals.c)
 *     RtlLengthSid @ 0x14044B2D0 (RtlLengthSid.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x14047F700 (PdcCreateWatchdogAroundClientCall.c)
 *     ExpWnfGetCurrentScopeInstance @ 0x1408E13DC (ExpWnfGetCurrentScopeInstance.c)
 *     ExpWnfAllocateScopeMap @ 0x140901DA8 (ExpWnfAllocateScopeMap.c)
 *     ExpWnfFindScopeInstance @ 0x1409F4530 (ExpWnfFindScopeInstance.c)
 *     ExpWnfCreateProcessContext @ 0x140A302C4 (ExpWnfCreateProcessContext.c)
 *     ExpWnfFreeScopeInstance @ 0x140A58A14 (ExpWnfFreeScopeInstance.c)
 *     ExpWnfAllocateScopeInstance @ 0x140A5D73C (ExpWnfAllocateScopeInstance.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpWnfResolveScopeInstance(_QWORD *a1, __int64 a2, __int64 a3, int a4, __int64 *Sid)
{
  __int64 v5; // r15
  __int64 v6; // rsi
  void *v8; // r12
  __int64 v9; // rax
  _QWORD *CurrentServerSiloGlobals; // rax
  _QWORD *v11; // r14
  __int64 v12; // rdx
  __int64 *v13; // r13
  BOOL v14; // eax
  PVOID *v15; // rbx
  struct _EX_RUNDOWN_REF *v16; // rdi
  unsigned __int64 v17; // rtt
  int CurrentScopeInstance; // esi
  PVOID v19; // rdi
  ULONG v21; // eax
  __int64 v22; // rax
  signed __int64 *v23; // r14
  __int64 *v24; // rsi
  char *v25; // rdi
  struct _EX_RUNDOWN_REF *ScopeInstance; // rax
  char *v27; // rax
  char *v28; // rdi
  __int64 *v29; // rsi
  struct _EX_RUNDOWN_REF *v30; // rax
  char *v31; // rdi
  __int64 v32; // rax
  _QWORD *v33; // rdi
  _DWORD *Pool2; // rax
  BOOLEAN v35; // bl
  BOOLEAN v36; // bl
  int v37; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v38; // [rsp+34h] [rbp-3Ch] BYREF
  PVOID v39; // [rsp+38h] [rbp-38h] BYREF
  PVOID P; // [rsp+40h] [rbp-30h] BYREF
  __int64 v41; // [rsp+48h] [rbp-28h] BYREF
  __int64 v42; // [rsp+50h] [rbp-20h] BYREF
  __int64 *v43; // [rsp+58h] [rbp-18h]

  v5 = a4;
  v6 = a3;
  v42 = 0LL;
  P = 0LL;
  v8 = 0LL;
  if ( KeGetCurrentThread()->PreviousMode && (unsigned int)(a4 - 4) > 1 )
  {
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  }
  else
  {
    v9 = PdcCreateWatchdogAroundClientCall();
    CurrentServerSiloGlobals = PsGetServerSiloGlobals(v9);
  }
  v11 = CurrentServerSiloGlobals;
  if ( !CurrentServerSiloGlobals[110] )
  {
    CurrentScopeInstance = ExpWnfAllocateScopeMap(&P);
    if ( CurrentScopeInstance < 0 )
      return (unsigned int)CurrentScopeInstance;
    if ( _InterlockedCompareExchange64(v11 + 110, (signed __int64)P, 0LL) )
      ExFreePoolWithTag(P, 0x20666E57u);
    v6 = a3;
  }
  v12 = *(_QWORD *)(a2 + 1512);
  v41 = v12;
  if ( !v12 )
  {
    CurrentScopeInstance = ExpWnfCreateProcessContext(a2, &v41);
    if ( CurrentScopeInstance < 0 )
      return (unsigned int)CurrentScopeInstance;
    v12 = v41;
    v6 = a3;
  }
  v13 = Sid;
  v14 = !Sid && !v6;
  v37 = v14;
  if ( (_DWORD)v5 )
  {
    if ( (_DWORD)v5 == 4 )
    {
      v15 = (PVOID *)(v11[110] + 16LL);
      v37 = 1;
    }
    else if ( (_DWORD)v5 == 5 )
    {
      v15 = (PVOID *)(v11[110] + 24LL);
      v37 = 1;
    }
    else
    {
      v15 = (PVOID *)(v12 + 8 * ((unsigned int)(v5 - 1) + 4LL));
    }
  }
  else
  {
    v15 = (PVOID *)(v11[110] + 8LL);
    v37 = 1;
  }
  v16 = (struct _EX_RUNDOWN_REF *)*v15;
  v39 = *v15;
  if ( v37 && v16 )
    goto LABEL_12;
  if ( Sid )
  {
    if ( (_DWORD)v5 != 4 && (_DWORD)v5 )
    {
      switch ( (_DWORD)v5 )
      {
        case 1:
          v21 = 4;
          goto LABEL_36;
        case 2:
          v21 = RtlLengthSid(Sid);
          goto LABEL_36;
        case 3:
          v21 = 8;
          goto LABEL_36;
      }
    }
    v21 = 0;
LABEL_36:
    v38 = v21;
    v37 = 0;
    goto LABEL_37;
  }
  v43 = &v42;
  v38 = 8;
  CurrentScopeInstance = ExpWnfGetCurrentScopeInstance(a2, v6, v5, &v42, &v38, &v37);
  if ( CurrentScopeInstance == -1073741789 )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL, v38, 0x20666E57u);
    v8 = Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    v43 = (__int64 *)Pool2;
    CurrentScopeInstance = ExpWnfGetCurrentScopeInstance(a2, a3, v5, Pool2, &v38, &v37);
  }
  if ( CurrentScopeInstance < 0 )
    goto LABEL_21;
  if ( v38 )
    v13 = v43;
  if ( v37 && v16 )
  {
LABEL_12:
    _m_prefetchw(&v16[1]);
    v17 = v16[1].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v17 != _InterlockedCompareExchange64((volatile signed __int64 *)&v16[1], v17 + 2, v17)
      && !ExfAcquireRundownProtection(v16 + 1) )
    {
      CurrentScopeInstance = -1073741772;
      goto LABEL_21;
    }
    goto LABEL_19;
  }
LABEL_37:
  v22 = v11[110];
  v23 = (signed __int64 *)(v22 + 8 * (3 * v5 + 4));
  v24 = (__int64 *)(v22 + 8 * (3 * v5 + 5));
  v43 = v24;
  v25 = (char *)KeAbPreAcquire((__int64)v23, 0LL);
  if ( _InterlockedCompareExchange64(v23, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v23, 0, v25, (__int64)v23);
  if ( v25 )
    v25[10] = 1;
  ScopeInstance = (struct _EX_RUNDOWN_REF *)ExpWnfFindScopeInstance(v24, v13, v38);
  v19 = ScopeInstance;
  if ( ScopeInstance )
  {
    v35 = ExAcquireRundownProtection_0(ScopeInstance + 1);
    if ( _InterlockedCompareExchange64(v23, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v23);
    KeAbPostRelease((ULONG_PTR)v23);
    if ( v35 )
      goto LABEL_20;
    CurrentScopeInstance = -1073741772;
  }
  else
  {
    if ( _InterlockedCompareExchange64(v23, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v23);
    KeAbPostRelease((ULONG_PTR)v23);
    CurrentScopeInstance = ExpWnfAllocateScopeInstance(&v39, (unsigned int)v5, v13, v38);
    if ( CurrentScopeInstance < 0 )
      goto LABEL_21;
    v27 = (char *)KeAbPreAcquire((__int64)v23, 0LL);
    v28 = v27;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v23, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v23, v27, (__int64)v23);
    if ( v28 )
      v28[10] = 1;
    v29 = v43;
    v30 = (struct _EX_RUNDOWN_REF *)ExpWnfFindScopeInstance(v43, v13, v38);
    v19 = v30;
    if ( !v30 )
    {
      v31 = (char *)v39;
      ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)v39 + 1);
      v32 = *v29;
      v33 = v31 + 32;
      if ( *(__int64 **)(*v29 + 8) != v29 )
        __fastfail(3u);
      *v33 = v32;
      v33[1] = v29;
      *(_QWORD *)(v32 + 8) = v33;
      *v29 = (__int64)v33;
      if ( (_InterlockedExchangeAdd64(v23, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v23);
      KeAbPostRelease((ULONG_PTR)v23);
      if ( v37 )
        _InterlockedCompareExchange64((volatile signed __int64 *)v15, (signed __int64)v39, 0LL);
LABEL_19:
      v19 = v39;
LABEL_20:
      *a1 = v19;
      CurrentScopeInstance = 0;
      goto LABEL_21;
    }
    v36 = ExAcquireRundownProtection_0(v30 + 1);
    if ( (_InterlockedExchangeAdd64(v23, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v23);
    KeAbPostRelease((ULONG_PTR)v23);
    ExpWnfFreeScopeInstance(v39);
    if ( v36 )
      goto LABEL_20;
    CurrentScopeInstance = -1073741772;
  }
LABEL_21:
  if ( v8 )
    ExFreePoolWithTag(v8, 0x20666E57u);
  return (unsigned int)CurrentScopeInstance;
}
