/*
 * XREFs of ??1CreateSnapId@CSnapComponentTelemetry@@QEAA@XZ @ 0x18059D05C
 * Callers:
 *     ?CreateSnapId@CShellSnapComponent@@UEAAJURect@Foundation@Windows@@PEAH@Z @ 0x18059DE30 (-CreateSnapId@CShellSnapComponent@@UEAAJURect@Foundation@Windows@@PEAH@Z.c)
 *     _CShellSnapComponent::CreateSnapId_::_1_::dtor$0 @ 0x1806F6997 (_CShellSnapComponent--CreateSnapId_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800EAE54 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0I.c)
 */

void __fastcall CSnapComponentTelemetry::CreateSnapId::~CreateSnapId(CSnapComponentTelemetry::CreateSnapId *this)
{
  *(_QWORD *)this = &CSnapComponentTelemetry::CreateSnapId::`vftable';
  wil::ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
