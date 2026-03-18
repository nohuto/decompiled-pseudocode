/*
 * XREFs of ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x1801A6C44
 * Callers:
 *     ?Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x1801A5D30 (-Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCS.c)
 *     ?Create@CDxHandleBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAPEAVISwapChainRealization@@@Z @ 0x1801A60E0 (-Create@CDxHandleBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTE.c)
 *     ?Create@CGDIBitmapRealization@@SAJPEAXU_LUID@@PEAPEAVIGDIBitmapRealization@@@Z @ 0x1801A651C (-Create@CGDIBitmapRealization@@SAJPEAXU_LUID@@PEAPEAVIGDIBitmapRealization@@@Z.c)
 *     ?Create@CDxHandleStereoBitmapRealization@@SAHW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVISwapChainRealization@@@Z @ 0x1802D8AB4 (-Create@CDxHandleStereoBitmapRealization@@SAHW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATT.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ComposedFlipPerf@@@details@wil@@QEAA_NXZ @ 0x18025C744 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ComposedFlipPerf@@@details@wil@@Q.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::Initialize(CDxHandleBitmapRealization *this)
{
  int v2; // eax
  unsigned int v3; // esi
  char *v4; // rdi
  char *v5; // rcx
  unsigned __int8 (__fastcall *v6)(char *); // rax
  bool v7; // zf

  v2 = (*(__int64 (__fastcall **)(CDxHandleBitmapRealization *))(*(_QWORD *)this + 72LL))(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803C65C0, 2u, v2, 0x3Eu, 0LL);
    return v3;
  }
  v4 = (char *)this + 328;
  v7 = (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ComposedFlipPerf>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ComposedFlipPerf>::GetImpl'::`2'::impl) == 0;
  v5 = (char *)this + 328;
  v6 = *(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this + 41) + 152LL);
  if ( v7 )
  {
    if ( v6(v5) )
    {
LABEL_10:
      *((_BYTE *)this + 396) = 0;
      return v3;
    }
    v7 = (*(unsigned int (__fastcall **)(char *))(*(_QWORD *)v4 + 120LL))((char *)this + 328) == 1;
  }
  else
  {
    if ( v6(v5) || (*(unsigned int (__fastcall **)(char *))(*(_QWORD *)v4 + 120LL))((char *)this + 328) == 1 )
      goto LABEL_10;
    v7 = (*(unsigned int (__fastcall **)(char *))(*(_QWORD *)v4 + 120LL))((char *)this + 328) == 2;
  }
  if ( v7 || CDeviceManager::s_bXbox )
    goto LABEL_10;
  return v3;
}
