/*
 * XREFs of sub_1408F95BC @ 0x1408F95BC
 * Callers:
 *     sub_1408FA884 @ 0x1408FA884 (sub_1408FA884.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x1402BB460 (KeLeaveGuardedRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     sub_1408FCECC @ 0x1408FCECC (sub_1408FCECC.c)
 */

__int64 __fastcall sub_1408F95BC(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v3; // rdi
  _QWORD *v6; // rax
  _QWORD *v7; // rbp
  _QWORD *v8; // rcx

  CurrentThread = KeGetCurrentThread();
  v3 = (unsigned __int64 *)(a1 + 80);
  --CurrentThread->SpecialApcDisable;
  v6 = KeAbPreAcquire(a1 + 80, 0LL);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, (__int64)v6, (__int64)v3);
  if ( v7 )
    *((_BYTE *)v7 + 10) = 1;
  v8 = *(_QWORD **)(a1 + 72);
  if ( *v8 != a1 + 64 )
    __fastfail(3u);
  *(_QWORD *)a2 = a1 + 64;
  *(_QWORD *)(a2 + 8) = v8;
  *v8 = a2;
  *(_QWORD *)(a1 + 72) = a2;
  *(_DWORD *)(a2 + 16) |= 1u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveGuardedRegion();
  return sub_1408FCECC(a2);
}
