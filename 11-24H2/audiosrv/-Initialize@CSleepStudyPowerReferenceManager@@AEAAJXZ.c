/*
 * XREFs of ?Initialize@CSleepStudyPowerReferenceManager@@AEAAJXZ @ 0x18010A090
 * Callers:
 *     ??0CPowerReferenceManager@@QEAA@XZ @ 0x1800CB574 (--0CPowerReferenceManager@@QEAA@XZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_SLEEPSTUDY_BLOCKER@@P6AJPEAU1@@Z$1?SleepstudyHelperDestroyBlocker@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_SLEEPSTUDY_BLOCKER@@@Z @ 0x18000FB34 (-reset@-$unique_storage@U-$resource_policy@PEAU_SLEEPSTUDY_BLOCKER@@P6AJPEAU1@@Z$1-SleepstudyHel.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_SLEEPSTUDY_BLOCKER@@P6AJPEAU1@@Z$1?SleepstudyHelperDestroyBlocker@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18006BD50 (--1-$unique_storage@U-$resource_policy@PEAU_SLEEPSTUDY_BLOCKER@@P6AJPEAU1@@Z$1-SleepstudyHelperD.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_SLEEPSTUDY_BLOCKER_BUILDER@@P6AJPEAU1@@Z$1?SleepstudyHelperDestroyBlockerBuilder@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18006BF20 (--1-$unique_storage@U-$resource_policy@PEAU_SLEEPSTUDY_BLOCKER_BUILDER@@P6AJPEAU1@@Z$1-Sleepstud.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_SLEEPSTUDY_BLOCKER@@P6AJPEAU1@@Z$1?SleepstudyHelperDestroyBlocker@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18006F140 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_SLEEPSTUDY_BLOCKER@@P6AJPEAU1@@Z$1-S.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18009E234 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_SLEEPSTUDY_LIBRARY@@P6AJPEAU1@@Z$1?SleepstudyHelperDestroyLibrary@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801099D8 (--1-$unique_storage@U-$resource_policy@PEAU_SLEEPSTUDY_LIBRARY@@P6AJPEAU1@@Z$1-SleepstudyHelperD.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_SLEEPSTUDY_LIBRARY@@P6AJPEAU1@@Z$1?SleepstudyHelperDestroyLibrary@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_SLEEPSTUDY_LIBRARY@@@Z @ 0x18010A610 (-reset@-$unique_storage@U-$resource_policy@PEAU_SLEEPSTUDY_LIBRARY@@P6AJPEAU1@@Z$1-SleepstudyHel.c)
 */

