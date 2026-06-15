/*
 * XREFs of ??1CSleepStudyPowerReferenceManager@@QEAA@XZ @ 0x180109BA4
 * Callers:
 *     ??1CPowerReferenceManager@@QEAA@XZ @ 0x180109A64 (--1CPowerReferenceManager@@QEAA@XZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_SLEEPSTUDY_BLOCKER@@P6AJPEAU1@@Z$1?SleepstudyHelperDestroyBlocker@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_SLEEPSTUDY_BLOCKER@@@Z @ 0x18000FB34 (-reset@-$unique_storage@U-$resource_policy@PEAU_SLEEPSTUDY_BLOCKER@@P6AJPEAU1@@Z$1-SleepstudyHel.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_SLEEPSTUDY_BLOCKER@@P6AJPEAU1@@Z$1?SleepstudyHelperDestroyBlocker@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18006BD50 (--1-$unique_storage@U-$resource_policy@PEAU_SLEEPSTUDY_BLOCKER@@P6AJPEAU1@@Z$1-SleepstudyHelperD.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_SLEEPSTUDY_LIBRARY@@P6AJPEAU1@@Z$1?SleepstudyHelperDestroyLibrary@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_SLEEPSTUDY_LIBRARY@@@Z @ 0x18010A610 (-reset@-$unique_storage@U-$resource_policy@PEAU_SLEEPSTUDY_LIBRARY@@P6AJPEAU1@@Z$1-SleepstudyHel.c)
 */

void __fastcall CSleepStudyPowerReferenceManager::~CSleepStudyPowerReferenceManager(
        CSleepStudyPowerReferenceManager *this)
{
  wil::details::unique_storage<wil::details::resource_policy<_SLEEPSTUDY_BLOCKER *,long (*)(_SLEEPSTUDY_BLOCKER *),&long SleepstudyHelperDestroyBlocker(_SLEEPSTUDY_BLOCKER *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_BLOCKER *,_SLEEPSTUDY_BLOCKER *,0,std::nullptr_t>>::reset(
    (__int64 *)this + 1,
    0LL);
  wil::details::unique_storage<wil::details::resource_policy<_SLEEPSTUDY_LIBRARY *,long (*)(_SLEEPSTUDY_LIBRARY *),&long SleepstudyHelperDestroyLibrary(_SLEEPSTUDY_LIBRARY *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_LIBRARY *,_SLEEPSTUDY_LIBRARY *,0,std::nullptr_t>>::reset(
    this,
    0LL);
  wil::details::unique_storage<wil::details::resource_policy<_SLEEPSTUDY_BLOCKER *,long (*)(_SLEEPSTUDY_BLOCKER *),&long SleepstudyHelperDestroyBlocker(_SLEEPSTUDY_BLOCKER *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_BLOCKER *,_SLEEPSTUDY_BLOCKER *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_SLEEPSTUDY_BLOCKER *,long (*)(_SLEEPSTUDY_BLOCKER *),&long SleepstudyHelperDestroyBlocker(_SLEEPSTUDY_BLOCKER *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_BLOCKER *,_SLEEPSTUDY_BLOCKER *,0,std::nullptr_t>>((__int64 *)this + 1);
  wil::details::unique_storage<wil::details::resource_policy<_SLEEPSTUDY_LIBRARY *,long (*)(_SLEEPSTUDY_LIBRARY *),&long SleepstudyHelperDestroyLibrary(_SLEEPSTUDY_LIBRARY *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_LIBRARY *,_SLEEPSTUDY_LIBRARY *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_SLEEPSTUDY_LIBRARY *,long (*)(_SLEEPSTUDY_LIBRARY *),&long SleepstudyHelperDestroyLibrary(_SLEEPSTUDY_LIBRARY *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_LIBRARY *,_SLEEPSTUDY_LIBRARY *,0,std::nullptr_t>>(this);
}
