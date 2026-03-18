/*
 * XREFs of IoProcessPassiveInterrupts @ 0x1403BFCA4
 * Callers:
 *     KiDispatchPassiveInterrupts @ 0x1403BF220 (KiDispatchPassiveInterrupts.c)
 *     KiInterruptDispatchCommon @ 0x1403BF7F8 (KiInterruptDispatchCommon.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     IopFindPassiveInterruptBlock @ 0x140456FDC (IopFindPassiveInterruptBlock.c)
 *     IopReleasePassiveInterruptBlockLock @ 0x14045714C (IopReleasePassiveInterruptBlockLock.c)
 *     IopAcquirePassiveInterruptBlockLock @ 0x1404571D0 (IopAcquirePassiveInterruptBlockLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 IoProcessPassiveInterrupts()
{
  __int64 result; // rax
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 v3; // rbx
  int v4; // eax
  __int64 v5; // rdx
  bool v6; // zf
  char v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0;
  result = IopFindPassiveInterruptBlock();
  v3 = result;
  if ( result )
  {
    v4 = *(_DWORD *)(result + 32);
    if ( !v4 || v4 == 1 && !*(_BYTE *)(v3 + 28) )
      guard_dispatch_icall_no_overrides(*(unsigned int *)(v3 + 24), 1LL, v1, v2);
    IopAcquirePassiveInterruptBlockLock(v3, &v7);
    v6 = *(_BYTE *)(v3 + 64) == 0;
    *(_BYTE *)(v3 + 65) = 1;
    if ( v6 )
    {
      *(_BYTE *)(v3 + 64) = 1;
      KeInsertQueueDpc((PRKDPC)(v3 + 104), 0LL, 0LL);
    }
    LOBYTE(v5) = v7;
    return IopReleasePassiveInterruptBlockLock(v3, v5);
  }
  return result;
}
