/*
 * XREFs of ExpWnfUpdateSubscription @ 0x1409C3770
 * Callers:
 *     ExpWnfSubscribeNameInstance @ 0x1409C32E4 (ExpWnfSubscribeNameInstance.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

__int64 __fastcall ExpWnfUpdateSubscription(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        _QWORD *a6,
        _DWORD *a7,
        _DWORD *a8,
        _QWORD *a9)
{
  _QWORD *i; // rax
  _QWORD *v13; // rbx
  unsigned __int64 *v15; // rsi
  char *v16; // rax
  char *v17; // rbp
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  bool v21; // zf
  __int64 v22; // r8
  _QWORD *v23; // rdx

  for ( i = *(_QWORD **)(a2 + 88); ; i = (_QWORD *)*i )
  {
    if ( i == (_QWORD *)(a2 + 88) )
      return 3221225524LL;
    v13 = i - 3;
    if ( i[3] == a1 )
      break;
  }
  v15 = (unsigned __int64 *)(a2 + 104);
  *a7 = 0;
  *a8 = 0;
  v16 = (char *)KeAbPreAcquire(a2 + 104, 0LL);
  v17 = v16;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v15, 0LL) )
    ExfAcquirePushLockExclusiveEx(v15, v16, (__int64)v15);
  if ( v17 )
    v17[10] = 1;
  v18 = *((_DWORD *)v13 + 25) & 1;
  if ( (a5 & 1) != 0 )
  {
    if ( !v18 && _InterlockedIncrement((volatile signed __int32 *)(a1 + 160)) == 1 )
      *a7 = 1;
    goto LABEL_16;
  }
  if ( v18 && _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 160), 0xFFFFFFFF) == 1 )
    *a7 = -1;
  if ( *((_DWORD *)v13 + 30) == 2 )
  {
    if ( (v13[16] & 1) == 0 )
      goto LABEL_16;
  }
  else if ( (*((_DWORD *)v13 + 31) & 1) == 0 )
  {
    goto LABEL_16;
  }
  *a8 = -1;
LABEL_16:
  v19 = *((_DWORD *)v13 + 31) & a5;
  *((_DWORD *)v13 + 25) = a5;
  v20 = v13[16] & a5;
  v21 = *((_DWORD *)v13 + 30) == 0;
  v13[10] = a3;
  v13[11] = a4;
  *((_DWORD *)v13 + 31) = v19;
  *((_DWORD *)v13 + 32) = v20;
  if ( !v21 && !v19 && !v20 )
  {
    v22 = v13[13];
    if ( *(_QWORD **)(v22 + 8) != v13 + 13 || (v23 = (_QWORD *)v13[14], (_QWORD *)*v23 != v13 + 13) )
      __fastfail(3u);
    *v23 = v22;
    *(_QWORD *)(v22 + 8) = v23;
    *((_DWORD *)v13 + 30) = 0;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v15);
  KeAbPostRelease((ULONG_PTR)v15);
  ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)v13 + 1);
  *a6 = v13;
  if ( a9 )
    *a9 = v13[2];
  return 0LL;
}
