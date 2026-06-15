/*
 * XREFs of ?ReleaseSaDeviceResource@@YAJPEA_K@Z @ 0x180067460
 * Callers:
 *     ??1CSaDeviceProxy@@MEAA@XZ @ 0x18006723C (--1CSaDeviceProxy@@MEAA@XZ.c)
 *     ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEBU_GUID@@5PEAPEAUISaDeviceProxy@@@Z @ 0x1800F1DD0 (-GetSaDevice@CDeviceGraphManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams.c)
 *     ?Move_Resource_From_SaDeviceParam@CSaDeviceProxy@@UEAAXPEAUSaDeviceParams@@@Z @ 0x1800F2A90 (-Move_Resource_From_SaDeviceParam@CSaDeviceProxy@@UEAAXPEAUSaDeviceParams@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ReleaseSaDeviceResource(unsigned __int64 *a1)
{
  return (*(__int64 (__fastcall **)(struct IAudioResourceManager *, unsigned __int64 *))(*(_QWORD *)g_AudioResourceManager
                                                                                       + 40LL))(
           g_AudioResourceManager,
           a1);
}
