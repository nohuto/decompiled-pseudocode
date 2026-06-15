/*
 * XREFs of ??1CSebNotifier@@QEAA@XZ @ 0x180109B4C
 * Callers:
 *     ??1CPowerReferenceManager@@QEAA@XZ @ 0x180109A64 (--1CPowerReferenceManager@@QEAA@XZ.c)
 *     _CPowerReferenceManager::CPowerReferenceManager_::_1_::dtor$1 @ 0x18016E233 (_CPowerReferenceManager--CPowerReferenceManager_--_1_--dtor$1.c)
 * Callees:
 *     ?PublishSebEvent@CSebNotifier@@AEAAXE@Z @ 0x1800605B0 (-PublishSebEvent@CSebNotifier@@AEAAXE@Z.c)
 *     ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180067A5C (--1-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     ?CancelDeferredSebReferenceRelease@CSebNotifier@@AEAAXXZ @ 0x18007F7C0 (-CancelDeferredSebReferenceRelease@CSebNotifier@@AEAAXXZ.c)
 */

void __fastcall CSebNotifier::~CSebNotifier(CSebNotifier *this)
{
  if ( *((_QWORD *)this + 7) )
  {
    CSebNotifier::CancelDeferredSebReferenceRelease(this);
    CloseThreadpoolWait(*((PTP_WAIT *)this + 7));
    *((_QWORD *)this + 7) = 0LL;
  }
  CSebNotifier::PublishSebEvent(this, 0);
  wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)this + 6);
  _Mtx_destroy_in_situ((CSebNotifier *)((char *)this + 8));
}
