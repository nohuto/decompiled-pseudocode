/*
 * XREFs of ?evaluate@_tip_SearchHideTest@@QEAAXXZ @ 0x1802479EC
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@EEAAXXZ @ 0x1803C2BA0 (-evaluate@-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x1802943F4 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_46485871@@@details@wil@@QEAA_NXZ @ 0x1803C1AF0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_46485871@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchWebView2@@@details@wil@@QEAA_NXZ @ 0x1803C1F30 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchWebView2@@@det_ea_1803C1F30.c)
 */

void __fastcall _tip_SearchHideTest::evaluate(_tip_SearchHideTest *this, const char *a2)
{
  const char *v3; // rax
  __int64 v4; // rcx
  const char *v5; // rdx
  const char *v6; // rax
  __int64 v7; // rdx
  unsigned int v8; // eax
  int v9; // ecx
  char *v10; // rdi
  __int64 v11; // r9
  const char *v12; // rax
  __int64 v13; // r9
  __int16 v14; // r10
  const char *v15; // rdx
  __int64 v16; // rax

  if ( *((_BYTE *)this + 21) )
  {
    v3 = tip2::details::reason_string((tip2::details *)"Reason::activated_while_hiding", a2);
    v4 = *((_QWORD *)this + 1);
    if ( *(_BYTE *)(v4 + 152) )
      return;
    *(_WORD *)(v4 + 154) = 1;
    goto LABEL_4;
  }
  if ( *((_BYTE *)this + 22) )
  {
    v3 = tip2::details::reason_string((tip2::details *)"Reason::view_destroyed", a2);
    v4 = *((_QWORD *)this + 1);
    if ( !*(_BYTE *)(v4 + 152) )
    {
      *(_WORD *)(v4 + 154) = 7;
LABEL_4:
      *(_BYTE *)(v4 + 152) = 4;
      *(_QWORD *)(v4 + 160) = v3;
      return;
    }
    return;
  }
  if ( !*((_BYTE *)this + 24) )
  {
    if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchWebView2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SearchWebView2>::GetImpl'::`2'::impl)
      && !*((_BYTE *)this + 18) )
    {
      v6 = tip2::details::reason_string((tip2::details *)"Reason::app_not_suspended", v5);
      v7 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v7 + 152) )
        return;
      *(_WORD *)(v7 + 154) = 6;
LABEL_15:
      *(_BYTE *)(v7 + 152) = 3;
      goto LABEL_16;
    }
    if ( !*((_BYTE *)this + 17) )
    {
      v6 = tip2::details::reason_string((tip2::details *)"Reason::view_not_cloaked", v5);
      v7 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v7 + 152) )
        return;
      *(_WORD *)(v7 + 154) = 5;
      goto LABEL_15;
    }
    v8 = *((_DWORD *)this + 7);
    if ( v8 <= 0xB )
    {
      v9 = 3665;
      if ( _bittest(&v9, v8) )
      {
        v6 = tip2::details::reason_string((tip2::details *)"Reason::unexpected_initial_state", v5);
        v7 = *((_QWORD *)this + 1);
        if ( *(_BYTE *)(v7 + 152) )
          return;
        *(_WORD *)(v7 + 154) = 9;
        goto LABEL_15;
      }
    }
    v10 = (char *)this + 8;
    v11 = *((_QWORD *)this + 1);
    if ( (*(_DWORD *)(v11 + 56) & 0x200) == 0 )
    {
      if ( !*(_BYTE *)(v11 + 152) )
      {
        *(_BYTE *)(v11 + 152) = 3;
        *(_WORD *)(v11 + 154) = 16385;
        *(_QWORD *)(v11 + 160) = 0LL;
      }
      return;
    }
    if ( *((_DWORD *)this + 8) == 11 )
    {
      if ( *((_DWORD *)this + 9) == 10 )
      {
        if ( *((_DWORD *)this + 10) == 10 )
        {
          if ( *((_BYTE *)this + 44) )
          {
            v12 = tip2::details::reason_string((tip2::details *)"Reason::view_visible_during_suspension", v5);
            if ( *(_BYTE *)(v13 + 152) )
              return;
            *(_WORD *)(v13 + 154) = 13;
          }
          else
          {
            if ( !*((_BYTE *)this + 45) )
            {
              if ( !*((_BYTE *)this + 19) )
              {
                if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_46485871>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_46485871>::GetImpl'::`2'::impl)
                  && *((_BYTE *)this + 23) )
                {
                  v6 = tip2::details::reason_string((tip2::details *)"Reason::view_visibility_revoked", v15);
                  v7 = *(_QWORD *)v10;
                  if ( *(_BYTE *)(*(_QWORD *)v10 + 152LL) )
                    return;
                  *(_BYTE *)(v7 + 152) = 2;
                  *(_WORD *)(v7 + 154) = 16;
                }
                else
                {
                  if ( !*((_BYTE *)this + 20) )
                  {
                    v16 = *(_QWORD *)v10;
                    if ( !*(_BYTE *)(*(_QWORD *)v10 + 152LL) )
                    {
                      *(_BYTE *)(v16 + 152) = 1;
                      *(_WORD *)(v16 + 154) = 0x8000;
                      *(_QWORD *)(v16 + 160) = 0LL;
                    }
                    return;
                  }
                  v6 = tip2::details::reason_string((tip2::details *)"Reason::suspend_timer_expired", v15);
                  v7 = *(_QWORD *)v10;
                  if ( *(_BYTE *)(*(_QWORD *)v10 + 152LL) )
                    return;
                  *(_BYTE *)(v7 + 152) = 2;
                  *(_WORD *)(v7 + 154) = 3;
                }
LABEL_16:
                *(_QWORD *)(v7 + 160) = v6;
                return;
              }
              v12 = tip2::details::reason_string((tip2::details *)"Reason::hide_view_timer_expired", v5);
              if ( *(_BYTE *)(v13 + 152) )
                return;
              *(_BYTE *)(v13 + 152) = 2;
              *(_WORD *)(v13 + 154) = 2;
LABEL_31:
              *(_QWORD *)(v13 + 160) = v12;
              return;
            }
            v12 = tip2::details::reason_string((tip2::details *)"Reason::navigation_level_active_during_suspension", v5);
            if ( *(_BYTE *)(v13 + 152) )
              return;
            *(_WORD *)(v13 + 154) = 14;
          }
        }
        else
        {
          v12 = tip2::details::reason_string(
                  (tip2::details *)"Reason::unexpected_state_during_last_resort_suspension_timer",
                  v5);
          if ( *(_BYTE *)(v13 + 152) )
            return;
          *(_WORD *)(v13 + 154) = 12;
        }
      }
      else
      {
        v12 = tip2::details::reason_string((tip2::details *)"Reason::unexpected_state_during_view_consolidation", v5);
        if ( *(_BYTE *)(v13 + 152) )
          return;
        *(_WORD *)(v13 + 154) = v14;
      }
    }
    else
    {
      v12 = tip2::details::reason_string((tip2::details *)"Reason::unexpected_state_during_hide_request_timer", v5);
      if ( *(_BYTE *)(v13 + 152) )
        return;
      *(_WORD *)(v13 + 154) = 10;
    }
    *(_BYTE *)(v13 + 152) = 2;
    goto LABEL_31;
  }
  v3 = tip2::details::reason_string((tip2::details *)"Reason::already_hidden", a2);
  v4 = *((_QWORD *)this + 1);
  if ( !*(_BYTE *)(v4 + 152) )
  {
    *(_WORD *)(v4 + 154) = 8;
    goto LABEL_4;
  }
}
