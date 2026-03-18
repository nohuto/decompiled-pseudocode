/*
 * XREFs of ??$_Find_last@PEAVCChannelContext@@@?$_Hash@V?$_Umap_traits@PEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@V?$_Uhash_compare@PEAVCChannelContext@@U?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@@std@@V?$allocator@U?$pair@QEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@QEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@@std@@PEAX@std@@@1@AEBQEAVCChannelContext@@_K@Z @ 0x1801C7B70
 * Callers:
 *     ??$_Erase@PEAVCChannelContext@@@?$_Hash@V?$_Umap_traits@PEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@V?$_Uhash_compare@PEAVCChannelContext@@U?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@@std@@V?$allocator@U?$pair@QEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@@std@@@4@$0A@@std@@@std@@AEAA_KAEBQEAVCChannelContext@@@Z @ 0x18028C758 (--$_Erase@PEAVCChannelContext@@@-$_Hash@V-$_Umap_traits@PEAVCChannelContext@@PEAVCAnimationGloba.c)
 *     ??$_Try_emplace@AEBQEAVCChannelContext@@$$V@?$_Hash@V?$_Umap_traits@PEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@V?$_Uhash_compare@PEAVCChannelContext@@U?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@@std@@V?$allocator@U?$pair@QEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAVCChannelContext@@PEAVCAnimationGlobalConfiguration@@@std@@PEAX@std@@_N@1@AEBQEAVCChannelContext@@@Z @ 0x18028C7F8 (--$_Try_emplace@AEBQEAVCChannelContext@@$$V@-$_Hash@V-$_Umap_traits@PEAVCChannelContext@@PEAVCAn.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<CChannelContext *,CAnimationGlobalConfiguration *,std::_Uhash_compare<CChannelContext *,std::hash<CChannelContext *>,std::equal_to<CChannelContext *>>,std::allocator<std::pair<CChannelContext * const,CAnimationGlobalConfiguration *>>,0>>::_Find_last<CChannelContext *>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4)
{
  _QWORD *v4; // rax
  _QWORD *v5; // r11
  _QWORD *v6; // r9

  v4 = (_QWORD *)a1[1];
  v5 = (_QWORD *)(a1[3] + 16 * (a4 & a1[6]));
  v6 = (_QWORD *)v5[1];
  if ( v6 == v4 )
  {
    a2[1] = 0LL;
LABEL_3:
    *a2 = v4;
  }
  else
  {
    while ( 1 )
    {
      if ( *a3 == v6[2] )
      {
        v4 = (_QWORD *)*v6;
        a2[1] = v6;
        goto LABEL_3;
      }
      if ( v6 == (_QWORD *)*v5 )
        break;
      v6 = (_QWORD *)v6[1];
    }
    *a2 = v6;
    a2[1] = 0LL;
  }
  return a2;
}
