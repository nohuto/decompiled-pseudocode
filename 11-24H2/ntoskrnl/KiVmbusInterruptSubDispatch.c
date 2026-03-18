/*
 * XREFs of KiVmbusInterruptSubDispatch @ 0x1406B12E0
 * Callers:
 *     KiVmbusInterruptDispatch @ 0x1406B0E60 (KiVmbusInterruptDispatch.c)
 * Callees:
 *     KiStartInterruptCycleAccumulation @ 0x14034C150 (KiStartInterruptCycleAccumulation.c)
 *     EtwGetKernelTraceTimestamp @ 0x1403C00A0 (EtwGetKernelTraceTimestamp.c)
 *     PerfInfoLogInterruptHv @ 0x140448870 (PerfInfoLogInterruptHv.c)
 *     KzSetIrqlUnsafe @ 0x1405B7800 (KzSetIrqlUnsafe.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

int __fastcall KiVmbusInterruptSubDispatch()
{
  __int64 v0; // rbp
  unsigned __int8 CurrentIrql; // al
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  bool v5; // zf
  __int64 v6; // rcx
  __int64 (__fastcall *v7)(); // rsi
  int result; // eax
  LARGE_INTEGER v9[5]; // [rsp+20h] [rbp-28h] BYREF

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
  v5 = (WORD2(PerfGlobalGroupMask) & 0x4000) == 0;
  *(_BYTE *)(v0 + 243) = (WORD2(PerfGlobalGroupMask) & 0x4000) != 0;
  if ( !v5 )
    EtwGetKernelTraceTimestamp(v9, 0x20004000u);
  v6 = *(unsigned int *)(v0 + 224);
  v7 = HvlpInterruptCallback[v6];
  result = guard_dispatch_icall_no_overrides(v6, v2, v3, v4);
  if ( *(_BYTE *)(v0 + 243) )
    result = PerfInfoLogInterruptHv((__int64)v7, ((*(_DWORD *)(v0 + 224) + 48) << 8) + 1, (__int64)v9);
  _disable();
  return result;
}
