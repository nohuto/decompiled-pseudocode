/*
 * XREFs of ??$_Find_lower_bound@G@?$_Tree@V?$_Tmap_traits@GUHapticsWaveform@@U?$less@G@std@@V?$allocator@U?$pair@$$CBGUHapticsWaveform@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBGUHapticsWaveform@@@std@@PEAX@std@@@1@AEBG@Z @ 0x1801996B8
 * Callers:
 *     ??$_Try_emplace@G$$V@?$map@GUHapticsWaveform@@U?$less@G@std@@V?$allocator@U?$pair@$$CBGUHapticsWaveform@@@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBGUHapticsWaveform@@@std@@PEAX@std@@_N@1@$$QEAG@Z @ 0x1801997B8 (--$_Try_emplace@G$$V@-$map@GUHapticsWaveform@@U-$less@G@std@@V-$allocator@U-$pair@$$CBGUHapticsW.c)
 *     ?TriggerHapticsForOrdinal@CompliantHapticInterface@@QEBAJW4HapticsType@@GAEBUSecondaryValues@@@Z @ 0x18019ABD0 (-TriggerHapticsForOrdinal@CompliantHapticInterface@@QEBAJW4HapticsType@@GAEBUSecondaryValues@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned short,HapticsWaveform,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,HapticsWaveform>>,0>>::_Find_lower_bound<unsigned short>(
        __int64 *a1,
        _QWORD *a2,
        _WORD *a3)
{
  __int64 v3; // rax
  __int64 *v4; // rcx

  *a2 = *(_QWORD *)(*a1 + 8);
  a2[1] = 0LL;
  v3 = *a1;
  v4 = (__int64 *)*a2;
  a2[2] = v3;
  while ( !*((_BYTE *)v4 + 25) )
  {
    *a2 = v4;
    if ( *((_WORD *)v4 + 14) >= *a3 )
    {
      *((_DWORD *)a2 + 2) = 1;
      a2[2] = v4;
      v4 = (__int64 *)*v4;
    }
    else
    {
      *((_DWORD *)a2 + 2) = 0;
      v4 = (__int64 *)v4[2];
    }
  }
  return a2;
}
