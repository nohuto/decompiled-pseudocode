/*
 * XREFs of ??$_Find_lower_bound@G@?$_Tree@V?$_Tmap_traits@GIU?$less@G@std@@V?$allocator@U?$pair@$$CBGI@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBGI@std@@PEAX@std@@@1@AEBG@Z @ 0x180084A40
 * Callers:
 *     ??$_Find_hint@G@?$_Tree@V?$_Tmap_traits@GIU?$less@G@std@@V?$allocator@U?$pair@$$CBGI@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_hint_result@PEAU?$_Tree_node@U?$pair@$$CBGI@std@@PEAX@std@@@1@QEAU?$_Tree_node@U?$pair@$$CBGI@std@@PEAX@1@AEBG@Z @ 0x180070DD8 (--$_Find_hint@G@-$_Tree@V-$_Tmap_traits@GIU-$less@G@std@@V-$allocator@U-$pair@$$CBGI@std@@@2@$0A.c)
 *     ?KeyboardHidUsageToVKey@HidUsageConverter@@SAXGAEAULampAttributes@@AEAI@Z @ 0x1800EB144 (-KeyboardHidUsageToVKey@HidUsageConverter@@SAXGAEAULampAttributes@@AEAI@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned short,unsigned int,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,unsigned int>>,0>>::_Find_lower_bound<unsigned short>(
        __int64 a1,
        _QWORD *a2,
        _WORD *a3)
{
  __int64 *v3; // rcx

  v3 = *(__int64 **)(qword_180246E08 + 8);
  *a2 = v3;
  a2[1] = 0LL;
  a2[2] = qword_180246E08;
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
