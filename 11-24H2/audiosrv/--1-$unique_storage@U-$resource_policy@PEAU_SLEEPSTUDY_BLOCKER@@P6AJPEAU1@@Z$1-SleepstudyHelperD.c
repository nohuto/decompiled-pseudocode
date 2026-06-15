/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAU_SLEEPSTUDY_BLOCKER@@P6AJPEAU1@@Z$1?SleepstudyHelperDestroyBlocker@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18006BD50
 * Callers:
 *     ?CreatePowerReferenceSubBlocker@CSleepStudyPowerReferenceManager@@QEAAJPEAVCVADServer@@PEAV?$shared_ptr@VCSleepStudyPowerReference@@@std@@@Z @ 0x18000FDEC (-CreatePowerReferenceSubBlocker@CSleepStudyPowerReferenceManager@@QEAAJPEAVCVADServer@@PEAV-$sha.c)
 *     ??1CSleepStudyPowerReference@@QEAA@XZ @ 0x1800685C4 (--1CSleepStudyPowerReference@@QEAA@XZ.c)
 *     ??1CSleepStudyPowerReferenceManager@@QEAA@XZ @ 0x180109BA4 (--1CSleepStudyPowerReferenceManager@@QEAA@XZ.c)
 *     ?Initialize@CSleepStudyPowerReferenceManager@@AEAAJXZ @ 0x18010A090 (-Initialize@CSleepStudyPowerReferenceManager@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::unique_storage<wil::details::resource_policy<_SLEEPSTUDY_BLOCKER *,long (*)(_SLEEPSTUDY_BLOCKER *),&long SleepstudyHelperDestroyBlocker(_SLEEPSTUDY_BLOCKER *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_BLOCKER *,_SLEEPSTUDY_BLOCKER *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_SLEEPSTUDY_BLOCKER *,long (*)(_SLEEPSTUDY_BLOCKER *),&long SleepstudyHelperDestroyBlocker(_SLEEPSTUDY_BLOCKER *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_BLOCKER *,_SLEEPSTUDY_BLOCKER *,0,std::nullptr_t>>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return SleepstudyHelperDestroyBlocker(v1);
  return result;
}
