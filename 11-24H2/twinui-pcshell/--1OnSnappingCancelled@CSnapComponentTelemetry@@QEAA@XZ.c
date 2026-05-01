/*
 * XREFs of ??1OnSnappingCancelled@CSnapComponentTelemetry@@QEAA@XZ @ 0x1801204B4
 * Callers:
 *     ?OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAK2PEAUtagRECT@@3@Z @ 0x180270510 (-OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAK2P.c)
 *     ??1CShellSnapComponent@@UEAA@XZ @ 0x18059CE04 (--1CShellSnapComponent@@UEAA@XZ.c)
 *     _CShellSnapComponent::CShellSnapComponent_::_1_::dtor$33 @ 0x1806F6828 (_CShellSnapComponent--CShellSnapComponent_--_1_--dtor$33.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801204E0 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Par.c)
 */

void __fastcall CSnapComponentTelemetry::OnSnappingCancelled::~OnSnappingCancelled(
        CSnapComponentTelemetry::OnSnappingCancelled *this)
{
  *(_QWORD *)this = &CSnapComponentTelemetry::OnSnappingCancelled::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
