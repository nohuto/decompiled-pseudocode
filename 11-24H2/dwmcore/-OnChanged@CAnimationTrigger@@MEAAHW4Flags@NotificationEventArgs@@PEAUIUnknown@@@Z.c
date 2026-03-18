/*
 * XREFs of ?OnChanged@CAnimationTrigger@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1802211B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$?RPEAVCInteractionTracker@@@?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@std@@QEBA_KAEBQEAVCInteractionTracker@@@Z @ 0x1800E0CA8 (--$-RPEAVCInteractionTracker@@@-$_Uhash_compare@PEAVCInteractionTracker@@U-$hash@PEAVCInteractio.c)
 *     ?TryNotify@DataProviderManager@@QEAAXPEAVCResource@@_K1W4DataProviderNotificationEventArg@@@Z @ 0x1801A8EC8 (-TryNotify@DataProviderManager@@QEAAXPEAVCResource@@_K1W4DataProviderNotificationEventArg@@@Z.c)
 *     _tlgKeywordOn @ 0x1801B92C0 (_tlgKeywordOn.c)
 *     ??$_Find_last@_K@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEB_K_K@Z @ 0x1801B9FD0 (--$_Find_last@_K@-$_Hash@V-$_Umap_traits@_KV-$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V-$_U.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18021AF80 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?ShouldSendAnimationNotification@CAnimationTrigger@@AEBA_NXZ @ 0x1802212F0 (-ShouldSendAnimationNotification@CAnimationTrigger@@AEBA_NXZ.c)
 *     ??$_Erase@PEAUIUnknown@@@?$_Hash@V?$_Uset_traits@PEAUIUnknown@@V?$_Uhash_compare@PEAUIUnknown@@U?$hash@PEAUIUnknown@@@std@@U?$equal_to@PEAUIUnknown@@@3@@std@@V?$allocator@PEAUIUnknown@@@3@$0A@@std@@@std@@AEAA_KAEBQEAUIUnknown@@@Z @ 0x1802932A8 (--$_Erase@PEAUIUnknown@@@-$_Hash@V-$_Uset_traits@PEAUIUnknown@@V-$_Uhash_compare@PEAUIUnknown@@U.c)
 */

__int64 __fastcall CAnimationTrigger::OnChanged(struct CResource *a1, __int64 a2, __int64 a3)
{
  int v4; // edx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  _QWORD *v8; // r10
  __int64 v9; // rcx
  __int64 v10; // r10
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD v17[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v18; // [rsp+60h] [rbp+18h] BYREF
  struct CResource *v19; // [rsp+68h] [rbp+20h] BYREF

  v18 = a3;
  if ( CAnimationTrigger::ShouldSendAnimationNotification(a1) && *(_QWORD *)(v5 + 152) )
  {
    if ( (unsigned int)(v4 - 8) <= 1 && v6 )
    {
      v7 = std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>::operator()<CInteractionTracker *>(
             v5,
             (__int64)&v18);
      v9 = std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<BamoDataSourceProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>,0>>::_Find_last<unsigned __int64>(
             v8,
             v17,
             &v18,
             v7)[1];
      if ( !v9 )
        v9 = *(_QWORD *)(v10 + 8);
      if ( v9 != *((_QWORD *)a1 + 18) )
        std::_Hash<std::_Uset_traits<IUnknown *,std::_Uhash_compare<IUnknown *,std::hash<IUnknown *>,std::equal_to<IUnknown *>>,std::allocator<IUnknown *>,0>>::_Erase<IUnknown *>(
          v10,
          &v18);
      if ( !*((_QWORD *)a1 + 19) )
      {
        if ( (unsigned int)dword_1803F8D18 > 5 && tlgKeywordOn((__int64)&dword_1803F8D18, 4LL) )
        {
          v19 = a1;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
            v11,
            byte_1803CD972,
            v12,
            v13,
            (__int64)&v19);
        }
        DataProviderManager::TryNotify(
          *(DataProviderManager **)(*((_QWORD *)a1 + 3) + 6400LL),
          a1,
          *((_QWORD *)a1 + 10),
          *((_QWORD *)a1 + 11),
          1u);
      }
    }
  }
  else if ( (unsigned int)dword_1803F8D18 > 5 && tlgKeywordOn((__int64)&dword_1803F8D18, 4LL) )
  {
    v19 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
      (__int64)&v19,
      byte_1803CD9D1,
      v14,
      v15,
      (__int64)&v19);
  }
  return 1LL;
}
