/*
 * XREFs of ??$_Uninitialized_move@PEAVHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@YAPEAVHidChannelValueInfo@@QEAV1@0PEAV1@AEAV?$allocator@VHidChannelValueInfo@@@0@@Z @ 0x18009C22C
 * Callers:
 *     ??$_Emplace_reallocate@AEBVHidChannelValueInfo@@@?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@AEAAPEAVHidChannelValueInfo@@QEAV2@AEBV2@@Z @ 0x180070208 (--$_Emplace_reallocate@AEBVHidChannelValueInfo@@@-$vector@VHidChannelValueInfo@@V-$allocator@VHi.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Uninitialized_move<HidChannelValueInfo *>(__int64 a1, __int64 a2, __int64 a3)
{
  while ( a1 != a2 )
  {
    *(_OWORD *)a3 = *(_OWORD *)a1;
    *(_OWORD *)(a3 + 16) = *(_OWORD *)(a1 + 16);
    *(_OWORD *)(a3 + 32) = *(_OWORD *)(a1 + 32);
    *(_OWORD *)(a3 + 48) = *(_OWORD *)(a1 + 48);
    *(_QWORD *)(a3 + 64) = *(_QWORD *)(a1 + 64);
    a3 += 72LL;
    a1 += 72LL;
  }
  return a3;
}
