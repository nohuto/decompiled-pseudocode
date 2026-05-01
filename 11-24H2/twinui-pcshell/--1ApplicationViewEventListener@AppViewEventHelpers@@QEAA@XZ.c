/*
 * XREFs of ??1ApplicationViewEventListener@AppViewEventHelpers@@QEAA@XZ @ 0x1806BFB74
 * Callers:
 *     _AppViewDataSourceAdapterBase::AppViewDataSourceAdapterBase_::_1_::dtor$5 @ 0x1806D58D3 (_AppViewDataSourceAdapterBase--AppViewDataSourceAdapterBase_--_1_--dtor$5.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall AppViewEventHelpers::ApplicationViewEventListener::~ApplicationViewEventListener(__int64 this)
{
  AppViewEventHelpers::EventListener<IApplicationViewCollection,IApplicationViewChangeListener,AppViewEventHelpers::details::ApplicationViewEventRegistration>::~EventListener<IApplicationViewCollection,IApplicationViewChangeListener,AppViewEventHelpers::details::ApplicationViewEventRegistration>(this);
}
