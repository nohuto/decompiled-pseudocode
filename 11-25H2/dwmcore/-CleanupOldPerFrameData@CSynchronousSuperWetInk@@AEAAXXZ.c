/*
 * XREFs of ?CleanupOldPerFrameData@CSynchronousSuperWetInk@@AEAAXXZ @ 0x1801A8784
 * Callers:
 *     ?LookupPerFrameData@CSynchronousSuperWetInk@@AEAAJIPEAV?$shared_ptr@$$BY0A@E@std@@@Z @ 0x1801A9990 (-LookupPerFrameData@CSynchronousSuperWetInk@@AEAAJIPEAV-$shared_ptr@$$BY0A@E@std@@@Z.c)
 * Callees:
 *     McTemplateU0xx_EventWriteTransfer @ 0x1801009B4 (McTemplateU0xx_EventWriteTransfer.c)
 *     ??$_Find_lower_bound@_K@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@$$BY0A@E@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@std@@@1@AEB_K@Z @ 0x1801A987C (--$_Find_lower_bound@_K@-$_Tree@V-$_Tmap_traits@_KV-$shared_ptr@$$BY0A@E@std@@U-$less@_K@2@V-$al.c)
 *     ?GetLatestLookupId@CSynchronousSuperWetInk@@AEBA_KXZ @ 0x1801A98D0 (-GetLatestLookupId@CSynchronousSuperWetInk@@AEBA_KXZ.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@$$BY0A@E@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@@2@0@Z @ 0x1802B0EDC (-erase@-$_Tree@V-$_Tmap_traits@_KV-$shared_ptr@$$BY0A@E@std@@U-$less@_K@2@V-$allocator@U-$pair@$.c)
 */

void __fastcall CSynchronousSuperWetInk::CleanupOldPerFrameData(CSynchronousSuperWetInk *this)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rdi
  __int64 lower; // rax
  _QWORD **v5; // r10
  __int64 v6; // rcx
  _BYTE v7[40]; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 LatestLookupId; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 29) )
  {
    LatestLookupId = CSynchronousSuperWetInk::GetLatestLookupId(this);
    v3 = LatestLookupId;
    lower = std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<unsigned char [0]>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>,0>>::_Find_lower_bound<unsigned __int64>(
              v2 + 224,
              v7,
              &LatestLookupId);
    if ( *(_QWORD *)(lower + 16) != **v5 )
    {
      std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<unsigned char [0]>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>,0>>::erase(
        v5,
        &LatestLookupId,
        **v5);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
        McTemplateU0xx_EventWriteTransfer(v6, &EVTDESC_SYNCHRONOUSSUPERWETINK_LOOKUPPERFRAMEDATA_CLEANUP, this, v3);
    }
  }
}
