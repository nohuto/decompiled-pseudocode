/*
 * XREFs of ?ReleaseAndRestore@FxInternalIoctlOthersContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x140059C60
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeMdls@FxRequestBase@@QEAAXXZ @ 0x140059D30 (-FreeMdls@FxRequestBase@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 *     memset @ 0x1400AC740 (memset.c)
 */

void __fastcall FxInternalIoctlOthersContext::ReleaseAndRestore(
        FxInternalIoctlOthersContext *this,
        FxRequestBase *Request)
{
  IFxMemory **m_MemoryObjects; // rbx
  __int64 v5; // rsi
  IFxMemory *m_RequestMemory; // rcx

  m_MemoryObjects = this->m_MemoryObjects;
  v5 = 2LL;
  do
  {
    if ( *m_MemoryObjects )
    {
      (*m_MemoryObjects)->Release(
        *m_MemoryObjects,
        this,
        153,
        "minkernel\\wdf\\framework\\shared\\inc\\private\\common\\FxIoTarget.hpp");
      *m_MemoryObjects = 0LL;
    }
    ++m_MemoryObjects;
    --v5;
  }
  while ( v5 );
  FxRequestBase::FreeMdls(Request);
  m_RequestMemory = this->m_RequestMemory;
  if ( m_RequestMemory )
  {
    m_RequestMemory->Release(
      m_RequestMemory,
      this,
      112,
      "minkernel\\wdf\\framework\\shared\\core\\fxrequestcontext.cpp");
    this->m_RequestMemory = 0LL;
  }
  memset(&this->m_CompletionParams, 0, sizeof(this->m_CompletionParams));
  this->m_CompletionParams.Size = 72;
  this->m_CompletionParams.Type = WdfRequestTypeNoFormat;
}
