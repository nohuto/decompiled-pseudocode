/*
 * XREFs of EtwTraceScbRundown @ 0x14064C47C
 * Callers:
 *     ?KiLogSingleSchedulingGroupRundown@@YAXPEAU_ETW_SILODRIVERSTATE@@KPEAU_KSCHEDULING_GROUP@@@Z @ 0x1405C4D64 (-KiLogSingleSchedulingGroupRundown@@YAXPEAU_ETW_SILODRIVERSTATE@@KPEAU_KSCHEDULING_GROUP@@@Z.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x140287790 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

int __fastcall EtwTraceScbRundown(__int64 a1, unsigned int a2, __int64 a3, int a4, int a5, char a6)
{
  __int64 v7; // [rsp+30h] [rbp-38h] BYREF
  int v8; // [rsp+38h] [rbp-30h]
  int v9; // [rsp+3Ch] [rbp-2Ch]
  __int64 v10; // [rsp+40h] [rbp-28h]
  __int64 *v11; // [rsp+48h] [rbp-20h] BYREF
  int v12; // [rsp+50h] [rbp-18h]
  int v13; // [rsp+54h] [rbp-14h]

  v7 = a3;
  v8 = a4;
  v9 = a5;
  v11 = &v7;
  v13 = 0;
  v10 = a6 & 1;
  v12 = 24;
  return EtwpLogKernelEvent((__int64)&v11, a1, a2, 1u, 1382, 0x600102u);
}
