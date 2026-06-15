/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAU_SLEEPSTUDY_BLOCKER@@P6AJPEAU1@@Z$1?SleepstudyHelperDestroyBlocker@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_SLEEPSTUDY_BLOCKER@@@Z @ 0x18000FB34
 * Callers:
 *     ?CreatePowerReferenceSubBlocker@CSleepStudyPowerReferenceManager@@QEAAJPEAVCVADServer@@PEAV?$shared_ptr@VCSleepStudyPowerReference@@@std@@@Z @ 0x18000FDEC (-CreatePowerReferenceSubBlocker@CSleepStudyPowerReferenceManager@@QEAAJPEAVCVADServer@@PEAV-$sha.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_SLEEPSTUDY_BLOCKER@@P6AJPEAU1@@Z$1?SleepstudyHelperDestroyBlocker@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18006F140 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_SLEEPSTUDY_BLOCKER@@P6AJPEAU1@@Z$1-S.c)
 *     ??1CSleepStudyPowerReferenceManager@@QEAA@XZ @ 0x180109BA4 (--1CSleepStudyPowerReferenceManager@@QEAA@XZ.c)
 *     ?Initialize@CSleepStudyPowerReferenceManager@@AEAAJXZ @ 0x18010A090 (-Initialize@CSleepStudyPowerReferenceManager@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<_SLEEPSTUDY_BLOCKER *,long (*)(_SLEEPSTUDY_BLOCKER *),&long SleepstudyHelperDestroyBlocker(_SLEEPSTUDY_BLOCKER *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_BLOCKER *,_SLEEPSTUDY_BLOCKER *,0,std::nullptr_t>>::reset(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // rsi
  DWORD LastError; // ebx

  v2 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    SleepstudyHelperDestroyBlocker(v2);
    SetLastError(LastError);
  }
  *a1 = a2;
}
