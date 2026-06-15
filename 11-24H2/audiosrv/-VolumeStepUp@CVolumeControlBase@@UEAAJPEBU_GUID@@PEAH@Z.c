/*
 * XREFs of ?VolumeStepUp@CVolumeControlBase@@UEAAJPEBU_GUID@@PEAH@Z @ 0x180086DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     floorf @ 0x1800A4E30 (floorf.c)
 *     WPP_SF_ @ 0x1800C0208 (WPP_SF_.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2@@@details@wil@@QEAA_NXZ @ 0x180103030 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVolumeControlBase::VolumeStepUp(CVolumeControlBase *this, const struct _GUID *a2, int *a3)
{
  __int64 v6; // rax
  int v7; // ebx
  __int64 v8; // rdx
  float v10; // xmm6_4
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  float v13; // [rsp+60h] [rbp+8h] BYREF

  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::GetImpl'::`2'::impl)
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_658f1c7cc29732d428a1952a824bf53f_Traceguids);
  }
  v6 = *(_QWORD *)this;
  v13 = 0.0;
  v7 = (*(__int64 (__fastcall **)(CVolumeControlBase *, float *))(v6 + 136))(this, &v13);
  if ( v7 < 0 )
  {
    v8 = 347LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  v10 = (float)(*((_DWORD *)this + 12) - 1);
  v13 = floorf((float)((float)(v10 * v13) + 0.5) + 1.0) / v10;
  if ( v13 >= 1.0 )
    v13 = FLOAT_1_0;
  v7 = (*(__int64 (__fastcall **)(CVolumeControlBase *, __int64, const struct _GUID *, int *))(*(_QWORD *)this + 120LL))(
         this,
         v11,
         a2,
         a3);
  if ( v7 < 0 )
  {
    v8 = 352LL;
    goto LABEL_8;
  }
  return 0LL;
}
