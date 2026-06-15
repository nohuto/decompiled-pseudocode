/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x180064208
 * Callers:
 *     ?DisconnectFromStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x180063AF0 (-DisconnectFromStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?ConnectStreamGroupToSaDevice@CDeviceGraphManager@@UEAAJPEAUIStreamGroupProxy@@PEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@PEAUSystemAudioStream@@@Z @ 0x180063E40 (-ConnectStreamGroupToSaDevice@CDeviceGraphManager@@UEAAJPEAUIStreamGroupProxy@@PEAUISaDeviceProx.c)
 *     ?ConnectToStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x180063EF0 (-ConnectToStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?DeleteAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAXXZ @ 0x1800A27B0 (-DeleteAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAXXZ.c)
 *     _lambda_0573610836bdf3032c5c5c6e5c762a50_::operator() @ 0x1800B759C (_lambda_0573610836bdf3032c5c5c6e5c762a50_--operator().c)
 *     _lambda_62f236fd636d2d8c09667a35590236bb_::operator() @ 0x1800B77C4 (_lambda_62f236fd636d2d8c09667a35590236bb_--operator().c)
 *     ?AddAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAJU_GUID@@_JPEAUIBridgeStreamInstanceProxy@@PEBG@Z @ 0x1800EF8A0 (-AddAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAJU_GUID@@_JPEAUIBridgeStreamInstanceProxy@.c)
 *     ?ConnectToBridgeStream@CSharedStreamGroupProxy@@UEAAJPEAUIBridgeStreamInstanceProxy@@@Z @ 0x1800EFC70 (-ConnectToBridgeStream@CSharedStreamGroupProxy@@UEAAJPEAUIBridgeStreamInstanceProxy@@@Z.c)
 *     ?DestroyStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x1800F0A30 (-DestroyStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?DisconnectFromBridgeStream@CSharedStreamGroupProxy@@UEAAJPEAUIBridgeStreamInstanceProxy@@@Z @ 0x1800F0B70 (-DisconnectFromBridgeStream@CSharedStreamGroupProxy@@UEAAJPEAUIBridgeStreamInstanceProxy@@@Z.c)
 *     ?DisconnectStreamGroupFromSaDevice@CDeviceGraphManager@@UEAAJPEAUIStreamGroupProxy@@PEAUISaDeviceProxy@@@Z @ 0x1800F10B0 (-DisconnectStreamGroupFromSaDevice@CDeviceGraphManager@@UEAAJPEAUIStreamGroupProxy@@PEAUISaDevic.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  _DWORD v7[2]; // [rsp+38h] [rbp-21h] BYREF
  __int64 v8; // [rsp+40h] [rbp-19h]
  unsigned __int16 *v9; // [rsp+50h] [rbp-9h] BYREF
  int v10; // [rsp+58h] [rbp-1h]
  int v11; // [rsp+5Ch] [rbp+3h]
  unsigned __int8 *v12; // [rsp+60h] [rbp+7h]
  int v13; // [rsp+68h] [rbp+Fh]
  int v14; // [rsp+6Ch] [rbp+13h]
  __int64 v15; // [rsp+70h] [rbp+17h]
  int v16; // [rsp+78h] [rbp+1Fh]
  int v17; // [rsp+7Ch] [rbp+23h]
  __int64 v18; // [rsp+80h] [rbp+27h]
  int v19; // [rsp+88h] [rbp+2Fh]
  int v20; // [rsp+8Ch] [rbp+33h]

  v20 = 0;
  v17 = 0;
  v18 = a6;
  v15 = a5;
  v7[0] = *a2 << 24;
  v7[1] = *(unsigned __int16 *)(a2 + 1);
  v8 = *(_QWORD *)(a2 + 3);
  v9 = *(unsigned __int16 **)(a1 + 8);
  v19 = 8;
  v16 = 8;
  v10 = *v9;
  v13 = *(unsigned __int16 *)(a2 + 11);
  v12 = a2 + 11;
  v11 = 2;
  v14 = 1;
  return EtwEventWriteTransfer(*(_QWORD *)(a1 + 32), v7, 0LL, 0LL, 4, &v9);
}
