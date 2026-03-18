/*
 * XREFs of ?GetVidPnSourceId@DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAAIXZ @ 0x1400517E4
 * Callers:
 *     DxgkSetIndependentFlipMode @ 0x1403AC16C (DxgkSetIndependentFlipMode.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::GetVidPnSourceId(
        DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *this)
{
  if ( !*(_DWORD *)this )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1930;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"vidPnSourceMask != 0", 1930LL, 0LL, 0LL, 0LL, 0LL);
  }
  return *((unsigned int *)this + 1);
}
