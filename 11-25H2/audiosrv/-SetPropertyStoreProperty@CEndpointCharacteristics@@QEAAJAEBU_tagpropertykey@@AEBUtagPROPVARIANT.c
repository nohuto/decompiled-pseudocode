/*
 * XREFs of ?SetPropertyStoreProperty@CEndpointCharacteristics@@QEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x1800A5D30
 * Callers:
 *     ?CacheMixFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@_NPEBUtWAVEFORMATEX@@@Z @ 0x18007BD28 (-CacheMixFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000.c)
 *     ?SetProcessingPeriod@CEndpointCharacteristics@@QEAAJAEB_J@Z @ 0x1800869E4 (-SetProcessingPeriod@CEndpointCharacteristics@@QEAAJAEB_J@Z.c)
 *     _lambda_74c162fae599aeca3eeb692ee18148b4_::operator() @ 0x1800F699C (_lambda_74c162fae599aeca3eeb692ee18148b4_--operator().c)
 *     ?CacheDevicePipeFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAUtWAVEFORMATEX@@@Z @ 0x18012AC2C (-CacheDevicePipeFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_00.c)
 *     ?CacheStreamGroupFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAUtWAVEFORMATEX@@@Z @ 0x18012AD2C (-CacheStreamGroupFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?SetDeviceFormatHwAudioEngine@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18012F164 (-SetDeviceFormatHwAudioEngine@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CEndpointCharacteristics::SetPropertyStoreProperty(
        CEndpointCharacteristics *this,
        const struct _tagpropertykey *a2,
        const struct tagPROPVARIANT *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, const struct _tagpropertykey *, const struct tagPROPVARIANT *))(**((_QWORD **)this + 9) + 48LL))(
           *((_QWORD *)this + 9),
           a2,
           a3);
}
