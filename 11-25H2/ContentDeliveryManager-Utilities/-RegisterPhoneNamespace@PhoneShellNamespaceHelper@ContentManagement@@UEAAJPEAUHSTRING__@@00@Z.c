/*
 * XREFs of ?RegisterPhoneNamespace@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAUHSTRING__@@00@Z @ 0x180037D10
 * Callers:
 *     <none>
 * Callees:
 *     ??$SetSettingValue@K$03@Details@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0K@Z @ 0x180027B84 (--$SetSettingValue@K$03@Details@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0K@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18002A434 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?CreatePhoneLink@PhoneShellNamespaceHelper@ContentManagement@@AEAAJPEBG0PEAPEAG@Z @ 0x18002E308 (-CreatePhoneLink@PhoneShellNamespaceHelper@ContentManagement@@AEAAJPEBG0PEAPEAG@Z.c)
 *     ?EnsureRegKeyExists@PhoneShellNamespaceHelper@ContentManagement@@AEAAJPEBG@Z @ 0x18002EFCC (-EnsureRegKeyExists@PhoneShellNamespaceHelper@ContentManagement@@AEAAJPEBG@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x180033CB0 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?NotifyShell@PhoneShellNamespaceHelper@ContentManagement@@AEAAJJPEBG@Z @ 0x1800353AC (-NotifyShell@PhoneShellNamespaceHelper@ContentManagement@@AEAAJJPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A0D0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG00I@Z @ 0x18003B28C (-SetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG00I@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18003D630 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18003F9A8 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::PhoneShellNamespaceHelper::RegisterPhoneNamespace(
        ContentManagement::PhoneShellNamespaceHelper *this,
        HSTRING a2,
        HSTRING a3,
        HSTRING a4)
{
  const unsigned __int16 *StringRawBuffer; // rbx
  const unsigned __int16 *v9; // rax
  ContentManagement::PhoneShellNamespaceHelper *v10; // rcx
  int v11; // eax
  unsigned int v12; // ebx
  PCWSTR v13; // rax
  int v14; // eax
  ContentManagement::PhoneShellNamespaceHelper *v15; // rcx
  bool *v16; // r8
  CreativeFramework::ContentDeliveryManagerSettings *v17; // rbx
  int v18; // eax
  int v19; // r14d
  int v20; // eax
  int v21; // eax
  int v22; // eax
  PCWSTR v23; // rax
  __int64 v24; // r12
  __int64 v25; // r9
  int v26; // eax
  int v27; // eax
  int v28; // eax
  ContentManagement::PhoneShellNamespaceHelper *v29; // rcx
  bool *v30; // r8
  int v31; // eax
  int v32; // eax
  int v33; // eax
  ContentManagement::PhoneShellNamespaceHelper *v34; // rcx
  bool *v35; // r8
  CreativeFramework::ContentDeliveryManagerSettings *v36; // r14
  int v37; // eax
  int v38; // r15d
  int v39; // eax
  int v40; // eax
  int v41; // eax
  ContentManagement::PhoneShellNamespaceHelper *v42; // rcx
  bool *v43; // r8
  CreativeFramework::ContentDeliveryManagerSettings *v44; // r14
  int v45; // eax
  int v46; // eax
  int v47; // eax
  ContentManagement::PhoneShellNamespaceHelper *v48; // rcx
  bool *v49; // r8
  CreativeFramework::ContentDeliveryManagerSettings *v50; // r14
  int v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  ContentManagement::PhoneShellNamespaceHelper *v55; // rcx
  bool *v56; // r8
  const WCHAR *v57; // rbx
  int v58; // eax
  int v59; // eax
  int v60; // eax
  PCWSTR v61; // rax
  int v62; // eax
  ContentManagement::PhoneShellNamespaceHelper *v63; // rcx
  bool *v64; // r8
  int v65; // eax
  int v66; // eax
  ContentManagement::PhoneShellNamespaceHelper *v67; // rcx
  bool *v68; // r8
  int v69; // eax
  const WCHAR *v70; // rax
  int v71; // eax
  const unsigned __int16 *v72; // rax
  ContentManagement::PhoneShellNamespaceHelper *v73; // rcx
  int v74; // eax
  LPCWSTR lpSubKey[3]; // [rsp+28h] [rbp-79h] BYREF
  CreativeFramework::ContentDeliveryManagerSettings *v77[3]; // [rsp+40h] [rbp-61h] BYREF
  CreativeFramework::ContentDeliveryManagerSettings *v78[3]; // [rsp+58h] [rbp-49h] BYREF
  CreativeFramework::ContentDeliveryManagerSettings *v79[3]; // [rsp+70h] [rbp-31h] BYREF
  LPCWSTR v80[3]; // [rsp+88h] [rbp-19h] BYREF
  LPCWSTR v81[3]; // [rsp+A0h] [rbp-1h] BYREF
  CreativeFramework::ContentDeliveryManagerSettings *v82[4]; // [rsp+B8h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]
  LPCWSTR lpPathName; // [rsp+108h] [rbp+67h] BYREF

  lpPathName = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    &lpPathName,
    0LL);
  StringRawBuffer = WindowsGetStringRawBuffer(a4, 0LL);
  v9 = WindowsGetStringRawBuffer(a3, 0LL);
  v11 = ContentManagement::PhoneShellNamespaceHelper::CreatePhoneLink(v10, v9, StringRawBuffer, &lpPathName);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x37C,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v11,
      (int)lpSubKey[0]);
    goto LABEL_71;
  }
  memset(lpSubKey, 0, sizeof(lpSubKey));
  v13 = WindowsGetStringRawBuffer(a2, 0LL);
  v14 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
          (__int64)lpSubKey,
          L"%ws\\%ws",
          L"Software\\Classes\\CLSID",
          v13);
  v12 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x386,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v14,
      (int)lpSubKey[0]);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
    RemoveDirectoryW(lpPathName);
    (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(this, a2);
    goto LABEL_71;
  }
  v17 = (CreativeFramework::ContentDeliveryManagerSettings *)lpSubKey[0];
  v18 = ContentManagement::PhoneShellNamespaceHelper::EnsureRegKeyExists(v15, lpSubKey[0], v16);
  v19 = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x387,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v18,
      (int)lpSubKey[0]);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
    RemoveDirectoryW(lpPathName);
    (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(this, a2);
LABEL_7:
    v12 = v19;
    goto LABEL_71;
  }
  v20 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
          v17,
          word_1800E629C,
          L"Your Phone",
          (const unsigned __int16 *)0xA,
          (unsigned int)lpSubKey[0]);
  v19 = v20;
  if ( v20 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x38F,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v20,
      (int)lpSubKey[0]);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
    RemoveDirectoryW(lpPathName);
    (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(this, a2);
    goto LABEL_7;
  }
  v21 = CreativeFramework::ContentDeliveryManagerSettings::Details::SetSettingValue<unsigned long,4>(
          (LPCWSTR)v17,
          L"System.IsPinnedToNameSpaceTree",
          1);
  v19 = v21;
  if ( v21 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x390,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v21,
      (int)lpSubKey[0]);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
    RemoveDirectoryW(lpPathName);
    (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(this, a2);
    goto LABEL_7;
  }
  v22 = CreativeFramework::ContentDeliveryManagerSettings::Details::SetSettingValue<unsigned long,4>(
          (LPCWSTR)v17,
          L"DescriptionID",
          3);
  v19 = v22;
  if ( v22 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x391,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v22,
      (int)lpSubKey[0]);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
    RemoveDirectoryW(lpPathName);
    (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(this, a2);
    goto LABEL_7;
  }
  v23 = WindowsGetStringRawBuffer(a3, 0LL);
  v24 = -1LL;
  v25 = -1LL;
  do
    ++v25;
  while ( v23[v25] );
  v26 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
          v17,
          L"LocalizedString",
          v23,
          (const unsigned __int16 *)v25,
          (unsigned int)lpSubKey[0]);
  v19 = v26;
  if ( v26 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x392,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v26,
      (int)lpSubKey[0]);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
    RemoveDirectoryW(lpPathName);
    (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(this, a2);
    goto LABEL_7;
  }
  v27 = CreativeFramework::ContentDeliveryManagerSettings::Details::SetSettingValue<unsigned long,4>(
          (LPCWSTR)v17,
          L"SortOrderIndex",
          64);
  v19 = v27;
  if ( v27 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x393,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v27,
      (int)lpSubKey[0]);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
    RemoveDirectoryW(lpPathName);
    (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(this, a2);
    goto LABEL_7;
  }
  memset(v77, 0, sizeof(v77));
  v28 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
          (__int64)v77,
          L"%ws\\%ws",
          v17,
          L"DefaultIcon");
  v19 = v28;
  if ( v28 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x398,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v28,
      (int)lpSubKey[0]);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v77);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
    RemoveDirectoryW(lpPathName);
    (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(this, a2);
    goto LABEL_7;
  }
  v31 = ContentManagement::PhoneShellNamespaceHelper::EnsureRegKeyExists(v29, (const unsigned __int16 *)v77[0], v30);
  v19 = v31;
  if ( v31 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x399,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v31,
      (int)lpSubKey[0]);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v77);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
    RemoveDirectoryW(lpPathName);
    (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(this, a2);
    goto LABEL_7;
  }
  v32 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
          v77[0],
          word_1800E629C,
          L"%SystemRoot%\\system32\\ContentDeliveryManager.Utilities.dll,-10",
          (const unsigned __int16 *)0x3E,
          (unsigned int)lpSubKey[0]);
  v19 = v32;
  if ( v32 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39A,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v32,
      (int)lpSubKey[0]);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v77);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
    RemoveDirectoryW(lpPathName);
    (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(this, a2);
    goto LABEL_7;
  }
  memset(v78, 0, sizeof(v78));
  v33 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
          (__int64)v78,
          L"%ws\\%ws",
          v17,
          L"InProcServer32");
  v19 = v33;
  if ( v33 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A0,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v33,
      (int)lpSubKey[0]);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v78);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v77);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
    RemoveDirectoryW(lpPathName);
    (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(this, a2);
    goto LABEL_7;
  }
  v36 = v78[0];
  v37 = ContentManagement::PhoneShellNamespaceHelper::EnsureRegKeyExists(v34, (const unsigned __int16 *)v78[0], v35);
  v38 = v37;
  if ( v37 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A1,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v37,
      (int)lpSubKey[0]);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v78);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v77);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
    RemoveDirectoryW(lpPathName);
    (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(this, a2);
LABEL_30:
    v12 = v38;
    goto LABEL_71;
  }
  v39 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
          v36,
          word_1800E629C,
          L"%SystemRoot%\\system32\\shell32.dll",
          (const unsigned __int16 *)0x21,
          (unsigned int)lpSubKey[0]);
  v38 = v39;
  if ( v39 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A2,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v39,
      (int)lpSubKey[0]);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v78);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v77);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
    RemoveDirectoryW(lpPathName);
    (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(this, a2);
    goto LABEL_30;
  }
  v40 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
          v36,
          L"ThreadingModel",
          L"Both",
          (const unsigned __int16 *)4,
          (unsigned int)lpSubKey[0]);
  v19 = v40;
  if ( v40 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A3,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v40,
      (int)lpSubKey[0]);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v78);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v77);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
    RemoveDirectoryW(lpPathName);
    (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(this, a2);
    goto LABEL_7;
  }
  memset(v79, 0, sizeof(v79));
  v41 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
          (__int64)v79,
          L"%ws\\%ws",
          v17,
          L"Instance");
  v19 = v41;
  if ( v41 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A8,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v41,
      (int)lpSubKey[0]);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v79);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v78);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v77);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
    RemoveDirectoryW(lpPathName);
    (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(this, a2);
    goto LABEL_7;
  }
  v44 = v79[0];
  v45 = ContentManagement::PhoneShellNamespaceHelper::EnsureRegKeyExists(v42, (const unsigned __int16 *)v79[0], v43);
  v38 = v45;
  if ( v45 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A9,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v45,
      (int)lpSubKey[0]);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v79);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v78);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v77);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
    RemoveDirectoryW(lpPathName);
    (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(this, a2);
    goto LABEL_30;
  }
  v46 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
          v44,
          L"CLSID",
          L"{0E5AAE11-A475-4c5b-AB00-C66DE400274E}",
          (const unsigned __int16 *)0x26,
          (unsigned int)lpSubKey[0]);
  v38 = v46;
  if ( v46 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3AA,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v46,
      (int)lpSubKey[0]);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v79);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v78);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v77);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
    RemoveDirectoryW(lpPathName);
    (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(this, a2);
    goto LABEL_30;
  }
  memset(v80, 0, sizeof(v80));
  v47 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
          (__int64)v80,
          L"%ws\\%ws",
          v44,
          L"InitPropertyBag");
  v19 = v47;
  if ( v47 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B0,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v47,
      (int)lpSubKey[0]);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v80);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v79);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v78);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v77);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
    RemoveDirectoryW(lpPathName);
    (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(this, a2);
    goto LABEL_7;
  }
  v50 = (CreativeFramework::ContentDeliveryManagerSettings *)v80[0];
  v51 = ContentManagement::PhoneShellNamespaceHelper::EnsureRegKeyExists(v48, v80[0], v49);
  v38 = v51;
  if ( v51 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B1,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v51,
      (int)lpSubKey[0]);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v80);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v79);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v78);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v77);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
    RemoveDirectoryW(lpPathName);
    (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(this, a2);
    goto LABEL_30;
  }
  do
    ++v24;
  while ( lpPathName[v24] );
  v52 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
          v50,
          L"TargetFolderPath",
          lpPathName,
          (const unsigned __int16 *)v24,
          (unsigned int)lpSubKey[0]);
  v38 = v52;
  if ( v52 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B2,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v52,
      (int)lpSubKey[0]);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v80);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v79);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v78);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v77);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
    RemoveDirectoryW(lpPathName);
    (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(this, a2);
    goto LABEL_30;
  }
  v53 = CreativeFramework::ContentDeliveryManagerSettings::Details::SetSettingValue<unsigned long,4>(
          (LPCWSTR)v50,
          L"Attributes",
          17);
  v19 = v53;
  if ( v53 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B3,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v53,
      (int)lpSubKey[0]);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v80);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v79);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v78);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v77);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
    RemoveDirectoryW(lpPathName);
    (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(this, a2);
    goto LABEL_7;
  }
  memset(v81, 0, sizeof(v81));
  v54 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
          (__int64)v81,
          L"%ws\\%ws",
          v17,
          L"ShellFolder");
  v12 = v54;
  if ( v54 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B9,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v54,
      (int)lpSubKey[0]);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v81);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v80);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v79);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v78);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v77);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
    RemoveDirectoryW(lpPathName);
    (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(this, a2);
    goto LABEL_71;
  }
  v57 = v81[0];
  v58 = ContentManagement::PhoneShellNamespaceHelper::EnsureRegKeyExists(v55, v81[0], v56);
  v19 = v58;
  if ( v58 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3BA,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v58,
      (int)lpSubKey[0]);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v81);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v80);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v79);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v78);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v77);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
    RemoveDirectoryW(lpPathName);
    (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(this, a2);
    goto LABEL_7;
  }
  v59 = CreativeFramework::ContentDeliveryManagerSettings::Details::SetSettingValue<unsigned long,4>(
          v57,
          L"Attributes",
          805568517);
  v19 = v59;
  if ( v59 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3BB,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v59,
      (int)lpSubKey[0]);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v81);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v80);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v79);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v78);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v77);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
    RemoveDirectoryW(lpPathName);
    (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(this, a2);
    goto LABEL_7;
  }
  v60 = CreativeFramework::ContentDeliveryManagerSettings::Details::SetSettingValue<unsigned long,4>(
          v57,
          L"FolderValueFlags",
          1064);
  v12 = v60;
  if ( v60 >= 0 )
  {
    memset(v82, 0, 24);
    v61 = WindowsGetStringRawBuffer(a2, 0LL);
    v62 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
            (__int64)v82,
            L"%ws\\%ws",
            L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Desktop\\NameSpace",
            v61);
    v12 = v62;
    if ( v62 >= 0 )
    {
      v65 = ContentManagement::PhoneShellNamespaceHelper::EnsureRegKeyExists(v63, (const unsigned __int16 *)v82[0], v64);
      v12 = v65;
      if ( v65 >= 0 )
      {
        v66 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
                v82[0],
                word_1800E629C,
                L"Your Phone",
                (const unsigned __int16 *)0xA,
                (unsigned int)lpSubKey[0]);
        v12 = v66;
        if ( v66 >= 0 )
        {
          v69 = ContentManagement::PhoneShellNamespaceHelper::EnsureRegKeyExists(
                  v67,
                  L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\HideDesktopIcons\\NewStartPanel",
                  v68);
          v12 = v69;
          if ( v69 >= 0 )
          {
            v70 = WindowsGetStringRawBuffer(a2, 0LL);
            v71 = CreativeFramework::ContentDeliveryManagerSettings::Details::SetSettingValue<unsigned long,4>(
                    L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\HideDesktopIcons\\NewStartPanel",
                    v70,
                    1);
            v12 = v71;
            if ( v71 >= 0 )
            {
              v72 = WindowsGetStringRawBuffer(a2, 0LL);
              v74 = ContentManagement::PhoneShellNamespaceHelper::NotifyShell(v73, 8, v72);
              v12 = v74;
              if ( v74 >= 0 )
              {
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v82);
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v81);
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v80);
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v79);
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v78);
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v77);
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
                v12 = 0;
              }
              else
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x3CC,
                  (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
                  (const char *)(unsigned int)v74,
                  (int)lpSubKey[0]);
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v82);
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v81);
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v80);
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v79);
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v78);
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v77);
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
              }
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x3C6,
                (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
                (const char *)(unsigned int)v71,
                (int)lpSubKey[0]);
              Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v82);
              Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v81);
              Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v80);
              Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v79);
              Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v78);
              Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v77);
              Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
              RemoveDirectoryW(lpPathName);
              (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(
                this,
                a2);
            }
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x3C5,
              (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
              (const char *)(unsigned int)v69,
              (int)lpSubKey[0]);
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v82);
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v81);
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v80);
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v79);
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v78);
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v77);
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
            RemoveDirectoryW(lpPathName);
            (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(
              this,
              a2);
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x3C2,
            (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
            (const char *)(unsigned int)v66,
            (int)lpSubKey[0]);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v82);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v81);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v80);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v79);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v78);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v77);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
          RemoveDirectoryW(lpPathName);
          (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(
            this,
            a2);
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3C1,
          (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)(unsigned int)v65,
          (int)lpSubKey[0]);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v82);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v81);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v80);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v79);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v78);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v77);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
        RemoveDirectoryW(lpPathName);
        (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(
          this,
          a2);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3C0,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v62,
        (int)lpSubKey[0]);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v82);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v81);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v80);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v79);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v78);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v77);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
      RemoveDirectoryW(lpPathName);
      (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(
        this,
        a2);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3BC,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v60,
      (int)lpSubKey[0]);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v81);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v80);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v79);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v78);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v77);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
    RemoveDirectoryW(lpPathName);
    (*(void (__fastcall **)(ContentManagement::PhoneShellNamespaceHelper *, HSTRING))(*(_QWORD *)this + 56LL))(this, a2);
  }
LABEL_71:
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&lpPathName);
  return v12;
}
