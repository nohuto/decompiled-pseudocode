/*
 * XREFs of ??1USB4_HOSTROUTER_MGR@@QEAA@XZ @ 0x140270304
 * Callers:
 *     ?DestroyStaticUSB4Class@MONITOR_MGR@@SAXXZ @ 0x14026C0A0 (-DestroyStaticUSB4Class@MONITOR_MGR@@SAXXZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?IoUnregisterPlugPlayNotification@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x14005C5E0 (-reset@-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-IoUnregisterPlugPlayNotification@@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?IoUnregisterPlugPlayNotification@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14005C7C8 (--1-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-IoUnregisterPlugPlayNotification@@YAJ0.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x14005DA48 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??1USB4_POWERON_WORK_QUEUE@@QEAA@XZ @ 0x14027033C (--1USB4_POWERON_WORK_QUEUE@@QEAA@XZ.c)
 */

void __fastcall USB4_HOSTROUTER_MGR::~USB4_HOSTROUTER_MGR(USB4_HOSTROUTER_MGR *this)
{
  wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long IoUnregisterPlugPlayNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    (__int64 *)this,
    0LL);
  USB4_POWERON_WORK_QUEUE::~USB4_POWERON_WORK_QUEUE((USB4_HOSTROUTER_MGR *)((char *)this + 72));
  DXGFASTMUTEX::~DXGFASTMUTEX((USB4_HOSTROUTER_MGR *)((char *)this + 8));
  wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long IoUnregisterPlugPlayNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long IoUnregisterPlugPlayNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((__int64 *)this);
}
