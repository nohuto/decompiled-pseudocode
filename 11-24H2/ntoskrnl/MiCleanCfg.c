/*
 * XREFs of MiCleanCfg @ 0x140481A2C
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x140A03374 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiLockVadShared @ 0x140345480 (MiLockVadShared.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140362A70 (MiUnlockAndDereferenceVadShared.c)
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
