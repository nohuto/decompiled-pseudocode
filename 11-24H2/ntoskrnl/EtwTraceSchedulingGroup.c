/*
 * XREFs of EtwTraceSchedulingGroup @ 0x14064C518
 * Callers:
 *     KeSetSchedulingGroupWeights @ 0x14045C2E8 (KeSetSchedulingGroupWeights.c)
 *     KeSetSchedulingGroupCpuRates @ 0x14045C5E8 (KeSetSchedulingGroupCpuRates.c)
 *     KeInsertSchedulingGroup @ 0x14045CB04 (KeInsertSchedulingGroup.c)
 *     KeSetSchedulingGroupRankBias @ 0x14045D344 (KeSetSchedulingGroupRankBias.c)
 *     KeRemoveSchedulingGroup @ 0x14049F368 (KeRemoveSchedulingGroup.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     EtwpConstructSchedulingGroupEvent @ 0x14064CAA8 (EtwpConstructSchedulingGroupEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceSchedulingGroup(__int64 a1)
{
  __int16 v1; // r10
  __int128 *v3; // [rsp+30h] [rbp-38h] BYREF
  int v4; // [rsp+38h] [rbp-30h]
  int v5; // [rsp+3Ch] [rbp-2Ch]
  __int128 v6; // [rsp+40h] [rbp-28h] BYREF
  __int64 v7; // [rsp+50h] [rbp-18h]

  v7 = 0LL;
  v6 = 0LL;
  EtwpConstructSchedulingGroupEvent(&v6, a1);
  v5 = 0;
  v3 = &v6;
  v4 = 24;
  return EtwTraceKernelEvent((int)&v3, 1, 0xA0004000, v1, 6297858);
}
