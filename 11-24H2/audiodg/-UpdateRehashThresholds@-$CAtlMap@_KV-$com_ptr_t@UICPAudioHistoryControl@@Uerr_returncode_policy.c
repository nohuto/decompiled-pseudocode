/*
 * XREFs of ?UpdateRehashThresholds@?$CAtlMap@_KV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@V?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@4@@ATL@@AEAAXXZ @ 0x14001281C
 * Callers:
 *     ?InitHashTable@?$CAtlMap@_KV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@V?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@4@@ATL@@QEAA_NI_N@Z @ 0x140012724 (-InitHashTable@-$CAtlMap@_KV-$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wi.c)
 *     ??0?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@QEAA@IMMMI@Z @ 0x1400127C0 (--0-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V-$CEle.c)
 *     ??0CpuManager@@QEAA@XZ @ 0x1400129EC (--0CpuManager@@QEAA@XZ.c)
 *     ?InitHashTable@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEAA_NI_N@Z @ 0x140013190 (-InitHashTable@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElem.c)
 *     ?InitHashTable@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@QEAA_NI_N@Z @ 0x140013500 (-InitHashTable@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceMana.c)
 *     ??0GraphStreamingResourceManager@@QEAA@XZ @ 0x140014C2C (--0GraphStreamingResourceManager@@QEAA@XZ.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x1400295F4 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     CreateHistoryBufferManager @ 0x140066050 (CreateHistoryBufferManager.c)
 *     ?Rehash@?$CAtlMap@_KV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@V?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@4@@ATL@@QEAAXI@Z @ 0x1400663B0 (-Rehash@-$CAtlMap@_KV-$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V-$C.c)
 *     ?Rehash@?$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@CpuManager@@@5@@ATL@@QEAAXI@Z @ 0x140069478 (-Rehash@-$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V-$CElementTraits@K@ATL@@V-$CEleme.c)
 *     ?Rehash@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEAAXI@Z @ 0x1400695A0 (-Rehash@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElementTrai.c)
 *     ?Rehash@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@QEAAXI@Z @ 0x1400696C8 (-Rehash@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V-.c)
 *     ?Rehash@?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@QEAAXI@Z @ 0x14006AD84 (-Rehash@-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ATL::CAtlMap<unsigned __int64,wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>>>::UpdateRehashThresholds(
        __int64 a1)
{
  unsigned __int64 v1; // rdx
  float v2; // xmm0_4
  float v3; // xmm1_4
  float v4; // xmm0_4
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 result; // rax

  v1 = 0LL;
  v2 = (float)*(int *)(a1 + 16);
  v3 = v2 * *(float *)(a1 + 28);
  if ( v3 >= 9.223372e18 )
  {
    v3 = v3 - 9.223372e18;
    if ( v3 < 9.223372e18 )
      v1 = 0x8000000000000000uLL;
  }
  v4 = v2 * *(float *)(a1 + 24);
  v5 = v1 + (unsigned int)(int)v3;
  v6 = 0LL;
  *(_QWORD *)(a1 + 32) = v5;
  if ( v4 >= 9.223372e18 )
  {
    v4 = v4 - 9.223372e18;
    if ( v4 < 9.223372e18 )
      v6 = 0x8000000000000000uLL;
  }
  result = v6 + (unsigned int)(int)v4;
  *(_QWORD *)(a1 + 40) = result;
  if ( result < 0x11 )
    *(_QWORD *)(a1 + 40) = 0LL;
  return result;
}
