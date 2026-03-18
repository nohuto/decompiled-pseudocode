/*
 * XREFs of MiCleanCfg @ 0x1402A62C8
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x140A04D48 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiLockVadShared @ 0x1402A7C94 (MiLockVadShared.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140320840 (MiUnlockAndDereferenceVadShared.c)
 */

__int64 MiCleanCfg()
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v1; // rbx
  __int64 v2; // rsi
  __int64 result; // rax
  __int64 v4; // rdi
  void *v5; // rbp

  CurrentThread = KeGetCurrentThread();
  v1 = 416LL;
  v2 = 2LL;
  result = (__int64)CurrentThread->ApcState.Process;
  v4 = *(_QWORD *)(result + 1040);
  do
  {
    v5 = *(void **)(v1 + v4 + 784);
    if ( v5 )
    {
      MiLockVadShared(CurrentThread, *(_QWORD *)(v1 + v4 + 784));
      result = MiUnlockAndDereferenceVadShared(v5);
      *(_QWORD *)(v1 + v4 + 784) = 0LL;
    }
    v1 += 32LL;
    --v2;
  }
  while ( v2 );
  return result;
}
