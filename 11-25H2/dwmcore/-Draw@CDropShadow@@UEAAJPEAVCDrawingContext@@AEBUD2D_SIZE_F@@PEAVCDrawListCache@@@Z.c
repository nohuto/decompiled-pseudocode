/*
 * XREFs of ?Draw@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18007E280
 * Callers:
 *     <none>
 * Callees:
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18007E7D0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?IsReadyToDraw@CDropShadow@@AEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x18007FB1C (-IsReadyToDraw@CDropShadow@@AEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800D4130 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     gsl::final_action__lambda_b778ccec937677c8d794b2b5e6f06977___::_final_action__lambda_b778ccec937677c8d794b2b5e6f06977___ @ 0x180118564 (gsl--final_action__lambda_b778ccec937677c8d794b2b5e6f06977___--_final_action__lambda_b778ccec937.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180118590 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?UpdateShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180119DE8 (-UpdateShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 */

__int64 __fastcall CDropShadow::Draw(
        CDropShadow *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  unsigned int v5; // ebx
  int v9; // xmm1_4
  int v10; // eax
  int updated; // eax
  int v12; // eax
  bool v14; // [rsp+38h] [rbp-29h] BYREF
  struct CDrawingContext *v15; // [rsp+40h] [rbp-21h] BYREF
  char v16; // [rsp+48h] [rbp-19h]
  _OWORD v17[3]; // [rsp+58h] [rbp-9h] BYREF
  int v18; // [rsp+88h] [rbp+27h]
  int v19; // [rsp+8Ch] [rbp+2Bh]
  int v20; // [rsp+90h] [rbp+2Fh]
  int v21; // [rsp+94h] [rbp+33h]
  int v22; // [rsp+98h] [rbp+37h]

  v5 = 0;
  v14 = 0;
  if ( CDropShadow::IsReadyToDraw(this, a2, &v14) && !v14 )
  {
    v22 = 0;
    v17[0] = _xmm;
    v17[1] = _xmm;
    v18 = *((_DWORD *)this + 24);
    v9 = *((_DWORD *)this + 26);
    v17[2] = _xmm;
    v19 = *((_DWORD *)this + 25);
    v20 = v9;
    v21 = 1065353216;
    LOBYTE(v22) = -88;
    *(_WORD *)((char *)&v22 + 1) = 41;
    v10 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)v17, 1, 1);
    v5 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x1E6u, 0LL);
    }
    else
    {
      v15 = a2;
      v16 = 1;
      updated = CDropShadow::UpdateShadowIntermediates(this, a2, a3);
      v5 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x1ECu, 0LL);
      }
      else
      {
        v12 = CContent::Draw(this, a2, a3, a4);
        v5 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x1EEu, 0LL);
          gsl::final_action__lambda_b778ccec937677c8d794b2b5e6f06977___::_final_action__lambda_b778ccec937677c8d794b2b5e6f06977___(&v15);
          return v5;
        }
      }
      CDrawingContext::PopTransformInternal(a2, 1);
    }
  }
  return v5;
}
