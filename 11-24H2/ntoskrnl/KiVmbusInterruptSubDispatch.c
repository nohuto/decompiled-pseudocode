/*
 * XREFs of KiVmbusInterruptSubDispatch @ 0x1406B2280
 * Callers:
 *     KiVmbusInterruptDispatch @ 0x1406B1E00 (KiVmbusInterruptDispatch.c)
 * Callees:
 *     KiStartInterruptCycleAccumulation @ 0x14036A630 (KiStartInterruptCycleAccumulation.c)
 *     EtwGetKernelTraceTimestamp @ 0x1403AEC60 (EtwGetKernelTraceTimestamp.c)
 *     PerfInfoLogInterruptHv @ 0x140440F90 (PerfInfoLogInterruptHv.c)
 *     KzSetIrqlUnsafe @ 0x1405B4DD0 (KzSetIrqlUnsafe.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

int __fastcall KiVmbusInterruptSubDispatch()
{
  __int64 v0; // rbp
  unsigned __int8 CurrentIrql; // al
  __int64 v2; // rdx
  bool v3; // zf
  __int64 v4; // rcx
  __int64 (__fastcall *v5)(); // rsi
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
  v3 = (WORD2(PerfGlobalGroupMask) & 0x4000) == 0;
  *(_BYTE *)(v0 + 243) = (WORD2(PerfGlobalGroupMask) & 0x4000) != 0;
  if ( !v3 )
    EtwGetKernelTraceTimestamp(v7, 0x20004000u);
  v4 = *(unsigned int *)(v0 + 224);
  v5 = HvlpInterruptCallback[v4];
  result = guard_dispatch_icall_no_overrides(v4, v2);
  if ( *(_BYTE *)(v0 + 243) )
    result = PerfInfoLogInterruptHv((__int64)v5, ((*(_DWORD *)(v0 + 224) + 48) << 8) + 1, (__int64)v7);
  _disable();
  return result;
}
