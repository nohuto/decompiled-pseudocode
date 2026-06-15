/*
 * XREFs of ?SetCount@?$CAtlArray@PEAV?$CAtlArray@PEAVEndpointInfo@@V?$CElementTraits@PEAVEndpointInfo@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlArray@PEAVEndpointInfo@@V?$CElementTraits@PEAVEndpointInfo@@@ATL@@@ATL@@@2@@ATL@@QEAA_N_KH@Z @ 0x180159ADC
 * Callers:
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJAEAVEndpointInfo@@KW4AUDIO_DIRECTION@@HK@Z @ 0x1800E8FD0 (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJAEAVEndpointInfo@@KW4A.c)
 *     ?CleanResourceExclusiveEndpoint@CConstraintModel@@AEAAXPEAV?$CAtlArray@PEAV?$CAtlArray@PEAVEndpointInfo@@V?$CElementTraits@PEAVEndpointInfo@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlArray@PEAVEndpointInfo@@V?$CElementTraits@PEAVEndpointInfo@@@ATL@@@ATL@@@2@@ATL@@@Z @ 0x180157AE0 (-CleanResourceExclusiveEndpoint@CConstraintModel@@AEAAXPEAV-$CAtlArray@PEAV-$CAtlArray@PEAVEndpo.c)
 *     ?CopyExclusiveEndpointCollection@CConstraintModel@@AEAAJPEAV?$CAtlArray@PEAV?$CAtlArray@PEAVEndpointInfo@@V?$CElementTraits@PEAVEndpointInfo@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlArray@PEAVEndpointInfo@@V?$CElementTraits@PEAVEndpointInfo@@@ATL@@@ATL@@@2@@ATL@@0@Z @ 0x180157BB8 (-CopyExclusiveEndpointCollection@CConstraintModel@@AEAAJPEAV-$CAtlArray@PEAV-$CAtlArray@PEAVEndp.c)
 * Callees:
 *     ?GrowBuffer@?$CAtlArray@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@AEAA_N_K@Z @ 0x1801111B4 (-GrowBuffer@-$CAtlArray@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@.c)
 *     ?CallConstructors@?$CAtlArray@PEAV?$CAtlArray@PEAVEndpointInfo@@V?$CElementTraits@PEAVEndpointInfo@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlArray@PEAVEndpointInfo@@V?$CElementTraits@PEAVEndpointInfo@@@ATL@@@ATL@@@2@@ATL@@CAXPEAPEAV?$CAtlArray@PEAVEndpointInfo@@V?$CElementTraits@PEAVEndpointInfo@@@ATL@@@2@_K@Z @ 0x180157A54 (-CallConstructors@-$CAtlArray@PEAV-$CAtlArray@PEAVEndpointInfo@@V-$CElementTraits@PEAVEndpointIn.c)
 */

char __fastcall ATL::CAtlArray<ATL::CAtlArray<EndpointInfo *,ATL::CElementTraits<EndpointInfo *>> *,ATL::CElementTraits<ATL::CAtlArray<EndpointInfo *,ATL::CElementTraits<EndpointInfo *>> *>>::SetCount(
        __int64 a1,
        size_t a2)
{
  size_t v2; // rbx
  char result; // al

  v2 = 0LL;
  if ( !a2 )
  {
    if ( *(_QWORD *)a1 )
    {
      free(*(void **)a1);
      *(_QWORD *)a1 = 0LL;
    }
    *(_QWORD *)(a1 + 16) = 0LL;
    goto LABEL_9;
  }
  if ( a2 <= *(_QWORD *)(a1 + 16) )
  {
    if ( a2 <= *(_QWORD *)(a1 + 8) )
    {
LABEL_8:
      v2 = a2;
LABEL_9:
      *(_QWORD *)(a1 + 8) = v2;
      return 1;
    }
LABEL_7:
    ATL::CAtlArray<ATL::CAtlArray<EndpointInfo *,ATL::CElementTraits<EndpointInfo *>> *,ATL::CElementTraits<ATL::CAtlArray<EndpointInfo *,ATL::CElementTraits<EndpointInfo *>> *>>::CallConstructors();
    goto LABEL_8;
  }
  result = ATL::CAtlArray<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::GrowBuffer(
             a1,
             a2);
  if ( result )
    goto LABEL_7;
  return result;
}
