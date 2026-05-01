/*
 * XREFs of ?OnPenButtonCopilotAction@CopilotHotkeyManager@@QEAAXAEBUPenButtonActionData@@@Z @ 0x180633C80
 * Callers:
 *     ??R?$__func@V_lambda_6880c51ab46d13359335fd5725fb047c_@@$$A6AXAEBUPenButtonActionData@@@Z@__function@wistd@@UEAAXAEBUPenButtonActionData@@@Z @ 0x1806225A0 (--R-$__func@V_lambda_6880c51ab46d13359335fd5725fb047c_@@$$A6AXAEBUPenButtonActionData@@@Z@__func.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180048710 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800561C8 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Check_offset@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBAX_K@Z @ 0x180056DA4 (-_Check_offset@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBAX_K@Z.c)
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x180056E00 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800F2678 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??1TargetAppExtensionDetails@@QEAA@XZ @ 0x18062216C (--1TargetAppExtensionDetails@@QEAA@XZ.c)
 *     ??4TargetAppExtensionDetails@@QEAAAEAU0@$$QEAU0@@Z @ 0x180622234 (--4TargetAppExtensionDetails@@QEAAAEAU0@$$QEAU0@@Z.c)
 *     ?ClearFastpathRegistrationProperties@CopilotHotkeyManager@@AEAAXXZ @ 0x180622BFC (-ClearFastpathRegistrationProperties@CopilotHotkeyManager@@AEAAXXZ.c)
 *     ?GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA?AUTargetAppExtensionDetails@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180624D18 (-GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA-AUTargetAppExtensionDetails@@V-$basic_s.c)
 *     ?HandlePenButtonAction@CopilotHotkeyManager@@AEAAXW4CopilotInvocationType@@AEBUPropertyDetails@@@Z @ 0x180625C60 (-HandlePenButtonAction@CopilotHotkeyManager@@AEAAXW4CopilotInvocationType@@AEBUPropertyDetails@@.c)
 *     ?UpdateTargetAppDetailsCacheIfNecessary@CopilotHotkeyManager@@AEAAXXZ @ 0x1806366E4 (-UpdateTargetAppDetailsCacheIfNecessary@CopilotHotkeyManager@@AEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_PenButtonSettingsModernization@@@details@wil@@QEAA_NXZ @ 0x180636CC4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_PenButtonSettingsModernization@@@.c)
 *     ?find_first_of@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KQEBG_K@Z @ 0x1806373F0 (-find_first_of@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_KQEBG_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CopilotHotkeyManager::OnPenButtonCopilotAction(
        CopilotHotkeyManager *this,
        const struct PenButtonActionData *a2)
{
  int v4; // r14d
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // r8
  unsigned __int64 first_of; // r15
  void **v9; // rdx
  __int128 *v10; // rdx
  _QWORD *v11; // rcx
  __int64 v12; // r8
  char **v13; // rax
  char *v14; // rbx
  _OWORD v15[2]; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v16; // [rsp+48h] [rbp-B8h]
  void *v17[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v18; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v19; // [rsp+68h] [rbp-98h]
  __int128 v20; // [rsp+70h] [rbp-90h] BYREF
  __m128i si128; // [rsp+80h] [rbp-80h]
  _OWORD v22[2]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v23[304]; // [rsp+B0h] [rbp-50h] BYREF

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_PenButtonSettingsModernization>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_PenButtonSettingsModernization>::GetImpl'::`2'::impl) )
    *((_QWORD *)this + 79) = GetTickCount();
  switch ( *(_DWORD *)a2 )
  {
    case 1:
      v4 = 5;
      break;
    case 2:
      v4 = 6;
      break;
    case 3:
      v4 = 7;
      break;
    default:
      return;
  }
  v15[0] = 0LL;
  v15[1] = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v15[0]) = 0;
  v16 = 0LL;
  if ( *((_DWORD *)a2 + 1) )
  {
    if ( *((_DWORD *)a2 + 1) != 1 )
      goto LABEL_41;
    if ( a2 == (const struct PenButtonActionData *)-8LL )
      goto LABEL_41;
    v6 = -1LL;
    do
      ++v6;
    while ( *((_WORD *)a2 + v6 + 4) );
    if ( !v6 )
      goto LABEL_41;
    std::wstring::wstring((char **)v17, (_WORD *)a2 + 4);
    v20 = 0LL;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    LOWORD(v20) = 0;
    first_of = std::wstring::find_first_of(v17);
    if ( first_of == -1LL )
    {
      std::wstring::operator=((char *)&v20, (char *)v17, v7);
    }
    else
    {
      memset(v22, 0, sizeof(v22));
      std::_String_val<std::_Simple_types<unsigned short>>::_Check_offset((__int64)v17, 0LL);
      if ( v18 < first_of )
        first_of = v18;
      v9 = v17;
      if ( v19 > 7 )
        v9 = (void **)v17[0];
      std::wstring::_Construct<1,unsigned short const *>((char **)v22, v9, first_of);
      std::wstring::operator=((__int64)&v20, (__int64)v22);
      std::wstring::_Tidy_deallocate((void **)v22);
    }
    if ( !*((_QWORD *)this + 28) || !*((_QWORD *)this + 32) )
      goto LABEL_31;
    v10 = &v20;
    if ( si128.m128i_i64[1] > 7uLL )
      v10 = (__int128 *)v20;
    v11 = (_QWORD *)((char *)this + 240);
    if ( *((_QWORD *)this + 33) > 7uLL )
      v11 = (_QWORD *)*v11;
    if ( (unsigned int)_o__wcsicmp(v11, v10) )
    {
LABEL_31:
      CopilotHotkeyManager::ClearFastpathRegistrationProperties((RTL_SRWLOCK *)this);
      v13 = std::wstring::wstring((char **)v22, (_WORD *)a2 + 4);
      CopilotHotkeyManager::GetTargetAppExtensionDetails(this, v23, (__int64)v13);
    }
    std::wstring::operator=((char *)this + 208, (char *)v17, v12);
    std::wstring::_Tidy_deallocate((void **)&v20);
    std::wstring::_Tidy_deallocate(v17);
  }
  else
  {
    CopilotHotkeyManager::UpdateTargetAppDetailsCacheIfNecessary(this);
  }
  switch ( *(_DWORD *)a2 )
  {
    case 1:
      v14 = (char *)this + 392;
      break;
    case 2:
      v14 = (char *)this + 432;
      break;
    case 3:
      v14 = (char *)this + 472;
      break;
    default:
      goto LABEL_39;
  }
  std::wstring::operator=((char *)v15, v14, v5);
  LOBYTE(v16) = v14[32];
  HIDWORD(v16) = *((_DWORD *)v14 + 9);
LABEL_39:
  if ( *((_QWORD *)this + 28) )
    CopilotHotkeyManager::HandlePenButtonAction((__int64)this, v4, (__int64)v15);
LABEL_41:
  std::wstring::_Tidy_deallocate((void **)v15);
}
