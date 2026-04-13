/*
 * XREFs of ?_Reallocate@?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@IEAAX_K@Z @ 0x1800AF7E0
 * Callers:
 *     ?_Reserve@?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@IEAAX_K@Z @ 0x1800AFA40 (-_Reserve@-$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V-$allocator@UTile@Targ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004564 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x180004768 (-_Xbad_alloc@std@@YAXXZ.c)
 *     ??$_Uninit_move@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@PEAU123@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@U123@@std@@YAPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@PEAU123@00AEAU?$_Wrap_alloc@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@0U_Nonscalar_ptr_iterator_tag@0@@Z @ 0x1800AB5D8 (--$_Uninit_move@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@PEAU123@V-$allocator@UT.c)
 *     ?_Destroy@?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@IEAAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0@Z @ 0x1800AF6F0 (-_Destroy@-$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V-$allocator@UTile@Targ.c)
 */

char *__fastcall std::vector<CreativeFramework::TargetedContentLayoutHelpers::Tile>::_Reallocate(
        __int64 *a1,
        unsigned __int64 a2)
{
  char *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // r14
  char *result; // rax
  void *v8; // [rsp+48h] [rbp+10h]

  v4 = 0LL;
  v8 = 0LL;
  if ( a2 )
  {
    if ( a2 > 0x492492492492492LL || (v4 = (char *)operator new(56 * a2), (v8 = v4) == 0LL) )
      std::_Xbad_alloc();
  }
  try
  {
    std::_Uninit_move<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *,std::allocator<CreativeFramework::TargetedContentLayoutHelpers::Tile>,CreativeFramework::TargetedContentLayoutHelpers::Tile>(
      *a1,
      a1[1],
      (__int64)v4);
  }
  catch ( ... )
  {
    operator delete(v8);
    throw;
  }
  v6 = 0x6DB6DB6DB6DB6DB7LL * ((a1[1] - *a1) >> 3);
  if ( *a1 )
  {
    std::vector<CreativeFramework::TargetedContentLayoutHelpers::Tile>::_Destroy(v5, (_QWORD *)*a1, (_QWORD *)a1[1]);
    operator delete((void *)*a1);
  }
  a1[2] = (__int64)&v4[56 * a2];
  result = &v4[56 * v6];
  a1[1] = (__int64)result;
  *a1 = (__int64)v4;
  return result;
}
