/*
 * XREFs of PopPowerAggregatorRecordIntent @ 0x1409A28B0
 * Callers:
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x1409A2738 (PopPowerAggregatorHandleIntentUnsafe.c)
 * Callees:
 *     KeQueryInterruptTimePrecise @ 0x14031B120 (KeQueryInterruptTimePrecise.c)
 *     PopPowerAggregatorDiagTraceHandleIntent @ 0x1409A2A64 (PopPowerAggregatorDiagTraceHandleIntent.c)
 *     PopPowerAggregatorAreTargetStatesEqual @ 0x1409A38E8 (PopPowerAggregatorAreTargetStatesEqual.c)
 *     PopPowerAggregatorAllocateLogEntry @ 0x1409A3F9C (PopPowerAggregatorAllocateLogEntry.c)
 */

LARGE_INTEGER __fastcall PopPowerAggregatorRecordIntent(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  __int64 v8; // r12
  __int64 v10; // rsi
  int v12; // r15d
  __int64 v14; // rdi
  char *v15; // rbx
  LARGE_INTEGER result; // rax
  LARGE_INTEGER v17; // [rsp+70h] [rbp+8h] BYREF

  v8 = a8;
  v10 = a5;
  v12 = a7;
  v14 = a6;
  PopPowerAggregatorDiagTraceHandleIntent(a2, a3, a4, a5, a6, a7, a8);
  v15 = (char *)&unk_140F08F30 + 152 * (((unsigned __int8)dword_140F08F28 - 1) & 0x1F);
  if ( *(_DWORD *)v15 != 1
    || *((_DWORD *)v15 + 6) != a2
    || *((_DWORD *)v15 + 14) != a4
    || *((_DWORD *)v15 + 36) != v12
    || !(unsigned __int8)PopPowerAggregatorAreTargetStatesEqual(v15 + 64, v10)
    || !(unsigned __int8)PopPowerAggregatorAreTargetStatesEqual(v15 + 104, v14)
    || (result = (LARGE_INTEGER)(*(_QWORD *)&KeQueryInterruptTimePrecise(&v17) - *((_QWORD *)v15 + 1)),
        result.QuadPart >= 0x2FAF080uLL) )
  {
    result.QuadPart = PopPowerAggregatorAllocateLogEntry(&PopPowerAggregatorContext, 1LL);
    *(_DWORD *)(result.QuadPart + 24) = a2;
    *(_OWORD *)(result.QuadPart + 28) = *(_OWORD *)v8;
    *(_QWORD *)(result.QuadPart + 44) = *(_QWORD *)(v8 + 16);
    *(_DWORD *)(result.QuadPart + 52) = a3;
    *(_DWORD *)(result.QuadPart + 56) = a4;
    *(_OWORD *)(result.QuadPart + 64) = *(_OWORD *)v10;
    *(_OWORD *)(result.QuadPart + 80) = *(_OWORD *)(v10 + 16);
    *(_QWORD *)(result.QuadPart + 96) = *(_QWORD *)(v10 + 32);
    *(_OWORD *)(result.QuadPart + 104) = *(_OWORD *)v14;
    *(_OWORD *)(result.QuadPart + 120) = *(_OWORD *)(v14 + 16);
    *(_QWORD *)(result.QuadPart + 136) = *(_QWORD *)(v14 + 32);
    *(_DWORD *)(result.QuadPart + 144) = v12;
  }
  return result;
}
