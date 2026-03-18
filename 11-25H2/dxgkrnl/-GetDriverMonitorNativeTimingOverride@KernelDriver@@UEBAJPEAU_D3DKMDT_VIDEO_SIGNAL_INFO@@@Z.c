/*
 * XREFs of ?GetDriverMonitorNativeTimingOverride@KernelDriver@@UEBAJPEAU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1402766B0
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetMonitorNativeTimingOverride @ 0x14024DE70 (DpiGetMonitorNativeTimingOverride.c)
 */

__int64 __fastcall KernelDriver::GetDriverMonitorNativeTimingOverride(
        KernelDriver *this,
        struct _D3DKMDT_VIDEO_SIGNAL_INFO *a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  v2 = *((_QWORD *)this + 3);
  if ( v2 )
    return DpiGetMonitorNativeTimingOverride(*(_QWORD *)(*(_QWORD *)(v2 + 16) + 216LL), *((_DWORD *)this + 8), a2);
  WdLogSingleEntry1(2LL, -1073741632LL);
  result = 3221225664LL;
  WdLogGlobalForLineNumber = 60;
  return result;
}
