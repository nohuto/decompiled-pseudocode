/*
 * XREFs of MiCleanCfg @ 0x14048643C
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x140A06E44 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiUnlockAndDereferenceVadShared @ 0x1402BB330 (MiUnlockAndDereferenceVadShared.c)
 *     MiLockVadShared @ 0x1402FC580 (MiLockVadShared.c)
 */

void MiCleanCfg()
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v1; // rbx
  __int64 v2; // rsi
  volatile _KAFFINITY_EX *ActiveProcessors; // rdi
  __int64 v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  CurrentThread = KeGetCurrentThread();
  v1 = 52LL;
  v2 = 2LL;
  ActiveProcessors = CurrentThread->ApcState.Process[2].ActiveProcessors;
  do
  {
    v4 = ActiveProcessors[2].StaticBitmap[v1 + 31];
    if ( v4 )
    {
      MiLockVadShared((__int64)CurrentThread, ActiveProcessors[2].StaticBitmap[v1 + 31]);
      MiUnlockAndDereferenceVadShared(v4, v5, v6, v7);
      ActiveProcessors[2].StaticBitmap[v1 + 31] = 0LL;
    }
    v1 += 4LL;
    --v2;
  }
  while ( v2 );
}
