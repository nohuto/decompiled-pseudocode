/*
 * XREFs of ?CreateBridgeToApoAuxInput@@YAJPEAPEAUIBridgeSourceEndpointConsumer@@PEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioMediaType@@IPEAUIAudioProcessingObject@@@Z @ 0x14004A768
 * Callers:
 *     ?CreateBridgeToApo@CBridgeToAPOProcessNode@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@I@Z @ 0x14004A528 (-CreateBridgeToApo@CBridgeToAPOProcessNode@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCBridgeToApoAuxInput@@UIBridgeSourceEndpointConsumer@@AEAPEAUIDeviceGraphObjectCache@@AEAPEAUBRIDGE_STREAM_DESCRIPTOR@@AEAPEAUIAudioProcessingObject@@AEAPEAUIAudioMediaType@@AEAI@Details@WRL@Microsoft@@YAJPEAPEAUIBridgeSourceEndpointConsumer@@AEAPEAUIDeviceGraphObjectCache@@AEAPEAUBRIDGE_STREAM_DESCRIPTOR@@AEAPEAUIAudioProcessingObject@@AEAPEAUIAudioMediaType@@AEAI@Z @ 0x14004A8D4 (--$MakeAndInitialize@VCBridgeToApoAuxInput@@UIBridgeSourceEndpointConsumer@@AEAPEAUIDeviceGraphO.c)
 */

__int64 __fastcall CreateBridgeToApoAuxInput(
        struct IBridgeSourceEndpointConsumer **a1,
        struct IDeviceGraphObjectCache *a2,
        struct BRIDGE_STREAM_DESCRIPTOR *a3,
        struct IAudioMediaType *a4,
        unsigned int a5,
        struct IAudioProcessingObject *a6)
{
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct BRIDGE_STREAM_DESCRIPTOR *v10; // [rsp+50h] [rbp+18h] BYREF
  struct IAudioMediaType *v11; // [rsp+58h] [rbp+20h] BYREF

  v11 = a4;
  v10 = a3;
  *a1 = 0LL;
  v6 = Microsoft::WRL::Details::MakeAndInitialize<CBridgeToApoAuxInput,IBridgeSourceEndpointConsumer,IDeviceGraphObjectCache * &,BRIDGE_STREAM_DESCRIPTOR * &,IAudioProcessingObject * &,IAudioMediaType * &,unsigned int &>(
         (_DWORD)a1,
         (_DWORD)a2,
         (unsigned int)&v10,
         (unsigned int)&a6,
         (__int64)&v11,
         (__int64)&a5);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xBD,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpoint.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
