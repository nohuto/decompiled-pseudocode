/*
 * XREFs of ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x1800065B0
 * Callers:
 *     ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180002360 (-OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180004B00 (-OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?GetApplicationSpecificEndpointInfoForProcess@CWindowsPolicyManager@@UEAAJKPEAPEAUIApplicationSpecificEndpointInfo@@@Z @ 0x180005ED0 (-GetApplicationSpecificEndpointInfoForProcess@CWindowsPolicyManager@@UEAAJKPEAPEAUIApplicationSp.c)
 *     ?GetApplicationSpecificEndpointInfo@CProcess@@UEAAJPEAPEAUIApplicationSpecificEndpointInfo@@@Z @ 0x180006310 (-GetApplicationSpecificEndpointInfo@CProcess@@UEAAJPEAPEAUIApplicationSpecificEndpointInfo@@@Z.c)
 *     ?GetStreamClassPolicyGainsForEndpoint@CStreamClassPolicyGainsWrapper@@AEAAXPEBGPEAPEAVCStreamClassPolicyGains@@@Z @ 0x1800066A0 (-GetStreamClassPolicyGainsForEndpoint@CStreamClassPolicyGainsWrapper@@AEAAXPEBGPEAPEAVCStreamCla.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180006B20 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x1800118C0 (-RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?GetEndpointVolumeOverridePolicyVolume@CEndpointVolumeStateManager@@UEAAMPEBG@Z @ 0x180014630 (-GetEndpointVolumeOverridePolicyVolume@CEndpointVolumeStateManager@@UEAAMPEBG@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180006FE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18001F874 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x18002D610 (-_Xlen_string@std@@YAXXZ.c)
 *     memcpy_0 @ 0x18004B3CC (memcpy_0.c)
 */

__int64 __fastcall std::wstring::_Construct<1,unsigned short const *>(char **a1, const void *a2, unsigned __int64 a3)
{
  __int64 v3; // rbp
  __int64 v7; // rbx
  __int64 result; // rax
  __int64 v9; // rcx
  char *v10; // rax
  size_t v11; // rbx
  char *v12; // rdi

  v3 = 0x7FFFFFFFFFFFFFFELL;
  if ( a3 > 0x7FFFFFFFFFFFFFFELL )
    std::_Xlen_string();
  a1[3] = (char *)7;
  if ( a3 > 7 )
  {
    if ( (a3 | 7) <= 0x7FFFFFFFFFFFFFFELL )
    {
      v3 = a3 | 7;
      if ( (a3 | 7) < 0xA )
        v3 = 10LL;
      v9 = v3 + 1;
      if ( (unsigned __int64)(v3 + 1) > 0x7FFFFFFFFFFFFFFFLL )
        std::_Throw_bad_array_new_length();
    }
    else
    {
      v9 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v10 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(2 * v9);
    a1[2] = (char *)a3;
    v11 = 2 * a3;
    *a1 = v10;
    a1[3] = (char *)v3;
    v12 = v10;
    memcpy_0(v10, a2, v11);
    result = 0LL;
    *(_WORD *)&v12[v11] = 0;
  }
  else
  {
    a1[2] = (char *)a3;
    v7 = 2 * a3;
    memcpy_0(a1, a2, 2 * a3);
    result = 0LL;
    *(_WORD *)((char *)a1 + v7) = 0;
  }
  return result;
}
