/*
 * XREFs of ?evaluate@_tip_StartMenuAutomaticInvokeDuringLogonTest@@QEAAXXZ @ 0x180461A04
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@EEAAXXZ @ 0x1804619D0 (-evaluate@-$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x1802943F4 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_StartMenuAutomaticInvokeDuringLogonTest::evaluate(
        _tip_StartMenuAutomaticInvokeDuringLogonTest *this,
        const char *a2)
{
  const char *v2; // rax
  __int64 v3; // r9
  __int64 v4; // rcx
  char v5; // r10
  const char *v6; // rax
  __int64 v7; // r9
  __int64 v8; // rcx
  char v9; // r10
  int v10; // eax
  __int64 v11; // r9
  char v12; // r10
  __int64 v13; // r9
  char v14; // r10
  __int64 v15; // r9
  char v16; // r10
  __int64 v17; // r9
  char v18; // r10
  __int64 v19; // r9
  char v20; // r10
  __int64 v21; // r9
  char v22; // r10
  __int64 v23; // r9
  char v24; // r10
  __int64 v25; // r9
  char v26; // r10
  __int64 v27; // r9
  char v28; // r10
  __int64 v29; // rax
  __int64 v30; // r9
  char v31; // r10

  if ( *((_BYTE *)this + 16) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::explorer_black_screen_logon", a2);
    v4 = *(_QWORD *)(v3 + 8);
    if ( *(_BYTE *)(v4 + 152) != v5 )
      return;
    *(_WORD *)(v4 + 154) = 1;
    goto LABEL_48;
  }
  if ( *((_BYTE *)this + 17) )
  {
    v6 = tip2::details::reason_string((tip2::details *)"reason::logon_completed_before_immersive_shell_init", a2);
    v8 = *(_QWORD *)(v7 + 8);
    if ( *(_BYTE *)(v8 + 152) != v9 )
      return;
    *(_BYTE *)(v8 + 152) = 4;
    *(_WORD *)(v8 + 154) = 2;
    goto LABEL_7;
  }
  v10 = *((_DWORD *)this + 10);
  if ( v10 != -2144927148 && v10 != -2147009295 )
  {
    if ( v10 < 0 )
    {
      v2 = tip2::details::reason_string((tip2::details *)"reason::activation_failure", a2);
      v4 = *(_QWORD *)(v11 + 8);
      if ( *(_BYTE *)(v4 + 152) != v12 )
        return;
      *(_WORD *)(v4 + 154) = 7;
      goto LABEL_48;
    }
    if ( *((_BYTE *)this + 36) )
    {
      v2 = tip2::details::reason_string((tip2::details *)"reason::start_crashed_during_invoke", a2);
      v4 = *(_QWORD *)(v13 + 8);
      if ( *(_BYTE *)(v4 + 152) != v14 )
        return;
      *(_WORD *)(v4 + 154) = 6;
      goto LABEL_48;
    }
    if ( *((_BYTE *)this + 37) )
    {
      if ( *((_BYTE *)this + 33) || *((_BYTE *)this + 34) || *((_BYTE *)this + 35) )
      {
        v2 = tip2::details::reason_string((tip2::details *)"reason::search_failed_unable_to_recover", a2);
        v4 = *(_QWORD *)(v15 + 8);
        if ( *(_BYTE *)(v4 + 152) != v16 )
          return;
        *(_WORD *)(v4 + 154) = 10;
        goto LABEL_48;
      }
    }
    else if ( *((_BYTE *)this + 35) )
    {
      v2 = tip2::details::reason_string((tip2::details *)"reason::timed_out_after_five_seconds", a2);
      v4 = *(_QWORD *)(v17 + 8);
      if ( *(_BYTE *)(v4 + 152) != v18 )
        return;
      *(_WORD *)(v4 + 154) = 5;
      goto LABEL_48;
    }
    if ( *((_BYTE *)this + 33) )
    {
      v2 = tip2::details::reason_string((tip2::details *)"reason::foreground_could_not_be_claimed", a2);
      v4 = *(_QWORD *)(v19 + 8);
      if ( *(_BYTE *)(v4 + 152) != v20 )
        return;
      *(_WORD *)(v4 + 154) = 11;
      goto LABEL_48;
    }
    if ( *((_BYTE *)this + 34) )
    {
      v2 = tip2::details::reason_string((tip2::details *)"reason::foreground_lost_invoke_abort", a2);
      v4 = *(_QWORD *)(v21 + 8);
      if ( *(_BYTE *)(v4 + 152) != v22 )
        return;
      *(_WORD *)(v4 + 154) = 12;
      goto LABEL_48;
    }
    if ( *((__int64 *)this + 3) < 500 )
    {
      v2 = tip2::details::reason_string((tip2::details *)"reason::dismissed_too_quickly", a2);
      v4 = *(_QWORD *)(v23 + 8);
      if ( *(_BYTE *)(v4 + 152) != v24 )
        return;
      *(_WORD *)(v4 + 154) = 4;
      goto LABEL_48;
    }
    if ( *((_BYTE *)this + 44) )
    {
      v2 = tip2::details::reason_string((tip2::details *)"reason::immersive_shell_teardown_before_show", a2);
      v4 = *(_QWORD *)(v25 + 8);
      if ( *(_BYTE *)(v4 + 152) != v26 )
        return;
      *(_WORD *)(v4 + 154) = 13;
      goto LABEL_48;
    }
    if ( !*((_BYTE *)this + 37) )
    {
      v29 = *((_QWORD *)this + 1);
      if ( (*(_DWORD *)(v29 + 56) & 0x200) != 0 )
      {
        if ( *(_BYTE *)(v29 + 152) )
          return;
        *(_BYTE *)(v29 + 152) = 1;
        *(_WORD *)(v29 + 154) = 0x8000;
      }
      else
      {
        if ( *(_BYTE *)(v29 + 152) )
          return;
        *(_BYTE *)(v29 + 152) = 3;
        *(_WORD *)(v29 + 154) = 16385;
      }
      *(_QWORD *)(v29 + 160) = 0LL;
      return;
    }
    v6 = tip2::details::reason_string((tip2::details *)"reason::search_is_missing", a2);
    v8 = *(_QWORD *)(v27 + 8);
    if ( *(_BYTE *)(v8 + 152) != v28 )
      return;
    *(_BYTE *)(v8 + 152) = 2;
    *(_WORD *)(v8 + 154) = 9;
LABEL_7:
    *(_QWORD *)(v8 + 160) = v6;
    return;
  }
  v2 = tip2::details::reason_string((tip2::details *)"reason::critical_start_dialog", a2);
  v4 = *(_QWORD *)(v30 + 8);
  if ( *(_BYTE *)(v4 + 152) != v31 )
    return;
  *(_WORD *)(v4 + 154) = 8;
LABEL_48:
  *(_QWORD *)(v4 + 160) = v2;
  *(_BYTE *)(v4 + 152) = 3;
}
