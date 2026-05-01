/*
 * XREFs of ?evaluate@_tip_WindowDragInputProviderTest@@QEAAXXZ @ 0x1805BF144
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@EEAAXXZ @ 0x1805BF130 (-evaluate@-$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x1802943F4 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_WindowDragInputProviderTest::evaluate(_tip_WindowDragInputProviderTest *this, const char *a2)
{
  const char *v2; // rax
  __int16 v3; // r11
  __int64 v4; // r9
  __int64 v5; // rdx
  char v6; // r10
  __int64 v7; // r9
  char v8; // r10
  __int16 v9; // r11
  __int64 v10; // r9
  char v11; // r10

  if ( *((_DWORD *)this + 4) == 834 )
  {
    if ( *((_DWORD *)this + 5) == 3 )
    {
      v2 = tip2::details::reason_string((tip2::details *)"reason::reset_event", a2);
      v5 = *(_QWORD *)(v4 + 8);
      if ( *(_BYTE *)(v5 + 152) != v6 )
        return;
      *(_BYTE *)(v5 + 152) = v3 - 2;
      *(_WORD *)(v5 + 154) = v3 - 2;
      goto LABEL_12;
    }
    goto LABEL_9;
  }
  if ( *((_DWORD *)this + 4) != 833 || *((_DWORD *)this + 5) )
  {
LABEL_9:
    v2 = tip2::details::reason_string((tip2::details *)"reason::unknown_event", a2);
    v5 = *(_QWORD *)(v10 + 8);
    if ( *(_BYTE *)(v5 + 152) != v11 )
      return;
    *(_WORD *)(v5 + 154) = v9;
    goto LABEL_11;
  }
  v2 = tip2::details::reason_string((tip2::details *)"reason::get_rect_event", a2);
  v5 = *(_QWORD *)(v7 + 8);
  if ( *(_BYTE *)(v5 + 152) != v8 )
    return;
  *(_WORD *)(v5 + 154) = 2;
LABEL_11:
  *(_BYTE *)(v5 + 152) = 1;
LABEL_12:
  *(_QWORD *)(v5 + 160) = v2;
}
