/*
 * XREFs of ?evaluate@_tip_SearchWebProviderInstallTest@@QEAAXXZ @ 0x1803C3160
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@EEAAXXZ @ 0x1803C2BE0 (-evaluate@-$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x1802943F4 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_SearchWebProviderInstallTest::evaluate(_tip_SearchWebProviderInstallTest *this, const char *a2)
{
  const char *v2; // rax
  __int64 v3; // r9
  __int64 v4; // rdx
  char v5; // r11
  __int64 v6; // r9
  char v7; // r11
  __int64 v8; // r9
  char v9; // r11
  __int64 v10; // r9
  char v11; // r11
  __int64 v12; // r9
  char v13; // r11
  __int64 v14; // r10
  const char *v15; // rax
  __int64 v16; // r10
  char v17; // r11

  if ( *((_BYTE *)this + 20) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"Reason::install_package_regkeys_not_set", a2);
    v4 = *(_QWORD *)(v3 + 8);
    if ( *(_BYTE *)(v4 + 152) != v5 )
      return;
    *(_WORD *)(v4 + 154) = 1;
    goto LABEL_4;
  }
  if ( *((_BYTE *)this + 169) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"Reason::app_uninstalled_by_user", a2);
    v4 = *(_QWORD *)(v6 + 8);
    if ( *(_BYTE *)(v4 + 152) == v7 )
    {
      *(_WORD *)(v4 + 154) = 6;
LABEL_4:
      *(_BYTE *)(v4 + 152) = 4;
LABEL_5:
      *(_QWORD *)(v4 + 160) = v2;
    }
  }
  else if ( !*((_BYTE *)this + 56) || *((_BYTE *)this + 168) )
  {
    if ( *((_BYTE *)this + 57) )
    {
      v14 = *((_QWORD *)this + 1);
      if ( (*(_DWORD *)(v14 + 56) & 0x200) != 0 )
      {
        if ( *((int *)this + 24) < 0 )
        {
          v15 = tip2::details::reason_string((tip2::details *)"Reason::app_installed_regkey_set_failed", a2);
          if ( *(_BYTE *)(v16 + 152) == v17 )
          {
            *(_BYTE *)(v16 + 152) = 2;
            *(_WORD *)(v16 + 154) = 4;
            *(_QWORD *)(v16 + 160) = v15;
          }
          return;
        }
        if ( *(_BYTE *)(v14 + 152) )
          return;
        *(_BYTE *)(v14 + 152) = 1;
        *(_WORD *)(v14 + 154) = 0x8000;
      }
      else
      {
        if ( *(_BYTE *)(v14 + 152) )
          return;
        *(_BYTE *)(v14 + 152) = 3;
        *(_WORD *)(v14 + 154) = 16385;
      }
      *(_QWORD *)(v14 + 160) = 0LL;
      return;
    }
    if ( *((_BYTE *)this + 168) )
    {
      v2 = tip2::details::reason_string((tip2::details *)"Reason::app_update_not_registered", a2);
      v4 = *(_QWORD *)(v12 + 8);
      if ( *(_BYTE *)(v4 + 152) == v13 )
      {
        *(_BYTE *)(v4 + 152) = 3;
        *(_WORD *)(v4 + 154) = 5;
        goto LABEL_5;
      }
    }
    else
    {
      v2 = tip2::details::reason_string((tip2::details *)"Reason::app_not_registered", a2);
      v4 = *(_QWORD *)(v10 + 8);
      if ( *(_BYTE *)(v4 + 152) == v11 )
      {
        *(_BYTE *)(v4 + 152) = 3;
        *(_WORD *)(v4 + 154) = 3;
        goto LABEL_5;
      }
    }
  }
  else
  {
    v2 = tip2::details::reason_string((tip2::details *)"Reason::app_already_installed", a2);
    v4 = *(_QWORD *)(v8 + 8);
    if ( *(_BYTE *)(v4 + 152) == v9 )
    {
      *(_WORD *)(v4 + 154) = 2;
      goto LABEL_4;
    }
  }
}
