/*
 * XREFs of ?evaluate@_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@QEAAXXZ @ 0x180496154
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@U123456@@details@tip2@@EEAAXXZ @ 0x180496140 (-evaluate@-$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShe.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x1802943F4 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest::evaluate(
        WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest *this,
        const char *a2)
{
  const char *v2; // rax
  __int64 v3; // r10
  __int64 v4; // rdx
  char v5; // r11
  __int64 v6; // r10
  char v7; // r11
  __int64 v8; // r10
  char v9; // r11
  __int64 v10; // r9
  const char *v11; // rax
  __int64 v12; // r9
  char v13; // r11
  char v14; // r11

  if ( !*((_DWORD *)this + 4) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::no_activation_method", a2);
    v4 = *(_QWORD *)(v3 + 8);
    if ( *(_BYTE *)(v4 + 152) != v5 )
      return;
    *(_WORD *)(v4 + 154) = 1;
    goto LABEL_4;
  }
  if ( !*((_BYTE *)this + 29) )
  {
    if ( *((_BYTE *)this + 30) )
    {
      v2 = tip2::details::reason_string((tip2::details *)"reason::moved_desktop_disappeared", a2);
      v4 = *(_QWORD *)(v8 + 8);
      if ( *(_BYTE *)(v4 + 152) == v9 )
      {
        *(_BYTE *)(v4 + 152) = 3;
        *(_WORD *)(v4 + 154) = 3;
        goto LABEL_5;
      }
      return;
    }
    v10 = *((_QWORD *)this + 1);
    if ( (*(_DWORD *)(v10 + 56) & 0x200) == 0 )
    {
      if ( *(_BYTE *)(v10 + 152) )
        return;
      *(_BYTE *)(v10 + 152) = 3;
      *(_WORD *)(v10 + 154) = 16385;
LABEL_24:
      *(_QWORD *)(v10 + 160) = 0LL;
      return;
    }
    if ( *((_BYTE *)this + 31) )
    {
      v11 = tip2::details::reason_string((tip2::details *)"reason::success_ui_already_rearranged", a2);
      if ( *(_BYTE *)(v12 + 152) != v13 )
        return;
      *(_WORD *)(v12 + 154) = 4;
    }
    else
    {
      if ( !*((_BYTE *)this + 28) )
      {
        if ( *(_BYTE *)(v10 + 152) )
          return;
        *(_BYTE *)(v10 + 152) = 1;
        *(_WORD *)(v10 + 154) = 0x8000;
        goto LABEL_24;
      }
      v11 = tip2::details::reason_string((tip2::details *)"reason::success_modifications_suspended", a2);
      if ( *(_BYTE *)(v12 + 152) != v14 )
        return;
      *(_WORD *)(v12 + 154) = 5;
    }
    *(_BYTE *)(v12 + 152) = 1;
    *(_QWORD *)(v12 + 160) = v11;
    return;
  }
  v2 = tip2::details::reason_string((tip2::details *)"reason::requesting_same_index", a2);
  v4 = *(_QWORD *)(v6 + 8);
  if ( *(_BYTE *)(v4 + 152) == v7 )
  {
    *(_WORD *)(v4 + 154) = 2;
LABEL_4:
    *(_BYTE *)(v4 + 152) = 3;
LABEL_5:
    *(_QWORD *)(v4 + 160) = v2;
  }
}
