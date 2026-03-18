/*
 * XREFs of ?PopClippingScope@CDrawingContext@@AEAAX_N@Z @ 0x1800FDDF0
 * Callers:
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x180051E30 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z @ 0x1800CEC00 (-FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z.c)
 *     ?Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800F7058 (-Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV-$TMil3DRect@MV-$TMilRect_@MUD.c)
 *     ?StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@@Z @ 0x1800FD464 (-StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x18013F440 (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@_J@Z @ 0x1800FDF68 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdex.c)
 *     ??4ClippingScopeState@CScopedClipStack@@QEAAAEAU01@$$QEAU01@@Z @ 0x180263ED4 (--4ClippingScopeState@CScopedClipStack@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDrawingContext::PopClippingScope(CDrawingContext *this, char a2)
{
  __int64 v2; // rdi
  int v4; // eax
  __int64 v5; // rdx
  unsigned __int64 v6; // r10
  __int64 v7; // r8
  signed __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  signed __int64 v10; // r9
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rsi
  _QWORD v15[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( a2 )
  {
    v4 = *((_DWORD *)this + 68);
    if ( v4 )
      *((_DWORD *)this + 68) = v4 - 1;
  }
  v5 = *((_QWORD *)this + 94);
  v6 = 0xAAAAAAAAAAAAAAABuLL;
  v7 = *((_QWORD *)this + 93);
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((v5 - v7 - 192) >> 6);
  v9 = 0xAAAAAAAAAAAAAAABuLL * ((v5 - v7) >> 6);
  v10 = v8 + 1;
  if ( v8 + 1 > v9 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    goto LABEL_20;
  }
  v2 = v7 + 192 * v9;
  if ( v10 != v9 )
  {
    if ( !v8 )
      goto LABEL_15;
    if ( !v7 || v8 < 0 )
LABEL_18:
      _invalid_parameter_noinfo_noreturn();
LABEL_20:
    if ( v9 < v8 )
      goto LABEL_18;
LABEL_15:
    v15[1] = v9;
    v15[2] = v8;
    v13 = v7 + 192 * v10;
    v15[0] = v7;
    v14 = std::_Get_unwrapped_n<stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *> &,__int64>(
            v15,
            v6 * ((v2 - v13) >> 6))
        - v13;
    while ( v13 != v2 )
    {
      CScopedClipStack::ClippingScopeState::operator=(v14 + v13, v13);
      v13 += 192LL;
    }
  }
  v11 = v2 - 192;
  do
  {
    v12 = *(_QWORD *)(v11 + 176);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    v11 += 192LL;
  }
  while ( v11 != v2 );
  *((_QWORD *)this + 94) -= 192LL;
}
