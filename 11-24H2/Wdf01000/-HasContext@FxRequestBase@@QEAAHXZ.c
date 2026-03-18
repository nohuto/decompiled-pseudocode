/*
 * XREFs of ?HasContext@FxRequestBase@@QEAAHXZ @ 0x140067E08
 * Callers:
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x140021A60 (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxRequestBase::HasContext(FxRequestBase *this)
{
  FxRequestContext *m_RequestContext; // rdx
  __int64 result; // rax

  m_RequestContext = this->m_RequestContext;
  result = 0LL;
  if ( m_RequestContext )
  {
    if ( m_RequestContext->m_RequestType )
      return 1LL;
  }
  return result;
}
