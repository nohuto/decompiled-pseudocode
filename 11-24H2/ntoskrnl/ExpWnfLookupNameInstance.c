/*
 * XREFs of ExpWnfLookupNameInstance @ 0x1408AAA90
 * Callers:
 *     ExpNtDeleteWnfStateData @ 0x1407BF7A8 (ExpNtDeleteWnfStateData.c)
 *     NtDeleteWnfStateName @ 0x1408AAC70 (NtDeleteWnfStateName.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140A1946C (ExpWnfSubscribeWnfStateChange.c)
 *     NtQueryWnfStateNameInformation @ 0x140AE3050 (NtQueryWnfStateNameInformation.c)
 * Callees:
 *     ExfAcquireRundownProtection @ 0x140247210 (ExfAcquireRundownProtection.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 */

__int64 __fastcall ExpWnfLookupNameInstance(__int64 a1, unsigned __int64 a2, struct _EX_RUNDOWN_REF **a3)
{
  _QWORD *v6; // rdi
  _QWORD *v7; // rcx
  struct _EX_RUNDOWN_REF *v8; // rbx
  unsigned __int64 v9; // rtt

  v6 = KeAbPreAcquire(a1 + 48, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 48), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)(a1 + 48), 0, v6, a1 + 48);
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
  v7 = *(_QWORD **)(a1 + 56);
  if ( !v7 )
    goto LABEL_20;
  do
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
  while ( v7 );
  if ( v7 )
  {
    v8 = (struct _EX_RUNDOWN_REF *)(v7 - 2);
    if ( v7 != (_QWORD *)16 )
    {
      _m_prefetchw(&v8[1]);
      v9 = v8[1].Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v9 != _InterlockedCompareExchange64((volatile signed __int64 *)&v8[1], v9 + 2, v9)
        && !ExfAcquireRundownProtection(v8 + 1) )
      {
        v8 = 0LL;
      }
    }
  }
  else
  {
LABEL_20:
    v8 = 0LL;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 48), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 48));
  KeAbPostRelease(a1 + 48);
  if ( !v8 )
    return 3221225524LL;
  *a3 = v8;
  return 0LL;
}
