/*
 * XREFs of DpiGetVirtualizationFlags @ 0x140242220
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x140237020 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x140055794 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     DpiIovGetVirtualizationFlags @ 0x1402483C0 (DpiIovGetVirtualizationFlags.c)
 */

__int64 __fastcall DpiGetVirtualizationFlags(
        void *a1,
        int a2,
        _QWORD *a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        _QWORD *a7)
{
  int VirtualizationFlags; // ebx

  if ( bTracingEnabled )
    VgpuTrace(1, 0, a1, L"DpiGetVirtualizationFlags", 0LL);
  if ( a4 >= 8 && a3 && a6 >= 4 && a5 )
  {
    VirtualizationFlags = DpiIovGetVirtualizationFlags(*((_QWORD *)a1 + 8) + (a2 != 0 ? 5544LL : 5512LL), *a3);
    if ( VirtualizationFlags >= 0 )
      *a7 = 4LL;
  }
  else
  {
    VirtualizationFlags = -1073741789;
    WdLogSingleEntry1(2LL, -1073741789LL);
    WdLogGlobalForLineNumber = 3343;
  }
  if ( bTracingEnabled )
    VgpuTrace(0, VirtualizationFlags, a1, L"DpiGetVirtualizationFlags", 0LL);
  return (unsigned int)VirtualizationFlags;
}
