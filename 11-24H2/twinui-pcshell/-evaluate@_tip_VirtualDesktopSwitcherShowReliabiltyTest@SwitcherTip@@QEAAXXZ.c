/*
 * XREFs of ?evaluate@_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@QEAAXXZ @ 0x1806ADDD4
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@U12@@details@tip2@@EEAAXXZ @ 0x1806ADDC0 (-evaluate@-$merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@U12@@details.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x1802943F4 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall SwitcherTip::_tip_VirtualDesktopSwitcherShowReliabiltyTest::evaluate(
        SwitcherTip::_tip_VirtualDesktopSwitcherShowReliabiltyTest *this,
        const char *a2)
{
  const char *v2; // rax
  __int16 v3; // r11
  __int64 v4; // r10
  __int64 v5; // rdx
  __int16 v6; // cx
  __int64 v7; // r10
  char v8; // r11
  __int64 v9; // r9
  const char *v10; // rax
  __int64 v11; // r9
  char v12; // r11
  char v13; // r11

  if ( *((_BYTE *)this + 16) )
  {
    if ( *((_BYTE *)this + 17) )
    {
      v2 = tip2::details::reason_string((tip2::details *)"reason::shown", a2);
      v5 = *(_QWORD *)(v4 + 8);
      if ( *(_BYTE *)(v5 + 152) != (_BYTE)v3 )
        return;
      v6 = v3 + 1;
      goto LABEL_5;
    }
    goto LABEL_7;
  }
  if ( *((_BYTE *)this + 17) )
  {
    v9 = *((_QWORD *)this + 1);
    if ( *(_QWORD *)(v9 + 80) )
    {
      if ( *(_BYTE *)(v9 + 152) )
        return;
      *(_BYTE *)(v9 + 152) = 3;
      *(_WORD *)(v9 + 154) = 0x4000;
    }
    else
    {
      if ( (*(_DWORD *)(v9 + 56) & 0x200) != 0 )
      {
        if ( *((_BYTE *)this + 18) )
        {
          if ( *((_BYTE *)this + 16) )
          {
            if ( *(_BYTE *)(v9 + 152) )
              return;
            *(_BYTE *)(v9 + 152) = 1;
            *(_WORD *)(v9 + 154) = 0x8000;
            goto LABEL_24;
          }
          v10 = tip2::details::reason_string((tip2::details *)"reason::not_shown", a2);
          if ( *(_BYTE *)(v11 + 152) != v13 )
            return;
          *(_BYTE *)(v11 + 152) = 3;
          *(_WORD *)(v11 + 154) = 2;
        }
        else
        {
          v10 = tip2::details::reason_string((tip2::details *)"reason::no_taskview_button", a2);
          if ( *(_BYTE *)(v11 + 152) != v12 )
            return;
          *(_BYTE *)(v11 + 152) = 4;
          *(_WORD *)(v11 + 154) = 4;
        }
        *(_QWORD *)(v11 + 160) = v10;
        return;
      }
      if ( *(_BYTE *)(v9 + 152) )
        return;
      *(_BYTE *)(v9 + 152) = 3;
      *(_WORD *)(v9 + 154) = 16385;
    }
LABEL_24:
    *(_QWORD *)(v9 + 160) = 0LL;
    return;
  }
LABEL_7:
  v2 = tip2::details::reason_string((tip2::details *)"reason::xaml_not_created", a2);
  v5 = *(_QWORD *)(v7 + 8);
  if ( *(_BYTE *)(v5 + 152) == v8 )
  {
    v6 = 3;
LABEL_5:
    *(_BYTE *)(v5 + 152) = v6;
    *(_WORD *)(v5 + 154) = v6;
    *(_QWORD *)(v5 + 160) = v2;
  }
}
