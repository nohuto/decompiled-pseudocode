/*
 * XREFs of ??1PolicyRule@@UEAA@XZ @ 0x18011CF64
 * Callers:
 *     ??_EAvoidEndpointPolicyRule@@UEAAPEAXI@Z @ 0x18011D080 (--_EAvoidEndpointPolicyRule@@UEAAPEAXI@Z.c)
 *     ??_GCommunicationsRemapPolicyRule@@UEAAPEAXI@Z @ 0x18011D0D0 (--_GCommunicationsRemapPolicyRule@@UEAAPEAXI@Z.c)
 *     ??_GPolicyRule@@UEAAPEAXI@Z @ 0x18011D160 (--_GPolicyRule@@UEAAPEAXI@Z.c)
 *     ??_GRemapPolicyRule@@UEAAPEAXI@Z @ 0x18011D1A0 (--_GRemapPolicyRule@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@V?$CComQIPtr@UIPolicyRule@@$1?_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIPolicyRule@@$1?_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s_GUID@@B@2@@ATL@@QEAAXXZ @ 0x1800C84DC (-RemoveAll@-$CAtlList@V-$CComQIPtr@UIPolicyRule@@$1-_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@.c)
 */

void __fastcall PolicyRule::~PolicyRule(PolicyRule *this)
{
  *(_QWORD *)this = &PolicyRule::`vftable';
  ATL::CAtlList<ATL::CComQIPtr<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>,ATL::CComQIPtrElementTraits<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>>::RemoveAll((_QWORD *)this + 2);
  *((_DWORD *)this + 3) = -1073741823;
}
