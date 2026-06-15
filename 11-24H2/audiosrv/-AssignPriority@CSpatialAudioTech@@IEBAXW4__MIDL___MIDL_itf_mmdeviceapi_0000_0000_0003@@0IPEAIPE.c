/*
 * XREFs of ?AssignPriority@CSpatialAudioTech@@IEBAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@0IPEAIPEA_N@Z @ 0x18005FFAC
 * Callers:
 *     ?IsTechnologySupported@CSpatialAudioDolbyHeadphones@@UEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180141E50 (-IsTechnologySupported@CSpatialAudioDolbyHeadphones@@UEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORM.c)
 *     ?IsTechnologySupported@CSpatialAudioDtsxStereo@@UEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180141F60 (-IsTechnologySupported@CSpatialAudioDtsxStereo@@UEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMATEX@.c)
 *     ?IsTechnologySupported@CSpatialAudioMSHRTF@@UEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180142160 (-IsTechnologySupported@CSpatialAudioMSHRTF@@UEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMATEX@@1KP.c)
 * Callees:
 *     IsGetDefaultSpatialRenderingModePresent @ 0x1800A7618 (IsGetDefaultSpatialRenderingModePresent.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSpatialAudioTech::AssignPriority(
        CSpatialAudioTech *this,
        unsigned int a2,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003 a3,
        unsigned int a4,
        unsigned int *a5,
        bool *a6)
{
  int DefaultSpatialRenderingMode; // ebp

  DefaultSpatialRenderingMode = 0;
  *a5 = 0;
  *a6 = 1;
  if ( (unsigned __int8)IsGetDefaultSpatialRenderingModePresent() )
    DefaultSpatialRenderingMode = GetDefaultSpatialRenderingMode(a2);
  if ( DefaultSpatialRenderingMode == (*(unsigned int (__fastcall **)(CSpatialAudioTech *))(*(_QWORD *)this + 64LL))(this) )
  {
    *a5 = 1;
  }
  else if ( DefaultSpatialRenderingMode )
  {
    *a6 = 0;
  }
  else if ( a2 == a3 || a2 == 5 && a3 == Headphones )
  {
    *a5 = a4;
  }
}
