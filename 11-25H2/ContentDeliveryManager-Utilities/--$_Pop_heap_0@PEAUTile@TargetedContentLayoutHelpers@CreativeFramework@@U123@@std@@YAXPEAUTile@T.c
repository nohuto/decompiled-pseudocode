/*
 * XREFs of ??$_Pop_heap_0@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@U123@@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@00@Z @ 0x1800B13C4
 * Callers:
 *     ??$_Sort@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0_J@Z @ 0x1800B161C (--$_Sort@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J@std@@YAXPEAUTile@TargetedCo.c)
 * Callees:
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x18005B808 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ??4?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180066F18 (--4-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??0Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@$$QEAU012@@Z @ 0x1800ABAC0 (--0Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@$$QEAU012@@Z.c)
 *     ??$_Adjust_heap@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_JU123@@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J1$$QEAU123@@Z @ 0x1800AFAC4 (--$_Adjust_heap@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_JU123@@std@@YAXPEAUTil.c)
 *     __security_check_cookie @ 0x1800B6A50 (__security_check_cookie.c)
 */

void __fastcall std::_Pop_heap_0<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile>(
        __int64 a1,
        __int64 a2)
{
  _QWORD v4[7]; // [rsp+20h] [rbp-48h] BYREF

  CreativeFramework::TargetedContentLayoutHelpers::Tile::Tile((__int64)v4, a2 - 56);
  std::wstring::operator=((_QWORD *)(a2 - 56), (_QWORD *)a1);
  *(_QWORD *)(a2 - 24) = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a2 - 16) = *(_QWORD *)(a1 + 40);
  *(_BYTE *)(a2 - 8) = *(_BYTE *)(a1 + 48);
  std::_Adjust_heap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,__int64,CreativeFramework::TargetedContentLayoutHelpers::Tile>(
    a1,
    0LL,
    0x6DB6DB6DB6DB6DB7LL * ((a2 - a1 - 56) >> 3),
    (__int64)v4);
  std::wstring::_Tidy(v4, 1, 0LL);
}
