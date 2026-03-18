/*
 * XREFs of ?GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x14022C8F0
 * Callers:
 *     ?GetFloatAnimatableProperty@CShadowEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x14019FA30 (-GetFloatAnimatableProperty@CShadowEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 *     ?GetFloatAnimatableProperty@CVisualMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x14022C9B0 (-GetFloatAnimatableProperty@CVisualMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 *     ?GetFloatAnimatableProperty@CHueRotationEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x14022D9D0 (-GetFloatAnimatableProperty@CHueRotationEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 *     ?GetFloatAnimatableProperty@CBrightnessEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x14022DFE0 (-GetFloatAnimatableProperty@CBrightnessEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 *     ?GetFloatAnimatableProperty@CColorMatrixEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x14022E330 (-GetFloatAnimatableProperty@CColorMatrixEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 *     ?GetFloatAnimatableProperty@CLinearTransferEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x14022F130 (-GetFloatAnimatableProperty@CLinearTransferEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 *     ?GetFloatAnimatableProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x14022F840 (-GetFloatAnimatableProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 *     ?GetFloatAnimatableProperty@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x140230810 (-GetFloatAnimatableProperty@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 *     ?GetFloatAnimatableProperty@CMatrixTransformMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x140230BB0 (-GetFloatAnimatableProperty@CMatrixTransformMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 *     ?GetFloatAnimatableProperty@CMatrixTransform3DMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x140230D00 (-GetFloatAnimatableProperty@CMatrixTransform3DMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 *     ?GetFloatAnimatableProperty@CColorGradientStopMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1402316F0 (-GetFloatAnimatableProperty@CColorGradientStopMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 *     ?GetFloatAnimatableProperty@CRectangleClipMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x140231BA0 (-GetFloatAnimatableProperty@CRectangleClipMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 *     ?GetFloatAnimatableProperty@CPrimitiveColorMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x140232700 (-GetFloatAnimatableProperty@CPrimitiveColorMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 *     ?GetFloatAnimatableProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x140233090 (-GetFloatAnimatableProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 *     ?GetFloatAnimatableProperty@CHolographicExclusiveModeMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x140234BB0 (-GetFloatAnimatableProperty@CHolographicExclusiveModeMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CResourceMarshaler::GetFloatAnimatableProperty(
        DirectComposition::CResourceMarshaler *this,
        __int64 a2,
        float *a3)
{
  __int64 v5; // rax
  int v6; // ecx
  __int64 result; // rax

  v5 = (*(__int64 (__fastcall **)(DirectComposition::CResourceMarshaler *))(*(_QWORD *)this + 256LL))(this);
  if ( !v5 || *(_DWORD *)(v5 + 8) != 18 )
    return 3221225485LL;
  v6 = *(_DWORD *)((char *)this + *(unsigned int *)(v5 + 12));
  result = 0LL;
  *(_DWORD *)a3 = v6;
  return result;
}
