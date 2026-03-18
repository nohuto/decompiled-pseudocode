/*
 * XREFs of ExpWnfResolveScopeInstance @ 0x1408E4E70
 * Callers:
 *     ExpNtDeleteWnfStateData @ 0x1407AFFD8 (ExpNtDeleteWnfStateData.c)
 *     NtCreateWnfStateName @ 0x1408973D0 (NtCreateWnfStateName.c)
 *     NtDeleteWnfStateName @ 0x1408E24D0 (NtDeleteWnfStateName.c)
 *     NtQueryWnfStateData @ 0x1408E34F0 (NtQueryWnfStateData.c)
 *     ExpNtUpdateWnfStateData @ 0x1408E4380 (ExpNtUpdateWnfStateData.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140A13B0C (ExpWnfSubscribeWnfStateChange.c)
 *     NtQueryWnfStateNameInformation @ 0x140AD2130 (NtQueryWnfStateNameInformation.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     ExfAcquireRundownProtection @ 0x140326BD0 (ExfAcquireRundownProtection.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     PsGetServerSiloGlobals @ 0x1403D6D00 (PsGetServerSiloGlobals.c)
 *     RtlLengthSid @ 0x140458B00 (RtlLengthSid.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x140483BB0 (PdcCreateWatchdogAroundClientCall.c)
 *     ExpWnfGetCurrentScopeInstance @ 0x14083DF28 (ExpWnfGetCurrentScopeInstance.c)
 *     ExpWnfFindScopeInstance @ 0x1409FE570 (ExpWnfFindScopeInstance.c)
 *     ExpWnfCreateProcessContext @ 0x140A35914 (ExpWnfCreateProcessContext.c)
 *     ExpWnfFreeScopeInstance @ 0x140A60194 (ExpWnfFreeScopeInstance.c)
 *     ExpWnfAllocateScopeInstance @ 0x140A63FD4 (ExpWnfAllocateScopeInstance.c)
 *     ExpWnfAllocateScopeMap @ 0x140AB2D08 (ExpWnfAllocateScopeMap.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  __int64 *v25; // rdi
  struct _EX_RUNDOWN_REF *ScopeInstance; // rax
  BOOLEAN v27; // bl
  __int64 *v28; // rax
  __int64 *v29; // rdi
  __int64 *v30; // rsi
  struct _EX_RUNDOWN_REF *v31; // rax
  char *v32; // rdi
  __int64 v33; // rax
  _QWORD *v34; // rdi
  _DWORD *Pool2; // rax
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
    goto LABEL_13;
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
    Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
    v8 = Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    v43 = (__int64 *)Pool2;
    CurrentScopeInstance = ExpWnfGetCurrentScopeInstance(a2, a3, v5, Pool2, &v38, &v37);
  }
  if ( CurrentScopeInstance < 0 )
    goto LABEL_22;
  if ( v38 )
    v13 = v43;
  if ( v37 && v16 )
  {
LABEL_13:
    _m_prefetchw(&v16[1]);
    v17 = v16[1].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v17 != _InterlockedCompareExchange64((volatile signed __int64 *)&v16[1], v17 + 2, v17)
      && !ExfAcquireRundownProtection(v16 + 1) )
    {
      CurrentScopeInstance = -1073741772;
      goto LABEL_22;
    }
    goto LABEL_20;
  }
LABEL_37:
  v22 = v11[110];
  v23 = (signed __int64 *)(v22 + 8 * (3 * v5 + 4));
  v24 = (__int64 *)(v22 + 8 * (3 * v5 + 5));
  v43 = v24;
  v25 = KeAbPreAcquire((__int64)v23, 0LL);
  if ( _InterlockedCompareExchange64(v23, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v23, 0, v25, (unsigned __int64)v23);
  if ( v25 )
    *((_BYTE *)v25 + 10) = 1;
  ScopeInstance = (struct _EX_RUNDOWN_REF *)ExpWnfFindScopeInstance(v24, v13, v38);
  v19 = ScopeInstance;
  if ( ScopeInstance )
  {
    v27 = ExAcquireRundownProtection_0(ScopeInstance + 1);
    if ( _InterlockedCompareExchange64(v23, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v23);
    KeAbPostRelease((ULONG_PTR)v23);
    if ( v27 )
      goto LABEL_21;
    CurrentScopeInstance = -1073741772;
  }
  else
  {
    if ( _InterlockedCompareExchange64(v23, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v23);
    KeAbPostRelease((ULONG_PTR)v23);
    CurrentScopeInstance = ExpWnfAllocateScopeInstance(&v39, (unsigned int)v5, v13, v38);
    if ( CurrentScopeInstance < 0 )
      goto LABEL_22;
    v28 = KeAbPreAcquire((__int64)v23, 0LL);
    v29 = v28;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v23, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v23, v28, (__int64)v23);
    if ( v29 )
      *((_BYTE *)v29 + 10) = 1;
    v30 = v43;
    v31 = (struct _EX_RUNDOWN_REF *)ExpWnfFindScopeInstance(v43, v13, v38);
    v19 = v31;
    if ( !v31 )
    {
      v32 = (char *)v39;
      ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)v39 + 1);
      v33 = *v30;
      v34 = v32 + 32;
      if ( *(__int64 **)(*v30 + 8) != v30 )
        __fastfail(3u);
      *v34 = v33;
      v34[1] = v30;
      *(_QWORD *)(v33 + 8) = v34;
      *v30 = (__int64)v34;
      if ( (_InterlockedExchangeAdd64(v23, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v23);
      KeAbPostRelease((ULONG_PTR)v23);
      if ( v37 )
        _InterlockedCompareExchange64((volatile signed __int64 *)v15, (signed __int64)v39, 0LL);
LABEL_20:
      v19 = v39;
LABEL_21:
      *a1 = v19;
      CurrentScopeInstance = 0;
      goto LABEL_22;
    }
    v36 = ExAcquireRundownProtection_0(v31 + 1);
    if ( (_InterlockedExchangeAdd64(v23, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v23);
    KeAbPostRelease((ULONG_PTR)v23);
    ExpWnfFreeScopeInstance(v39);
    if ( v36 )
      goto LABEL_21;
    CurrentScopeInstance = -1073741772;
  }
LABEL_22:
  if ( v8 )
    ExFreePoolWithTag(v8, 0x20666E57u);
  return (unsigned int)CurrentScopeInstance;
}
