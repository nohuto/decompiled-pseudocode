/*
 * XREFs of GetSidStringFromToken @ 0x1800F199C
 * Callers:
 *     IsUserAssignedAccessSingleApp @ 0x1800F194C (IsUserAssignedAccessSingleApp.c)
 *     ?Initialize@XamlLauncherState@@UEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaExperienceManager@3456@PEAUIRealmActivationHistory@@PEAUIXamlLauncherStateCallback@@@Z @ 0x1800F23A0 (-Initialize@XamlLauncherState@@UEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Window.c)
 *     ?IsDisabledForMachineConfig@details@MeetAndChatHelpers@@YA_NXZ @ 0x1806BE6B0 (-IsDisabledForMachineConfig@details@MeetAndChatHelpers@@YA_NXZ.c)
 *     IsCurrentUserAssignedAccessSingleAppClassicApp @ 0x18074AA84 (IsCurrentUserAssignedAccessSingleAppClassicApp.c)
 * Callees:
 *     ?get@?$unique_ptr@U_TOKEN_USER@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEBAPEAU_TOKEN_USER@@XZ @ 0x1800F1AD0 (-get@-$unique_ptr@U_TOKEN_USER@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil@@@wis.c)
 *     ?first@?$__compressed_pair@PEAU_TOKEN_USER@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEBAAEBQEAU_TOKEN_USER@@XZ @ 0x1800F1AE8 (-first@-$__compressed_pair@PEAU_TOKEN_USER@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?first@?$__compressed_pair@PEAU_TOKEN_USER@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAAEAPEAU_TOKEN_USER@@XZ @ 0x1801A2318 (-first@-$__compressed_pair@PEAU_TOKEN_USER@@U-$function_deleter@P6AXPEAX@Z$1-CoTask_ea_1801A2318.c)
 *     ?second@?$__compressed_pair@PEAUtagPOINTER_DEVICE_INFO@@U?$function_deleter@P6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@Z@wil@@@wistd@@QEAAAEAU?$function_deleter@P6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@Z@wil@@XZ @ 0x1801A2324 (-second@-$__compressed_pair@PEAUtagPOINTER_DEVICE_INFO@@U-$function_deleter@P6APEAXPEAX@Z$1-Loca.c)
 *     ?_Free@?$NativeString@V?$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1801AA024 (-_Free@-$NativeString@V-$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

__int64 __fastcall GetSidStringFromToken(HANDLE TokenHandle, LPWSTR *StringSid)
{
  const char *v4; // r9
  DWORD v5; // ebx
  void *v6; // rax
  const char *v7; // r9
  PSID *v8; // rax
  unsigned int LastError; // ebx
  void *v10; // rdi
  __int64 v12; // rdx
  int ReturnLength; // [rsp+20h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  DWORD TokenInformationLength; // [rsp+60h] [rbp+30h] BYREF
  LPVOID v16; // [rsp+68h] [rbp+38h] BYREF

  TokenInformationLength = 0;
  if ( !GetTokenInformation(TokenHandle, TokenUser, 0LL, 0, &TokenInformationLength) && GetLastError() != 122 )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x1D,
             (unsigned int)"shellcommondesktopbase\\base\\embedded\\sys\\lockdown\\config\\lib\\assignedaccessconfig.cpp",
             v4);
  v16 = CoTaskMemAlloc(TokenInformationLength);
  if ( !*(_QWORD *)wistd::__compressed_pair<_TOKEN_USER *,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::first(&v16) )
  {
    LastError = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20,
      (unsigned int)"shellcommondesktopbase\\base\\embedded\\sys\\lockdown\\config\\lib\\assignedaccessconfig.cpp",
      (const char *)0x8007000ELL,
      ReturnLength);
    goto LABEL_7;
  }
  v5 = TokenInformationLength;
  v6 = (void *)wistd::unique_ptr<_TOKEN_USER,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::get(&v16);
  if ( !GetTokenInformation(TokenHandle, TokenUser, v6, v5, &TokenInformationLength) )
  {
    v12 = 33LL;
LABEL_14:
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)v12,
                  (unsigned int)"shellcommondesktopbase\\base\\embedded\\sys\\lockdown\\config\\lib\\assignedaccessconfig.cpp",
                  v7);
    goto LABEL_7;
  }
  Windows::Internal::NativeString<Windows::Internal::LocalMemPolicy<unsigned short>>::_Free(StringSid);
  StringSid[1] = (LPWSTR)-1LL;
  StringSid[2] = (LPWSTR)-1LL;
  v8 = (PSID *)wistd::unique_ptr<_TOKEN_USER,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::get(&v16);
  if ( !ConvertSidToStringSidW(*v8, StringSid) )
  {
    v12 = 34LL;
    goto LABEL_14;
  }
  LastError = 0;
LABEL_7:
  v10 = *(void **)wistd::__compressed_pair<_TOKEN_USER *,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::first(&v16);
  *(_QWORD *)wistd::__compressed_pair<_TOKEN_USER *,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::first(&v16) = 0LL;
  if ( v10 )
  {
    wistd::__compressed_pair<tagPOINTER_DEVICE_INFO *,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>::second(&v16);
    CoTaskMemFree(v10);
  }
  return LastError;
}
