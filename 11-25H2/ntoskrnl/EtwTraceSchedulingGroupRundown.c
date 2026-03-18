/*
 * XREFs of EtwTraceSchedulingGroupRundown @ 0x140641FCC
 * Callers:
 *     ?KiLogSingleSchedulingGroupRundown@@YAXPEAU_ETW_SILODRIVERSTATE@@KPEAU_KSCHEDULING_GROUP@@@Z @ 0x1405C3294 (-KiLogSingleSchedulingGroupRundown@@YAXPEAU_ETW_SILODRIVERSTATE@@KPEAU_KSCHEDULING_GROUP@@@Z.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1402561B0 (EtwpLogKernelEvent.c)
 *     EtwpConstructSchedulingGroupEvent @ 0x1406424D8 (EtwpConstructSchedulingGroupEvent.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

int __fastcall EtwTraceSchedulingGroupRundown(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r10
  unsigned int v4; // r11d
  __int128 v6; // [rsp+30h] [rbp-38h] BYREF
  __int64 v7; // [rsp+40h] [rbp-28h]
  __int128 *v8; // [rsp+48h] [rbp-20h] BYREF
  int v9; // [rsp+50h] [rbp-18h]
  int v10; // [rsp+54h] [rbp-14h]

  v7 = 0LL;
  v6 = 0LL;
  EtwpConstructSchedulingGroupEvent(&v6, a3);
  v10 = 0;
  v8 = &v6;
  v9 = 24;
  return EtwpLogKernelEvent((struct _KTHREAD *)&v8, v3, v4, 1u, 0x565u, 0x600102u);
}
