/*
 * XREFs of ??$swap@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXAEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0@Z @ 0x1800B1C20
 * Callers:
 *     ??$_Med3@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@00@Z @ 0x1800B0C6C (--$_Med3@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAUTile@TargetedCont.c)
 *     ??$_Unguarded_partition@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YA?AU?$pair@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@PEAU123@@0@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0@Z @ 0x1800B1A50 (--$_Unguarded_partition@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YA-AU-$pa.c)
 * Callees:
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x18005B808 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ??4?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180066F18 (--4-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??0Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@$$QEAU012@@Z @ 0x1800ABAC0 (--0Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@$$QEAU012@@Z.c)
 *     __security_check_cookie @ 0x1800B6A50 (__security_check_cookie.c)
 */

void __fastcall std::swap<CreativeFramework::TargetedContentLayoutHelpers::Tile>(__int64 a1, __int64 a2)
{
  __int128 v4; // xmm0
  _QWORD v5[4]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v6; // [rsp+40h] [rbp-28h]
  char v7; // [rsp+50h] [rbp-18h]

  CreativeFramework::TargetedContentLayoutHelpers::Tile::Tile((__int64)v5, a1);
  std::wstring::operator=((_QWORD *)a1, (_QWORD *)a2);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
  *(_BYTE *)(a1 + 48) = *(_BYTE *)(a2 + 48);
  std::wstring::operator=((_QWORD *)a2, v5);
  v4 = v6;
  *(_BYTE *)(a2 + 48) = v7;
  *(_OWORD *)(a2 + 32) = v4;
  std::wstring::_Tidy(v5, 1, 0LL);
}
