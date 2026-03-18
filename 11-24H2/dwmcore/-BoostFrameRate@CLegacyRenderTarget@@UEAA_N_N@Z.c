/*
 * XREFs of ?BoostFrameRate@CLegacyRenderTarget@@UEAA_N_N@Z @ 0x1802346D0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPowerSaverEnabled@CComposition@@QEBA_NXZ @ 0x18025BEB8 (-IsPowerSaverEnabled@CComposition@@QEBA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ComposedFlipPerf@@@details@wil@@QEAA_NXZ @ 0x18025C744 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ComposedFlipPerf@@@details@wil@@Q.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CLegacyRenderTarget::BoostFrameRate(CLegacyRenderTarget *this, char a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 (__fastcall *v6)(__int64, __int64, _QWORD); // rax
  char v7; // al
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = *((_QWORD *)this + 5);
  if ( !v3 )
    return 0;
  if ( a2 )
  {
    v9 = 0;
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)(v3 + 24) + 248LL))(v3 + 24, &v9) )
      return 0;
    v4 = v9;
    if ( v9 <= 1 )
      return 0;
    v5 = *((_QWORD *)this + 5) + 24LL;
    v6 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v5 + 264LL);
    goto LABEL_6;
  }
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ComposedFlipPerf>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ComposedFlipPerf>::GetImpl'::`2'::impl) )
  {
    v5 = *((_QWORD *)this + 5) + 24LL;
    v6 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v5 + 264LL);
    v4 = 0LL;
LABEL_6:
    v7 = v6(v5, v4, 0LL);
    goto LABEL_7;
  }
  if ( *((_BYTE *)this + 19632) && !CComposition::IsPowerSaverEnabled(g_pComposition) )
    return 0;
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)this + 5) + 24LL) + 264LL))(
         *((_QWORD *)this + 5) + 24LL,
         0LL,
         0LL);
LABEL_7:
  if ( !v7 )
    return 0;
  *((_BYTE *)this + 33352) = 1;
  return 1;
}
