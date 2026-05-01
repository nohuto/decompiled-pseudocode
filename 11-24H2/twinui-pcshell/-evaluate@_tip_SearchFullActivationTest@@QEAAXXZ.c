/*
 * XREFs of ?evaluate@_tip_SearchFullActivationTest@@QEAAXXZ @ 0x1803C2C14
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@EEAAXXZ @ 0x1803C2B80 (-evaluate@-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x1802943F4 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_SearchFullActivationTest::evaluate(_tip_SearchFullActivationTest *this, const char *a2)
{
  int v2; // eax
  const char *v3; // rax
  __int64 v4; // r9
  __int64 v5; // rdx
  char v6; // r11
  __int64 v7; // r9
  char v8; // r11
  __int64 v9; // r9
  char v10; // r11
  __int64 v11; // r9
  char v12; // r11
  __int64 v13; // r9
  char v14; // r11
  const char *v15; // rax
  __int64 v16; // r9
  __int64 v17; // rcx
  char v18; // r11
  __int64 v19; // r9
  char v20; // r11
  __int64 v21; // r9
  char v22; // r11
  int v23; // eax
  __int64 v24; // r9
  char v25; // r11
  __int64 v26; // r9
  char v27; // r11
  char v28; // r10
  __int64 v29; // r9
  char v30; // r11
  __int64 v31; // r9
  char v32; // r11
  __int64 v33; // r9
  char v34; // r11
  __int64 v35; // r9
  char v36; // r11
  char v37; // r10
  __int64 v38; // r9
  char v39; // r11
  char v40; // r10
  __int64 v41; // r9
  char v42; // r11
  __int64 v43; // r9
  char v44; // r11
  __int64 v45; // r9
  char v46; // r11
  __int64 v47; // r10
  const char *v48; // rax
  __int64 v49; // r10
  char v50; // r11

  v2 = *((_DWORD *)this + 19);
  if ( v2 < 0 )
  {
    if ( v2 == -2144927148 || v2 == -2147009295 )
    {
      v3 = tip2::details::reason_string((tip2::details *)"Reason::activation_failure_package_not_registered", a2);
      v5 = *(_QWORD *)(v9 + 8);
      if ( *(_BYTE *)(v5 + 152) != v10 )
        return;
      *(_WORD *)(v5 + 154) = 19;
    }
    else if ( (v2 & 0x1FFF0000) == 0x70000 && (unsigned int)(unsigned __int16)v2 - 15600 <= 0x63 )
    {
      v3 = tip2::details::reason_string((tip2::details *)"Reason::activation_failure_package_error", a2);
      v5 = *(_QWORD *)(v4 + 8);
      if ( *(_BYTE *)(v5 + 152) != v6 )
        return;
      *(_WORD *)(v5 + 154) = 11;
    }
    else
    {
      v3 = tip2::details::reason_string((tip2::details *)"Reason::activation_failure", a2);
      v5 = *(_QWORD *)(v7 + 8);
      if ( *(_BYTE *)(v5 + 152) != v8 )
        return;
      *(_WORD *)(v5 + 154) = 10;
    }
    goto LABEL_12;
  }
  if ( *((_BYTE *)this + 83) )
  {
    v3 = tip2::details::reason_string((tip2::details *)"Reason::view_destroyed_when_search_activates", a2);
    v5 = *(_QWORD *)(v11 + 8);
    if ( *(_BYTE *)(v5 + 152) == v12 )
    {
      *(_WORD *)(v5 + 154) = 18;
LABEL_12:
      *(_BYTE *)(v5 + 152) = 3;
LABEL_13:
      *(_QWORD *)(v5 + 160) = v3;
      return;
    }
    return;
  }
  if ( !*((_BYTE *)this + 26) )
  {
    if ( *((_BYTE *)this + 27) )
    {
      v3 = tip2::details::reason_string((tip2::details *)"Reason::consolidated", a2);
      v5 = *(_QWORD *)(v19 + 8);
      if ( *(_BYTE *)(v5 + 152) == v20 )
      {
        *(_BYTE *)(v5 + 152) = 4;
        *(_WORD *)(v5 + 154) = 3;
        goto LABEL_13;
      }
      return;
    }
    if ( *((_BYTE *)this + 28) )
    {
      v15 = tip2::details::reason_string((tip2::details *)"Reason::dismissed", a2);
      v17 = *(_QWORD *)(v21 + 8);
      if ( *(_BYTE *)(v17 + 152) != v22 )
        return;
      *(_WORD *)(v17 + 154) = 7;
      goto LABEL_23;
    }
    v23 = *((_DWORD *)this + 5);
    if ( *((_DWORD *)this + 4) == 4 )
    {
      if ( v23 == *((_DWORD *)this + 4) )
      {
        v3 = tip2::details::reason_string((tip2::details *)"Reason::activated_again_same_source", a2);
        v5 = *(_QWORD *)(v24 + 8);
        if ( *(_BYTE *)(v5 + 152) == v25 )
        {
          *(_WORD *)(v5 + 154) = 5;
          goto LABEL_12;
        }
        return;
      }
      if ( v23 )
      {
        v3 = tip2::details::reason_string((tip2::details *)"Reason::activated_again", a2);
        v5 = *(_QWORD *)(v26 + 8);
        if ( *(_BYTE *)(v5 + 152) != v27 )
          return;
        *(_BYTE *)(v5 + 152) = 3;
        goto LABEL_38;
      }
      if ( *((_BYTE *)this + 33) )
      {
        v15 = tip2::details::reason_string((tip2::details *)"Reason::prelaunch_skipped", a2);
        v17 = *(_QWORD *)(v29 + 8);
        if ( *(_BYTE *)(v17 + 152) != v30 )
          return;
        *(_BYTE *)(v17 + 152) = v28;
        *(_WORD *)(v17 + 154) = 17;
        goto LABEL_24;
      }
      if ( !*((_BYTE *)this + 81) )
      {
        v3 = tip2::details::reason_string((tip2::details *)"Reason::unexpected_navigation_state_during_prelaunch", a2);
        v5 = *(_QWORD *)(v31 + 8);
        if ( *(_BYTE *)(v5 + 152) == v32 )
        {
          *(_WORD *)(v5 + 154) = 15;
          goto LABEL_12;
        }
        return;
      }
      if ( *((_BYTE *)this + 80) )
      {
        v3 = tip2::details::reason_string((tip2::details *)"Reason::view_visible_during_prelaunch", a2);
        v5 = *(_QWORD *)(v33 + 8);
        if ( *(_BYTE *)(v5 + 152) == v34 )
        {
          *(_WORD *)(v5 + 154) = 14;
          goto LABEL_12;
        }
        return;
      }
      if ( *((_BYTE *)this + 82) )
      {
        v3 = tip2::details::reason_string((tip2::details *)"Reason::prelaunch_deferral_timeout", a2);
        v5 = *(_QWORD *)(v35 + 8);
        if ( *(_BYTE *)(v5 + 152) == v36 )
        {
          *(_WORD *)(v5 + 154) = 9;
          goto LABEL_12;
        }
        return;
      }
    }
    else
    {
      if ( v23 == *((_DWORD *)this + 4) )
      {
        v15 = tip2::details::reason_string((tip2::details *)"Reason::activated_again_same_source", a2);
        v17 = *(_QWORD *)(v38 + 8);
        if ( *(_BYTE *)(v17 + 152) != v39 )
          return;
        *(_BYTE *)(v17 + 152) = v37;
        *(_WORD *)(v17 + 154) = 5;
LABEL_24:
        *(_QWORD *)(v17 + 160) = v15;
        return;
      }
      if ( v23 )
      {
        v3 = tip2::details::reason_string((tip2::details *)"Reason::activated_again", a2);
        v5 = *(_QWORD *)(v41 + 8);
        if ( *(_BYTE *)(v5 + 152) != v42 )
          return;
        *(_BYTE *)(v5 + 152) = v40;
LABEL_38:
        *(_WORD *)(v5 + 154) = 1;
        goto LABEL_13;
      }
      if ( *((_BYTE *)this + 24) )
      {
        v3 = tip2::details::reason_string((tip2::details *)"Reason::activation_test_timeout", a2);
        v5 = *(_QWORD *)(v43 + 8);
        if ( *(_BYTE *)(v5 + 152) == v44 )
        {
          *(_WORD *)(v5 + 154) = 8;
          goto LABEL_12;
        }
        return;
      }
      if ( !*((_BYTE *)this + 29) && !*((_BYTE *)this + 34) )
      {
        v3 = tip2::details::reason_string((tip2::details *)"Reason::unexpected_navigation_state_during_launch", a2);
        v5 = *(_QWORD *)(v45 + 8);
        if ( *(_BYTE *)(v5 + 152) == v46 )
        {
          *(_WORD *)(v5 + 154) = 16;
          goto LABEL_12;
        }
        return;
      }
    }
    v47 = *((_QWORD *)this + 1);
    if ( (*(_DWORD *)(v47 + 56) & 0x200) != 0 )
    {
      if ( *((_BYTE *)this + 35) )
      {
        v48 = tip2::details::reason_string((tip2::details *)"Reason::invalid_hwnd", a2);
        if ( *(_BYTE *)(v49 + 152) == v50 )
        {
          *(_BYTE *)(v49 + 152) = 2;
          *(_WORD *)(v49 + 154) = 6;
          *(_QWORD *)(v49 + 160) = v48;
        }
        return;
      }
      if ( *(_BYTE *)(v47 + 152) )
        return;
      *(_BYTE *)(v47 + 152) = 1;
      *(_WORD *)(v47 + 154) = 0x8000;
    }
    else
    {
      if ( *(_BYTE *)(v47 + 152) )
        return;
      *(_BYTE *)(v47 + 152) = 3;
      *(_WORD *)(v47 + 154) = 16385;
    }
    *(_QWORD *)(v47 + 160) = 0LL;
    return;
  }
  if ( *((_DWORD *)this + 4) != 2 )
  {
    v15 = tip2::details::reason_string((tip2::details *)"Reason::hidden", a2);
    v17 = *(_QWORD *)(v16 + 8);
    if ( *(_BYTE *)(v17 + 152) != v18 )
      return;
    *(_WORD *)(v17 + 154) = 2;
LABEL_23:
    *(_BYTE *)(v17 + 152) = 4;
    goto LABEL_24;
  }
  v3 = tip2::details::reason_string((tip2::details *)"Reason::hidden_by_launcher_timeout", a2);
  v5 = *(_QWORD *)(v13 + 8);
  if ( *(_BYTE *)(v5 + 152) == v14 )
  {
    *(_WORD *)(v5 + 154) = 4;
    goto LABEL_12;
  }
}
