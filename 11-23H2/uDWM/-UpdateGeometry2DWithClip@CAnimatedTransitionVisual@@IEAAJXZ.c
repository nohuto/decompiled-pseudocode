/*
 * XREFs of ?UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A7974
 * Callers:
 *     ?ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ @ 0x1800503D0 (-ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180008E50 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z @ 0x180009A0C (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x1800336E4 (-SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180045B50 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CDrawTileImageInstruction@@SAJPEAVCBaseImageProxy@@AEBUtagRECT@@AEBUtagPOINT@@MPEAPEAV1@@Z @ 0x18004FD64 (-Create@CDrawTileImageInstruction@@SAJPEAVCBaseImageProxy@@AEBUtagRECT@@AEBUtagPOINT@@MPEAPEAV1@.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x180057CA8 (-RoundToNearestInt@@YAHM@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18009E810 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAnimatedTransitionVisual::UpdateGeometry2DWithClip(CAnimatedTransitionVisual *this)
{
  int v2; // esi
  int v3; // r14d
  int v4; // eax
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // ebx
  __int64 v8; // rdx
  struct CBaseGeometryProxy *v9; // rbx
  int v10; // eax
  int v11; // edi
  struct CBaseGeometryProxy *v13; // [rsp+30h] [rbp-50h] BYREF
  struct CRenderDataInstruction *v14; // [rsp+38h] [rbp-48h] BYREF
  struct tagRECT rc; // [rsp+40h] [rbp-40h] BYREF
  RECT rcSrc2; // [rsp+50h] [rbp-30h] BYREF
  struct tagRECT rcDst; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v14 = 0LL;
  v13 = 0LL;
  rc.left = 0;
  rc.top = 0;
  rc.right = *((_DWORD *)this + 238);
  rc.bottom = *((_DWORD *)this + 239);
  v2 = RoundToNearestInt((float)((float)*((int *)this + 214) + *((float *)this + 188)) - (float)*((int *)this + 206));
  v3 = RoundToNearestInt((float)((float)*((int *)this + 215) + *((float *)this + 189)) - (float)*((int *)this + 207));
  OffsetRect(&rc, v2, v3);
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v14);
  v4 = CDrawTileImageInstruction::Create(
         *((struct CBaseImageProxy **)this + 73),
         &rc,
         (const struct tagPOINT *)this + 118,
         *((float *)this + 186),
         &v14);
  v7 = v4;
  if ( v4 < 0 )
  {
    v8 = 1161LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"clientcore\\windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
      (const char *)(unsigned int)v4);
LABEL_10:
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v13);
    goto LABEL_14;
  }
  v4 = CRenderDataVisual::AddInstruction((CAnimatedTransitionVisual *)((char *)this + 8), v14, v5, v6);
  v7 = v4;
  if ( v4 < 0 )
  {
    v8 = 1162LL;
    goto LABEL_5;
  }
  rcSrc2 = *(RECT *)((char *)this + 824);
  OffsetRect(&rcSrc2, v2, v3);
  IntersectRect(&rcDst, (const RECT *)((char *)this + 840), &rcSrc2);
  v13 = 0LL;
  v4 = ResourceHelper::CreateRectangleGeometry(&rcDst, &v13);
  v7 = v4;
  if ( v4 < 0 )
  {
    v8 = 1172LL;
    goto LABEL_5;
  }
  v9 = v13;
  v10 = CVisualProxy::SetClip(*((CVisualProxy **)this + 3), v13);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x497,
      (__int64)"clientcore\\windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
      (const char *)(unsigned int)v10);
    v7 = v11;
    goto LABEL_10;
  }
  if ( v9 )
    CBaseObject::Release(v9);
  v7 = 0;
LABEL_14:
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v14);
  return v7;
}
