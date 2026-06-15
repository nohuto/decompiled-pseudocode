/*
 * XREFs of ?CreatePowerReferenceSubBlocker@CSleepStudyPowerReferenceManager@@QEAAJPEAVCVADServer@@PEAV?$shared_ptr@VCSleepStudyPowerReference@@@std@@@Z @ 0x18000FDEC
 * Callers:
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x180010DC4 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_SLEEPSTUDY_BLOCKER@@P6AJPEAU1@@Z$1?SleepstudyHelperDestroyBlocker@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_SLEEPSTUDY_BLOCKER@@@Z @ 0x18000FB34 (-reset@-$unique_storage@U-$resource_policy@PEAU_SLEEPSTUDY_BLOCKER@@P6AJPEAU1@@Z$1-SleepstudyHel.c)
 *     ??$make_shared@VCSleepStudyPowerReference@@$$V@std@@YA?AV?$shared_ptr@VCSleepStudyPowerReference@@@0@XZ @ 0x18000FBA0 (--$make_shared@VCSleepStudyPowerReference@@$$V@std@@YA-AV-$shared_ptr@VCSleepStudyPowerReference.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011640 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetClientFriendlyName@CAudioStream@@QEAAPEBGXZ @ 0x18002491C (-GetClientFriendlyName@CAudioStream@@QEAAPEBGXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_SLEEPSTUDY_BLOCKER@@P6AJPEAU1@@Z$1?SleepstudyHelperDestroyBlocker@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18006BD50 (--1-$unique_storage@U-$resource_policy@PEAU_SLEEPSTUDY_BLOCKER@@P6AJPEAU1@@Z$1-SleepstudyHelperD.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_SLEEPSTUDY_BLOCKER_BUILDER@@P6AJPEAU1@@Z$1?SleepstudyHelperDestroyBlockerBuilder@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18006BF20 (--1-$unique_storage@U-$resource_policy@PEAU_SLEEPSTUDY_BLOCKER_BUILDER@@P6AJPEAU1@@Z$1-Sleepstud.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18009E234 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 */

