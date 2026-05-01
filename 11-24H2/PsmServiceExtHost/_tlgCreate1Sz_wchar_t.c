/*
 * XREFs of _tlgCreate1Sz_wchar_t @ 0x1800347F0
 * Callers:
 *     CrmLogActivityCoordinatorTelemetry @ 0x18002FC20 (CrmLogActivityCoordinatorTelemetry.c)
 *     CrmSrvActivityAllocate @ 0x180030E68 (CrmSrvActivityAllocate.c)
 *     CrmRpcSrvActivityAllocate @ 0x180031200 (CrmRpcSrvActivityAllocate.c)
 *     CrmLogSrvActivityStartStop @ 0x180032BF0 (CrmLogSrvActivityStartStop.c)
 *     CrmLogSrvActivityStopStop @ 0x180033BA0 (CrmLogSrvActivityStopStop.c)
 *     CrmLogSrvRegisterStop @ 0x18003E3E0 (CrmLogSrvRegisterStop.c)
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
    a2 = &word_1800C1FFC;
    result = 2LL;
  }
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = result;
  *(_DWORD *)(a1 + 12) = 0;
  return result;
}
