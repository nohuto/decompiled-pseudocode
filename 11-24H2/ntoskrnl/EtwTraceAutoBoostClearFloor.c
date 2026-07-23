/*
 * XREFs of EtwTraceAutoBoostClearFloor @ 0x1403C11EC
 * Callers:
 *     KiAbThreadRemoveBoostsSlow @ 0x14031FE60 (KiAbThreadRemoveBoostsSlow.c)
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x1403C1FD0 (EtwTraceSiloKernelEvent.c)
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledNoReportingNoInline @ 0x1404F35FC (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledNoReportingNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceAutoBoostClearFloor(__int64 a1, __int64 a2, int a3)
{
  int IsEnabledNoReportingNoInline; // eax
  __int64 v5; // rcx
  __int64 v7; // [rsp+30h] [rbp-38h] BYREF
  int v8; // [rsp+38h] [rbp-30h]
  int v9; // [rsp+3Ch] [rbp-2Ch]
  __int64 *v10; // [rsp+40h] [rbp-28h] BYREF
  int v11; // [rsp+48h] [rbp-20h]
  int v12; // [rsp+4Ch] [rbp-1Ch]

  v8 = *(_DWORD *)(a1 + 1296);
  v7 = a2;
  v9 = a3;
  IsEnabledNoReportingNoInline = Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledNoReportingNoInline(
                                   a1,
                                   a2);
  v12 = 0;
  v10 = &v7;
  v5 = *(_QWORD *)(a1 + 544);
  v11 = 16;
  return EtwTraceSiloKernelEvent(
           *(_QWORD *)(v5 + 1520),
           (unsigned int)&v10,
           1,
           -1610608640,
           1347,
           IsEnabledNoReportingNoInline != 0 ? 6299138 : 6298114);
}
