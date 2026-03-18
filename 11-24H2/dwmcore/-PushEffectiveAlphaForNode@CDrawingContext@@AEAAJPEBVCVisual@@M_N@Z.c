/*
 * XREFs of ?PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M_N@Z @ 0x1801CBEA4
 * Callers:
 *     ?RenderEffect@CTreeEffectLayer@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x1800FDFD4 (-RenderEffect@CTreeEffectLayer@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUD2D_.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Grow@?$CWatermarkStack@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x1800FBD40 (-Grow@-$CWatermarkStack@V-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F_ea_1800FBD40.c)
 *     ?Grow@?$CWatermarkStack@M$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x1801CC004 (-Grow@-$CWatermarkStack@M$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z.c)
 */

__int64 __fastcall CDrawingContext::PushEffectiveAlphaForNode(
        CDrawingContext *this,
        const struct CVisual *a2,
        float a3,
        __int64 a4)
{
  __int64 v4; // r8
  char v5; // bp
  const void **v7; // rbx
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // ebx
  int v12; // eax
  int v13; // edi
  unsigned int v14; // eax
  int v15; // eax
  int v16; // eax
  __int128 v17; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v5 = 0;
  if ( (_BYTE)a4 )
  {
    v7 = (const void **)((char *)this + 264);
    *(_QWORD *)&v17 = 8LL;
    *((_QWORD *)&v17 + 1) = a2;
    if ( *((_DWORD *)this + 68) == *((_DWORD *)this + 69) )
    {
      v12 = CWatermarkStack<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,64,2,10>::Grow(
              (__int64)this + 264,
              (__int64)a2,
              v4,
              a4,
              v7);
      v13 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x83,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)(unsigned int)v12);
        v14 = 4622;
LABEL_13:
        v10 = v13;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, v14, 0LL);
        if ( v5 )
        {
          v15 = *((_DWORD *)this + 68);
          if ( v15 )
            *((_DWORD *)this + 68) = v15 - 1;
        }
        return v10;
      }
    }
    v5 = 1;
    *((_OWORD *)*v7 + *((unsigned int *)v7 + 2)) = v17;
    v8 = *((_DWORD *)v7 + 5);
    if ( v8 <= ++*((_DWORD *)v7 + 2) )
      v8 = *((_DWORD *)v7 + 2);
    *((_DWORD *)v7 + 5) = v8;
  }
  if ( *((_DWORD *)this + 792) == *((_DWORD *)this + 793) )
  {
    v16 = CWatermarkStack<float,64,2,10>::Grow((char *)this + 3160);
    v13 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x83,
        (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
        (const char *)(unsigned int)v16);
      v14 = 4626;
      goto LABEL_13;
    }
  }
  *(float *)(*((_QWORD *)this + 395) + 4LL * *((unsigned int *)this + 792)) = a3;
  v9 = *((_DWORD *)this + 795);
  if ( v9 <= ++*((_DWORD *)this + 792) )
    v9 = *((_DWORD *)this + 792);
  *((_DWORD *)this + 795) = v9;
  return 0;
}
