/*
 * XREFs of ??1PendingShowHideViewData@TabTipAdapter@KeyboardHosting@@QEAA@XZ @ 0x18047BB6C
 * Callers:
 *     _KeyboardHosting::TabTipAdapter::OnInputAppRequestedShow_::_1_::dtor$8 @ 0x1806CC6AA (_KeyboardHosting--TabTipAdapter--OnInputAppRequestedShow_--_1_--dtor$8.c)
 *     _KeyboardHosting::TabTipAdapter::OnInputAppRequestedHide_::_1_::dtor$4 @ 0x1806D15A0 (_KeyboardHosting--TabTipAdapter--OnInputAppRequestedHide_--_1_--dtor$4.c)
 *     _KeyboardHosting::TabTipAdapter::OnPrimaryViewHidingResponse_::_1_::dtor$0 @ 0x1806EDB7B (_KeyboardHosting--TabTipAdapter--OnPrimaryViewHidingResponse_--_1_--dtor$0.c)
 *     _KeyboardHosting::TabTipAdapter::OnPrimaryViewShowingResponse_::_1_::dtor$0 @ 0x1806EDB8D (_KeyboardHosting--TabTipAdapter--OnPrimaryViewShowingResponse_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall KeyboardHosting::TabTipAdapter::PendingShowHideViewData::~PendingShowHideViewData(
        KeyboardHosting::TabTipAdapter::PendingShowHideViewData *this)
{
  std::vector<Geometry::CRect>::_Tidy((__int64)this + 104);
}
