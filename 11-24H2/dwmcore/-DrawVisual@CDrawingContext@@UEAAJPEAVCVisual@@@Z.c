/*
 * XREFs of ?DrawVisual@CDrawingContext@@UEAAJPEAVCVisual@@@Z @ 0x180168E10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800B0E00 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z @ 0x1800B2F20 (-GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z.c)
 *     ?DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800F6564 (-DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_R.c)
 *     ?Create@CSubVisualTree@@KAJPEAVCVisual@@PEAPEAVCVisualTree@@@Z @ 0x180168D04 (-Create@CSubVisualTree@@KAJPEAVCVisual@@PEAPEAVCVisualTree@@@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18016A440 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::DrawVisual(CDrawingContext *this, struct CVisual *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  const struct CMILMatrix *TopByReference; // rax
  struct CVisualTree *v7; // rbx
  unsigned int v8; // edi
  _BYTE v10[64]; // [rsp+20h] [rbp-58h] BYREF
  int v11; // [rsp+60h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  struct CVisualTree *v13; // [rsp+88h] [rbp+10h] BYREF

  if ( !a2 )
    return 0LL;
  v13 = 0LL;
  v4 = CSubVisualTree::Create(a2, &v13);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x330,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\drawingcontext.cpp",
      (const char *)(unsigned int)v4);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v13);
    return v5;
  }
  else
  {
    v11 = 0;
    CVisual::GetRootTransform(a2, (struct CMILMatrix *)v10, 0, 0);
    TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 272));
    CMILMatrix::Multiply((CMILMatrix *)v10, TopByReference);
    v7 = v13;
    v8 = CDrawingContext::DrawSubVisualTree((__int64)this - 16, v13, (unsigned int *)v13 + 20, (CMILMatrix *)v10);
    if ( v7 )
      (*(void (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v7 + 16LL))(v7);
    return v8;
  }
}
