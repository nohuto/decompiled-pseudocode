/*
 * XREFs of ?ValidateReportData@HidLampRangeUpdateReportParser@@AEAAJPEBULampRangeUpdateDeviceReport@@@Z @ 0x1800ED96C
 * Callers:
 *     ?CreateAndInitializeOutputBuffer@HidLampRangeUpdateReportParser@@QEAAJPEBULampRangeUpdateDeviceReport@@AEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x180064DE0 (-CreateAndInitializeOutputBuffer@HidLampRangeUpdateReportParser@@QEAAJPEBULampRangeUpdateDeviceR.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HidLampRangeUpdateReportParser::ValidateReportData(
        HidLampRangeUpdateReportParser *this,
        const struct LampRangeUpdateDeviceReport *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( !*((_BYTE *)this + 528) && *((_DWORD *)a2 + 1) > *((_DWORD *)a2 + 2) )
    return 2147942487LL;
  return result;
}
