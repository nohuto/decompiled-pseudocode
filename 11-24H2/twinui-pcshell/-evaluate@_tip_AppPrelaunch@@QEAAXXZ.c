/*
 * XREFs of ?evaluate@_tip_AppPrelaunch@@QEAAXXZ @ 0x1802BB85C
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@EEAAXXZ @ 0x1805DBD00 (-evaluate@-$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x1802943F4 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_AppPrelaunch::evaluate(_tip_AppPrelaunch *this, const char *a2)
{
  const char *v3; // rcx
  char v4; // r8
  const char *v5; // rdx
  const char *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r9
  char v9; // r11
  __int64 v10; // r9
  char v11; // r11
  __int64 v12; // r9
  char v13; // r11
  __int64 v14; // rax

  if ( !*((_BYTE *)this + 16) )
  {
    v3 = "reason::no_prelaunch";
    v4 = 114;
    v5 = "reason::no_prelaunch";
    do
    {
      v6 = ++v3;
      if ( v4 != 58 )
        v6 = v5;
      v4 = *v3;
      v5 = v6;
    }
    while ( *v3 );
    v7 = *((_QWORD *)this + 1);
    if ( !*(_BYTE *)(v7 + 152) )
    {
      *(_BYTE *)(v7 + 152) = 4;
      *(_WORD *)(v7 + 154) = 5;
LABEL_8:
      *(_QWORD *)(v7 + 160) = v6;
      return;
    }
    return;
  }
  if ( (*((_DWORD *)this + 5) & 0xFFFFFFFD) != 0 )
  {
    v6 = tip2::details::reason_string((tip2::details *)"reason::should_prelaunch_policy_failed_read", a2);
    v7 = *(_QWORD *)(v8 + 8);
    if ( *(_BYTE *)(v7 + 152) == v9 )
    {
      *(_BYTE *)(v7 + 152) = 3;
      *(_WORD *)(v7 + 154) = 2;
      goto LABEL_8;
    }
    return;
  }
  if ( *((__int64 *)this + 3) > 3000 )
  {
    v6 = tip2::details::reason_string((tip2::details *)"reason::delay_unexpectedly_long", a2);
    v7 = *(_QWORD *)(v10 + 8);
    if ( *(_BYTE *)(v7 + 152) != v11 )
      return;
    *(_BYTE *)(v7 + 152) = 3;
    goto LABEL_15;
  }
  if ( *((__int64 *)this + 3) > 500 )
  {
    v6 = tip2::details::reason_string((tip2::details *)"reason::delay_unexpectedly_long", a2);
    v7 = *(_QWORD *)(v12 + 8);
    if ( *(_BYTE *)(v7 + 152) != v13 )
      return;
    *(_BYTE *)(v7 + 152) = 2;
LABEL_15:
    *(_WORD *)(v7 + 154) = 4;
    goto LABEL_8;
  }
  v14 = *((_QWORD *)this + 1);
  if ( (*(_DWORD *)(v14 + 56) & 0x200) != 0 )
  {
    if ( *(_BYTE *)(v14 + 152) )
      return;
    *(_BYTE *)(v14 + 152) = 1;
    *(_WORD *)(v14 + 154) = 0x8000;
  }
  else
  {
    if ( *(_BYTE *)(v14 + 152) )
      return;
    *(_BYTE *)(v14 + 152) = 3;
    *(_WORD *)(v14 + 154) = 16385;
  }
  *(_QWORD *)(v14 + 160) = 0LL;
}
