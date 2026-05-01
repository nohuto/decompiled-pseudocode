/*
 * XREFs of ??1GamingApplicationViewCollection@@QEAA@XZ @ 0x1802D0C94
 * Callers:
 *     _GamingPosturePositioner::GamingPosturePositioner_::_1_::dtor$18 @ 0x1806F0E41 (_GamingPosturePositioner--GamingPosturePositioner_--_1_--dtor$18.c)
 *     _GamingPosturePositioner::GamingPosturePositioner_::_1_::dtor$19 @ 0x1806F0E5A (_GamingPosturePositioner--GamingPosturePositioner_--_1_--dtor$19.c)
 *     _GamingPosturePositioner::GetSecondaryView_::_1_::dtor$1 @ 0x1806F1475 (_GamingPosturePositioner--GetSecondaryView_--_1_--dtor$1.c)
 *     _GamingPosturePositioner::TryGetTopTwoApplicationViews_::_1_::dtor$0 @ 0x1806F1BA1 (_GamingPosturePositioner--TryGetTopTwoApplicationViews_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall GamingApplicationViewCollection::~GamingApplicationViewCollection(__int64 this)
{
  std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::_Tidy(this);
}
