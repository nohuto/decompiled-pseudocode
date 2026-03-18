/*
 * XREFs of ?IsLockedByCurrentThread@CTreeLock@@QEBA_NXZ @ 0x180023060
 * Callers:
 *     ?GetVisualNoRef@CVisualReferenceController@@UEBAPEAVCVisual@@XZ @ 0x180022220 (-GetVisualNoRef@CVisualReferenceController@@UEBAPEAVCVisual@@XZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180251704 (--0CThreadContext@@AEAA@XZ.c)
 */

bool __fastcall CTreeLock::IsLockedByCurrentThread(CTreeLock *this)
{
  _DWORD *Value; // rbx
  HANDLE ProcessHeap; // rax
  CThreadContext *v3; // rax
  CThreadContext *v4; // rax

  if ( GetCurrentThreadId() == *((_DWORD *)this + 2) )
    return 1;
  Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    ProcessHeap = GetProcessHeap();
    v3 = (CThreadContext *)HeapAlloc(ProcessHeap, 0, 0x1C0uLL);
    if ( !v3 || (v4 = CThreadContext::CThreadContext(v3), (Value = v4) == 0LL) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x28u, 0LL);
      return 0;
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, v4);
  }
  return Value[10] != 0;
}
