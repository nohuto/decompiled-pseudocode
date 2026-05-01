/*
 * XREFs of ?evaluate@_tip_TouchEdgeGestureTest@@QEAAXXZ @ 0x180594544
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@EEAAXXZ @ 0x180594530 (-evaluate@-$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x1802943F4 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_TouchEdgeGestureTest::evaluate(_tip_TouchEdgeGestureTest *this, const char *a2)
{
  __int64 v2; // r9
  const char *v3; // rax
  __int64 v4; // r9
  char v5; // r11
  char v6; // r10
  char v7; // r10
  __int16 v8; // r11
  char v9; // r10

  v2 = *((_QWORD *)this + 1);
  if ( (*(_DWORD *)(v2 + 56) & 0x200) == 0 )
  {
    if ( *(_BYTE *)(v2 + 152) )
      return;
    *(_BYTE *)(v2 + 152) = 3;
    *(_WORD *)(v2 + 154) = 16385;
    goto LABEL_20;
  }
  if ( *((_QWORD *)this + 2) > 3uLL )
  {
    v3 = tip2::details::reason_string((tip2::details *)"reason::InvalidSourceId", a2);
    if ( *(_BYTE *)(v4 + 152) )
      return;
    *(_WORD *)(v4 + 154) = 0;
LABEL_7:
    *(_BYTE *)(v4 + 152) = v5;
    goto LABEL_8;
  }
  if ( *((_BYTE *)this + 32) )
  {
    v3 = tip2::details::reason_string((tip2::details *)"reason::QueryMonitorFailure", a2);
    if ( *(_BYTE *)(v4 + 152) != v6 )
      return;
    *(_WORD *)(v4 + 154) = 1;
    goto LABEL_7;
  }
  if ( !*((_BYTE *)this + 33) )
  {
    v3 = tip2::details::reason_string((tip2::details *)"reason::StartGestureFailure", a2);
    if ( *(_BYTE *)(v4 + 152) != v7 )
      return;
    *(_BYTE *)(v4 + 152) = 1;
    *(_WORD *)(v4 + 154) = 2;
    goto LABEL_8;
  }
  if ( !*((_BYTE *)this + 34) )
  {
    v3 = tip2::details::reason_string((tip2::details *)"reason::StartAnimationFailure", a2);
    if ( *(_BYTE *)(v4 + 152) != v9 )
      return;
    *(_BYTE *)(v4 + 152) = 2;
    *(_WORD *)(v4 + 154) = v8;
LABEL_8:
    *(_QWORD *)(v4 + 160) = v3;
    return;
  }
  if ( *(_BYTE *)(v2 + 152) )
    return;
  *(_BYTE *)(v2 + 152) = 1;
  *(_WORD *)(v2 + 154) = 0x8000;
LABEL_20:
  *(_QWORD *)(v2 + 160) = 0LL;
}