__int64 __fastcall CSleepStudyPowerReferenceManager::Initialize(CSleepStudyPowerReferenceManager *this)
{
  unsigned int v2; // ebx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  __int64 v7; // [rsp+30h] [rbp-9h] BYREF
  __int64 v8; // [rsp+38h] [rbp-1h] BYREF
  __int64 v9; // [rsp+40h] [rbp+7h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp+Fh] BYREF
  _DWORD v11[4]; // [rsp+58h] [rbp+1Fh] BYREF
  GUID v12; // [rsp+68h] [rbp+2Fh] BYREF
  GUID v13; // [rsp+78h] [rbp+3Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+5Fh]

  v11[0] = 1;
  v2 = 0;
  v11[1] = 7369325;
  v7 = 0LL;
  v11[2] = 2;
  wil::details::unique_storage<wil::details::resource_policy<_SLEEPSTUDY_LIBRARY *,long (*)(_SLEEPSTUDY_LIBRARY *),&long SleepstudyHelperDestroyLibrary(_SLEEPSTUDY_LIBRARY *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_LIBRARY *,_SLEEPSTUDY_LIBRARY *,0,std::nullptr_t>>::reset(
    &v7,
    0LL);
  v3 = SleepstudyHelperCreateLibraryEx(v11, &v7);
  if ( v3 != -1073741637 )
  {
    if ( v3 >= 0 )
    {
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, L"Audio Streams");
      v8 = 0LL;
      v13 = GUID_SPR_BLOCKER_GROUP_AUDIO_ACTIVITY;
      v12 = GUID_AUDIOSRV_VIRTUAL_POWER_REFERENCE_BLOCKER;
      v4 = SleepstudyHelperCreateBlockerFromGuid(v7, &v13, &v12, &DestinationString);
      if ( v4 >= 0 )
      {
        v9 = 0LL;
        wil::details::unique_storage<wil::details::resource_policy<_SLEEPSTUDY_BLOCKER *,long (*)(_SLEEPSTUDY_BLOCKER *),&long SleepstudyHelperDestroyBlocker(_SLEEPSTUDY_BLOCKER *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_BLOCKER *,_SLEEPSTUDY_BLOCKER *,0,std::nullptr_t>>::reset(
          &v9,
          0LL);
        v5 = SleepstudyHelperBuildBlocker(v8, &v9);
        if ( v5 >= 0 )
        {
          v8 = 0LL;
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_SLEEPSTUDY_BLOCKER *,long (*)(_SLEEPSTUDY_BLOCKER *),&long SleepstudyHelperDestroyBlocker(_SLEEPSTUDY_BLOCKER *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_BLOCKER *,_SLEEPSTUDY_BLOCKER *,0,std::nullptr_t>>>::operator=(
            (__int64 *)this + 1,
            &v9);
          if ( this != (CSleepStudyPowerReferenceManager *)&v7 )
          {
            wil::details::unique_storage<wil::details::resource_policy<_SLEEPSTUDY_LIBRARY *,long (*)(_SLEEPSTUDY_LIBRARY *),&long SleepstudyHelperDestroyLibrary(_SLEEPSTUDY_LIBRARY *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_LIBRARY *,_SLEEPSTUDY_LIBRARY *,0,std::nullptr_t>>::reset(
              this,
              v7);
            v7 = 0LL;
          }
          *((GUID *)this + 1) = v12;
        }
        else
        {
          v2 = wil::details::in1diag3::Return_NtStatus(
                 retaddr,
                 (void *)0xD4,
                 (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
                 (const char *)(unsigned int)v5);
        }
        wil::details::unique_storage<wil::details::resource_policy<_SLEEPSTUDY_BLOCKER *,long (*)(_SLEEPSTUDY_BLOCKER *),&long SleepstudyHelperDestroyBlocker(_SLEEPSTUDY_BLOCKER *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_BLOCKER *,_SLEEPSTUDY_BLOCKER *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_SLEEPSTUDY_BLOCKER *,long (*)(_SLEEPSTUDY_BLOCKER *),&long SleepstudyHelperDestroyBlocker(_SLEEPSTUDY_BLOCKER *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_BLOCKER *,_SLEEPSTUDY_BLOCKER *,0,std::nullptr_t>>(&v9);
      }
      else
      {
        v2 = wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)0xD1,
               (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
               (const char *)(unsigned int)v4);
      }
      wil::details::unique_storage<wil::details::resource_policy<_SLEEPSTUDY_BLOCKER_BUILDER *,long (*)(_SLEEPSTUDY_BLOCKER_BUILDER *),&long SleepstudyHelperDestroyBlockerBuilder(_SLEEPSTUDY_BLOCKER_BUILDER *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_BLOCKER_BUILDER *,_SLEEPSTUDY_BLOCKER_BUILDER *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_SLEEPSTUDY_BLOCKER_BUILDER *,long (*)(_SLEEPSTUDY_BLOCKER_BUILDER *),&long SleepstudyHelperDestroyBlockerBuilder(_SLEEPSTUDY_BLOCKER_BUILDER *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_BLOCKER_BUILDER *,_SLEEPSTUDY_BLOCKER_BUILDER *,0,std::nullptr_t>>(&v8);
    }
    else
    {
      v2 = wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)0xBE,
             (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
             (const char *)(unsigned int)v3);
    }
  }
  wil::details::unique_storage<wil::details::resource_policy<_SLEEPSTUDY_LIBRARY *,long (*)(_SLEEPSTUDY_LIBRARY *),&long SleepstudyHelperDestroyLibrary(_SLEEPSTUDY_LIBRARY *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_LIBRARY *,_SLEEPSTUDY_LIBRARY *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_SLEEPSTUDY_LIBRARY *,long (*)(_SLEEPSTUDY_LIBRARY *),&long SleepstudyHelperDestroyLibrary(_SLEEPSTUDY_LIBRARY *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_LIBRARY *,_SLEEPSTUDY_LIBRARY *,0,std::nullptr_t>>(&v7);
  return v2;
}
