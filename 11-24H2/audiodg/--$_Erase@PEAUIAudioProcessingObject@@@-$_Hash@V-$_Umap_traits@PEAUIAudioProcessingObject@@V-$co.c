/*
 * XREFs of ??$_Erase@PEAUIAudioProcessingObject@@@?$_Hash@V?$_Umap_traits@PEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAUIAudioProcessingObject@@U?$hash@PEAUIAudioProcessingObject@@@std@@U?$equal_to@PEAUIAudioProcessingObject@@@3@@std@@V?$allocator@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@AEAA_KAEBQEAUIAudioProcessingObject@@@Z @ 0x140018170
 * Callers:
 *     ?UnregisterAPOFromProcessingHost@CAPOProcessingHost@@UEAAXPEAUIAudioProcessingObject@@@Z @ 0x140018110 (-UnregisterAPOFromProcessingHost@CAPOProcessingHost@@UEAAXPEAUIAudioProcessingObject@@@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??$?RPEAUIAudioProcessingObject@@@?$_Uhash_compare@PEAUIAudioProcessingObject@@U?$hash@PEAUIAudioProcessingObject@@@std@@U?$equal_to@PEAUIAudioProcessingObject@@@3@@std@@QEBA_KAEBQEAUIAudioProcessingObject@@@Z @ 0x140018224 (--$-RPEAUIAudioProcessingObject@@@-$_Uhash_compare@PEAUIAudioProcessingObject@@U-$hash@PEAUIAudi.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x140018288 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 std::_Hash<std::_Umap_traits<IAudioProcessingObject *,wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>,std::_Uhash_compare<IAudioProcessingObject *,std::hash<IAudioProcessingObject *>,std::equal_to<IAudioProcessingObject *>>,std::allocator<std::pair<IAudioProcessingObject * const,wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>>>,0>>::_Erase<IAudioProcessingObject *>()
{
  __int64 v0; // rax
  _QWORD *v1; // rdx
  _QWORD *v2; // r11
  __int64 v3; // r8
  __int64 v4; // r10
  _QWORD *v5; // rax
  __int64 v6; // r10
  _QWORD *v7; // rbx
  __int64 v8; // rdx

  v0 = std::_Uhash_compare<IAudioProcessingObject *,std::hash<IAudioProcessingObject *>,std::equal_to<IAudioProcessingObject *>>::operator()<IAudioProcessingObject *>();
  v3 = v2[3];
  v4 = v2[6] & v0;
  v5 = (_QWORD *)v2[1];
  v6 = 2 * v4;
  v7 = *(_QWORD **)(v3 + 8 * v6 + 8);
  if ( v7 == v5 )
  {
LABEL_4:
    v7 = 0LL;
  }
  else
  {
    while ( *v1 != v7[2] )
    {
      if ( v7 == *(_QWORD **)(v3 + 8 * v6) )
        goto LABEL_4;
      v7 = (_QWORD *)v7[1];
    }
  }
  if ( !v7 )
    return 0LL;
  if ( *(_QWORD **)(v3 + 8 * v6 + 8) == v7 )
  {
    if ( *(_QWORD **)(v3 + 8 * v6) == v7 )
      *(_QWORD *)(v3 + 8 * v6) = v5;
    else
      v5 = (_QWORD *)v7[1];
    *(_QWORD *)(v3 + 8 * v6 + 8) = v5;
  }
  else if ( *(_QWORD **)(v3 + 8 * v6) == v7 )
  {
    *(_QWORD *)(v3 + 8 * v6) = *v7;
  }
  v8 = *v7;
  --v2[2];
  *(_QWORD *)v7[1] = v8;
  *(_QWORD *)(v8 + 8) = v7[1];
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(v7 + 3);
  std::_Deallocate<16,0>(v7, 32LL);
  return 1LL;
}
