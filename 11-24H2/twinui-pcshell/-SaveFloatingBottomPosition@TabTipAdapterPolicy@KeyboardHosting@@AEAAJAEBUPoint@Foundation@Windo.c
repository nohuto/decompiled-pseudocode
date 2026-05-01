/*
 * XREFs of ?SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUPoint@Foundation@Windows@@I@Z @ 0x1804872D4
 * Callers:
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IEPEAIPEAURect@Foundation@8@PEAE@Z @ 0x180255CA0 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 *     ?HandleDragEnded@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIURect@Foundation@Windows@@PEAW4MoveAnimationType@Text@Shell@Internal@5@PEAIPEAU345@PEAW4ShellRequestType@7895@@Z @ 0x180485CF0 (-HandleDragEnded@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIURect@Foundation@Windows@@PEAW4MoveA.c)
 * Callees:
 *     ??$_Try_emplace@AEBI$$V@?$map@IV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x18014036C (--$_Try_emplace@AEBI$$V@-$map@IV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IURelativePositionOnScreen@KeyboardHosting@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x18014046C (--$_Try_emplace@AEBI$$V@-$map@IURelativePositionOnScreen@KeyboardHosting@@U-$less@I@std@@V-$allo.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@IV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@@2@AEBI@Z @ 0x18019570C (-find@-$_Tree@V-$_Tmap_traits@IV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IUSize@Foundation@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x18021F47C (--$_Try_emplace@AEBI$$V@-$map@IUSize@Foundation@Windows@@U-$less@I@std@@V-$allocator@U-$pair@$$C.c)
 *     ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x1802B1FAC (-Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18033BE34 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ??0MonitorInformation@KeyboardHosting@@QEAA@AEBU01@@Z @ 0x180479DCC (--0MonitorInformation@KeyboardHosting@@QEAA@AEBU01@@Z.c)
 *     ?GetSnapshot@MonitorInformation@KeyboardHosting@@QEBA?AUMonitorInformationSnapshot@2@XZ @ 0x18047A2B4 (-GetSnapshot@MonitorInformation@KeyboardHosting@@QEBA-AUMonitorInformationSnapshot@2@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details@wil@@QEAA_NXZ @ 0x18047A5A8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::SaveFloatingBottomPosition(
        KeyboardHosting::TabTipAdapterPolicy *this,
        const struct Windows::Foundation::Point *a2,
        int a3)
{
  char IsEnabled; // al
  char v6; // cl
  unsigned int v7; // r9d
  float v8; // xmm10_4
  float v9; // xmm12_4
  __m128 v10; // xmm0
  unsigned __int32 v11; // xmm8_4
  unsigned __int32 v12; // xmm7_4
  const struct KeyboardHosting::MonitorInformation *v13; // rdx
  __m128 v14; // xmm0
  __int64 v15; // rax
  __int64 v16; // rcx
  float v17; // xmm11_4
  float v18; // xmm8_4
  _QWORD *v19; // rdi
  float v20; // xmm6_4
  __int64 v21; // rbx
  bool v22; // al
  unsigned int v23; // r9d
  __int64 v24; // rax
  const WCHAR *v25; // r8
  unsigned int v26; // eax
  unsigned int v27; // r9d
  __int64 v28; // rax
  const WCHAR *v29; // r8
  unsigned int v30; // eax
  const wchar_t *v31; // rax
  bool v32; // zf
  const char *cbData; // [rsp+30h] [rbp-D8h]
  _QWORD lpData[3]; // [rsp+48h] [rbp-C0h] BYREF
  int Data; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v37[16]; // [rsp+68h] [rbp-A0h] BYREF
  int v38; // [rsp+78h] [rbp-90h] BYREF
  int v39; // [rsp+80h] [rbp-88h]
  __m128 v40; // [rsp+94h] [rbp-74h]
  _BYTE v41[8]; // [rsp+C8h] [rbp-40h] BYREF
  __m128 v42; // [rsp+D0h] [rbp-38h]
  int v43; // [rsp+F0h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+220h] [rbp+118h]

  LODWORD(lpData[0]) = a3;
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl);
  v6 = *((_BYTE *)this + 860);
  if ( IsEnabled )
  {
    KeyboardHosting::MonitorInformation::GetSnapshot((__int64)this + (v6 != 0 ? 400LL : 232LL), (__int64)&v38);
    v8 = *(float *)a2 - v40.m128_f32[0];
    v9 = *((float *)a2 + 1) - v40.m128_f32[1];
    v10 = _mm_div_ps(
            _mm_mul_ps(
              v40,
              _mm_shuffle_ps((__m128)COERCE_UNSIGNED_INT((float)v39), (__m128)COERCE_UNSIGNED_INT((float)v39), 0)),
            (__m128)_xmm);
    v11 = _mm_shuffle_ps(v10, v10, 170).m128_u32[0];
    v12 = _mm_shuffle_ps(v10, v10, 255).m128_u32[0];
    *(__m128 *)&lpData[1] = v10;
  }
  else
  {
    v13 = (KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 400);
    if ( !v6 )
      v13 = (KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 232);
    KeyboardHosting::MonitorInformation::MonitorInformation((KeyboardHosting::MonitorInformation *)v41, v13);
    v8 = *(float *)a2 - v42.m128_f32[0];
    v9 = *((float *)a2 + 1) - v42.m128_f32[1];
    v14 = _mm_div_ps(
            _mm_mul_ps(
              v42,
              _mm_shuffle_ps((__m128)COERCE_UNSIGNED_INT((float)v43), (__m128)COERCE_UNSIGNED_INT((float)v43), 0)),
            (__m128)_xmm);
    v12 = _mm_shuffle_ps(v14, v14, 255).m128_u32[0];
    v11 = _mm_shuffle_ps(v14, v14, 170).m128_u32[0];
    *(__m128 *)&lpData[1] = v14;
  }
  v15 = std::map<unsigned int,Windows::Foundation::Size>::_Try_emplace<unsigned int const &,>(
          (__int64 **)this + 105,
          (__int64)&lpData[1],
          (unsigned int *)lpData,
          v7);
  v16 = *(_QWORD *)v15;
  v17 = *(float *)(*(_QWORD *)v15 + 36LL);
  if ( *(float *)&v11 < *(float *)(*(_QWORD *)v15 + 32LL) || *(float *)&v12 < v17 )
  {
    v19 = (_QWORD *)((char *)this + 824);
    *(_BYTE *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                            (_QWORD *)this + 103,
                            (__int64)&lpData[1],
                            (unsigned int *)lpData)
             + 40LL) = 0;
  }
  else
  {
    if ( *(float *)&v11 <= *(float *)(v16 + 32) )
    {
      v19 = (_QWORD *)((char *)this + 824);
      *(_DWORD *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                               (_QWORD *)this + 103,
                               (__int64)&lpData[1],
                               (unsigned int *)lpData)
                + 32LL) = 0;
    }
    else
    {
      v18 = fmaxf(0.0, v8 / (float)(*(float *)&v11 - *(float *)(v16 + 32)));
      if ( v18 >= 1.0 )
        v18 = FLOAT_1_0;
      v19 = (_QWORD *)((char *)this + 824);
      *(float *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                              (_QWORD *)this + 103,
                              (__int64)&lpData[1],
                              (unsigned int *)lpData)
               + 32LL) = v18;
    }
    if ( *(float *)&v12 <= v17 )
    {
      *(_DWORD *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                               v19,
                               (__int64)&lpData[1],
                               (unsigned int *)lpData)
                + 36LL) = 0;
    }
    else
    {
      v20 = fmaxf(0.0, v9 / (float)(*(float *)&v12 - v17));
      if ( v20 >= 1.0 )
        v20 = FLOAT_1_0;
      *(float *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                              v19,
                              (__int64)&lpData[1],
                              (unsigned int *)lpData)
               + 36LL) = v20;
    }
    *(_BYTE *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                            v19,
                            (__int64)&lpData[1],
                            (unsigned int *)lpData)
             + 40LL) = 1;
  }
  if ( *(_BYTE *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                               v19,
                               (__int64)&lpData[1],
                               (unsigned int *)lpData)
                + 40LL) )
  {
    v21 = *std::_Tree<std::_Tmap_traits<unsigned int,std::wstring,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::wstring>>,0>>::find(
             (__int64 **)this + 9,
             &lpData[1],
             lpData);
    v22 = *std::_Tree<std::_Tmap_traits<unsigned int,std::wstring,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::wstring>>,0>>::find(
             (__int64 **)this + 11,
             &lpData[1],
             lpData) != *((_QWORD *)this + 11);
    if ( v21 == *((_QWORD *)this + 9) )
    {
      v32 = !v22;
      v31 = L"XPosition";
      if ( v32 )
        v31 = L"XPosition and YPosition";
    }
    else
    {
      if ( v22 )
      {
        Data = (int)(float)((float)*((int *)this + 27)
                          * *(float *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                                                    v19,
                                                    (__int64)v37,
                                                    (unsigned int *)lpData)
                                     + 32LL));
        v24 = std::map<unsigned int,std::wstring>::_Try_emplace<unsigned int const &,>(
                (__int64 **)this + 9,
                (__int64)v37,
                (unsigned int *)lpData,
                v23);
        v25 = (const WCHAR *)(*(_QWORD *)v24 + 40LL);
        if ( *(_QWORD *)(*(_QWORD *)v24 + 64LL) > 7uLL )
          v25 = *(const WCHAR **)v25;
        v26 = RegSetKeyValueW(HKEY_CURRENT_USER, L"SOFTWARE\\Microsoft\\TabletTip\\1.7", v25, 4u, &Data, 4u);
        if ( v26 )
          wil::details::in1diag3::_Log_Win32(
            retaddr,
            1989LL,
            (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
            (const char *)v26);
        LODWORD(lpData[1]) = (int)(float)((float)*((int *)this + 27)
                                        * *(float *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                                                                  v19,
                                                                  (__int64)v37,
                                                                  (unsigned int *)lpData)
                                                   + 36LL));
        v28 = std::map<unsigned int,std::wstring>::_Try_emplace<unsigned int const &,>(
                (__int64 **)this + 11,
                (__int64)v37,
                (unsigned int *)lpData,
                v27);
        v29 = (const WCHAR *)(*(_QWORD *)v28 + 40LL);
        if ( *(_QWORD *)(*(_QWORD *)v28 + 64LL) > 7uLL )
          v29 = *(const WCHAR **)v29;
        v30 = RegSetKeyValueW(HKEY_CURRENT_USER, L"SOFTWARE\\Microsoft\\TabletTip\\1.7", v29, 4u, &lpData[1], 4u);
        if ( v30 )
          wil::details::in1diag3::_Log_Win32(
            retaddr,
            1992LL,
            (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
            (const char *)v30);
        return 0LL;
      }
      v31 = L"YPosition";
    }
    LODWORD(cbData) = lpData[0];
    wil::details::in1diag3::Log_HrMsg(
      retaddr,
      (void *)0x7CE,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)0x8000FFFFLL,
      (unsigned __int64)"View id %u is missing key(s) for %ls",
      cbData,
      v31);
  }
  return 0LL;
}
