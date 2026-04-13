/*
 * XREFs of ??1ThreadErrorContext@wil@@QEAA@XZ @ 0x18002AA2C
 * Callers:
 *     _ContentManagement::AppManager::UninstallApp_::_1_::dtor$0 @ 0x1800B7F1D (_ContentManagement--AppManager--UninstallApp_--_1_--dtor$0.c)
 *     _CreativeFramework::CommonHelper::RegisterBackgroundTaskWithWnfTrigger_::_1_::dtor$1 @ 0x1800BCDF6 (_CreativeFramework--CommonHelper--RegisterBackgroundTaskWithWnfTrigger_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::ThreadErrorContext::~ThreadErrorContext(wil::ThreadErrorContext *this)
{
  if ( *(_QWORD *)this )
    *(_DWORD *)(*(_QWORD *)this + 16LL) = *((_DWORD *)this + 3);
}
