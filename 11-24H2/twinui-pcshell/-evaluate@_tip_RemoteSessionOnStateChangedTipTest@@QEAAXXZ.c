/*
 * XREFs of ?evaluate@_tip_RemoteSessionOnStateChangedTipTest@@QEAAXXZ @ 0x18065D554
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@EEAAXXZ @ 0x18065D1E0 (-evaluate@-$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?_Equal@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_NQEBG@Z @ 0x18018ED94 (-_Equal@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_NQEBG@Z.c)
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x1802943F4 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_RemoteSessionOnStateChangedTipTest::evaluate(
        _tip_RemoteSessionOnStateChangedTipTest *this,
        const char *a2)
{
  const char *v2; // rax
  __int64 v3; // r11
  __int64 v4; // rdx
  __int64 v5; // r11
  int v6; // ebx
  __int64 v7; // r11
  const char *v8; // rdx
  __int64 v9; // r11
  __int64 v10; // r11
  __int64 v11; // r9
  const char *v12; // rax
  __int64 v13; // r9

  if ( *((_BYTE *)this + 93) )
  {
    if ( *((_BYTE *)this + 88) )
    {
      v2 = tip2::details::reason_string((tip2::details *)"reason::systemIdNotFoundByRSWM", a2);
      v4 = *(_QWORD *)(v5 + 8);
      if ( !*(_BYTE *)(v4 + 152) )
      {
        *(_BYTE *)(v4 + 152) = 3;
        *(_WORD *)(v4 + 154) = 3;
        goto LABEL_6;
      }
      return;
    }
  }
  else if ( *((_BYTE *)this + 88) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::stateChangeWhenNoActiveSession", a2);
    v4 = *(_QWORD *)(v3 + 8);
    if ( *(_BYTE *)(v4 + 152) )
      return;
    *(_WORD *)(v4 + 154) = 5;
    goto LABEL_5;
  }
  v6 = *((_DWORD *)this + 20);
  if ( v6 == *((_DWORD *)this + 21) && *((_BYTE *)this + 89) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::succeededNoStateChange", a2);
    v4 = *(_QWORD *)(v7 + 8);
    if ( !*(_BYTE *)(v4 + 152) )
    {
      *(_BYTE *)(v4 + 152) = 1;
      *(_WORD *)(v4 + 154) = 2;
      goto LABEL_6;
    }
  }
  else if ( !std::wstring::_Equal((char *)this + 48, (char *)&pvData) || v6 == 99 )
  {
    v11 = *(_QWORD *)(v9 + 8);
    if ( (*(_DWORD *)(v11 + 56) & 0x200) != 0 )
    {
      v12 = tip2::details::reason_string((tip2::details *)"reason::succeeded", v8);
      if ( !*(_BYTE *)(v13 + 152) )
      {
        *(_QWORD *)(v13 + 160) = v12;
        *(_BYTE *)(v13 + 152) = 1;
        *(_WORD *)(v13 + 154) = 1;
      }
    }
    else if ( !*(_BYTE *)(v11 + 152) )
    {
      *(_QWORD *)(v11 + 160) = 0LL;
      *(_BYTE *)(v11 + 152) = 3;
      *(_WORD *)(v11 + 154) = 16385;
    }
  }
  else
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::remoteDesktopIdNotFound", v8);
    v4 = *(_QWORD *)(v10 + 8);
    if ( !*(_BYTE *)(v4 + 152) )
    {
      *(_WORD *)(v4 + 154) = 4;
LABEL_5:
      *(_BYTE *)(v4 + 152) = 3;
LABEL_6:
      *(_QWORD *)(v4 + 160) = v2;
    }
  }
}
