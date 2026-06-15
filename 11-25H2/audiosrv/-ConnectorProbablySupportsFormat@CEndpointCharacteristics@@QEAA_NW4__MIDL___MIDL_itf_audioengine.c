/*
 * XREFs of ?ConnectorProbablySupportsFormat@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@@Z @ 0x18012B1FC
 * Callers:
 *     ?SetDeviceFormatSwAudioEngine@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18003FDC4 (-SetDeviceFormatSwAudioEngine@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000.c)
 *     ?ConfirmDeviceCanRenderFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@U_GUID@@AEAVCAudioSignalProcessingModeMap@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x180040390 (-ConfirmDeviceCanRenderFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@U_GUID@@AEAVCAud.c)
 * Callees:
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x1800319B0 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 */

char __fastcall CEndpointCharacteristics::ConnectorProbablySupportsFormat(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        const struct tWAVEFORMATEX *a4)
{
  __int64 v4; // rax
  _QWORD *v7; // rdi
  _QWORD *v8; // r14
  _QWORD *v9; // rcx
  __int64 v10; // rax
  const struct tWAVEFORMATEX **v11; // rbx
  const struct tWAVEFORMATEX **v12; // rsi

  v4 = 296LL;
  if ( a2 != eKeywordDetectorConnector )
    v4 = 272LL;
  v7 = *(_QWORD **)((char *)this + v4);
  v8 = *(_QWORD **)((char *)this + v4 + 8);
  while ( v7 != v8 )
  {
    v9 = (_QWORD *)*v7;
    v10 = *(_QWORD *)*v7 - *(_QWORD *)&a3->Data1;
    if ( !v10 )
      v10 = v9[1] - *(_QWORD *)a3->Data4;
    if ( !v10 )
    {
      v11 = (const struct tWAVEFORMATEX **)v9[5];
      v12 = (const struct tWAVEFORMATEX **)v9[6];
      while ( v11 != v12 )
      {
        if ( (unsigned int)CompareWaveFormat(a4, *v11) )
          return 1;
        ++v11;
      }
    }
    ++v7;
  }
  return 0;
}
