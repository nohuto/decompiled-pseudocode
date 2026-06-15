/*
 * XREFs of ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x140007BE8
 * Callers:
 *     ?GetDevicePipeFormat@CAudioDeviceGraph@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x140002D30 (-GetDevicePipeFormat@CAudioDeviceGraph@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?IsAudioFormatSupportedRemote@CAPOWrapperSrv@@UEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0009_0001@@PEBUtWAVEFORMATEX@@1PEAPEAU3@@Z @ 0x140006850 (-IsAudioFormatSupportedRemote@CAPOWrapperSrv@@UEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_00.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x140010720 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x140011698 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@PEAUIAudioGraphCallback@@@Z @ 0x140026610 (-Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@PEAUIAudioGraphCallback@@@Z.c)
 *     ?RuntimeClassInitialize@CBridgeToApoAuxInput@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUIAudioMediaType@@I@Z @ 0x140032CF4 (-RuntimeClassInitialize@CBridgeToApoAuxInput@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREA.c)
 *     ?Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@@Z @ 0x140042184 (-Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMA.c)
 *     ?GetInputFormat@CSubmixImpl@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x140045B30 (-GetInputFormat@CSubmixImpl@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?GetFormatRemote@CAPOWrapperSrv@@UEAAJIPEAPEAUtWAVEFORMATEX@@@Z @ 0x140063BC0 (-GetFormatRemote@CAPOWrapperSrv@@UEAAJIPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?GetPreferredInputFormat@CAPOWrapperSrv@@UEAAJPEAUtWAVEFORMATEX@@PEAPEAU2@@Z @ 0x140063E70 (-GetPreferredInputFormat@CAPOWrapperSrv@@UEAAJPEAUtWAVEFORMATEX@@PEAPEAU2@@Z.c)
 *     ?GetPreferredOutputFormat@CAPOWrapperSrv@@UEAAJPEAUtWAVEFORMATEX@@PEAPEAU2@@Z @ 0x1400640A0 (-GetPreferredOutputFormat@CAPOWrapperSrv@@UEAAJPEAUtWAVEFORMATEX@@PEAPEAU2@@Z.c)
 *     ?GetFormat@CAudioDeviceGraph@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z @ 0x140064A00 (-GetFormat@CAudioDeviceGraph@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?GetFrameFormat@CBridgeSourceEndpoint@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x1400676D0 (-GetFrameFormat@CBridgeSourceEndpoint@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?RuntimeClassInitialize@CBridgeSourceEndpoint@@QEAAJPEAUIDeviceGraphObjectCache@@_JPEAUIAudioMediaType@@I@Z @ 0x140067970 (-RuntimeClassInitialize@CBridgeSourceEndpoint@@QEAAJPEAUIDeviceGraphObjectCache@@_JPEAUIAudioMed.c)
 *     ?GetFrameFormat@?$CCrossProcessBaseEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x140084040 (-GetFrameFormat@-$CCrossProcessBaseEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UCon.c)
 *     ?GetFrameFormat@?$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x1400840A0 (-GetFrameFormat@-$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UCon.c)
 *     ?GetFrameFormat@CSpatialCrossProcessBaseEndpoint@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x14008E530 (-GetFrameFormat@CSpatialCrossProcessBaseEndpoint@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     memcpy_0 @ 0x14005B571 (memcpy_0.c)
 */

__int64 __fastcall CloneWaveFormat(const struct tWAVEFORMATEX *Src, struct tWAVEFORMATEX **a2)
{
  __int64 cbSize; // rsi
  struct tWAVEFORMATEX *v5; // rax
  unsigned int v6; // ebx
  struct tWAVEFORMATEX *v7; // rdi
  __int64 result; // rax

  cbSize = Src->cbSize;
  v5 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(cbSize + 18);
  v6 = 0;
  v7 = v5;
  if ( v5 )
    memcpy_0(v5, Src, cbSize + 18);
  else
    v6 = -2147024882;
  result = v6;
  *a2 = v7;
  return result;
}
