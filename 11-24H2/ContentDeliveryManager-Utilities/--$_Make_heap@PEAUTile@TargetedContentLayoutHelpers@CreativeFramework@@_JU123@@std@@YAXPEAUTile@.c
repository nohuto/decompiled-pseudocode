/*
 * XREFs of ??$_Make_heap@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_JU123@@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0PEA_J0@Z @ 0x1800B0ED8
 * Callers:
 *     ??$_Sort@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0_J@Z @ 0x1800B193C (--$_Sort@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J@std@@YAXPEAUTile@TargetedCo.c)
 * Callees:
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x18005BCA8 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ??0Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@$$QEAU012@@Z @ 0x1800ABDE8 (--0Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@$$QEAU012@@Z.c)
 *     ??$_Adjust_heap@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_JU123@@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J1$$QEAU123@@Z @ 0x1800AFDE4 (--$_Adjust_heap@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_JU123@@std@@YAXPEAUTil.c)
 *     __security_check_cookie @ 0x1800B6D70 (__security_check_cookie.c)
 */

void __fastcall std::_Make_heap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,__int64,CreativeFramework::TargetedContentLayoutHelpers::Tile>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // rbx
  _QWORD v6[7]; // [rsp+20h] [rbp-58h] BYREF

  v3 = 0x6DB6DB6DB6DB6DB7LL * ((a2 - a1) >> 3);
  v4 = v3 / 2;
  if ( v3 / 2 > 0 )
  {
    v5 = a1 + 56 * v4;
    do
    {
      v5 -= 56LL;
      --v4;
      CreativeFramework::TargetedContentLayoutHelpers::Tile::Tile((__int64)v6, v5);
      std::_Adjust_heap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,__int64,CreativeFramework::TargetedContentLayoutHelpers::Tile>(
        a1,
        v4,
        v3,
        (__int64)v6);
      std::wstring::_Tidy(v6, 1, 0LL);
    }
    while ( v4 > 0 );
  }
}
