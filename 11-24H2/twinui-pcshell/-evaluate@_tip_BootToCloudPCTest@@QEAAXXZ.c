/*
 * XREFs of ?evaluate@_tip_BootToCloudPCTest@@QEAAXXZ @ 0x180642984
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@EEAAXXZ @ 0x180642910 (-evaluate@-$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x1802943F4 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_BootToCloudPCTest::evaluate(_tip_BootToCloudPCTest *this, const char *a2)
{
  const char *v2; // rax
  __int16 v3; // r10
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // r9
  char v7; // r10
  __int64 v8; // r9
  char v9; // r10
  __int64 v10; // r9
  char v11; // r10
  __int64 v12; // r9
  char v13; // r10
  __int64 v14; // r9
  char v15; // r10
  __int64 v16; // r9
  char v17; // r10
  __int64 v18; // r9
  char v19; // r10
  __int64 v20; // r9
  char v21; // r10
  __int64 v22; // r9
  char v23; // r10
  __int64 v24; // r9
  char v25; // r10
  __int64 v26; // r9
  char v27; // r10
  __int64 v28; // r9
  char v29; // r10
  __int64 v30; // rax

  if ( *((_BYTE *)this + 16) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::cloudpc_connected_successfully", a2);
    v5 = *(_QWORD *)(v4 + 8);
    if ( *(_BYTE *)(v5 + 152) != (_BYTE)v3 )
      return;
    *(_BYTE *)(v5 + 152) = v3 + 1;
    *(_WORD *)(v5 + 154) = v3 + 1;
    goto LABEL_4;
  }
  if ( *((_BYTE *)this + 25) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::user_dismissed_connect_screen", a2);
    v5 = *(_QWORD *)(v6 + 8);
    if ( *(_BYTE *)(v5 + 152) == v7 )
    {
      *(_BYTE *)(v5 + 152) = 1;
      *(_WORD *)(v5 + 154) = 10;
LABEL_4:
      *(_QWORD *)(v5 + 160) = v2;
    }
  }
  else if ( *((_BYTE *)this + 18) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::provider_app_already_launched", a2);
    v5 = *(_QWORD *)(v8 + 8);
    if ( *(_BYTE *)(v5 + 152) == v9 )
    {
      *(_BYTE *)(v5 + 152) = 4;
      *(_WORD *)(v5 + 154) = 3;
      goto LABEL_4;
    }
  }
  else if ( *((_BYTE *)this + 20) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::shellappruntime_restarted", a2);
    v5 = *(_QWORD *)(v10 + 8);
    if ( *(_BYTE *)(v5 + 152) == v11 )
    {
      *(_BYTE *)(v5 + 152) = 4;
      *(_WORD *)(v5 + 154) = 5;
      goto LABEL_4;
    }
  }
  else if ( !*((_BYTE *)this + 27) || *((_BYTE *)this + 28) )
  {
    if ( *((_BYTE *)this + 29) )
    {
      v2 = tip2::details::reason_string((tip2::details *)"reason::access_physical_device_triggered", a2);
      v5 = *(_QWORD *)(v14 + 8);
      if ( *(_BYTE *)(v5 + 152) == v15 )
      {
        *(_BYTE *)(v5 + 152) = 4;
        *(_WORD *)(v5 + 154) = 13;
        goto LABEL_4;
      }
    }
    else if ( *((_BYTE *)this + 17) )
    {
      v2 = tip2::details::reason_string((tip2::details *)"reason::provider_app_not_launched", a2);
      v5 = *(_QWORD *)(v16 + 8);
      if ( *(_BYTE *)(v5 + 152) == v17 )
      {
        *(_BYTE *)(v5 + 152) = 3;
        *(_WORD *)(v5 + 154) = 2;
        goto LABEL_4;
      }
    }
    else if ( *((_BYTE *)this + 26) )
    {
      v2 = tip2::details::reason_string((tip2::details *)"reason::provider_app_not_available", a2);
      v5 = *(_QWORD *)(v18 + 8);
      if ( *(_BYTE *)(v5 + 152) == v19 )
      {
        *(_BYTE *)(v5 + 152) = 3;
        *(_WORD *)(v5 + 154) = 11;
        goto LABEL_4;
      }
    }
    else if ( *((_BYTE *)this + 19) )
    {
      v2 = tip2::details::reason_string((tip2::details *)"reason::shelldesktopswitchevent_not_triggered", a2);
      v5 = *(_QWORD *)(v20 + 8);
      if ( *(_BYTE *)(v5 + 152) == v21 )
      {
        *(_BYTE *)(v5 + 152) = 3;
        *(_WORD *)(v5 + 154) = 4;
        goto LABEL_4;
      }
    }
    else if ( *((_BYTE *)this + 21) )
    {
      v2 = tip2::details::reason_string((tip2::details *)"reason::client_disconnected", a2);
      v5 = *(_QWORD *)(v22 + 8);
      if ( *(_BYTE *)(v5 + 152) == v23 )
      {
        *(_BYTE *)(v5 + 152) = 3;
        *(_WORD *)(v5 + 154) = 6;
        goto LABEL_4;
      }
    }
    else if ( *((_BYTE *)this + 22) )
    {
      v2 = tip2::details::reason_string((tip2::details *)"reason::error_transition_screen_triggered", a2);
      v5 = *(_QWORD *)(v24 + 8);
      if ( *(_BYTE *)(v5 + 152) == v25 )
      {
        *(_BYTE *)(v5 + 152) = 3;
        *(_WORD *)(v5 + 154) = 7;
        goto LABEL_4;
      }
    }
    else if ( *((_BYTE *)this + 24) )
    {
      v2 = tip2::details::reason_string((tip2::details *)"reason::timeout_occurred", a2);
      v5 = *(_QWORD *)(v26 + 8);
      if ( *(_BYTE *)(v5 + 152) == v27 )
      {
        *(_BYTE *)(v5 + 152) = 3;
        *(_WORD *)(v5 + 154) = 9;
        goto LABEL_4;
      }
    }
    else if ( *((_BYTE *)this + 23) )
    {
      v2 = tip2::details::reason_string((tip2::details *)"reason::cloudpc_exited", a2);
      v5 = *(_QWORD *)(v28 + 8);
      if ( *(_BYTE *)(v5 + 152) == v29 )
      {
        *(_BYTE *)(v5 + 152) = 3;
        *(_WORD *)(v5 + 154) = 8;
        goto LABEL_4;
      }
    }
    else
    {
      v30 = *((_QWORD *)this + 1);
      if ( (*(_DWORD *)(v30 + 56) & 0x200) != 0 )
      {
        if ( *(_BYTE *)(v30 + 152) )
          return;
        *(_BYTE *)(v30 + 152) = 1;
        *(_WORD *)(v30 + 154) = 0x8000;
      }
      else
      {
        if ( *(_BYTE *)(v30 + 152) )
          return;
        *(_BYTE *)(v30 + 152) = 3;
        *(_WORD *)(v30 + 154) = 16385;
      }
      *(_QWORD *)(v30 + 160) = 0LL;
    }
  }
  else
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::network_not_connected", a2);
    v5 = *(_QWORD *)(v12 + 8);
    if ( *(_BYTE *)(v5 + 152) == v13 )
    {
      *(_BYTE *)(v5 + 152) = 4;
      *(_WORD *)(v5 + 154) = 12;
      goto LABEL_4;
    }
  }
}
