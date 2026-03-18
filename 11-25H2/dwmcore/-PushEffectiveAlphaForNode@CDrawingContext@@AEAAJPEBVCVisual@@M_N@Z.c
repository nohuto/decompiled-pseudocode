/*
 * XREFs of ?PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M_N@Z @ 0x1801186B8
 * Callers:
 *     ?RenderEffect@CTreeEffectLayer@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x1801174F0 (-RenderEffect@CTreeEffectLayer@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUD2D_.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Grow@?$CWatermarkStack@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x180118D80 (-Grow@-$CWatermarkStack@V-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F_ea_180118D80.c)
 *     ?Grow@?$CWatermarkStack@M$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x180118E60 (-Grow@-$CWatermarkStack@M$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z.c)
 */

__int64 __fastcall CDrawingContext::PushEffectiveAlphaForNode(
        CDrawingContext *this,
        const struct CVisual *a2,
        float a3,
        char a4)
{
  char v4; // bp
  char *v6; // rbx
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // ebx
  int v11; // eax
  int v12; // edi
  unsigned int v13; // eax
  int v14; // eax
  int v15; // eax
  __int128 v16; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = 0;
  if ( a4 )
  {
    v6 = (char *)this + 264;
    *(_QWORD *)&v16 = 8LL;
    *((_QWORD *)&v16 + 1) = a2;
    if ( *((_DWORD *)this + 68) == *((_DWORD *)this + 69) )
    {
      v11 = CWatermarkStack<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,64,2,10>::Grow((char *)this + 264);
      v12 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x83,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)(unsigned int)v11);
        v13 = 4582;
LABEL_13:
        v9 = v12;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, v13, 0LL);
        if ( v4 )
        {
          v14 = *((_DWORD *)this + 68);
          if ( v14 )
            *((_DWORD *)this + 68) = v14 - 1;
        }
        return v9;
      }
    }
    v4 = 1;
    *(_OWORD *)(*(_QWORD *)v6 + 16LL * *((unsigned int *)v6 + 2)) = v16;
    v7 = *((_DWORD *)v6 + 5);
    if ( v7 <= ++*((_DWORD *)v6 + 2) )
      v7 = *((_DWORD *)v6 + 2);
    *((_DWORD *)v6 + 5) = v7;
  }
  if ( *((_DWORD *)this + 792) == *((_DWORD *)this + 793) )
  {
    v15 = CWatermarkStack<float,64,2,10>::Grow((char *)this + 3160);
    v12 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x83,
        (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
        (const char *)(unsigned int)v15);
      v13 = 4586;
      goto LABEL_13;
    }
  }
  *(float *)(*((_QWORD *)this + 395) + 4LL * *((unsigned int *)this + 792)) = a3;
  v8 = *((_DWORD *)this + 795);
  if ( v8 <= ++*((_DWORD *)this + 792) )
    v8 = *((_DWORD *)this + 792);
  *((_DWORD *)this + 795) = v8;
  return 0;
}
