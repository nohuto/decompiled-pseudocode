/*
 * XREFs of ?ConfirmDeviceFormat@EffectPack@@AEAAJPEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x1800402BC
 * Callers:
 *     ?DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18003ED58 (-DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?SetDeviceFormatSwAudioEngine@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18003FDC4 (-SetDeviceFormatSwAudioEngine@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000.c)
 *     ?ResetDeviceFormat@EffectPack@@QEAAJXZ @ 0x18012E2DC (-ResetDeviceFormat@EffectPack@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DeviceInUse@AEError@@YA_NJ@Z @ 0x180040350 (-DeviceInUse@AEError@@YA_NJ@Z.c)
 *     ?ConfirmDeviceCanRenderFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@U_GUID@@AEAVCAudioSignalProcessingModeMap@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x180040390 (-ConfirmDeviceCanRenderFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@U_GUID@@AEAVCAud.c)
 */

__int64 __fastcall EffectPack::ConfirmDeviceFormat(
        CEndpointCharacteristics **this,
        const struct tWAVEFORMATEX *a2,
        struct _GUID *a3,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a4,
        int a5)
{
  CEndpointCharacteristics *v5; // rax
  CEndpointCharacteristics *v6; // rcx
  unsigned int CanRenderFormat; // eax
  int v8; // edx
  int v9; // ecx
  int v10; // ebx
  struct _GUID v12; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( (int)a4 >= (unsigned __int64)this[236] )
  {
    _o_terminate(this, a2);
    __debugbreak();
    JUMPOUT(0x18004034ALL);
  }
  v5 = this[237];
  v6 = this[198];
  v12 = *a3;
  CanRenderFormat = CEndpointCharacteristics::ConfirmDeviceCanRenderFormat(
                      v6,
                      a2,
                      &v12,
                      (CEndpointCharacteristics *)((char *)v5 + 24 * a4),
                      a4,
                      a5);
  v10 = 0;
  if ( !AEError::DeviceInUse((AEError *)CanRenderFormat, v8) )
    v10 = v9;
  if ( v10 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2092,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v10);
  return (unsigned int)v10;
}
