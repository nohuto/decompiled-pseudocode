/*
 * XREFs of WheaReportFatalHwErrorDeviceDriverEx @ 0x14065AAF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchCopyA @ 0x14044D468 (RtlStringCchCopyA.c)
 *     WheaAddHwErrorReportSectionDeviceDriver @ 0x14065A6F0 (WheaAddHwErrorReportSectionDeviceDriver.c)
 *     WheaCreateHwErrorReportDeviceDriver @ 0x14065A800 (WheaCreateHwErrorReportDeviceDriver.c)
 *     WheaHwErrorReportAbandonDeviceDriver @ 0x14065A830 (WheaHwErrorReportAbandonDeviceDriver.c)
 *     WheaHwErrorReportGetLogDataBufferDeviceDriver @ 0x14065A860 (WheaHwErrorReportGetLogDataBufferDeviceDriver.c)
 *     WheaHwErrorReportSetFatalSeverityDeviceDriver @ 0x14065A8E0 (WheaHwErrorReportSetFatalSeverityDeviceDriver.c)
 *     WheaHwErrorReportSubmitDeviceDriver @ 0x14065A9D0 (WheaHwErrorReportSubmitDeviceDriver.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall WheaReportFatalHwErrorDeviceDriverEx(
        __int64 a1,
        __int64 a2,
        const void *a3,
        unsigned int a4,
        void *Src,
        unsigned int Size,
        _OWORD *a7,
        __int64 a8,
        const char *pszSrc,
        __int64 a10,
        __int64 a11)
{
  size_t v11; // rsi
  __int64 HwErrorReportDeviceDriver; // rax
  char *v14; // rdi
  int v15; // ebx
  void *v17[2]; // [rsp+28h] [rbp-30h] BYREF
  NTSTRSAFE_PSTR pszDest[2]; // [rsp+38h] [rbp-20h]
  _BYTE *v19; // [rsp+48h] [rbp-10h]

  v11 = a4;
  *(_OWORD *)v17 = 0LL;
  *(_OWORD *)pszDest = 0LL;
  v19 = 0LL;
  HwErrorReportDeviceDriver = WheaCreateHwErrorReportDeviceDriver(a1);
  v14 = (char *)HwErrorReportDeviceDriver;
  if ( HwErrorReportDeviceDriver )
  {
    WheaHwErrorReportSetFatalSeverityDeviceDriver(HwErrorReportDeviceDriver, a11);
    WheaHwErrorReportGetLogDataBufferDeviceDriver();
    memmove(0LL, Src, Size);
    v15 = WheaAddHwErrorReportSectionDeviceDriver((__int64)v14, v11, (__int64)v17);
    if ( v15 >= 0 )
    {
      memmove(*(void **)((char *)v17 + 4), a3, v11);
      *(_OWORD *)pszDest[0] = *a7;
      *v19 = 1;
      if ( pszSrc )
        RtlStringCchCopyA(pszDest[1], 0x14uLL, pszSrc);
      return (unsigned int)WheaHwErrorReportSubmitDeviceDriver(v14);
    }
    else
    {
      WheaHwErrorReportAbandonDeviceDriver();
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v15;
}
