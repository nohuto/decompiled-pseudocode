/*
 * XREFs of ?GetSaDeviceForOffloadedStream@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEAV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUIAudioProcess@@PEAVCAudioSessionManager@@PEBU_GUID@@8PEAPEAUISaDeviceProxy@@@Z @ 0x1800BCF28
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@W4_BridgeStreamProperties@@2KPEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x1800B94A0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAU.c)
 * Callees:
 *     ?RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEAV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800BF184 (-RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescripto.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAudioResourceManager::GetSaDeviceForOffloadedStream(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        CAudioSessionManager *a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  int v13; // edi
  int v14; // esi
  unsigned int v15; // eax
  unsigned int v16; // ebx
  int v17; // ecx
  int v18; // r8d

  v13 = a4;
  v14 = a2;
  if ( a3 )
    v15 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, int, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a3 + 64LL))(
            a3,
            a2,
            a4,
            a5,
            a6,
            a7,
            a8,
            a11,
            a12,
            a13);
  else
    v15 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64, __int64, _QWORD, int, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)g_DeviceGraphManager + 24LL))(
            g_DeviceGraphManager,
            a2,
            a4,
            a5,
            a6,
            a7,
            a8,
            a11,
            a12,
            a13);
  v16 = v15;
  if ( v15 == -2005139364 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a9 + 96LL))(a9) )
    return (unsigned int)CAudioResourceManager::RetryGetSaDeviceForPackagedApp(
                           v17,
                           v14,
                           v18,
                           v13,
                           a5,
                           a6,
                           a7,
                           a8,
                           a10,
                           a13);
  return v16;
}
