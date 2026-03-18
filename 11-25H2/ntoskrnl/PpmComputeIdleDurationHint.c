/*
 * XREFs of PpmComputeIdleDurationHint @ 0x1404B2830
 * Callers:
 *     PpmIdleSelectStates @ 0x1404B1F28 (PpmIdleSelectStates.c)
 * Callees:
 *     PpmEstimateIdleDuration @ 0x1404B28E4 (PpmEstimateIdleDuration.c)
 */

__int64 __fastcall PpmComputeIdleDurationHint(__int64 a1, int a2, int a3, char a4)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // [rsp+50h] [rbp-10h] BYREF
  __int64 v9; // [rsp+80h] [rbp+20h] BYREF
  int v10; // [rsp+88h] [rbp+28h] BYREF
  int v11; // [rsp+98h] [rbp+38h] BYREF

  v10 = a2;
  v4 = *(_QWORD *)(a1 + 34880);
  v8 = 0LL;
  v10 = 0;
  v11 = 0;
  v9 = 0LL;
  if ( !a4 || KiClockTimerPerCpuTickScheduling || *(_BYTE *)(a1 + 33) )
    v5 = -1LL;
  else
    v5 = PpmPerfQosIdleExpirationTimeout;
  PpmEstimateIdleDuration(a1, 0, 0, a3, v5, (__int64)&v8, (__int64)&v9, (__int64)&v10, (__int64)&v11);
  *(_WORD *)(v4 + 56) |= v11;
  v6 = v9;
  *(_QWORD *)(v4 + 8) = v5;
  *(_QWORD *)(v4 + 696) = v6;
  *(_BYTE *)(v4 + 717) = v10;
  result = v8;
  *(_QWORD *)(v4 + 688) = v8;
  return result;
}
