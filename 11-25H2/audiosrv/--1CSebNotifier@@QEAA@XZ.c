/*
 * XREFs of ??1CSebNotifier@@QEAA@XZ @ 0x1801039FC
 * Callers:
 *     ??1CPowerReferenceManager@@QEAA@XZ @ 0x180103914 (--1CPowerReferenceManager@@QEAA@XZ.c)
 *     _CPowerReferenceManager::CPowerReferenceManager_::_1_::dtor$1 @ 0x180164D28 (_CPowerReferenceManager--CPowerReferenceManager_--_1_--dtor$1.c)
 * Callees:
 *     ?PublishSebEvent@CSebNotifier@@AEAAXE@Z @ 0x18006F2B0 (-PublishSebEvent@CSebNotifier@@AEAAXE@Z.c)
 *     ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180077BBC (--1-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     ?CancelDeferredSebReferenceRelease@CSebNotifier@@AEAAXXZ @ 0x18008BB30 (-CancelDeferredSebReferenceRelease@CSebNotifier@@AEAAXXZ.c)
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
