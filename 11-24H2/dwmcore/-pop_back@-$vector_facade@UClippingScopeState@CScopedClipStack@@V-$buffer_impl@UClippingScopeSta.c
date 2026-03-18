/*
 * XREFs of ?pop_back@?$vector_facade@UClippingScopeState@CScopedClipStack@@V?$buffer_impl@UClippingScopeState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800FDC70
 * Callers:
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x180051E30 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180056180 (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z @ 0x1800CEC00 (-FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z.c)
 *     ??1CTryIgnoreCpuClippingScope@CDrawingContext@@QEAA@XZ @ 0x1800FDC20 (--1CTryIgnoreCpuClippingScope@CDrawingContext@@QEAA@XZ.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@_J@Z @ 0x1800FDF68 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdex.c)
 *     ??4ClippingScopeState@CScopedClipStack@@QEAAAEAU01@$$QEAU01@@Z @ 0x180263ED4 (--4ClippingScopeState@CScopedClipStack@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall detail::vector_facade<CScopedClipStack::ClippingScopeState,detail::buffer_impl<CScopedClipStack::ClippingScopeState,10,1,detail::liberal_expansion_policy>>::pop_back(
        __int64 *a1)
{
  __int64 v1; // rdi
  unsigned __int64 v2; // r11
  __int64 v3; // r9
  signed __int64 v5; // rdx
  unsigned __int64 v6; // r8
  signed __int64 v7; // r10
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // rbx
  __int64 v12; // rsi
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0xAAAAAAAAAAAAAAABuLL;
  v3 = *a1;
  v5 = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - *a1 - 192) >> 6);
  v6 = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - *a1) >> 6);
  v7 = v5 + 1;
  if ( v5 + 1 > v6 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    goto LABEL_17;
  }
  v1 = v3 + ((a1[1] - *a1) >> 6 << 6);
  if ( v7 != v6 )
  {
    if ( !v5 )
      goto LABEL_12;
    if ( !v3 || v5 < 0 )
LABEL_15:
      _invalid_parameter_noinfo_noreturn();
LABEL_17:
    if ( v6 < v5 )
      goto LABEL_15;
LABEL_12:
    v13[2] = v5;
    v11 = v3 + 192 * v7;
    v13[0] = v3;
    v13[1] = v6;
    v12 = std::_Get_unwrapped_n<stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *> &,__int64>(
            v13,
            v2 * ((v1 - v11) >> 6))
        - v11;
    while ( v11 != v1 )
    {
      CScopedClipStack::ClippingScopeState::operator=(v12 + v11, v11);
      v11 += 192LL;
    }
  }
  v8 = v1 - 192;
  do
  {
    v9 = *(_QWORD *)(v8 + 176);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    v8 += 192LL;
  }
  while ( v8 != v1 );
  result = a1[1] - 192;
  a1[1] = result;
  return result;
}
