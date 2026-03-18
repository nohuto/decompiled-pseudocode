/*
 * XREFs of ??_GCCommonRenderingEffect@@MEAAPEAXI@Z @ 0x18004D2C0
 * Callers:
 *     ?InternalRelease@?$CMILRefCountBaseT@VCRenderingEffect@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18004D160 (-InternalRelease@-$CMILRefCountBaseT@VCRenderingEffect@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18004D620 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x18020AD40 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x1802467D8 (--0CThreadContext@@AEAA@XZ.c)
 */

CCommonRenderingEffect *__fastcall CCommonRenderingEffect::`scalar deleting destructor'(
        CCommonRenderingEffect *this,
        char a2)
{
  _QWORD *Value; // rdi
  CCommonRenderingEffect *result; // rax
  HANDLE ProcessHeap; // rax
  CThreadContext *v7; // rax
  CThreadContext *v8; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  CDrawListBitmap::~CDrawListBitmap((CCommonRenderingEffect *)((char *)this + 40));
  CDrawListBitmap::~CDrawListBitmap((CCommonRenderingEffect *)((char *)this + 16));
  if ( (a2 & 1) == 0 )
    return this;
  if ( (a2 & 4) != 0 )
  {
    CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 72LL);
    return this;
  }
  Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v7 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
    if ( !v7 || (v8 = CThreadContext::CThreadContext(v7), (Value = v8) == 0LL) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x28u, 0LL);
      ModuleFailFastForHRESULT(-2147024882, retaddr);
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, v8);
  }
  if ( *((_DWORD *)Value + 69) < *((_DWORD *)Value + 68) )
  {
    *(_QWORD *)this = Value[35];
    result = this;
    ++*((_DWORD *)Value + 69);
    Value[35] = this;
  }
  else
  {
    if ( !this )
      return this;
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, this);
    return this;
  }
  return result;
}
