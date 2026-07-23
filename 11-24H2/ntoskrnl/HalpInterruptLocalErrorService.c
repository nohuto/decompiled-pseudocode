/*
 * XREFs of HalpInterruptLocalErrorService @ 0x1404A96F0
 * Callers:
 *     <none>
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x140372268 (HalpReleaseHighLevelLock.c)
 *     HalpAcquireHighLevelLock @ 0x1403729A0 (HalpAcquireHighLevelLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char HalpInterruptLocalErrorService()
{
  __int64 v0; // rdx
  unsigned __int8 v1; // r14
  __int64 v2; // rbx
  int v3; // esi
  __int64 v4; // rdi
  __int64 v5; // rbp

  v1 = HalpAcquireHighLevelLock(&HalpInterruptLocalUnitErrorLock);
  v2 = HalpInterruptLocalUnitErrorCount++ & 0x7F;
  v3 = 0;
  v4 = *(_QWORD *)(HalpInterruptController + 64);
  v5 = *(_QWORD *)(HalpInterruptController + 16);
  if ( *(_QWORD *)(HalpInterruptController + 56) )
    v3 = guard_dispatch_icall_no_overrides(*(_QWORD *)(HalpInterruptController + 16), v0);
  if ( v4 )
    guard_dispatch_icall_no_overrides(v5, v0);
  HalpInterruptLocalUnitErrorLog[v2] = v3;
  HalpInterruptLocalUnitErrorLogProcessor[v2] = KeGetPcr()->Prcb.Number;
  HalpReleaseHighLevelLock((volatile signed __int64 *)&HalpInterruptLocalUnitErrorLock, v1);
  return 1;
}
