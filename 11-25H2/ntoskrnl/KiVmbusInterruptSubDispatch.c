/*
 * XREFs of KiVmbusInterruptSubDispatch @ 0x1406A6010
 * Callers:
 *     KiVmbusInterruptDispatch @ 0x1406A5B90 (KiVmbusInterruptDispatch.c)
 * Callees:
 *     KiStartInterruptCycleAccumulation @ 0x14028E700 (KiStartInterruptCycleAccumulation.c)
 *     EtwGetKernelTraceTimestamp @ 0x14031CDD0 (EtwGetKernelTraceTimestamp.c)
 *     PerfInfoLogInterruptHv @ 0x14044A590 (PerfInfoLogInterruptHv.c)
 *     KzSetIrqlUnsafe @ 0x1405B3940 (KzSetIrqlUnsafe.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

int __fastcall KiVmbusInterruptSubDispatch()
{
  __int64 v0; // rbp
  unsigned __int8 CurrentIrql; // al
  bool v2; // zf
  __int64 v3; // rcx
  __int64 (__fastcall *v4)(); // rsi
  int result; // eax
  LARGE_INTEGER v6[5]; // [rsp+20h] [rbp-28h] BYREF

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
    EtwGetKernelTraceTimestamp(v6, 0x20004000u);
  v3 = *(unsigned int *)(v0 + 224);
  v4 = HvlpInterruptCallback[v3];
  result = guard_dispatch_icall_no_overrides(v3);
  if ( *(_BYTE *)(v0 + 243) )
    result = PerfInfoLogInterruptHv((__int64)v4, ((*(_DWORD *)(v0 + 224) + 48) << 8) + 1, (__int64)v6);
  _disable();
  return result;
}
