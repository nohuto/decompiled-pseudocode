/*
 * XREFs of _anonymous_namespace_::GetPromptText @ 0x1806AD304
 * Callers:
 *     RequestNotificationPinConsentAsync$_ResumeCoro$1 @ 0x180253800 (RequestNotificationPinConsentAsync$_ResumeCoro$1.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?InitializeResMessage@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x1805F6D50 (-InitializeResMessage@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@Q.c)
 *     _anonymous_namespace_::TruncateDisplayName @ 0x1806AE364 (_anonymous_namespace_--TruncateDisplayName.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall anonymous_namespace_::GetPromptText(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // rbx
  __int64 v4; // rcx
  _QWORD *v5; // rcx
  __int64 *v6; // rdi
  __int64 v7; // rax
  _QWORD *v8; // rax
  int v9; // eax
  __int64 v10; // rax
  _QWORD *v11; // rax
  int v12; // eax
  _BYTE *v13; // rcx
  _QWORD *v14; // rdi
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  int v17; // eax
  _QWORD *v18; // rcx
  __int64 v19; // rax
  _QWORD *v20; // rax
  _QWORD *v21; // rdi
  _QWORD *v22; // rcx
  __int64 v23; // rax
  _QWORD *v24; // rax
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rcx
  int v29; // [rsp+20h] [rbp-59h]
  int v30; // [rsp+20h] [rbp-59h]
  _QWORD *v31; // [rsp+30h] [rbp-49h] BYREF
  __int64 v32; // [rsp+38h] [rbp-41h]
  _BYTE v33[32]; // [rsp+48h] [rbp-31h] BYREF
  _BYTE v34[32]; // [rsp+68h] [rbp-11h] BYREF
  __int128 v35; // [rsp+88h] [rbp+Fh] BYREF
  __int64 v36; // [rsp+98h] [rbp+1Fh]
  __int128 v37; // [rsp+A0h] [rbp+27h] BYREF
  __int64 v38; // [rsp+B0h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v2 = a2;
  v31 = a1;
  v37 = 0uLL;
  v38 = 0LL;
  v35 = 0uLL;
  v36 = 0LL;
  v4 = a2[9];
  if ( v4 )
  {
    v14 = a2 + 7;
    v15 = a2 + 7;
    if ( a2[10] >= 8uLL )
      v15 = (_QWORD *)*v14;
    v31 = v15;
    v32 = v4;
    v16 = (_QWORD *)anonymous_namespace_::TruncateDisplayName(v33, &v31);
    if ( v16[3] >= 8uLL )
      v16 = (_QWORD *)*v16;
    v17 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeResMessage(
            (__int64)&v37,
            &_ImageBase,
            14504LL,
            v16);
    if ( v17 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xEF,
        (int)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
        (const char *)(unsigned int)v17,
        v29);
    std::wstring::_Tidy_deallocate((__int64)v33);
    v18 = v14;
    if ( v14[3] >= 8uLL )
      v18 = (_QWORD *)*v14;
    v19 = v14[2];
    v31 = v18;
    v32 = v19;
    v20 = (_QWORD *)anonymous_namespace_::TruncateDisplayName(v34, &v31);
    v21 = v20;
    if ( v20[3] >= 8uLL )
      v21 = (_QWORD *)*v20;
    v22 = v2;
    if ( v2[3] >= 8uLL )
      v22 = (_QWORD *)*v2;
    v23 = v2[2];
    v31 = v22;
    v32 = v23;
    v24 = (_QWORD *)anonymous_namespace_::TruncateDisplayName(v33, &v31);
    if ( v24[3] >= 8uLL )
      v24 = (_QWORD *)*v24;
    v25 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeResMessage(
            (__int64)&v35,
            &_ImageBase,
            14512LL,
            v24,
            v21);
    if ( v25 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xF4,
        (int)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
        (const char *)(unsigned int)v25,
        v30);
    std::wstring::_Tidy_deallocate((__int64)v33);
    v13 = v34;
  }
  else
  {
    v5 = a2;
    if ( a2[3] >= 8uLL )
      v5 = (_QWORD *)*a2;
    v6 = a2 + 2;
    v7 = a2[2];
    v31 = v5;
    v32 = v7;
    v8 = (_QWORD *)anonymous_namespace_::TruncateDisplayName(v33, &v31);
    if ( v8[3] >= 8uLL )
      v8 = (_QWORD *)*v8;
    v9 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeResMessage(
           (__int64)&v37,
           &_ImageBase,
           14506LL,
           v8);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xE8,
        (int)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
        (const char *)(unsigned int)v9,
        v29);
    std::wstring::_Tidy_deallocate((__int64)v33);
    if ( v2[3] >= 8uLL )
      v2 = (_QWORD *)*v2;
    v10 = *v6;
    v31 = v2;
    v32 = v10;
    v11 = (_QWORD *)anonymous_namespace_::TruncateDisplayName(v33, &v31);
    if ( v11[3] >= 8uLL )
      v11 = (_QWORD *)*v11;
    v12 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeResMessage(
            (__int64)&v35,
            &_ImageBase,
            14513LL,
            v11);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xEA,
        (int)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
        (const char *)(unsigned int)v12,
        v29);
    v13 = v33;
  }
  std::wstring::_Tidy_deallocate((__int64)v13);
  a1[1] = *((_QWORD *)&v35 + 1);
  a1[2] = v36;
  v26 = v35;
  v35 = 0uLL;
  v36 = 0LL;
  *a1 = v26;
  a1[4] = *((_QWORD *)&v37 + 1);
  a1[5] = v38;
  v27 = v37;
  v37 = 0uLL;
  v38 = 0LL;
  a1[3] = v27;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v35);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v37);
  return a1;
}
