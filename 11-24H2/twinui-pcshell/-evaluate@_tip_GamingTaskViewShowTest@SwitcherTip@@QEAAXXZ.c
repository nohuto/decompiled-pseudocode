/*
 * XREFs of ?evaluate@_tip_GamingTaskViewShowTest@SwitcherTip@@QEAAXXZ @ 0x1806A2BD4
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_GamingTaskViewShowTest@SwitcherTip@@U12@@details@tip2@@EEAAXXZ @ 0x1806A2BC0 (-evaluate@-$merged_data@U_tip_GamingTaskViewShowTest@SwitcherTip@@U12@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x1802943F4 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall SwitcherTip::_tip_GamingTaskViewShowTest::evaluate(
        SwitcherTip::_tip_GamingTaskViewShowTest *this,
        const char *a2)
{
  __int64 v2; // r9
  const char *v3; // rax
  __int64 v4; // r9
  char v5; // r10
  char v6; // al
  char v7; // r10
  char v8; // r10

  v2 = *((_QWORD *)this + 1);
  if ( (*(_DWORD *)(v2 + 56) & 0x200) == 0 )
  {
    if ( *(_BYTE *)(v2 + 152) )
      return;
    *(_BYTE *)(v2 + 152) = 3;
    *(_WORD *)(v2 + 154) = 16385;
    goto LABEL_20;
  }
  if ( *((_BYTE *)this + 17) )
  {
    v3 = tip2::details::reason_string((tip2::details *)"reason::cancelled", a2);
    if ( *(_BYTE *)(v4 + 152) != v5 )
      return;
    *(_BYTE *)(v4 + 152) = 4;
    *(_WORD *)(v4 + 154) = 3;
    goto LABEL_7;
  }
  v6 = *((_BYTE *)this + 16);
  if ( v6 )
  {
    if ( *(_QWORD *)(v2 + 80) )
    {
      v3 = tip2::details::reason_string((tip2::details *)"reason::shown_with_errors", a2);
      if ( *(_BYTE *)(v4 + 152) != v7 )
        return;
      *(_BYTE *)(v4 + 152) = 2;
      *(_WORD *)(v4 + 154) = 2;
      goto LABEL_7;
    }
  }
  else if ( *(_QWORD *)(v2 + 80) )
  {
    if ( *(_BYTE *)(v2 + 152) )
      return;
    *(_BYTE *)(v2 + 152) = 3;
    *(_WORD *)(v2 + 154) = 0x4000;
    goto LABEL_20;
  }
  if ( !v6 )
  {
    v3 = tip2::details::reason_string((tip2::details *)"reason::not_shown", a2);
    if ( *(_BYTE *)(v4 + 152) != v8 )
      return;
    *(_BYTE *)(v4 + 152) = 3;
    *(_WORD *)(v4 + 154) = 1;
LABEL_7:
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
