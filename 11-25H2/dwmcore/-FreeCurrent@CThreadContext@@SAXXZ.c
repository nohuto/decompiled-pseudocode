/*
 * XREFs of ?FreeCurrent@CThreadContext@@SAXXZ @ 0x18021D570
 * Callers:
 *     ?DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z @ 0x18021D4CC (-DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     ??1CThreadContext@@AEAA@XZ @ 0x1802B76E4 (--1CThreadContext@@AEAA@XZ.c)
 */

void CThreadContext::FreeCurrent(void)
{
  CThreadContext *Value; // rax
  CThreadContext *v1; // rbx

  Value = (CThreadContext *)TlsGetValue(CThreadContext::s_dwTlsIndex);
  v1 = Value;
  if ( Value )
  {
    CThreadContext::~CThreadContext(Value);
    operator delete(v1, 0x1C0uLL);
    TlsSetValue(CThreadContext::s_dwTlsIndex, 0LL);
  }
}
