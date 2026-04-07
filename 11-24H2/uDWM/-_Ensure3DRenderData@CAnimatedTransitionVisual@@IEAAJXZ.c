/*
 * XREFs of ?_Ensure3DRenderData@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A56AC
 * Callers:
 *     ?Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180098B44 (-Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180017358 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CPushTransformInstruction@@SAJPEAVCBaseTransformProxy@@PEAPEAV1@@Z @ 0x18001F698 (-Create@CPushTransformInstruction@@SAJPEAVCBaseTransformProxy@@PEAPEAV1@@Z.c)
 *     ?Create@CPopInstruction@@SAJPEAPEAV1@@Z @ 0x18001F858 (-Create@CPopInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180024618 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Create@CDrawBitmapInstruction@@SAJPEAVCBaseImageProxy@@PEAPEAV1@@Z @ 0x180064008 (-Create@CDrawBitmapInstruction@@SAJPEAVCBaseImageProxy@@PEAPEAV1@@Z.c)
 *     ?Update@CScaleTransformProxy@@QEAAJNNNN@Z @ 0x1800640BC (-Update@CScaleTransformProxy@@QEAAJNNNN@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAnimatedTransitionVisual::_Ensure3DRenderData(CAnimatedTransitionVisual *this)
{
  float v2; // xmm3_4
  float v3; // xmm2_4
  float v4; // xmm0_4
  float v5; // xmm3_4
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  struct CBaseImageProxy *v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct CPopInstruction *v12; // [rsp+50h] [rbp+20h] BYREF
  struct CPushTransformInstruction *v13; // [rsp+58h] [rbp+28h] BYREF
  struct CDrawBitmapInstruction *v14; // [rsp+60h] [rbp+30h] BYREF

  v14 = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  if ( *((_DWORD *)this + 60) )
    goto LABEL_24;
  v2 = (float)*((int *)this + 227);
  v3 = FLOAT_0_1;
  if ( v2 == 0.0 )
    v4 = FLOAT_0_1;
  else
    v4 = 1.0 / v2;
  v5 = (float)*((int *)this + 226);
  if ( v5 != 0.0 )
    v3 = 1.0 / v5;
  v6 = CScaleTransformProxy::Update(*((CScaleTransformProxy **)this + 35), v3, v4, 0.0);
  v7 = v6;
  if ( v6 >= 0 )
  {
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v13);
    v6 = CPushTransformInstruction::Create(*((struct CBaseTransformProxy **)this + 35), &v13);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 1565LL;
      goto LABEL_11;
    }
    v6 = CRenderDataVisual::AddInstruction((CAnimatedTransitionVisual *)((char *)this + 8), v13);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 1566LL;
      goto LABEL_11;
    }
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v14);
    v9 = (struct CBaseImageProxy *)*((_QWORD *)this + 69);
    if ( !v9 )
      v9 = (struct CBaseImageProxy *)*((_QWORD *)this + 67);
    v6 = CDrawBitmapInstruction::Create(v9, &v14);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 1570LL;
      goto LABEL_11;
    }
    v6 = CRenderDataVisual::AddInstruction((CAnimatedTransitionVisual *)((char *)this + 8), v14);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 1571LL;
      goto LABEL_11;
    }
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v12);
    v6 = CPopInstruction::Create(&v12);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 1574LL;
      goto LABEL_11;
    }
    v6 = CRenderDataVisual::AddInstruction((CAnimatedTransitionVisual *)((char *)this + 8), v12);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 1575LL;
      goto LABEL_11;
    }
LABEL_24:
    v7 = 0;
    goto LABEL_25;
  }
  v8 = 1564LL;
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"clientcore\\windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
    (const char *)(unsigned int)v6);
LABEL_25:
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v12);
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v13);
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v14);
  return v7;
}
