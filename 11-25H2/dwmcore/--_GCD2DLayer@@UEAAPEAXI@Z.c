/*
 * XREFs of ??_GCD2DLayer@@UEAAPEAXI@Z @ 0x1801D7E80
 * Callers:
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x1800A48A0 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D.c)
 * Callees:
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x180217010 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180251704 (--0CThreadContext@@AEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CD2DLayer *__fastcall CD2DLayer::`scalar deleting destructor'(CD2DLayer *this, char a2)
{
  __int64 v4; // rcx
  _DWORD *Value; // rbx
  HANDLE ProcessHeap; // rax
  CD2DLayer *result; // rax
  CThreadContext *v8; // rax
  CThreadContext *v9; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = *((_QWORD *)this + 3);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  if ( (a2 & 1) == 0 )
    return this;
  if ( (a2 & 4) != 0 )
  {
    CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 80LL);
    return this;
  }
  Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v8 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
    if ( !v8 || (v9 = CThreadContext::CThreadContext(v8), (Value = v9) == 0LL) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x28u, 0LL);
      ModuleFailFastForHRESULT(-2147024882, retaddr);
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, v9);
  }
  if ( Value[109] >= Value[108] )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, this);
    return this;
  }
  *(_QWORD *)this = *((_QWORD *)Value + 55);
  result = this;
  ++Value[109];
  *((_QWORD *)Value + 55) = this;
  return result;
}
