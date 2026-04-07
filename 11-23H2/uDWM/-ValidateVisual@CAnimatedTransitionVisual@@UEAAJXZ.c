/*
 * XREFs of ?ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ @ 0x1800503D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180037010 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18003D238 (-UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800504B0 (-EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x180050710 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180055EA8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x180057CA8 (-RoundToNearestInt@@YAHM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A7778 (-UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A7974 (-UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?UpdateVisualOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A7B8C (-UpdateVisualOpacity@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A7BE4 (-Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?_ValidateDCompVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A8AE8 (-_ValidateDCompVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::ValidateVisual(CAnimatedTransitionVisual *this)
{
  CVisual ***v1; // rdi
  int v3; // ebx
  int v4; // eax
  int v5; // eax
  __int64 v7; // rdx
  int v8; // eax
  int updated; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  LONG v13; // eax
  float v14; // xmm0_4
  LONG v15; // eax
  CVisual **v16; // rcx
  int v17; // eax
  unsigned int v18; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct tagPOINT v20; // [rsp+40h] [rbp+8h] BYREF

  v1 = (CVisual ***)((char *)this - 8);
  v3 = CAnimatedTransitionVisual::EnsureResources((CAnimatedTransitionVisual *)((char *)this - 8));
  if ( v3 < 0 )
  {
    v7 = 948LL;
    goto LABEL_15;
  }
  if ( *((_BYTE *)this + 976) )
  {
    v3 = CAnimatedTransitionVisual::Validate3DVisual((CAnimatedTransitionVisual *)v1);
    if ( v3 < 0 )
    {
      v7 = 952LL;
      goto LABEL_15;
    }
    goto LABEL_11;
  }
  if ( *((_BYTE *)this + 968) )
  {
    v3 = CAnimatedTransitionVisual::_ValidateDCompVisual((CAnimatedTransitionVisual *)v1);
    if ( v3 < 0 )
    {
      v7 = 956LL;
      goto LABEL_15;
    }
    goto LABEL_11;
  }
  if ( ((_DWORD)v1[12] & 0x1000) != 0 || ((_DWORD)v1[12] & 0x2000) != 0 || ((_BYTE)v1[12] & 0x20) != 0 )
  {
    if ( *((_BYTE *)v1 + 986) )
    {
      v8 = CRenderDataVisual::ClearInstructions(this);
      v3 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x3FFu, 0LL);
        goto LABEL_26;
      }
      updated = CAnimatedTransitionVisual::UpdateGeometry2DWithClip((CAnimatedTransitionVisual *)v1);
      v3 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x400u, 0LL);
        goto LABEL_26;
      }
    }
    else if ( *((_BYTE *)v1 + 987) )
    {
      v10 = CRenderDataVisual::ClearInstructions(this);
      v3 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x404u, 0LL);
        goto LABEL_26;
      }
      v11 = CAnimatedTransitionVisual::UpdateBackgroundWithClip((CAnimatedTransitionVisual *)v1);
      v3 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x405u, 0LL);
        goto LABEL_26;
      }
      v12 = CAnimatedTransitionVisual::UpdateVisualOpacity((CAnimatedTransitionVisual *)v1);
      v3 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x406u, 0LL);
        goto LABEL_26;
      }
    }
    else if ( *((_BYTE *)v1 + 975) )
    {
      v13 = RoundToNearestInt((float)*((int *)v1 + 214) + *((float *)v1 + 188));
      v14 = (float)*((int *)v1 + 215);
      v20.x = v13;
      v15 = RoundToNearestInt(v14 + *((float *)v1 + 189));
      v16 = v1[7];
      v20.y = v15;
      CVisual::SetOffset(*v16, &v20);
      v17 = CAnimatedTransitionVisual::UpdateVisualOpacity((CAnimatedTransitionVisual *)v1);
      v3 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x40Bu, 0LL);
        goto LABEL_26;
      }
    }
    else
    {
      v4 = CRenderDataVisual::ClearInstructions(this);
      v3 = v4;
      if ( v4 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x40Fu, 0LL);
        goto LABEL_26;
      }
      v5 = CAnimatedTransitionVisual::UpdateGeometry2DAndOpacity((CAnimatedTransitionVisual *)v1);
      v3 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x410u, 0LL);
        goto LABEL_26;
      }
    }
    *((_DWORD *)this + 22) &= 0xFFFFCFDF;
    if ( v3 >= 0 )
      goto LABEL_11;
LABEL_26:
    v7 = 960LL;
    goto LABEL_15;
  }
LABEL_11:
  v3 = CRenderDataVisual::ValidateVisual(this);
  if ( v3 >= 0 )
    return 0LL;
  v7 = 963LL;
LABEL_15:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
    (const char *)(unsigned int)v3,
    v18);
  return (unsigned int)v3;
}
