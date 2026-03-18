/*
 * XREFs of IoProcessPassiveInterrupts @ 0x140206710
 * Callers:
 *     KiDispatchPassiveInterrupts @ 0x140205790 (KiDispatchPassiveInterrupts.c)
 *     KiInterruptDispatchCommon @ 0x140206264 (KiInterruptDispatchCommon.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     IopAcquirePassiveInterruptBlockLock @ 0x140456B5C (IopAcquirePassiveInterruptBlockLock.c)
 *     IopFindPassiveInterruptBlock @ 0x140456BB4 (IopFindPassiveInterruptBlock.c)
 *     IopReleasePassiveInterruptBlockLock @ 0x140456D24 (IopReleasePassiveInterruptBlockLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 IoProcessPassiveInterrupts()
{
  __int64 result; // rax
  __int64 v1; // rbx
  int v2; // eax
  __int64 v3; // rdx
  bool v4; // zf
  char v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  result = IopFindPassiveInterruptBlock();
  v1 = result;
  if ( result )
  {
    v2 = *(_DWORD *)(result + 32);
    if ( !v2 || v2 == 1 && !*(_BYTE *)(v1 + 28) )
      guard_dispatch_icall_no_overrides(*(unsigned int *)(v1 + 24), 1LL);
    IopAcquirePassiveInterruptBlockLock(v1, &v5);
    v4 = *(_BYTE *)(v1 + 64) == 0;
    *(_BYTE *)(v1 + 65) = 1;
    if ( v4 )
    {
      *(_BYTE *)(v1 + 64) = 1;
      KeInsertQueueDpc((PRKDPC)(v1 + 104), 0LL, 0LL);
    }
    LOBYTE(v3) = v5;
    return IopReleasePassiveInterruptBlockLock(v1, v3);
  }
  return result;
}
