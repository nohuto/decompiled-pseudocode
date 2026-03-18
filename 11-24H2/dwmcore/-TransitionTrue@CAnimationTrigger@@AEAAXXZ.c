/*
 * XREFs of ?TransitionTrue@CAnimationTrigger@@AEAAXXZ @ 0x180220F3C
 * Callers:
 *     ?SetProperty@CAnimationTrigger@@EEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1802934D0 (-SetProperty@CAnimationTrigger@@EEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18003A510 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ??0?$_Hash@V?$_Uset_traits@PEAVIBatchProcessingCompleteListener@@V?$_Uhash_compare@PEAVIBatchProcessingCompleteListener@@U?$hash@PEAVIBatchProcessingCompleteListener@@@std@@U?$equal_to@PEAVIBatchProcessingCompleteListener@@@3@@std@@V?$allocator@PEAVIBatchProcessingCompleteListener@@@3@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@PEAVIBatchProcessingCompleteListener@@U?$hash@PEAVIBatchProcessingCompleteListener@@@std@@U?$equal_to@PEAVIBatchProcessingCompleteListener@@@3@@1@AEBV?$allocator@PEAVIBatchProcessingCompleteListener@@@1@@Z @ 0x1800EF800 (--0-$_Hash@V-$_Uset_traits@PEAVIBatchProcessingCompleteListener@@V-$_Uhash_compare@PEAVIBatchPro.c)
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x180154670 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x180154D20 (-GetChannelCallbackId@CNotificationResource@@IEBAIXZ.c)
 *     ?TryNotify@DataProviderManager@@QEAAXPEAVCResource@@_K1W4DataProviderNotificationEventArg@@@Z @ 0x1801A8EC8 (-TryNotify@DataProviderManager@@QEAAXPEAVCResource@@_K1W4DataProviderNotificationEventArg@@@Z.c)
 *     _tlgKeywordOn @ 0x1801B92C0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18021AF80 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?ShouldSendAnimationNotification@CAnimationTrigger@@AEBA_NXZ @ 0x1802212F0 (-ShouldSendAnimationNotification@CAnimationTrigger@@AEBA_NXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@333@Z @ 0x180221314 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ??1?$_Hash@V?$_Uset_traits@PEAVIBatchProcessingCompleteListener@@V?$_Uhash_compare@PEAVIBatchProcessingCompleteListener@@U?$hash@PEAVIBatchProcessingCompleteListener@@@std@@U?$equal_to@PEAVIBatchProcessingCompleteListener@@@3@@std@@V?$allocator@PEAVIBatchProcessingCompleteListener@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x180247450 (--1-$_Hash@V-$_Uset_traits@PEAVIBatchProcessingCompleteListener@@V-$_Uhash_compare@PEAVIBatchPro.c)
 *     ??$emplace@AEBQEAVCBaseExpression@@@?$_Hash@V?$_Uset_traits@PEAUIUnknown@@V?$_Uhash_compare@PEAUIUnknown@@U?$hash@PEAUIUnknown@@@std@@U?$equal_to@PEAUIUnknown@@@3@@std@@V?$allocator@PEAUIUnknown@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIUnknown@@@std@@@std@@@std@@_N@1@AEBQEAVCBaseExpression@@@Z @ 0x180293348 (--$emplace@AEBQEAVCBaseExpression@@@-$_Hash@V-$_Uset_traits@PEAUIUnknown@@V-$_Uhash_compare@PEAU.c)
 *     ?swap@?$_Uhash_compare@PEAUIUnknown@@U?$hash@PEAUIUnknown@@@std@@U?$equal_to@PEAUIUnknown@@@3@@std@@QEAAXAEAV12@@Z @ 0x180293560 (-swap@-$_Uhash_compare@PEAUIUnknown@@U-$hash@PEAUIUnknown@@@std@@U-$equal_to@PEAUIUnknown@@@3@@s.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CAnimationTrigger::TransitionTrue(CAnimationTrigger *this)
{
  _QWORD *v1; // rsi
  _QWORD *i; // rbx
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  unsigned int ChannelCallbackId; // eax
  __int64 v8; // r10
  __int64 v9; // rbx
  __int64 v10; // rsi
  _QWORD *v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // [rsp+30h] [rbp-29h]
  __int64 v23; // [rsp+38h] [rbp-21h]
  _QWORD v24[2]; // [rsp+40h] [rbp-19h] BYREF
  _BYTE v25[8]; // [rsp+50h] [rbp-9h] BYREF
  __int64 v26; // [rsp+58h] [rbp-1h]
  __int64 v27; // [rsp+60h] [rbp+7h]
  __int64 v28; // [rsp+68h] [rbp+Fh]
  __int64 v29; // [rsp+70h] [rbp+17h]
  __int64 v30; // [rsp+78h] [rbp+1Fh]
  __int64 v31; // [rsp+80h] [rbp+27h]
  __int64 v32; // [rsp+88h] [rbp+2Fh]
  CAnimationTrigger *v33; // [rsp+C0h] [rbp+67h] BYREF
  __int64 v34; // [rsp+C8h] [rbp+6Fh] BYREF
  CGlobalComposition *CurrentFrameId; // [rsp+D0h] [rbp+77h] BYREF
  CAnimationTrigger *v36; // [rsp+D8h] [rbp+7Fh] BYREF

  v1 = (_QWORD *)*((_QWORD *)this + 14);
  for ( i = (_QWORD *)*((_QWORD *)this + 13); i != v1; ++i )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 232LL))(*i);
  if ( CNotificationResource::ShouldNotify(this) )
  {
    if ( (unsigned int)dword_1803F8D18 > 5 && (byte_1803F8D28 & 4) != 0 && (qword_1803F8D30 & 4) == qword_1803F8D30 )
    {
      v33 = (CAnimationTrigger *)*((_QWORD *)this + 11);
      v34 = *((_QWORD *)this + 10);
      CurrentFrameId = GetCurrentFrameId();
      v36 = this;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v4,
        (unsigned int)&unk_1803CDA84,
        v5,
        v6,
        (__int64)&v36,
        (__int64)&CurrentFrameId,
        (__int64)&v34,
        (__int64)&v33);
    }
    if ( (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 3) + 6392LL) + 72LL))(
           *(_QWORD *)(*((_QWORD *)this + 3) + 6392LL),
           2LL) )
    {
      ChannelCallbackId = CNotificationResource::GetChannelCallbackId(this);
      v24[0] = ChannelCallbackId;
      v24[1] = *((unsigned int *)this + 18);
      CoreUICallSend(v8, v24, 2LL, 2LL, 0, &unk_18032BF13, v22, v23, ChannelCallbackId);
    }
    if ( CAnimationTrigger::ShouldSendAnimationNotification(this) )
    {
      LODWORD(v33) = 0;
      v9 = *((_QWORD *)this + 14);
      v10 = *((_QWORD *)this + 13);
      std::_Hash<std::_Uset_traits<IBatchProcessingCompleteListener *,std::_Uhash_compare<IBatchProcessingCompleteListener *,std::hash<IBatchProcessingCompleteListener *>,std::equal_to<IBatchProcessingCompleteListener *>>,std::allocator<IBatchProcessingCompleteListener *>,0>>::_Hash<std::_Uset_traits<IBatchProcessingCompleteListener *,std::_Uhash_compare<IBatchProcessingCompleteListener *,std::hash<IBatchProcessingCompleteListener *>,std::equal_to<IBatchProcessingCompleteListener *>>,std::allocator<IBatchProcessingCompleteListener *>,0>>(
        (__int64)v25,
        &v33);
      while ( v10 != v9 )
      {
        std::_Hash<std::_Uset_traits<IUnknown *,std::_Uhash_compare<IUnknown *,std::hash<IUnknown *>,std::equal_to<IUnknown *>>,std::allocator<IUnknown *>,0>>::emplace<CBaseExpression * const &>(
          v25,
          v24,
          v10);
        v10 += 8LL;
      }
      if ( (char *)this + 136 != v25 )
      {
        std::_Uhash_compare<IUnknown *,std::hash<IUnknown *>,std::equal_to<IUnknown *>>::swap((char *)this + 136, v25);
        v12 = v11[1];
        v11[1] = v26;
        v26 = v12;
        v13 = v11[2];
        v11[2] = v27;
        v27 = v13;
        v14 = v11[3];
        v11[3] = v28;
        v28 = v14;
        v15 = v11[4];
        v11[4] = v29;
        v29 = v15;
        v16 = v11[5];
        v11[5] = v30;
        v30 = v16;
        v17 = v11[6];
        v11[6] = v31;
        v31 = v17;
        v18 = v11[7];
        v11[7] = v32;
        v32 = v18;
      }
      if ( *((_QWORD *)this + 19) )
      {
        if ( (unsigned int)dword_1803F8D18 > 5 && tlgKeywordOn((__int64)&dword_1803F8D18, 4LL) )
        {
          v33 = this;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
            v19,
            byte_1803CDA1E,
            v20,
            v21,
            (__int64)&v33);
        }
        DataProviderManager::TryNotify(
          *(DataProviderManager **)(*((_QWORD *)this + 3) + 6400LL),
          this,
          *((_QWORD *)this + 10),
          *((_QWORD *)this + 11),
          0);
      }
      std::_Hash<std::_Uset_traits<IBatchProcessingCompleteListener *,std::_Uhash_compare<IBatchProcessingCompleteListener *,std::hash<IBatchProcessingCompleteListener *>,std::equal_to<IBatchProcessingCompleteListener *>>,std::allocator<IBatchProcessingCompleteListener *>,0>>::~_Hash<std::_Uset_traits<IBatchProcessingCompleteListener *,std::_Uhash_compare<IBatchProcessingCompleteListener *,std::hash<IBatchProcessingCompleteListener *>,std::equal_to<IBatchProcessingCompleteListener *>>,std::allocator<IBatchProcessingCompleteListener *>,0>>(v25);
    }
  }
}
