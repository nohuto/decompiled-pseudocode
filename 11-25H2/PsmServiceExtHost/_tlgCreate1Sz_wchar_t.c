/*
 * XREFs of _tlgCreate1Sz_wchar_t @ 0x180034870
 * Callers:
 *     CrmLogActivityCoordinatorTelemetry @ 0x18002FCA0 (CrmLogActivityCoordinatorTelemetry.c)
 *     CrmSrvActivityAllocate @ 0x180030EE8 (CrmSrvActivityAllocate.c)
 *     CrmRpcSrvActivityAllocate @ 0x180031280 (CrmRpcSrvActivityAllocate.c)
 *     CrmLogSrvActivityStartStop @ 0x180032C70 (CrmLogSrvActivityStartStop.c)
 *     CrmLogSrvActivityStopStop @ 0x180033C20 (CrmLogSrvActivityStopStop.c)
 *     CrmLogSrvRegisterStop @ 0x18003E460 (CrmLogSrvRegisterStop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tlgCreate1Sz_wchar_t(__int64 a1, const wchar_t *a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  if ( a2 )
  {
    v2 = -1LL;
    while ( a2[++v2] != 0 )
      ;
    result = (unsigned int)(2 * v2 + 2);
  }
  else
  {
    a2 = &word_1800C10AC;
    result = 2LL;
  }
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = result;
  *(_DWORD *)(a1 + 12) = 0;
  return result;
}
