/*
 * XREFs of HalpInterruptLocalErrorService @ 0x1403BC000
 * Callers:
 *     <none>
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x1403B9898 (HalpReleaseHighLevelLock.c)
 *     HalpAcquireHighLevelLock @ 0x1403B9FD0 (HalpAcquireHighLevelLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char HalpInterruptLocalErrorService()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9
  unsigned __int8 v3; // r14
  __int64 v4; // rbx
  int v5; // esi
  __int64 v6; // rdi
  __int64 v7; // rbp

  v3 = HalpAcquireHighLevelLock(&HalpInterruptLocalUnitErrorLock);
  v4 = HalpInterruptLocalUnitErrorCount++ & 0x7F;
  v5 = 0;
  v6 = *(_QWORD *)(HalpInterruptController + 64);
  v7 = *(_QWORD *)(HalpInterruptController + 16);
  if ( *(_QWORD *)(HalpInterruptController + 56) )
    v5 = guard_dispatch_icall_no_overrides(*(_QWORD *)(HalpInterruptController + 16), v0, v1, v2);
  if ( v6 )
    guard_dispatch_icall_no_overrides(v7, v0, v1, v2);
  HalpInterruptLocalUnitErrorLog[v4] = v5;
  HalpInterruptLocalUnitErrorLogProcessor[v4] = KeGetPcr()->Prcb.Number;
  HalpReleaseHighLevelLock((volatile signed __int64 *)&HalpInterruptLocalUnitErrorLock, v3);
  return 1;
}
