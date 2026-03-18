/*
 * XREFs of KiInterruptSubDispatchNoLock @ 0x1406A1A80
 * Callers:
 *     KiInterruptDispatchNoLock @ 0x1406A1F60 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoEOI @ 0x1406A2720 (KiInterruptDispatchNoEOI.c)
 * Callees:
 *     PerfInfoLogInterrupt @ 0x140257560 (PerfInfoLogInterrupt.c)
 *     KiCallInterruptServiceRoutine @ 0x140279DF0 (KiCallInterruptServiceRoutine.c)
 *     KiStartInterruptCycleAccumulation @ 0x14028E700 (KiStartInterruptCycleAccumulation.c)
 *     EtwGetKernelTraceTimestamp @ 0x14031CDD0 (EtwGetKernelTraceTimestamp.c)
 *     KzSetIrqlUnsafe @ 0x1405B3940 (KzSetIrqlUnsafe.c)
 */

unsigned __int8 __fastcall KiInterruptSubDispatchNoLock()
{
  __int64 v0; // rbp
  __int64 v1; // rsi
  unsigned __int64 v2; // rcx
  unsigned __int8 CurrentIrql; // al
  __int64 v4; // r8
  bool v5; // zf
  unsigned __int8 result; // al
  int v7; // edx
  LARGE_INTEGER v8[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(unsigned __int8 *)(v1 + 93);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KzSetIrqlUnsafe(v2);
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(v2);
  }
  *(_BYTE *)(v0 - 87) = CurrentIrql;
  KiStartInterruptCycleAccumulation((__int64)KeGetCurrentPrcb(), 1);
  _enable();
  *(_QWORD *)(v1 + 136) = v0 - 128;
  v5 = (WORD2(PerfGlobalGroupMask) & 0x4000) == 0;
  *(_BYTE *)(v0 + 243) = (WORD2(PerfGlobalGroupMask) & 0x4000) != 0;
  if ( !v5 )
    EtwGetKernelTraceTimestamp(v8, 0x20004000u);
  result = KiCallInterruptServiceRoutine((struct _KINTERRUPT *)v1, 0LL, v4);
  if ( *(_BYTE *)(v0 + 243) )
  {
    v7 = result;
    BYTE1(v7) = *(_BYTE *)(v1 + 88);
    result = PerfInfoLogInterrupt(v1, v7, (__int64)v8);
  }
  _disable();
  return result;
}
