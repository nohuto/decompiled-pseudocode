/*
 * XREFs of KiInterruptSubDispatchNoLock @ 0x1406ACD50
 * Callers:
 *     KiInterruptDispatchNoLock @ 0x1406AD230 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoEOI @ 0x1406AD9F0 (KiInterruptDispatchNoEOI.c)
 * Callees:
 *     KiCallInterruptServiceRoutine @ 0x14033B0A0 (KiCallInterruptServiceRoutine.c)
 *     KiStartInterruptCycleAccumulation @ 0x14034C150 (KiStartInterruptCycleAccumulation.c)
 *     PerfInfoLogInterrupt @ 0x1403BFF50 (PerfInfoLogInterrupt.c)
 *     EtwGetKernelTraceTimestamp @ 0x1403C00A0 (EtwGetKernelTraceTimestamp.c)
 *     KzSetIrqlUnsafe @ 0x1405B7800 (KzSetIrqlUnsafe.c)
 */

unsigned __int8 __fastcall KiInterruptSubDispatchNoLock()
{
  __int64 v0; // rbp
  __int64 v1; // rsi
  unsigned __int64 v2; // rcx
  unsigned __int8 CurrentIrql; // al
  signed __int32 *v4; // r8
  __int64 v5; // r9
  bool v6; // zf
  unsigned __int8 result; // al
  int v8; // edx
  LARGE_INTEGER v9[5]; // [rsp+20h] [rbp-28h] BYREF

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
  v6 = (WORD2(PerfGlobalGroupMask) & 0x4000) == 0;
  *(_BYTE *)(v0 + 243) = (WORD2(PerfGlobalGroupMask) & 0x4000) != 0;
  if ( !v6 )
    EtwGetKernelTraceTimestamp(v9, 0x20004000u);
  result = KiCallInterruptServiceRoutine((struct _KINTERRUPT *)v1, 0, v4, v5);
  if ( *(_BYTE *)(v0 + 243) )
  {
    v8 = result;
    BYTE1(v8) = *(_BYTE *)(v1 + 88);
    result = PerfInfoLogInterrupt(v1, v8, (__int64)v9);
  }
  _disable();
  return result;
}
