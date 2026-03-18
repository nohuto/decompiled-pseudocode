/*
 * XREFs of ?RegisterGraphWalkRoot@CThreadContext@@SAJPEBX@Z @ 0x1800B4150
 * Callers:
 *     ?UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180053BD0 (-UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV-$TMilRect_@MUD2D_RECT_F@@U.c)
 *     ??$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCInputSinkContext@@W4WalkReason@@@Z @ 0x1800ADC64 (--$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCInputSinkContex.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800BB3C0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ??A?$CPtrArray@$$CBX@@QEBAPEBX_K@Z @ 0x180021770 (--A-$CPtrArray@$$CBX@@QEBAPEBX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800B4B40 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180251704 (--0CThreadContext@@AEAA@XZ.c)
 */

__int64 __fastcall CThreadContext::RegisterGraphWalkRoot(unsigned __int64 *a1)
{
  _QWORD *Value; // rbx
  __int64 v3; // r8
  unsigned __int64 v4; // r8
  unsigned __int64 i; // rdx
  __int64 *v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v10; // rdx
  HANDLE ProcessHeap; // rax
  CThreadContext *v12; // rax
  CThreadContext *v13; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    ProcessHeap = GetProcessHeap();
    v12 = (CThreadContext *)HeapAlloc(ProcessHeap, 0, 0x1C0uLL);
    if ( !v12 || (v13 = CThreadContext::CThreadContext(v12), (Value = v13) == 0LL) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x28u, 0LL);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4C,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\threadcontext.cpp",
        (const char *)0x8007000ELL);
      return 2147942414LL;
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, v13);
  }
  v3 = Value[4];
  if ( (v3 & 2) != 0 )
    v4 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    v4 = Value[4] & 1LL;
  for ( i = 0LL; ; i = v10 + 1 )
  {
    v6 = Value + 4;
    if ( i >= v4 )
      break;
    if ( a1 == __A__CPtrArray___CBX__QEBAPEBX_K_Z(v6, i) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x55,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\threadcontext.cpp",
        (const char *)0x80004004LL);
      return 2147500036LL;
    }
  }
  v7 = CPtrArrayBase::InsertAt((CPtrArrayBase *)v6, (unsigned __int64)a1, v4);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x59,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\threadcontext.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
