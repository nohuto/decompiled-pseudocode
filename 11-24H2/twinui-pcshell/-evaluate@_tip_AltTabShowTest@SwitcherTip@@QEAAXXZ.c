/*
 * XREFs of ?evaluate@_tip_AltTabShowTest@SwitcherTip@@QEAAXXZ @ 0x180209354
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip2@@EEAAXXZ @ 0x1802B8240 (-evaluate@-$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x1802943F4 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall SwitcherTip::_tip_AltTabShowTest::evaluate(SwitcherTip::_tip_AltTabShowTest *this, const char *a2)
{
  const char *v2; // rax
  __int64 v3; // r9
  __int64 v4; // rcx
  char v5; // r11
  const char *v6; // rdx
  char v7; // r10
  const char *v8; // r8
  const char *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax

  if ( *((_BYTE *)this + 17) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::cancelled", a2);
    v4 = *(_QWORD *)(v3 + 8);
    if ( *(_BYTE *)(v4 + 152) == v5 )
    {
      *(_BYTE *)(v4 + 152) = 4;
      *(_WORD *)(v4 + 154) = 2;
      *(_QWORD *)(v4 + 160) = v2;
    }
  }
  else if ( *((_BYTE *)this + 16) )
  {
    v6 = "reason::shown";
    v7 = 114;
    v8 = "reason::shown";
    do
    {
      v9 = ++v6;
      if ( v7 != 58 )
        v9 = v8;
      v7 = *v6;
      v8 = v9;
    }
    while ( *v6 );
    v10 = *((_QWORD *)this + 1);
    if ( !*(_BYTE *)(v10 + 152) )
    {
      *(_BYTE *)(v10 + 152) = 1;
      *(_WORD *)(v10 + 154) = 1;
      *(_QWORD *)(v10 + 160) = v8;
    }
  }
  else
  {
    v11 = *((_QWORD *)this + 1);
    if ( *(_QWORD *)(v11 + 80) )
    {
      if ( *(_BYTE *)(v11 + 152) )
        return;
      *(_BYTE *)(v11 + 152) = 3;
      *(_WORD *)(v11 + 154) = 0x4000;
    }
    else if ( (*(_DWORD *)(v11 + 56) & 0x200) != 0 )
    {
      if ( *(_BYTE *)(v11 + 152) )
        return;
      *(_BYTE *)(v11 + 152) = 1;
      *(_WORD *)(v11 + 154) = 0x8000;
    }
    else
    {
      if ( *(_BYTE *)(v11 + 152) )
        return;
      *(_BYTE *)(v11 + 152) = 3;
      *(_WORD *)(v11 + 154) = 16385;
    }
    *(_QWORD *)(v11 + 160) = 0LL;
  }
}
