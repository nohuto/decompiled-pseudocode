/*
 * XREFs of EtwTraceAutoBoostEntryExhaustion @ 0x14031FDAC
 * Callers:
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x1403C1FD0 (EtwTraceSiloKernelEvent.c)
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledNoReportingNoInline @ 0x1404F35FC (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledNoReportingNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceAutoBoostEntryExhaustion(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // [rsp+30h] [rbp-38h] BYREF
  int v8; // [rsp+38h] [rbp-30h]
  int v9; // [rsp+3Ch] [rbp-2Ch]
  __int64 *v10; // [rsp+40h] [rbp-28h] BYREF
  int v11; // [rsp+48h] [rbp-20h]
  int v12; // [rsp+4Ch] [rbp-1Ch]

  v9 = 0;
  result = Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledNoReportingNoInline();
  if ( !(_DWORD)result )
  {
    v5 = *(_DWORD *)(a1 + 1296);
    v6 = *(_QWORD *)(a1 + 544);
    v12 = 0;
    v8 = v5;
    v10 = &v7;
    v7 = a2;
    v11 = 16;
    return EtwTraceSiloKernelEvent(*(_QWORD *)(v6 + 1520), (unsigned int)&v10, 1, -1610608640, 1348, 6298114);
  }
  return result;
}
