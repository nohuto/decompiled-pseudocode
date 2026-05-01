/*
 * XREFs of ?evaluate@_tip_ControlCenterDisabledTest@@QEAAXXZ @ 0x1803773D4
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_ControlCenterDisabledTest@@U1@@details@tip2@@EEAAXXZ @ 0x1803773C0 (-evaluate@-$merged_data@U_tip_ControlCenterDisabledTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x1802943F4 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_ControlCenterDisabledTest::evaluate(_tip_ControlCenterDisabledTest *this, const char *a2)
{
  __int64 v2; // r9
  char v3; // al
  const char *v4; // rax
  __int64 v5; // r9
  char v6; // r10
  const char *v7; // rax
  char v8; // r10
  char v9; // r10
  char v10; // r10

  v2 = *((_QWORD *)this + 1);
  if ( (*(_DWORD *)(v2 + 56) & 0x200) == 0 )
  {
    if ( *(_BYTE *)(v2 + 152) )
      return;
    *(_WORD *)(v2 + 154) = 16385;
    *(_QWORD *)(v2 + 160) = 0LL;
    goto LABEL_19;
  }
  v3 = *((_BYTE *)this + 16);
  if ( v3 )
  {
    if ( v3 == *((_BYTE *)this + 17) )
    {
      v4 = tip2::details::reason_string((tip2::details *)"reason::control_center_disabled_correctly", a2);
      if ( *(_BYTE *)(v5 + 152) != v9 )
        return;
      *(_BYTE *)(v5 + 152) = 1;
      *(_WORD *)(v5 + 154) = 1;
LABEL_8:
      *(_QWORD *)(v5 + 160) = v4;
      return;
    }
    v7 = tip2::details::reason_string((tip2::details *)"reason::control_center_enabled_incorrectly", a2);
    if ( *(_BYTE *)(v2 + 152) != v8 )
      return;
    *(_WORD *)(v2 + 154) = 4;
LABEL_18:
    *(_QWORD *)(v2 + 160) = v7;
LABEL_19:
    *(_BYTE *)(v2 + 152) = 3;
    return;
  }
  if ( !*((_BYTE *)this + 17) )
  {
    v4 = tip2::details::reason_string((tip2::details *)"reason::control_center_enabled_correctly", a2);
    if ( *(_BYTE *)(v5 + 152) != v6 )
      return;
    *(_BYTE *)(v5 + 152) = 4;
    *(_WORD *)(v5 + 154) = 3;
    goto LABEL_8;
  }
  if ( *((_BYTE *)this + 17) )
  {
    v7 = tip2::details::reason_string((tip2::details *)"reason::control_center_disabled_incorrectly", a2);
    if ( *(_BYTE *)(v2 + 152) == v10 )
    {
      *(_WORD *)(v2 + 154) = 2;
      goto LABEL_18;
    }
  }
}
