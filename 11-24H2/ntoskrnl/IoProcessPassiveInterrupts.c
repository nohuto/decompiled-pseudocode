/*
 * XREFs of IoProcessPassiveInterrupts @ 0x1403AE864
 * Callers:
 *     KiInterruptDispatchCommon @ 0x1403AE3B8 (KiInterruptDispatchCommon.c)
 *     KiDispatchPassiveInterrupts @ 0x1404DE3D0 (KiDispatchPassiveInterrupts.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     IopFindPassiveInterruptBlock @ 0x14044C81C (IopFindPassiveInterruptBlock.c)
 *     IopReleasePassiveInterruptBlockLock @ 0x14044C98C (IopReleasePassiveInterruptBlockLock.c)
 *     IopAcquirePassiveInterruptBlockLock @ 0x14044CA10 (IopAcquirePassiveInterruptBlockLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
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
