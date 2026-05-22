/*
 * XREFs of ??$_Find_lower_bound@G@?$_Tree@V?$_Tmap_traits@GW4WaveformFlags@@U?$less@G@std@@V?$allocator@U?$pair@$$CBGW4WaveformFlags@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBGW4WaveformFlags@@@std@@PEAX@std@@@1@AEBG@Z @ 0x180199760
 * Callers:
 *     ??$_Find_hint@G@?$_Tree@V?$_Tmap_traits@GW4WaveformFlags@@U?$less@G@std@@V?$allocator@U?$pair@$$CBGW4WaveformFlags@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_hint_result@PEAU?$_Tree_node@U?$pair@$$CBGW4WaveformFlags@@@std@@PEAX@std@@@1@QEAU?$_Tree_node@U?$pair@$$CBGW4WaveformFlags@@@std@@PEAX@1@AEBG@Z @ 0x1801994D0 (--$_Find_hint@G@-$_Tree@V-$_Tmap_traits@GW4WaveformFlags@@U-$less@G@std@@V-$allocator@U-$pair@$$.c)
 *     ?QueryHapticsSupport@CompliantHapticInterface@@AEAAJXZ @ 0x180199EC8 (-QueryHapticsSupport@CompliantHapticInterface@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned short,enum WaveformFlags,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,enum WaveformFlags>>,0>>::_Find_lower_bound<unsigned short>(
        __int64 a1,
        _QWORD *a2,
        _WORD *a3)
{
  __int64 *v3; // rcx

  v3 = *(__int64 **)(qword_180250F88 + 8);
  *a2 = v3;
  a2[1] = 0LL;
  a2[2] = qword_180250F88;
  while ( !*((_BYTE *)v3 + 25) )
  {
    *a2 = v3;
    if ( *((_WORD *)v3 + 14) >= *a3 )
    {
      *((_DWORD *)a2 + 2) = 1;
      a2[2] = v3;
      v3 = (__int64 *)*v3;
    }
    else
    {
      *((_DWORD *)a2 + 2) = 0;
      v3 = (__int64 *)v3[2];
    }
  }
  return a2;
}
