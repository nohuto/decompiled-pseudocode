/*
 * XREFs of ??1OnGetArrangementRects@WindowDragInputProviderTelemetry@@QEAA@XZ @ 0x1800EADFC
 * Callers:
 *     ?OnGetArrangementRects@WindowDragInputProvider@@AEAAXAEAU_WINDOW_ARRANGEMENT_INFO@@@Z @ 0x1802739C8 (-OnGetArrangementRects@WindowDragInputProvider@@AEAAXAEAU_WINDOW_ARRANGEMENT_INFO@@@Z.c)
 *     _WindowDragInputProvider::OnGetArrangementRects_::_1_::dtor$0 @ 0x1806F94C7 (_WindowDragInputProvider--OnGetArrangementRects_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800EAE54 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0I.c)
 */

void __fastcall WindowDragInputProviderTelemetry::OnGetArrangementRects::~OnGetArrangementRects(
        WindowDragInputProviderTelemetry::OnGetArrangementRects *this)
{
  *(_QWORD *)this = &WindowDragInputProviderTelemetry::OnGetArrangementRects::`vftable';
  wil::ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(this);
}
