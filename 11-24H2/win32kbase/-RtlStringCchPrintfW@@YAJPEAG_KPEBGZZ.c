/*
 * XREFs of ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1400A07C0
 * Callers:
 *     OpenCacheKeyEx @ 0x1400A0010 (OpenCacheKeyEx.c)
 *     ?SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z @ 0x1400A22EC (-SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?UserInitialize@@YAJXZ @ 0x14013264C (-UserInitialize@@YAJXZ.c)
 *     rimReadSingleDigitizerToMonitorMappings @ 0x140151838 (rimReadSingleDigitizerToMonitorMappings.c)
 *     ?DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z @ 0x14015BCB8 (-DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z @ 0x14015C3B4 (-SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z.c)
 *     xxxSystemParametersInfo @ 0x140173780 (xxxSystemParametersInfo.c)
 *     ?SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z @ 0x14019AC10 (-SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z.c)
 *     ?SetFilterKeys@@YAHPEAUtagFILTERKEYS@@@Z @ 0x1401BE270 (-SetFilterKeys@@YAHPEAUtagFILTERKEYS@@@Z.c)
 * Callees:
 *     _vsnwprintf @ 0x1401A03CC (_vsnwprintf.c)
 */

__int64 RtlStringCchPrintfW(unsigned __int16 *a1, __int64 a2, const unsigned __int16 *a3, ...)
{
  unsigned __int64 v4; // rsi
  unsigned int v5; // edi
  int v6; // eax
  va_list Args; // [rsp+78h] [rbp+20h] BYREF

  va_start(Args, a3);
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
  {
    v5 = -1073741811;
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    v4 = a2 - 1;
    v5 = 0;
    v6 = vsnwprintf(a1, a2 - 1, a3, Args);
    if ( v6 < 0 || v6 > v4 )
    {
      v5 = -2147483643;
LABEL_7:
      a1[v4] = 0;
      return v5;
    }
    if ( v6 == v4 )
      goto LABEL_7;
  }
  return v5;
}
