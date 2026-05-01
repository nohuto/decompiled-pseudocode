/*
 * XREFs of ?evaluate@_tip_AppPrelaunchBackgroundTask@@QEAAXXZ @ 0x1805DBE14
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@EEAAXXZ @ 0x1805DBD20 (-evaluate@-$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x1802943F4 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_AppPrelaunchBackgroundTask::evaluate(_tip_AppPrelaunchBackgroundTask *this, const char *a2)
{
  const char *v2; // rax
  __int64 v3; // r9
  __int64 v4; // rdx
  char v5; // r10
  __int64 v6; // rax

  if ( *((_DWORD *)this + 4) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::hr_not_success", a2);
    v4 = *(_QWORD *)(v3 + 8);
    if ( *(_BYTE *)(v4 + 152) == v5 )
    {
      *(_BYTE *)(v4 + 152) = 3;
      *(_WORD *)(v4 + 154) = 1;
      *(_QWORD *)(v4 + 160) = v2;
    }
  }
  else
  {
    v6 = *((_QWORD *)this + 1);
    if ( (*(_DWORD *)(v6 + 56) & 0x200) != 0 )
    {
      if ( *(_BYTE *)(v6 + 152) )
        return;
      *(_BYTE *)(v6 + 152) = 1;
      *(_WORD *)(v6 + 154) = 0x8000;
    }
    else
    {
      if ( *(_BYTE *)(v6 + 152) )
        return;
      *(_BYTE *)(v6 + 152) = 3;
      *(_WORD *)(v6 + 154) = 16385;
    }
    *(_QWORD *)(v6 + 160) = 0LL;
  }
}
