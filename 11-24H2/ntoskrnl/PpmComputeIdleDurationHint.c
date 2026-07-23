/*
 * XREFs of PpmComputeIdleDurationHint @ 0x1404BC138
 * Callers:
 *     PpmIdleSelectStates @ 0x1404E1498 (PpmIdleSelectStates.c)
 * Callees:
 *     PpmEstimateIdleDuration @ 0x1404BC1F4 (PpmEstimateIdleDuration.c)
 */

__int64 __fastcall PpmComputeIdleDurationHint(__int64 a1, int a2, int a3, char a4, int a5)
{
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // [rsp+50h] [rbp-10h] BYREF
  __int64 v10; // [rsp+80h] [rbp+20h] BYREF
  int v11; // [rsp+88h] [rbp+28h] BYREF
  int v12; // [rsp+98h] [rbp+38h] BYREF

  v11 = a2;
  v5 = *(_QWORD *)(a1 + 34880);
  v9 = 0LL;
  v11 = 0;
  v12 = 0;
  v10 = 0LL;
  if ( !a4 || KiClockTimerPerCpuTickScheduling || *(_BYTE *)(a1 + 33) )
    v6 = -1LL;
  else
    v6 = PpmPerfQosIdleExpirationTimeout;
  PpmEstimateIdleDuration(a1, 0, 0, a3, v6, (__int64)&v9, (__int64)&v10, (__int64)&v11, (__int64)&v12, a5);
  *(_WORD *)(v5 + 56) |= v12;
  v7 = v10;
  *(_QWORD *)(v5 + 8) = v6;
  *(_QWORD *)(v5 + 696) = v7;
  *(_BYTE *)(v5 + 717) = v11;
  result = v9;
  *(_QWORD *)(v5 + 688) = v9;
  return result;
}
