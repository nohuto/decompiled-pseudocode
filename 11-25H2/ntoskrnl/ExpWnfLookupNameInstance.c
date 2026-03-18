/*
 * XREFs of ExpWnfLookupNameInstance @ 0x1408E33E0
 * Callers:
 *     ExpNtDeleteWnfStateData @ 0x1407AFFD8 (ExpNtDeleteWnfStateData.c)
 *     NtDeleteWnfStateName @ 0x1408E24D0 (NtDeleteWnfStateName.c)
 *     NtQueryWnfStateData @ 0x1408E34F0 (NtQueryWnfStateData.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140A13B0C (ExpWnfSubscribeWnfStateChange.c)
 *     NtQueryWnfStateNameInformation @ 0x140AD2130 (NtQueryWnfStateNameInformation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfAcquireRundownProtection @ 0x140326BD0 (ExfAcquireRundownProtection.c)
 */

__int64 __fastcall ExpWnfLookupNameInstance(__int64 a1, unsigned __int64 a2, struct _EX_RUNDOWN_REF **a3)
{
  __int64 *v6; // rdi
  _QWORD *v7; // rcx
  struct _EX_RUNDOWN_REF *v8; // rbx
  unsigned __int64 v9; // rtt

  v6 = KeAbPreAcquire(a1 + 48, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 48), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)(a1 + 48), 0, v6, a1 + 48);
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
  v7 = *(_QWORD **)(a1 + 56);
  while ( v7 )
  {
    if ( a2 < v7[3] )
    {
      v7 = (_QWORD *)*v7;
    }
    else
    {
      if ( a2 <= v7[3] )
        break;
      v7 = (_QWORD *)v7[1];
    }
  }
  v8 = 0LL;
  if ( v7 )
    v8 = (struct _EX_RUNDOWN_REF *)(v7 - 2);
  if ( v8 )
  {
    _m_prefetchw(&v8[1]);
    v9 = v8[1].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v9 != _InterlockedCompareExchange64((volatile signed __int64 *)&v8[1], v9 + 2, v9)
      && !ExfAcquireRundownProtection(v8 + 1) )
    {
      v8 = 0LL;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 48), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 48));
  KeAbPostRelease(a1 + 48);
  if ( !v8 )
    return 3221225524LL;
  *a3 = v8;
  return 0LL;
}
