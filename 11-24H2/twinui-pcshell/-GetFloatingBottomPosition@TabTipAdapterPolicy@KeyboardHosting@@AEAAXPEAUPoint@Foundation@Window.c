/*
 * XREFs of ?GetFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXPEAUPoint@Foundation@Windows@@I@Z @ 0x1802553FC
 * Callers:
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x18007EBC8 (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU-$IVectorView@UCoreK.c)
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IEPEAIPEAURect@Foundation@8@PEAE@Z @ 0x180255CA0 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     ??$_Try_emplace@AEBI$$V@?$map@IURelativePositionOnScreen@KeyboardHosting@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x18014046C (--$_Try_emplace@AEBI$$V@-$map@IURelativePositionOnScreen@KeyboardHosting@@U-$less@I@std@@V-$allo.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IUSize@Foundation@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x18021F47C (--$_Try_emplace@AEBI$$V@-$map@IUSize@Foundation@Windows@@U-$less@I@std@@V-$allocator@U-$pair@$$C.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??0MonitorInformation@KeyboardHosting@@QEAA@AEBU01@@Z @ 0x180479DCC (--0MonitorInformation@KeyboardHosting@@QEAA@AEBU01@@Z.c)
 *     ?GetSnapshot@MonitorInformation@KeyboardHosting@@QEBA?AUMonitorInformationSnapshot@2@XZ @ 0x18047A2B4 (-GetSnapshot@MonitorInformation@KeyboardHosting@@QEBA-AUMonitorInformationSnapshot@2@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details@wil@@QEAA_NXZ @ 0x18047A5A8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details.c)
 */

void __fastcall KeyboardHosting::TabTipAdapterPolicy::GetFloatingBottomPosition(
        KeyboardHosting::TabTipAdapterPolicy *this,
        struct Windows::Foundation::Point *a2,
        unsigned int a3)
{
  char IsEnabled; // al
  char v6; // cl
  float v7; // xmm8_4
  unsigned int v8; // r9d
  __int64 v9; // rbx
  __int64 v10; // rax
  float v11; // xmm6_4
  float v12; // xmm7_4
  unsigned int v13; // r9d
  __int64 v14; // rbx
  __int64 v15; // rax
  float v16; // xmm1_4
  float v17; // xmm8_4
  float v18; // xmm1_4
  const struct KeyboardHosting::MonitorInformation *v19; // rdx
  float v20; // xmm8_4
  unsigned int v21; // r9d
  __int64 v22; // rbx
  __int64 v23; // rax
  float v24; // xmm6_4
  float v25; // xmm7_4
  unsigned int v26; // r9d
  __int64 v27; // rbx
  __int64 v28; // rax
  float v29; // xmm1_4
  unsigned int v30; // [rsp+28h] [rbp-E0h] BYREF
  _BYTE v31[16]; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE v32[24]; // [rsp+40h] [rbp-C8h] BYREF
  _DWORD v33[20]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v34[8]; // [rsp+A8h] [rbp-60h] BYREF
  float v35; // [rsp+B0h] [rbp-58h]
  float v36; // [rsp+B4h] [rbp-54h]
  float v37; // [rsp+B8h] [rbp-50h]
  float v38; // [rsp+BCh] [rbp-4Ch]
  int v39; // [rsp+D0h] [rbp-38h]

  v30 = a3;
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl);
  v6 = *((_BYTE *)this + 860);
  if ( IsEnabled )
  {
    KeyboardHosting::MonitorInformation::GetSnapshot((char *)this + (v6 != 0 ? 400LL : 232LL), v33);
    v7 = (float)v33[2];
    v9 = *(_QWORD *)std::map<unsigned int,Windows::Foundation::Size>::_Try_emplace<unsigned int const &,>(
                      (__int64 **)this + 105,
                      (__int64)v31,
                      &v30,
                      v8);
    v10 = std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
            (_QWORD *)this + 103,
            (__int64)v32,
            &v30);
    v11 = *(float *)(v9 + 32);
    v12 = *(float *)(*(_QWORD *)v10 + 32LL);
    v14 = *(_QWORD *)std::map<unsigned int,Windows::Foundation::Size>::_Try_emplace<unsigned int const &,>(
                       (__int64 **)this + 105,
                       (__int64)v32,
                       &v30,
                       v13);
    v15 = std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
            (_QWORD *)this + 103,
            (__int64)v31,
            &v30);
    v16 = v7;
    v17 = (float)((float)((float)((float)(v7 * *(float *)&v33[10]) / 100.0) - *(float *)(v14 + 36))
                * *(float *)(*(_QWORD *)v15 + 36LL))
        + *(float *)&v33[8];
    v18 = (float)((float)((float)((float)(v16 * *(float *)&v33[9]) / 100.0) - v11) * v12) + *(float *)&v33[7];
  }
  else
  {
    v19 = (KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 400);
    if ( !v6 )
      v19 = (KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 232);
    KeyboardHosting::MonitorInformation::MonitorInformation((KeyboardHosting::MonitorInformation *)v34, v19);
    v20 = (float)v39;
    v22 = *(_QWORD *)std::map<unsigned int,Windows::Foundation::Size>::_Try_emplace<unsigned int const &,>(
                       (__int64 **)this + 105,
                       (__int64)v32,
                       &v30,
                       v21);
    v23 = std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
            (_QWORD *)this + 103,
            (__int64)v31,
            &v30);
    v24 = *(float *)(v22 + 32);
    v25 = *(float *)(*(_QWORD *)v23 + 32LL);
    v27 = *(_QWORD *)std::map<unsigned int,Windows::Foundation::Size>::_Try_emplace<unsigned int const &,>(
                       (__int64 **)this + 105,
                       (__int64)v32,
                       &v30,
                       v26);
    v28 = std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
            (_QWORD *)this + 103,
            (__int64)v31,
            &v30);
    v29 = v20;
    v17 = (float)((float)((float)((float)(v20 * v38) / 100.0) - *(float *)(v27 + 36)) * *(float *)(*(_QWORD *)v28 + 36LL))
        + v36;
    v18 = (float)((float)((float)((float)(v29 * v37) / 100.0) - v24) * v25) + v35;
  }
  *(float *)a2 = v18;
  *((float *)a2 + 1) = v17;
}
