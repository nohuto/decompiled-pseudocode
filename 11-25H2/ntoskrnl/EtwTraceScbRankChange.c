/*
 * XREFs of EtwTraceScbRankChange @ 0x1404F4C94
 * Callers:
 *     ?KiUpdateCpuTargetByRate@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x1402F61B0 (-KiUpdateCpuTargetByRate@@YAXPEAU_KSCHEDULING_GROUP@@E@Z.c)
 *     KeSetSchedulingGroupRankBias @ 0x1402F6544 (KeSetSchedulingGroupRankBias.c)
 *     ?KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x1402F6B24 (-KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z.c)
 *     KiProcessScbTracingList @ 0x140454D48 (KiProcessScbTracingList.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140254220 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceScbRankChange(__int64 a1, int a2, int a3, char a4)
{
  __int64 *v5; // [rsp+30h] [rbp-38h] BYREF
  int v6; // [rsp+38h] [rbp-30h]
  int v7; // [rsp+3Ch] [rbp-2Ch]
  __int64 v8; // [rsp+40h] [rbp-28h] BYREF
  int v9; // [rsp+48h] [rbp-20h]
  int v10; // [rsp+4Ch] [rbp-1Ch]
  int v11; // [rsp+50h] [rbp-18h]
  int v12; // [rsp+54h] [rbp-14h]

  v12 = 0;
  v8 = a1;
  v9 = a2;
  v10 = a3;
  v11 = a4 & 1;
  v5 = &v8;
  v7 = 0;
  v6 = 24;
  return EtwTraceKernelEvent((int)&v5, 1, 0xA0004000, 1383, 6295298);
}
