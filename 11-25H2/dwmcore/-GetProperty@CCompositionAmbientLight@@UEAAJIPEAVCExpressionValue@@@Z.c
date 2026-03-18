/*
 * XREFs of ?GetProperty@CCompositionAmbientLight@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180225940
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPropertyImpl@CResource@@IEBAXPEBUAnimatedProperty@AnimationHelper@@PEAVCExpressionValue@@@Z @ 0x180034230 (-GetPropertyImpl@CResource@@IEBAXPEBUAnimatedProperty@AnimationHelper@@PEAVCExpressionValue@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CCompositionAmbientLight::GetProperty(
        CCompositionAmbientLight *this,
        int a2,
        struct CExpressionValue *a3)
{
  __int64 (__fastcall **v4)(); // rax
  unsigned int v5; // ebx
  __int64 (__fastcall *v6)(); // rdx

  v4 = (__int64 (__fastcall **)())&CCompositionAmbientLight::k_rgAnimDef;
  v5 = 0;
  while ( 1 )
  {
    if ( v4 == off_18030CDC0 )
      goto LABEL_3;
    v6 = *v4;
    if ( a2 == *(_DWORD *)*v4 )
      break;
    ++v4;
  }
  if ( !v6 )
  {
LABEL_3:
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x53u, 0LL);
    return v5;
  }
  CResource::GetPropertyImpl(this, (const struct AnimationHelper::AnimatedProperty *)v6, a3);
  return v5;
}
