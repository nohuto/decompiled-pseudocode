/*
 * XREFs of ?SetProcessingPeriod@CEndpointCharacteristics@@QEAAJAEB_J@Z @ 0x1800739B8
 * Callers:
 *     ?GetProcessingPeriod@EffectPack@@QEAAJHPEA_J0@Z @ 0x18002BF34 (-GetProcessingPeriod@EffectPack@@QEAAJHPEA_J0@Z.c)
 *     ?SetDeviceFormatSwAudioEngine@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18003681C (-SetDeviceFormatSwAudioEngine@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000.c)
 *     ?ConfirmDeviceCanRenderFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@U_GUID@@AEAVCAudioSignalProcessingModeMap@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x180036DE8 (-ConfirmDeviceCanRenderFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@U_GUID@@AEAVCAud.c)
 *     ?SetProcessingPeriod@CPolicyConfig@@UEAAJPEBGPEA_J@Z @ 0x180106FD0 (-SetProcessingPeriod@CPolicyConfig@@UEAAJPEBGPEA_J@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetPropertyStoreProperty@CEndpointCharacteristics@@QEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x1800A2140 (-SetPropertyStoreProperty@CEndpointCharacteristics@@QEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT.c)
 */

__int64 __fastcall CEndpointCharacteristics::SetProcessingPeriod(CEndpointCharacteristics *this, BYTE *a2)
{
  int v2; // ebx
  __int64 v3; // rdx
  struct tagPROPVARIANT v5; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( (unsigned __int64)(*(_QWORD *)a2 - 50000LL) > 0xE7EF0 && *(_QWORD *)a2 )
  {
    v2 = -2005139386;
    v3 = 8450LL;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v5.bstrblobVal.pData = a2;
  *(_OWORD *)&v5.vt = 0LL;
  v5.lVal = 8;
  v5.vt = 65;
  v2 = CEndpointCharacteristics::SetPropertyStoreProperty(this, &PKEY_AudioEngine_Period, &v5);
  if ( v2 < 0 )
  {
    v3 = 8458LL;
    goto LABEL_4;
  }
  return 0LL;
}
