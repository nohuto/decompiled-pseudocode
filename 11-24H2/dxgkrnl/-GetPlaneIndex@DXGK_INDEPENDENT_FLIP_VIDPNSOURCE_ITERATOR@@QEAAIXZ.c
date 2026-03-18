/*
 * XREFs of ?GetPlaneIndex@DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAAIXZ @ 0x140050384
 * Callers:
 *     DxgkSetIndependentFlipMode @ 0x14039E10C (DxgkSetIndependentFlipMode.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::GetPlaneIndex(
        DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *this)
{
  if ( !*(_DWORD *)this )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1942;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"vidPnSourceMask != 0", 1942LL, 0LL, 0LL, 0LL, 0LL);
  }
  return *(unsigned int *)(*((_QWORD *)this + 2) + 4LL * *((unsigned int *)this + 2));
}
