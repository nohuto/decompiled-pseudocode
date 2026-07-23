/*
 * XREFs of PopDirectedDripsDiagBroadcastTreeEnd @ 0x1407639C0
 * Callers:
 *     PopDirectedDripsBuildBroadcastTreePartial @ 0x140764740 (PopDirectedDripsBuildBroadcastTreePartial.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

void __fastcall PopDirectedDripsDiagBroadcastTreeEnd(__int64 a1, int a2, char a3, char a4)
{
  char *v8; // rax
  signed __int8 v9; // cf
  char *v10; // rsi
  int v11; // ebx

  if ( a1 )
  {
    v8 = (char *)KeAbPreAcquire((__int64)&PopDirectedDripsDiagLock, 0LL);
    v9 = _interlockedbittestandset64((volatile signed __int32 *)&PopDirectedDripsDiagLock, 0LL);
    v10 = v8;
    if ( v9 )
      ExfAcquirePushLockExclusiveEx(&PopDirectedDripsDiagLock, v8, (__int64)&PopDirectedDripsDiagLock);
    if ( v10 )
      v10[10] = 1;
    if ( a2 < 0
      || (v11 = *(_DWORD *)(a1 + 40) ^ ((unsigned __int8)*(_DWORD *)(a1 + 40) ^ (unsigned __int8)(16 * a3)) & 0xF0,
          *(_DWORD *)(a1 + 40) = v11,
          a4) )
    {
      *(_DWORD *)(a1 + 40) |= 0x100u;
    }
    else
    {
      *(_DWORD *)(a1 + 40) = v11 & 0xFFFFFEFF;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopDirectedDripsDiagLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopDirectedDripsDiagLock);
    KeAbPostRelease((ULONG_PTR)&PopDirectedDripsDiagLock);
  }
}
