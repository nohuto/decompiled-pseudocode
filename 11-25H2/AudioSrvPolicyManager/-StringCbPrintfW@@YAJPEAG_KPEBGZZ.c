/*
 * XREFs of ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x180010430
 * Callers:
 *     ?OpenStoreKey@@YAJPEAUIAudioSessionInfo@@PEAPEAUHKEY__@@@Z @ 0x18000F2DC (-OpenStoreKey@@YAJPEAUIAudioSessionInfo@@PEAPEAUHKEY__@@@Z.c)
 *     ?GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z @ 0x1800100B0 (-GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z.c)
 *     ?Commit@CAudioSessionPropertyStore@@UEAAJXZ @ 0x180044C90 (-Commit@CAudioSessionPropertyStore@@UEAAJXZ.c)
 *     ?AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAG@Z @ 0x180047970 (-AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mm.c)
 *     ?SetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEBG@Z @ 0x180048A40 (-SetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmde.c)
 * Callees:
 *     _vsnwprintf @ 0x180021204 (_vsnwprintf.c)
 */

__int64 StringCbPrintfW(unsigned __int16 *a1, unsigned __int64 a2, const unsigned __int16 *a3, ...)
{
  unsigned __int64 v3; // rdx
  unsigned int v5; // edi
  unsigned __int64 v6; // rsi
  int v7; // eax
  va_list Args; // [rsp+78h] [rbp+20h] BYREF

  va_start(Args, a3);
  v3 = a2 >> 1;
  if ( v3 - 1 <= 0x7FFFFFFE )
  {
    v6 = v3 - 1;
    v5 = 0;
    v7 = vsnwprintf(a1, v3 - 1, a3, Args);
    if ( v7 < 0 || v7 > v6 )
    {
      v5 = -2147024774;
    }
    else if ( v7 != v6 )
    {
      return v5;
    }
    a1[v6] = 0;
  }
  else
  {
    v5 = -2147024809;
    if ( v3 )
      *a1 = 0;
  }
  return v5;
}
