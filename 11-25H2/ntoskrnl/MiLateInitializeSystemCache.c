/*
 * XREFs of MiLateInitializeSystemCache @ 0x1404BE284
 * Callers:
 *     MiObtainSystemCacheView @ 0x1402C0010 (MiObtainSystemCacheView.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiUnlockSystemCacheInit @ 0x1404BE348 (MiUnlockSystemCacheInit.c)
 *     MiInitializeSystemCache @ 0x1407DD6C0 (MiInitializeSystemCache.c)
 */

__int64 __fastcall MiLateInitializeSystemCache(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 *v2; // rbx
  __int64 *v4; // rax
  __int64 *v5; // rsi
  unsigned int v6; // ebx
  KIRQL v7; // al

  CurrentThread = KeGetCurrentThread();
  v2 = (unsigned __int64 *)(a1 + 2400);
  --CurrentThread->SpecialApcDisable;
  v4 = KeAbPreAcquire(a1 + 2400, 0LL);
  v5 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx(v2, v4, (__int64)v2);
  v6 = 1;
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  if ( !*(_BYTE *)(a1 + 18524) )
  {
    if ( (unsigned int)MiInitializeSystemCache(a1) )
    {
      v7 = ExAcquireSpinLockExclusive(&dword_140E2F078);
      *(_BYTE *)(a1 + 18524) = 1;
      MiReleaseSpinLockExclusive(&dword_140E2F078, v7);
    }
    else
    {
      v6 = 0;
    }
  }
  MiUnlockSystemCacheInit(a1, CurrentThread);
  return v6;
}
