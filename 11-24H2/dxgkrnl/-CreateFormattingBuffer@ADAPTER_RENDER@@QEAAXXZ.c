/*
 * XREFs of ?CreateFormattingBuffer@ADAPTER_RENDER@@QEAAXXZ @ 0x14019C2D0
 * Callers:
 *     ?EnableFormattingBuffer@ADAPTER_RENDER@@QEAAXH@Z @ 0x14019D54C (-EnableFormattingBuffer@ADAPTER_RENDER@@QEAAXH@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

void __fastcall ADAPTER_RENDER::CreateFormattingBuffer(ADAPTER_RENDER *this)
{
  if ( *((_QWORD *)this + 156) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4376;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_pFormattingBuffer == NULL", 4376LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !*((_QWORD *)this + 156) )
    *((_QWORD *)this + 156) = operator new[](0xFC00uLL, 0x4B677844u, 64LL);
}
