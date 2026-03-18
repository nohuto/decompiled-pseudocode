/*
 * XREFs of ?IsPropertyAnimatable@CResourceMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x140133040
 * Callers:
 *     ?IsPropertyAnimatable@CKeyframeAnimationMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x140133010 (-IsPropertyAnimatable@CKeyframeAnimationMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRE.c)
 *     ?IsPropertyAnimatable@CVisualMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x14022CA00 (-IsPropertyAnimatable@CVisualMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@.c)
 *     ?IsPropertyAnimatable@CHueRotationEffectMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x14022DA40 (-IsPropertyAnimatable@CHueRotationEffectMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRE.c)
 *     ?IsPropertyAnimatable@CArithmeticCompositeEffectMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x14022E070 (-IsPropertyAnimatable@CArithmeticCompositeEffectMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITI.c)
 *     ?IsPropertyAnimatable@CColorMatrixEffectMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x14022E400 (-IsPropertyAnimatable@CColorMatrixEffectMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRE.c)
 *     ?IsPropertyAnimatable@CShadowEffectMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x14022E810 (-IsPropertyAnimatable@CShadowEffectMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION.c)
 *     ?IsPropertyAnimatable@CLinearTransferEffectMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x14022F200 (-IsPropertyAnimatable@CLinearTransferEffectMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EX.c)
 *     ?IsPropertyAnimatable@CTableTransferEffectMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x14022F8B0 (-IsPropertyAnimatable@CTableTransferEffectMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXP.c)
 *     ?IsPropertyAnimatable@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1402308C0 (-IsPropertyAnimatable@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION.c)
 *     ?IsPropertyAnimatable@CMatrixTransformMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x140230BF0 (-IsPropertyAnimatable@CMatrixTransformMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESS.c)
 *     ?IsPropertyAnimatable@CMatrixTransform3DMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x140230D40 (-IsPropertyAnimatable@CMatrixTransform3DMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRE.c)
 *     ?IsPropertyAnimatable@CColorGradientStopMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x140231720 (-IsPropertyAnimatable@CColorGradientStopMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRE.c)
 *     ?IsPropertyAnimatable@CRectangleClipMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x140231C50 (-IsPropertyAnimatable@CRectangleClipMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSIO.c)
 *     ?IsPropertyAnimatable@CPrimitiveColorMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x140232750 (-IsPropertyAnimatable@CPrimitiveColorMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSI.c)
 *     ?IsPropertyAnimatable@CHolographicExclusiveModeMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x140234C10 (-IsPropertyAnimatable@CHolographicExclusiveModeMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITIO.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::IsPropertyAnimatable(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rax

  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 256LL))(a1);
  if ( v4 )
    LOBYTE(v4) = *(_DWORD *)(v4 + 8) == a3;
  return v4;
}
