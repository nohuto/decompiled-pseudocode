/*
 * XREFs of MiLateInitializeSystemCache @ 0x1404B7A84
 * Callers:
 *     MiObtainSystemCacheView @ 0x140209EE0 (MiObtainSystemCacheView.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     MiUnlockSystemCacheInit @ 0x1404B7B48 (MiUnlockSystemCacheInit.c)
 *     MiInitializeSystemCache @ 0x1407EDB30 (MiInitializeSystemCache.c)
 */

__int64 __fastcall MiLateInitializeSystemCache(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 *v2; // rbx
  char *v4; // rax
  char *v5; // rsi
  unsigned int v6; // ebx
  KIRQL v7; // al

  CurrentThread = KeGetCurrentThread();
  v2 = (unsigned __int64 *)(a1 + 2400);
  --CurrentThread->SpecialApcDisable;
  v4 = (char *)KeAbPreAcquire(a1 + 2400, 0LL);
  v5 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx(v2, v4, (__int64)v2);
  v6 = 1;
  if ( v5 )
    v5[10] = 1;
  if ( !*(_BYTE *)(a1 + 18524) )
  {
    if ( (unsigned int)MiInitializeSystemCache(a1) )
    {
      v7 = ExAcquireSpinLockExclusive(&dword_140E2F3F8);
      *(_BYTE *)(a1 + 18524) = 1;
      MiReleaseSpinLockExclusive(&dword_140E2F3F8, v7);
    }
    else
    {
      v6 = 0;
    }
  }
  MiUnlockSystemCacheInit(a1, CurrentThread);
  return v6;
}
