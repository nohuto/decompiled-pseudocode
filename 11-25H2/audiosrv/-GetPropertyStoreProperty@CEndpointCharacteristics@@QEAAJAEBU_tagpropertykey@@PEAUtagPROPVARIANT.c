/*
 * XREFs of ?GetPropertyStoreProperty@CEndpointCharacteristics@@QEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18012C770
 * Callers:
 *     ?GetProcessingPeriod@EffectPack@@QEAAJHPEA_J0@Z @ 0x180030844 (-GetProcessingPeriod@EffectPack@@QEAAJHPEA_J0@Z.c)
 *     ?SetRenderEndpoint@CBtAudioResourceManagerBase@@UEAAJPEAVCEndpointCharacteristics@@@Z @ 0x1800DD020 (-SetRenderEndpoint@CBtAudioResourceManagerBase@@UEAAJPEAVCEndpointCharacteristics@@@Z.c)
 *     _lambda_82b4d950fa5d9eeb82537f57bcb68a2f_::operator() @ 0x1800DFF80 (_lambda_82b4d950fa5d9eeb82537f57bcb68a2f_--operator().c)
 *     ?GetKsControlForFlow@CBtLeAudioResourceManager@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAPEAUIKsControl@@@Z @ 0x1800E47A4 (-GetKsControlForFlow@CBtLeAudioResourceManager@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0.c)
 *     _lambda_74c162fae599aeca3eeb692ee18148b4_::operator() @ 0x1800F699C (_lambda_74c162fae599aeca3eeb692ee18148b4_--operator().c)
 *     ?GetCompatibleMulticastProvider@CMulticastSessionManager@@AEAAJAEAV?$vector@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUIMulticastProvider@@@Z @ 0x1800FCA14 (-GetCompatibleMulticastProvider@CMulticastSessionManager@@AEAAJAEAV-$vector@V-$com_ptr_t@VCEndpo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CEndpointCharacteristics::GetPropertyStoreProperty(
        CEndpointCharacteristics *this,
        const struct _tagpropertykey *a2,
        struct tagPROPVARIANT *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, const struct _tagpropertykey *, struct tagPROPVARIANT *))(**((_QWORD **)this + 9) + 40LL))(
           *((_QWORD *)this + 9),
           a2,
           a3);
}
