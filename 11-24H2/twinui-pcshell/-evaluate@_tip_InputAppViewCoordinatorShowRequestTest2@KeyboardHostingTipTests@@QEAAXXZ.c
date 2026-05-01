/*
 * XREFs of ?evaluate@_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@QEAAXXZ @ 0x180479134
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@U12@@details@tip2@@EEAAXXZ @ 0x180478DC0 (-evaluate@-$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@U.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x1802943F4 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2::evaluate(
        KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2 *this,
        const char *a2)
{
  const char *v2; // rax
  __int64 *v3; // r9
  __int64 v4; // rcx
  const char *v5; // rax
  __int64 *v6; // r9
  __int64 v7; // rdx
  __int64 *v8; // r9
  __int64 *v9; // r9
  __int64 *v10; // r9
  __int64 v11; // r10
  __int64 v12; // r10
  __int64 v13; // r9
  const char *v14; // rax
  __int64 v15; // r9
  int v16; // eax
  const char *v17; // rax
  __int64 v18; // r9
  __int16 v19; // r11

  if ( *((_BYTE *)this + 16) )
    *(_DWORD *)(*((_QWORD *)this + 1) + 172LL) = 56561732;
  if ( *((_BYTE *)this + 29) )
  {
    if ( *((_BYTE *)this + 30) )
    {
      v2 = tip2::details::reason_string((tip2::details *)"reason::mdm_policy_rejected_show", a2);
      v4 = *v3;
      if ( *(_BYTE *)(*v3 + 152) )
        return;
      *(_WORD *)(v4 + 154) = 26;
      goto LABEL_7;
    }
    if ( *((_BYTE *)this + 31) )
    {
      v5 = tip2::details::reason_string((tip2::details *)"reason::osk_launched", a2);
      v7 = *v6;
      if ( *(_BYTE *)(*v6 + 152) )
        return;
      *(_WORD *)(v7 + 154) = 27;
      goto LABEL_11;
    }
    v5 = tip2::details::reason_string((tip2::details *)"reason::refused_by_tabtipadapter", a2);
    v7 = *v8;
    if ( !*(_BYTE *)(*v8 + 152) )
    {
      *(_BYTE *)(v7 + 152) = 3;
      *(_WORD *)(v7 + 154) = 25;
      goto LABEL_12;
    }
  }
  else if ( *((_BYTE *)this + 28) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::another_show_request", a2);
    v4 = *v9;
    if ( !*(_BYTE *)(*v9 + 152) )
    {
      *(_WORD *)(v4 + 154) = 24;
LABEL_7:
      *(_BYTE *)(v4 + 152) = 4;
      *(_QWORD *)(v4 + 160) = v2;
    }
  }
  else if ( *((_BYTE *)this + 20) && *((_BYTE *)this + 19) )
  {
    v5 = tip2::details::reason_string((tip2::details *)"reason::view_hidden", a2);
    v7 = *v10;
    if ( !*(_BYTE *)(*v10 + 152) )
    {
      *(_WORD *)(v7 + 154) = 23;
LABEL_11:
      *(_BYTE *)(v7 + 152) = 1;
LABEL_12:
      *(_QWORD *)(v7 + 160) = v5;
    }
  }
  else if ( !*((_BYTE *)this + 18) || *((_BYTE *)this + 17) )
  {
    if ( !*((_BYTE *)this + 34) || *((_BYTE *)this + 33) )
    {
      v13 = *((_QWORD *)this + 1);
      if ( (*(_DWORD *)(v13 + 56) & 0x200) == 0 )
      {
        if ( !*(_BYTE *)(v13 + 152) )
        {
          *(_BYTE *)(v13 + 152) = 3;
          *(_WORD *)(v13 + 154) = 16385;
          *(_QWORD *)(v13 + 160) = 0LL;
        }
        return;
      }
      if ( *((_BYTE *)this + 32) )
      {
        v14 = tip2::details::reason_string((tip2::details *)"reason::view_win8keyboard", a2);
        if ( *(_BYTE *)(v15 + 152) )
          return;
        *(_WORD *)(v15 + 154) = 5;
      }
      else
      {
        v16 = *((_DWORD *)this + 6);
        switch ( v16 )
        {
          case 0:
            v17 = tip2::details::reason_string((tip2::details *)"reason::view_touchkeyboard", a2);
            if ( !*(_BYTE *)(v18 + 152) )
            {
              *(_QWORD *)(v18 + 160) = v17;
              *(_BYTE *)(v18 + 152) = 1;
              *(_WORD *)(v18 + 154) = 1;
            }
            return;
          case 4:
            v14 = tip2::details::reason_string((tip2::details *)"reason::view_voicetyping", a2);
            if ( *(_BYTE *)(v15 + 152) )
              return;
            *(_WORD *)(v15 + 154) = 2;
            break;
          case 2:
            v14 = tip2::details::reason_string((tip2::details *)"reason::view_emoji", a2);
            if ( *(_BYTE *)(v15 + 152) )
              return;
            *(_WORD *)(v15 + 154) = 3;
            break;
          case 13:
            v14 = tip2::details::reason_string((tip2::details *)"reason::view_smartactions", a2);
            if ( *(_BYTE *)(v15 + 152) )
              return;
            *(_WORD *)(v15 + 154) = v19;
            break;
          default:
            v14 = tip2::details::reason_string((tip2::details *)"reason::view_unknown", a2);
            if ( *(_BYTE *)(v15 + 152) )
              return;
            *(_WORD *)(v15 + 154) = 0;
            break;
        }
      }
      *(_QWORD *)(v15 + 160) = v14;
      *(_BYTE *)(v15 + 152) = 1;
      return;
    }
    v5 = tip2::details::reason_string((tip2::details *)"reason::inputapp_not_active", a2);
    v7 = *(_QWORD *)(v12 + 8);
    if ( !*(_BYTE *)(v7 + 152) )
    {
      *(_BYTE *)(v7 + 152) = 3;
      *(_WORD *)(v7 + 154) = 28;
      goto LABEL_12;
    }
  }
  else
  {
    v5 = tip2::details::reason_string((tip2::details *)"reason::still_cloaked", a2);
    v7 = *(_QWORD *)(v11 + 8);
    if ( !*(_BYTE *)(v7 + 152) )
    {
      *(_BYTE *)(v7 + 152) = 3;
      *(_WORD *)(v7 + 154) = 21;
      goto LABEL_12;
    }
  }
}
