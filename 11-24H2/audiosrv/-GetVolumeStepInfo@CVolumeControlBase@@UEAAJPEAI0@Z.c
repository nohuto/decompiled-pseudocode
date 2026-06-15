/*
 * XREFs of ?GetVolumeStepInfo@CVolumeControlBase@@UEAAJPEAI0@Z @ 0x180085930
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800150E8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     floorf @ 0x1800A4E30 (floorf.c)
 *     WPP_SF_dd @ 0x1800C33FC (WPP_SF_dd.c)
 *     WPP_SF_g @ 0x1800C34A0 (WPP_SF_g.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2@@@details@wil@@QEAA_NXZ @ 0x180103030 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVolumeControlBase::GetVolumeStepInfo(CVolumeControlBase *this, unsigned int *a2, unsigned int *a3)
{
  int v5; // edi
  int v7; // ebx
  unsigned int v8; // eax
  float v9; // [rsp+58h] [rbp+10h] BYREF

  v9 = 0.0;
  if ( !a2 || !a3 )
  {
    v5 = -2147467261;
LABEL_3:
    AudSrvTraceLoggingErrorHelper("CVolumeControlBase::GetVolumeStepInfo", 322, v5);
    return (unsigned int)v5;
  }
  *a2 = 0;
  *a3 = *((_DWORD *)this + 12);
  v5 = (*(__int64 (__fastcall **)(CVolumeControlBase *, float *))(*(_QWORD *)this + 136LL))(this, &v9);
  if ( v5 < 0 )
    goto LABEL_3;
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::GetImpl'::`2'::impl)
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_g(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_658f1c7cc29732d428a1952a824bf53f_Traceguids);
  }
  v7 = *((_DWORD *)this + 12) - 1;
  v8 = (int)floorf((float)((float)v7 * v9) + 0.5);
  if ( v8 >= v7 )
    v8 = v7;
  *a2 = v8;
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::GetImpl'::`2'::impl)
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_dd(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_658f1c7cc29732d428a1952a824bf53f_Traceguids);
  }
  return (unsigned int)v5;
}
