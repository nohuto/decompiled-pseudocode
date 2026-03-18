/*
 * XREFs of ?Start@FxIoTarget@@UEAAJXZ @ 0x14006C050
 * Callers:
 *     ?Start@FxUsbDevice@@MEAAJXZ @ 0x14006BEA0 (-Start@FxUsbDevice@@MEAAJXZ.c)
 * Callees:
 *     ?SubmitPendedRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x140004694 (-SubmitPendedRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxIoTarget::Start(FxIoTarget *this, __int64 a2, __int64 a3)
{
  unsigned int _a2; // edi
  _LIST_ENTRY *Flink; // rdx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _LIST_ENTRY *v8; // rax
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // rbx
  _LIST_ENTRY head; // [rsp+40h] [rbp-18h] BYREF

  LOBYTE(a3) = 1;
  head.Blink = &head;
  head.Flink = &head;
  _a2 = this->GotoStartState(this, &head, a3);
  while ( 1 )
  {
    Flink = head.Flink;
    if ( head.Flink == &head )
      break;
    if ( head.Flink->Blink != &head || (v8 = head.Flink->Flink, head.Flink->Flink->Blink != head.Flink) )
      __fastfail(3u);
    head.Flink = head.Flink->Flink;
    v8->Blink = &head;
    FxIoTarget::SubmitPendedRequest(this, (FxRequestBase *)&Flink[-8].Blink);
  }
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    m_ObjectSize = this->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 5u, 0xEu, 0xEu, WPP_FxIoTarget_cpp_Traceguids, _a1, _a2);
  }
  return _a2;
}