__int64 __fastcall CSleepStudyPowerReferenceManager::CreatePowerReferenceSubBlocker(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  const WCHAR *ClientFriendlyName; // rax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  __int64 *v11; // rdi
  std::_Ref_count_base *v12; // rbx
  std::_Ref_count_base *v13; // rcx
  int active; // eax
  __int64 result; // rax
  unsigned int v16; // ebx
  unsigned int v17; // ebx
  unsigned int v18; // edi
  __int64 v19; // [rsp+30h] [rbp-68h] BYREF
  __int64 v20; // [rsp+38h] [rbp-60h] BYREF
  __int64 *v21; // [rsp+40h] [rbp-58h] BYREF
  std::_Ref_count_base *v22; // [rsp+48h] [rbp-50h]
  _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-48h] BYREF
  __int128 v24; // [rsp+60h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  try
  {
    if ( !a1[1] || !*a1 )
      return 0LL;
    DestinationString = 0LL;
    ClientFriendlyName = CAudioStream::GetClientFriendlyName(*(CAudioStream **)(a2 + 176));
    RtlInitUnicodeString(&DestinationString, ClientFriendlyName);
    v24 = *(_OWORD *)(a2 + 256);
    v19 = 0LL;
    v8 = SleepstudyHelperCreateBlockerFromGuid(*a1, a1 + 2, &v24, &DestinationString);
    if ( v8 < 0 )
    {
      result = (unsigned int)wil::details::in1diag3::Return_NtStatus(
                               retaddr,
                               (void *)0xF4,
                               (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
                               (const char *)(unsigned int)v8,
                               8);
    }
    else
    {
      v9 = SleepstudyHelperSetBlockerParentHandle(v19, a1[1]);
      if ( v9 < 0 )
      {
        v17 = wil::details::in1diag3::Return_NtStatus(
                retaddr,
                (void *)0xF6,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
                (const char *)(unsigned int)v9,
                8);
        wil::details::unique_storage<wil::details::resource_policy<_SLEEPSTUDY_BLOCKER_BUILDER *,long (*)(_SLEEPSTUDY_BLOCKER_BUILDER *),&long SleepstudyHelperDestroyBlockerBuilder(_SLEEPSTUDY_BLOCKER_BUILDER *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_BLOCKER_BUILDER *,_SLEEPSTUDY_BLOCKER_BUILDER *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_SLEEPSTUDY_BLOCKER_BUILDER *,long (*)(_SLEEPSTUDY_BLOCKER_BUILDER *),&long SleepstudyHelperDestroyBlockerBuilder(_SLEEPSTUDY_BLOCKER_BUILDER *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_BLOCKER_BUILDER *,_SLEEPSTUDY_BLOCKER_BUILDER *,0,std::nullptr_t>>(&v19);
        result = v17;
      }
      else
      {
        v20 = 0LL;
        v10 = SleepstudyHelperBuildBlocker(v19, &v20);
        if ( v10 < 0 )
        {
          v16 = wil::details::in1diag3::Return_NtStatus(
                  retaddr,
                  (void *)0xF9,
                  (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
                  (const char *)(unsigned int)v10,
                  8);
          if ( v20 )
            SleepstudyHelperDestroyBlocker(v20);
          result = v16;
        }
        else
        {
          v19 = 0LL;
          std::make_shared<CSleepStudyPowerReference,>(&v21);
          v11 = v21;
          if ( v21 )
          {
            if ( v21 != &v20 )
            {
              wil::details::unique_storage<wil::details::resource_policy<_SLEEPSTUDY_BLOCKER *,long (*)(_SLEEPSTUDY_BLOCKER *),&long SleepstudyHelperDestroyBlocker(_SLEEPSTUDY_BLOCKER *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_BLOCKER *,_SLEEPSTUDY_BLOCKER *,0,std::nullptr_t>>::reset(
                v21,
                v20);
              v20 = 0LL;
            }
            v12 = v22;
            if ( v22 )
            {
              _InterlockedIncrement((volatile signed __int32 *)v22 + 2);
              v12 = v22;
              v11 = v21;
            }
            *(_QWORD *)a3 = v11;
            v13 = *(std::_Ref_count_base **)(a3 + 8);
            *(_QWORD *)(a3 + 8) = v12;
            if ( v13 )
              std::_Ref_count_base::_Decref(v13);
            active = SleepstudyHelperBlockerActiveReference(**(_QWORD **)a3);
            if ( active >= 0 )
            {
              if ( v12 )
                std::_Ref_count_base::_Decref(v12);
              if ( v20 )
                SleepstudyHelperDestroyBlocker(v20);
              if ( v19 )
                SleepstudyHelperDestroyBlockerBuilder();
              return 0LL;
            }
            v18 = wil::details::in1diag3::Return_NtStatus(
                    retaddr,
                    (void *)0x103,
                    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
                    (const char *)(unsigned int)active,
                    8);
            if ( v12 )
              std::_Ref_count_base::_Decref(v12);
            wil::details::unique_storage<wil::details::resource_policy<_SLEEPSTUDY_BLOCKER *,long (*)(_SLEEPSTUDY_BLOCKER *),&long SleepstudyHelperDestroyBlocker(_SLEEPSTUDY_BLOCKER *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_BLOCKER *,_SLEEPSTUDY_BLOCKER *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_SLEEPSTUDY_BLOCKER *,long (*)(_SLEEPSTUDY_BLOCKER *),&long SleepstudyHelperDestroyBlocker(_SLEEPSTUDY_BLOCKER *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_BLOCKER *,_SLEEPSTUDY_BLOCKER *,0,std::nullptr_t>>(&v20);
            wil::details::unique_storage<wil::details::resource_policy<_SLEEPSTUDY_BLOCKER_BUILDER *,long (*)(_SLEEPSTUDY_BLOCKER_BUILDER *),&long SleepstudyHelperDestroyBlockerBuilder(_SLEEPSTUDY_BLOCKER_BUILDER *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_BLOCKER_BUILDER *,_SLEEPSTUDY_BLOCKER_BUILDER *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_SLEEPSTUDY_BLOCKER_BUILDER *,long (*)(_SLEEPSTUDY_BLOCKER_BUILDER *),&long SleepstudyHelperDestroyBlockerBuilder(_SLEEPSTUDY_BLOCKER_BUILDER *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_BLOCKER_BUILDER *,_SLEEPSTUDY_BLOCKER_BUILDER *,0,std::nullptr_t>>(&v19);
            result = v18;
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xFF,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
              (const char *)0x8007000ELL,
              8);
            if ( v22 )
              std::_Ref_count_base::_Decref(v22);
            if ( v20 )
              SleepstudyHelperDestroyBlocker(v20);
            result = 2147942414LL;
          }
        }
      }
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x108,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
                           a4);
  }
  return result;
}
