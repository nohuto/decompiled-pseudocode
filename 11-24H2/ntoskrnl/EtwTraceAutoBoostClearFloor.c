/*
 * XREFs of EtwTraceAutoBoostClearFloor @ 0x1404CB770
 * Callers:
 *     KiAbThreadRemoveBoostsSlow @ 0x140340980 (KiAbThreadRemoveBoostsSlow.c)
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x140348590 (EtwTraceSiloKernelEvent.c)
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledNoReportingNoInline @ 0x1404F5CFC (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledNoReportingNoInline.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

void __fastcall EtwTraceAutoBoostClearFloor(__int64 a1, __int64 a2, int a3)
{
  int IsEnabledNoReportingNoInline; // eax
  __int64 v5; // rcx
  __int64 v6; // [rsp+30h] [rbp-38h] BYREF
  int v7; // [rsp+38h] [rbp-30h]
  int v8; // [rsp+3Ch] [rbp-2Ch]
  __int64 *v9; // [rsp+40h] [rbp-28h] BYREF
  int v10; // [rsp+48h] [rbp-20h]
  int v11; // [rsp+4Ch] [rbp-1Ch]

  v7 = *(_DWORD *)(a1 + 1296);
  v6 = a2;
  v8 = a3;
  IsEnabledNoReportingNoInline = Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledNoReportingNoInline(
                                   a1,
                                   a2);
  v11 = 0;
  v9 = &v6;
  v5 = *(_QWORD *)(a1 + 544);
  v10 = 16;
  EtwTraceSiloKernelEvent(
    *(_QWORD *)(v5 + 1520),
    (__int64)&v9,
    1u,
    0xA0001000,
    1347,
    IsEnabledNoReportingNoInline != 0 ? 6299138 : 6298114);
}
