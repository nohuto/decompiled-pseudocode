/*
 * XREFs of ?Rehash@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@QEAAXI@Z @ 0x1400696C8
 * Callers:
 *     ?NewNode@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@AEAAPEAVCNode@12@AEBQEAUIUnknown@@II@Z @ 0x14003F488 (-NewNode@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V.c)
 *     ?FreeNode@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1400458CC (-FreeNode@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@.c)
 * Callees:
 *     ?UpdateRehashThresholds@?$CAtlMap@_KV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@V?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@4@@ATL@@AEAAXXZ @ 0x14001281C (-UpdateRehashThresholds@-$CAtlMap@_KV-$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy.c)
 *     ?InitHashTable@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@QEAA_NI_N@Z @ 0x140013500 (-InitHashTable@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceMana.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14005619C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400590C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1400593C4 (--_U@YAPEAX_K@Z.c)
 *     memset_0 @ 0x14005A0E4 (memset_0.c)
 *     ?PickSize@?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@AEBAI_K@Z @ 0x140066310 (-PickSize@-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@A.c)
 */

void __fastcall ATL::CAtlMap<IUnknown *,GraphStreamingResourceManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<GraphStreamingResourceManager::DeviceRegistrations::ListValue>>::Rehash(
        __int64 a1,
        unsigned int a2)
{
  unsigned int v2; // edi
  _DWORD *v4; // r14
  _QWORD *v5; // rax
  _QWORD *v6; // rsi
  __int64 i; // r9
  __int64 v8; // r10
  __int64 v9; // r8
  __int64 v10; // rdx

  v2 = a2;
  if ( !a2 )
    v2 = ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::PickSize(
           a1,
           *(_QWORD *)(a1 + 8));
  v4 = (_DWORD *)(a1 + 16);
  if ( v2 != *(_DWORD *)(a1 + 16) )
  {
    if ( *(_QWORD *)a1 )
    {
      v5 = operator new[](saturated_mul(v2, 8uLL));
      v6 = v5;
      if ( !v5 )
        ATL::AtlThrowImpl(-2147024882);
      memset_0(v5, 0, 8LL * v2);
      for ( i = 0LL; (unsigned int)i < *v4; i = (unsigned int)(i + 1) )
      {
        v8 = *(_QWORD *)(*(_QWORD *)a1 + 8 * i);
        if ( v8 )
        {
          do
          {
            v9 = *(_QWORD *)(v8 + 32);
            v10 = *(_DWORD *)(v8 + 40) % v2;
            *(_QWORD *)(v8 + 32) = v6[v10];
            v6[(unsigned int)v10] = v8;
            v8 = v9;
          }
          while ( v9 );
        }
      }
      operator delete(*(void **)a1);
      *(_QWORD *)a1 = v6;
      *(_DWORD *)(a1 + 16) = v2;
      ATL::CAtlMap<unsigned __int64,wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>>>::UpdateRehashThresholds(a1);
    }
    else
    {
      ATL::CAtlMap<IUnknown *,GraphStreamingResourceManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<GraphStreamingResourceManager::DeviceRegistrations::ListValue>>::InitHashTable(
        a1,
        v2,
        0);
    }
  }
}
