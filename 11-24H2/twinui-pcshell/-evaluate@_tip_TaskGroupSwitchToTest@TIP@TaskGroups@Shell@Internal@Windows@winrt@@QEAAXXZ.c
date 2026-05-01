/*
 * XREFs of ?evaluate@_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x180589714
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@U1234567@@details@tip2@@EEAAXXZ @ 0x180589700 (-evaluate@-$merged_data@U_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x1802943F4 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest::evaluate(
        winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest *this,
        const char *a2)
{
  const char *v2; // rax
  __int64 v3; // r9
  __int64 v4; // rcx
  char v5; // r10
  __int64 v6; // r9
  char v7; // r10
  __int64 v8; // rax

  if ( !*((_QWORD *)this + 4) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::group_id_property_not_set", a2);
    v4 = *(_QWORD *)(v3 + 8);
    if ( *(_BYTE *)(v4 + 152) != v5 )
      return;
    *(_WORD *)(v4 + 154) = 1;
    goto LABEL_4;
  }
  if ( *((_DWORD *)this + 12) )
  {
    v8 = *((_QWORD *)this + 1);
    if ( (*(_DWORD *)(v8 + 56) & 0x200) != 0 )
    {
      if ( *(_BYTE *)(v8 + 152) )
        return;
      *(_BYTE *)(v8 + 152) = 1;
      *(_WORD *)(v8 + 154) = 0x8000;
    }
    else
    {
      if ( *(_BYTE *)(v8 + 152) )
        return;
      *(_BYTE *)(v8 + 152) = 3;
      *(_WORD *)(v8 + 154) = 16385;
    }
    *(_QWORD *)(v8 + 160) = 0LL;
  }
  else
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::switcher_surface_property_not_set", a2);
    v4 = *(_QWORD *)(v6 + 8);
    if ( *(_BYTE *)(v4 + 152) == v7 )
    {
      *(_WORD *)(v4 + 154) = 2;
LABEL_4:
      *(_BYTE *)(v4 + 152) = 3;
      *(_QWORD *)(v4 + 160) = v2;
    }
  }
}
