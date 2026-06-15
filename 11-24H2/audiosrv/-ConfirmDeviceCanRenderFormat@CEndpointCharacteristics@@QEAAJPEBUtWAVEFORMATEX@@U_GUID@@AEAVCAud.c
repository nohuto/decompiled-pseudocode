/*
 * XREFs of ?ConfirmDeviceCanRenderFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@U_GUID@@AEAVCAudioSignalProcessingModeMap@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x180036DE8
 * Callers:
 *     ?ConfirmDeviceFormat@EffectPack@@AEAAJPEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x180036D14 (-ConfirmDeviceFormat@EffectPack@@AEAAJPEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengine.c)
 * Callees:
 *     ?GetSharedModeEnginePeriodicityForTranslatedProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@AEAVCAudioSignalProcessingModeMap@@W4PeriodicityType@@PEAI555@Z @ 0x180036F00 (-GetSharedModeEnginePeriodicityForTranslatedProcessingMode@CEndpointCharacteristics@@QEAAJW4__MI.c)
 *     ?SetProcessingPeriod@CEndpointCharacteristics@@QEAAJAEB_J@Z @ 0x1800739B8 (-SetProcessingPeriod@CEndpointCharacteristics@@QEAAJAEB_J@Z.c)
 *     ?ConnectorProbablySupportsFormat@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@@Z @ 0x18013331C (-ConnectorProbablySupportsFormat@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengine.c)
 */

__int64 __fastcall CEndpointCharacteristics::ConfirmDeviceCanRenderFormat(
        CEndpointCharacteristics *this,
        const struct tWAVEFORMATEX *a2,
        struct _GUID *a3,
        struct CAudioSignalProcessingModeMap *a4,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a5,
        int a6)
{
  struct _GUID v8; // xmm0
  int SharedModeEnginePeriodicityForTranslatedProcessingMode; // ebx
  struct _GUID v12; // [rsp+50h] [rbp-18h] BYREF
  __int64 v13; // [rsp+80h] [rbp+18h] BYREF

  v8 = *a3;
  LODWORD(v13) = 0;
  v12 = v8;
  SharedModeEnginePeriodicityForTranslatedProcessingMode = CEndpointCharacteristics::GetSharedModeEnginePeriodicityForTranslatedProcessingMode(
                                                             this,
                                                             (unsigned int)a5,
                                                             a2,
                                                             &v12,
                                                             a4,
                                                             0,
                                                             &v13,
                                                             0LL,
                                                             0LL,
                                                             0LL);
  if ( SharedModeEnginePeriodicityForTranslatedProcessingMode < 0 )
  {
    if ( SharedModeEnginePeriodicityForTranslatedProcessingMode == -2004287480 )
    {
      v12 = *a3;
      if ( CEndpointCharacteristics::ConnectorProbablySupportsFormat(this, a5, &v12, a2) )
        return (unsigned int)-2005139389;
    }
  }
  else if ( a6 )
  {
    v13 = (unsigned int)(int)((double)(int)v13 * 10000000.0 / (double)(int)a2->nSamplesPerSec + 0.5);
    return (unsigned int)CEndpointCharacteristics::SetProcessingPeriod(this, &v13);
  }
  return (unsigned int)SharedModeEnginePeriodicityForTranslatedProcessingMode;
}
