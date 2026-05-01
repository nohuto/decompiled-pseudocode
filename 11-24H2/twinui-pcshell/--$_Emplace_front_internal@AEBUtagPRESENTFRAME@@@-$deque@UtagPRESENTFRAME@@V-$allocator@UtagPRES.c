/*
 * XREFs of ??$_Emplace_front_internal@AEBUtagPRESENTFRAME@@@?$deque@UtagPRESENTFRAME@@V?$allocator@UtagPRESENTFRAME@@@std@@@std@@AEAAXAEBUtagPRESENTFRAME@@@Z @ 0x18034305C
 * Callers:
 *     ?PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x1803572D4 (-PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Growmap@?$deque@UtagPRESENTFRAME@@V?$allocator@UtagPRESENTFRAME@@@std@@@std@@AEAAX_K@Z @ 0x18035F770 (-_Growmap@-$deque@UtagPRESENTFRAME@@V-$allocator@UtagPRESENTFRAME@@@std@@@std@@AEAAX_K@Z.c)
 */

__int64 __fastcall std::deque<tagPRESENTFRAME>::_Emplace_front_internal<tagPRESENTFRAME const &>(
        _QWORD *a1,
        _OWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 result; // rax
  _OWORD *v9; // rcx

  if ( a1[2] <= (unsigned __int64)(a1[4] + 1LL) )
    std::deque<tagPRESENTFRAME>::_Growmap();
  v4 = a1[2];
  v5 = a1[3] & (v4 - 1);
  a1[3] = v5;
  if ( !v5 )
    v5 = v4;
  v6 = v5 - 1;
  v7 = v6 & (v4 - 1);
  if ( !*(_QWORD *)(a1[1] + 8 * v7) )
    *(_QWORD *)(a1[1] + 8 * v7) = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  result = a1[1];
  v9 = *(_OWORD **)(result + 8 * v7);
  *v9 = *a2;
  v9[1] = a2[1];
  a1[3] = v6;
  ++a1[4];
  return result;
}
