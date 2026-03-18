/*
 * XREFs of sub_140A50E08 @ 0x140A50E08
 * Callers:
 *     sub_140A50BF0 @ 0x140A50BF0 (sub_140A50BF0.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x1402BB460 (KeLeaveGuardedRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     sub_1408F9528 @ 0x1408F9528 (sub_1408F9528.c)
 *     sub_1409E0124 @ 0x1409E0124 (sub_1409E0124.c)
 */

__int64 __fastcall sub_140A50E08(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v3; // rdi
  int v6; // r12d
  _QWORD *v7; // rax
  _QWORD *v8; // rsi
  unsigned int i; // esi
  __int64 v11; // rbp

  CurrentThread = KeGetCurrentThread();
  v3 = (unsigned __int64 *)(a1 + 176);
  --CurrentThread->SpecialApcDisable;
  v6 = 0;
  v7 = KeAbPreAcquire(a1 + 176, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, (__int64)v7, (__int64)v3);
  if ( v8 )
    *((_BYTE *)v8 + 10) = 1;
  for ( i = 0; i < *(_DWORD *)(a1 + 140); ++i )
  {
    v11 = *(_QWORD *)(*(_DWORD *)(a1 + 136) * i + *(_QWORD *)(a1 + 152));
    if ( v11 )
    {
      if ( *(_QWORD *)(v11 + 32) == a2 )
      {
        v6 = sub_1408F9528(a1 + 136, 0, 0, i, 0LL);
        if ( v6 >= 0 )
        {
          sub_1409E0124((volatile signed __int64 *)v11);
          --i;
        }
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveGuardedRegion();
  return (unsigned int)v6;
}
