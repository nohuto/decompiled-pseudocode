/*
 * XREFs of ?InitializeShadowEffect@CTreeEffectLayer@@AEAAJPEAUID2D1Effect@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800A6494
 * Callers:
 *     ?RenderShadow@CTreeEffectLayer@@AEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PEAVCDropShadow@@PEAVIRenderTargetBitmap@@@Z @ 0x1800A75F0 (-RenderShadow@CTreeEffectLayer@@AEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTreeEffectLayer::InitializeShadowEffect(
        CTreeEffectLayer *this,
        struct ID2D1Effect *a2,
        const struct D2D_MATRIX_3X2_F *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rax
  int v8; // eax
  int v9; // eax
  __int64 v10; // rax
  int v11; // eax
  CTreeEffectLayer *v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = this;
  if ( !a2 )
    return 2147942487LL;
  LODWORD(v13) = 1;
  v5 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, CTreeEffectLayer **, int))(*(_QWORD *)a2 + 72LL))(
         a2,
         0LL,
         0LL,
         &v13,
         4);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x4AEu, 0LL);
  }
  else
  {
    v7 = *(_QWORD *)a2;
    LODWORD(v13) = 0;
    v8 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, CTreeEffectLayer **, int))(v7 + 72))(
           a2,
           1LL,
           0LL,
           &v13,
           4);
    v6 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x4B1u, 0LL);
    }
    else
    {
      v9 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, const struct D2D_MATRIX_3X2_F *, int))(*(_QWORD *)a2 + 72LL))(
             a2,
             2LL,
             0LL,
             a3,
             24);
      v6 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x4B4u, 0LL);
      }
      else
      {
        v10 = *(_QWORD *)a2;
        LODWORD(v13) = 1056964608;
        v11 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, CTreeEffectLayer **, int))(v10 + 72))(
                a2,
                3LL,
                0LL,
                &v13,
                4);
        v6 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x4B6u, 0LL);
      }
    }
  }
  return v6;
}
