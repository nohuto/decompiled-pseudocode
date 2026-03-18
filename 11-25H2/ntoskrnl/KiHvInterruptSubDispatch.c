/*
 * XREFs of KiHvInterruptSubDispatch @ 0x1406A5F60
 * Callers:
 *     KiHvInterruptDispatch @ 0x1406A57A0 (KiHvInterruptDispatch.c)
 * Callees:
 *     KiStartInterruptCycleAccumulation @ 0x14028E700 (KiStartInterruptCycleAccumulation.c)
 *     EtwGetKernelTraceTimestamp @ 0x14031CDD0 (EtwGetKernelTraceTimestamp.c)
 *     HvlSharedIsr @ 0x1404431A0 (HvlSharedIsr.c)
 *     PerfInfoLogInterruptHv @ 0x14044A590 (PerfInfoLogInterruptHv.c)
 *     KzSetIrqlUnsafe @ 0x1405B3940 (KzSetIrqlUnsafe.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

int __fastcall KiHvInterruptSubDispatch()
{
  __int64 v0; // rbp
  unsigned __int8 CurrentIrql; // al
  bool v2; // zf
  int result; // eax
  LARGE_INTEGER v4[5]; // [rsp+20h] [rbp-28h] BYREF

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
    EtwGetKernelTraceTimestamp(v4, 0x20004000u);
  HvlSharedIsr();
  result = guard_dispatch_icall_no_overrides(*(unsigned int *)(v0 + 224));
  if ( *(_BYTE *)(v0 + 243) )
    result = PerfInfoLogInterruptHv((__int64)KiHvInterrupt, ((*(_DWORD *)(v0 + 224) + 48) << 8) + 1, (__int64)v4);
  _disable();
  return result;
}
