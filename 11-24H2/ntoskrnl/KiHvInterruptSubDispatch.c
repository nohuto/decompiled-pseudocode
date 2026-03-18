/*
 * XREFs of KiHvInterruptSubDispatch @ 0x1406B1230
 * Callers:
 *     KiHvInterruptDispatch @ 0x1406B0A70 (KiHvInterruptDispatch.c)
 * Callees:
 *     KiStartInterruptCycleAccumulation @ 0x14034C150 (KiStartInterruptCycleAccumulation.c)
 *     EtwGetKernelTraceTimestamp @ 0x1403C00A0 (EtwGetKernelTraceTimestamp.c)
 *     HvlSharedIsr @ 0x140444780 (HvlSharedIsr.c)
 *     PerfInfoLogInterruptHv @ 0x140448870 (PerfInfoLogInterruptHv.c)
 *     KzSetIrqlUnsafe @ 0x1405B7800 (KzSetIrqlUnsafe.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

int __fastcall KiHvInterruptSubDispatch()
{
  __int64 v0; // rbp
  unsigned __int8 CurrentIrql; // al
  bool v2; // zf
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  int result; // eax
  LARGE_INTEGER v7[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( KiIrqlFlags )
  {
    CurrentIrql = KzSetIrqlUnsafe(3u);
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(3uLL);
  }
  *(_BYTE *)(v0 - 87) = CurrentIrql;
  KiStartInterruptCycleAccumulation((__int64)KeGetCurrentPrcb(), 1);
  _enable();
  v2 = (WORD2(PerfGlobalGroupMask) & 0x4000) == 0;
  *(_BYTE *)(v0 + 243) = (WORD2(PerfGlobalGroupMask) & 0x4000) != 0;
  if ( !v2 )
    EtwGetKernelTraceTimestamp(v7, 0x20004000u);
  HvlSharedIsr();
  result = guard_dispatch_icall_no_overrides(*(unsigned int *)(v0 + 224), v3, v4, v5);
  if ( *(_BYTE *)(v0 + 243) )
    result = PerfInfoLogInterruptHv((__int64)KiHvInterrupt, ((*(_DWORD *)(v0 + 224) + 48) << 8) + 1, (__int64)v7);
  _disable();
  return result;
}
