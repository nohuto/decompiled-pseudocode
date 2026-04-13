/*
 * XREFs of ?_Destroy@?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@IEAAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0@Z @ 0x1800AF6F0
 * Callers:
 *     ??1?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@QEAA@XZ @ 0x1800ABECC (--1-$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V-$allocator@UTile@TargetedCon.c)
 *     ??1LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ @ 0x1800ABFC0 (--1LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ.c)
 *     ?_Reallocate@?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@IEAAX_K@Z @ 0x1800AF7E0 (-_Reallocate@-$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V-$allocator@UTile@T.c)
 * Callees:
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x18005BCA8 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 */

void __fastcall std::vector<CreativeFramework::TargetedContentLayoutHelpers::Tile>::_Destroy(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *v4; // rbx

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      std::wstring::_Tidy(v4, 1, 0LL);
      v4 += 7;
    }
    while ( v4 != a3 );
  }
}
