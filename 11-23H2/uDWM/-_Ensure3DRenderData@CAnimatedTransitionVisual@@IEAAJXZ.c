/*
 * XREFs of ?_Ensure3DRenderData@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A7CE8
 * Callers:
 *     ?Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A7BE4 (-Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180008E50 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CPushTransformInstruction@@SAJPEAVCBaseTransformProxy@@PEAPEAV1@@Z @ 0x18001A424 (-Create@CPushTransformInstruction@@SAJPEAVCBaseTransformProxy@@PEAPEAV1@@Z.c)
 *     ?Create@CPopInstruction@@SAJPEAPEAV1@@Z @ 0x18001BD84 (-Create@CPopInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180045B50 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CDrawBitmapInstruction@@SAJPEAVCBaseImageProxy@@PEAPEAV1@@Z @ 0x18004F840 (-Create@CDrawBitmapInstruction@@SAJPEAVCBaseImageProxy@@PEAPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ComPtr@VCDCompositionInteropVisual@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A6278 (--1-$ComPtr@VCDCompositionInteropVisual@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Update@CScaleTransformProxy@@QEAAJNNNN@Z @ 0x1800D6468 (-Update@CScaleTransformProxy@@QEAAJNNNN@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAnimatedTransitionVisual::_Ensure3DRenderData(CAnimatedTransitionVisual *this)
{
  CBaseObject *v2; // rcx
  float v3; // xmm3_4
  float v4; // xmm2_4
  float v5; // xmm0_4
  float v6; // xmm3_4
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  CBaseObject *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct CBaseImageProxy *v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  CBaseObject *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  CBaseObject *v19; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  CBaseObject *v22; // [rsp+50h] [rbp+20h] BYREF
  CBaseObject *v23; // [rsp+58h] [rbp+28h] BYREF
  struct CRenderDataInstruction *v24; // [rsp+60h] [rbp+30h] BYREF

  v24 = 0LL;
  v23 = 0LL;
  v2 = 0LL;
  v22 = 0LL;
  if ( !*((_DWORD *)this + 72) )
  {
    v3 = (float)*((int *)this + 239);
    v4 = FLOAT_0_1;
    if ( v3 == 0.0 )
      v5 = FLOAT_0_1;
    else
      v5 = 1.0 / v3;
    v6 = (float)*((int *)this + 238);
    if ( v6 != 0.0 )
      v4 = 1.0 / v6;
    v7 = CScaleTransformProxy::Update(*((CScaleTransformProxy **)this + 41), v4, v5, 0.0, 0.0);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 1570LL;
LABEL_27:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"clientcore\\windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
        (const char *)(unsigned int)v7);
      Microsoft::WRL::ComPtr<CDCompositionInteropVisual>::~ComPtr<CDCompositionInteropVisual>(&v22);
      Microsoft::WRL::ComPtr<CDCompositionInteropVisual>::~ComPtr<CDCompositionInteropVisual>(&v23);
      goto LABEL_34;
    }
    v10 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      CBaseObject::Release(v10);
    }
    v7 = CPushTransformInstruction::Create(*((struct CBaseTransformProxy **)this + 41), &v23);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 1571LL;
      goto LABEL_27;
    }
    v7 = CRenderDataVisual::AddInstruction((CAnimatedTransitionVisual *)((char *)this + 8), v23, v11, v12);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 1572LL;
      goto LABEL_27;
    }
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v24);
    v13 = (struct CBaseImageProxy *)*((_QWORD *)this + 75);
    if ( !v13 )
      v13 = (struct CBaseImageProxy *)*((_QWORD *)this + 73);
    v7 = CDrawBitmapInstruction::Create(v13, &v24);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 1576LL;
      goto LABEL_27;
    }
    v7 = CRenderDataVisual::AddInstruction((CAnimatedTransitionVisual *)((char *)this + 8), v24, v14, v15);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 1577LL;
      goto LABEL_27;
    }
    v16 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      CBaseObject::Release(v16);
    }
    v7 = CPopInstruction::Create(&v22);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 1580LL;
      goto LABEL_27;
    }
    v7 = CRenderDataVisual::AddInstruction((CAnimatedTransitionVisual *)((char *)this + 8), v22, v17, v18);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 1581LL;
      goto LABEL_27;
    }
    v2 = v22;
  }
  if ( v2 )
  {
    v22 = 0LL;
    CBaseObject::Release(v2);
  }
  v19 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    CBaseObject::Release(v19);
  }
  v8 = 0;
LABEL_34:
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v24);
  return v8;
}
