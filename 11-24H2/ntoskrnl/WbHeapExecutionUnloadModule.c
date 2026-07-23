/*
 * XREFs of WbHeapExecutionUnloadModule @ 0x140A480AC
 * Callers:
 *     sub_140A47FA0 @ 0x140A47FA0 (sub_140A47FA0.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x140362BA0 (KeLeaveGuardedRegion.c)
 *     sub_14091BE04 @ 0x14091BE04 (sub_14091BE04.c)
 *     sub_14091DB84 @ 0x14091DB84 (sub_14091DB84.c)
 */

__int64 __fastcall WbHeapExecutionUnloadModule(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v3; // rdi
  int v6; // r12d
  char *v7; // rax
  char *v8; // rsi
  unsigned int i; // esi
  __int64 v10; // r14

  CurrentThread = KeGetCurrentThread();
  v3 = (unsigned __int64 *)(a1 + 48);
  --CurrentThread->SpecialApcDisable;
  v6 = 0;
  v7 = (char *)KeAbPreAcquire(a1 + 48, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, v7, (__int64)v3);
  if ( v8 )
    v8[10] = 1;
  for ( i = 0; i < *(_DWORD *)(a1 + 12); ++i )
  {
    v10 = *(_QWORD *)(*(_DWORD *)(a1 + 8) * i + *(_QWORD *)(a1 + 24));
    if ( v10 )
    {
      if ( *(_QWORD *)(v10 + 64) == a2 )
      {
        v6 = sub_14091BE04(a1 + 8, 0, 0, i, 0LL);
        if ( v6 >= 0 )
        {
          sub_14091DB84(a1, v10);
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
