/*
 * XREFs of ?CreateFormattingBuffer@ADAPTER_RENDER@@QEAAXXZ @ 0x140199DE0
 * Callers:
 *     ?EnableFormattingBuffer@ADAPTER_RENDER@@QEAAXH@Z @ 0x14019B0DC (-EnableFormattingBuffer@ADAPTER_RENDER@@QEAAXH@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall ADAPTER_RENDER::CreateFormattingBuffer(ADAPTER_RENDER *this, __int64 a2, __int64 a3, __int64 a4)
{
  if ( *((_QWORD *)this + 156) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4377;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_pFormattingBuffer == NULL", 4377LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !*((_QWORD *)this + 156) )
    *((_QWORD *)this + 156) = operator new[](0xFC00uLL, 0x4B677844u, 64LL, a4);
}
