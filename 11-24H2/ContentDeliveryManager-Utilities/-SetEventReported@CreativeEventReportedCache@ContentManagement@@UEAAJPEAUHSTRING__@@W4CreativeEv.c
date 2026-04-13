/*
 * XREFs of ?SetEventReported@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0@Z @ 0x180057930
 * Callers:
 *     <none>
 * Callees:
 *     ?DeleteSettingKey@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG@Z @ 0x18002E940 (-DeleteSettingKey@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG00I@Z @ 0x18003B3CC (-SetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG00I@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18003D810 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??$SetSettingValue@_K$0L@@Details@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_K@Z @ 0x180048260 (--$SetSettingValue@_K$0L@@Details@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_K@Z.c)
 *     _anonymous_namespace_::DecodeBatchIdFromCreativeId @ 0x18004E6AC (_anonymous_namespace_--DecodeBatchIdFromCreativeId.c)
 *     ?DoesSettingExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0PEA_N@Z @ 0x18004E92C (-DoesSettingExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0PEA_N@Z.c)
 *     ?GetCreativeEventString@ContentManagement@@YAJPEAUHSTRING__@@W4CreativeEventType@1@0PEAPEAG@Z @ 0x180050D28 (-GetCreativeEventString@ContentManagement@@YAJPEAUHSTRING__@@W4CreativeEventType@1@0PEAPEAG@Z.c)
 *     ?GetExistingStringSettingRemoveOnFailure@ContentManagement@@YAJPEBG0PEAPEAG@Z @ 0x180051BE4 (-GetExistingStringSettingRemoveOnFailure@ContentManagement@@YAJPEBG0PEAPEAG@Z.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x18005BCA8 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     __security_check_cookie @ 0x1800B6D70 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::CreativeEventReportedCache::SetEventReported(
        __int64 a1,
        HSTRING a2,
        unsigned int a3,
        HSTRING a4)
{
  char v8; // r14
  bool *v9; // r9
  int DoesSettingExist; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  char v13; // si
  const unsigned __int16 *v14; // rdx
  unsigned __int16 **v15; // r9
  unsigned __int64 v16; // r9
  __int64 v17; // rdx
  const WCHAR *v18; // r8
  LPCWCH *v19; // r8
  __int64 v20; // r9
  int v21; // eax
  const unsigned __int16 *v22; // rdx
  int CreativeEventString; // eax
  bool *v24; // r9
  __int64 v25; // rdx
  unsigned __int16 v27; // [rsp+30h] [rbp-59h] BYREF
  LPCWSTR lpValueName; // [rsp+38h] [rbp-51h] BYREF
  __int64 v29; // [rsp+40h] [rbp-49h]
  __int64 v30; // [rsp+48h] [rbp-41h]
  struct _FILETIME SystemTimeAsFileTime; // [rsp+50h] [rbp-39h] BYREF
  LPCWCH lpString1; // [rsp+58h] [rbp-31h] BYREF
  __int64 v33; // [rsp+60h] [rbp-29h]
  __int64 v34; // [rsp+68h] [rbp-21h]
  LPCWCH lpString2[3]; // [rsp+70h] [rbp-19h] BYREF
  unsigned __int64 v36; // [rsp+88h] [rbp-1h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v8 = 0;
  LOBYTE(v27) = 0;
  lpString1 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  WindowsGetStringRawBuffer(a2, 0LL);
  anonymous_namespace_::DecodeBatchIdFromCreativeId((__int64)lpString2);
  DoesSettingExist = CreativeFramework::ContentDeliveryManagerSettings::DoesSettingExist(
                       *(const WCHAR **)(a1 + 24),
                       L"LastCreativeBatchId",
                       &v27,
                       v9);
  v11 = DoesSettingExist;
  if ( DoesSettingExist < 0 )
  {
    v12 = 782LL;
LABEL_6:
    v16 = (unsigned int)DoesSettingExist;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)v16);
    goto LABEL_32;
  }
  v13 = v27;
  if ( !(_BYTE)v27 )
    goto LABEL_13;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
  v33 = -1LL;
  v34 = -1LL;
  DoesSettingExist = ContentManagement::GetExistingStringSettingRemoveOnFailure(
                       *(LPCWSTR *)(a1 + 24),
                       v14,
                       (unsigned __int16 *)&lpString1,
                       v15);
  v11 = DoesSettingExist;
  if ( DoesSettingExist < 0 )
  {
    v12 = 786LL;
    goto LABEL_6;
  }
  if ( !lpString1 )
    goto LABEL_12;
  v18 = (const WCHAR *)lpString2;
  if ( v36 >= 8 )
    v18 = lpString2[0];
  if ( CompareStringOrdinal(lpString1, -1, v18, -1, 1) != 2 )
  {
LABEL_12:
    v8 = 1;
LABEL_13:
    v19 = lpString2;
    if ( v36 >= 8 )
      v19 = (LPCWCH *)lpString2[0];
    v20 = -1LL;
    do
      ++v20;
    while ( *((_WORD *)v19 + v20) );
    v21 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
            *(const WCHAR **)(a1 + 24),
            L"LastCreativeBatchId",
            v19,
            (const unsigned __int16 *)v20);
    v11 = v21;
    if ( v21 < 0 )
    {
      v16 = (unsigned int)v21;
      v12 = 793LL;
      goto LABEL_7;
    }
    if ( v8 )
    {
      if ( v13 )
      {
        DoesSettingExist = CreativeFramework::ContentDeliveryManagerSettings::DeleteSettingKey(
                             *(LPCWSTR *)(a1 + 48),
                             v22);
        v11 = DoesSettingExist;
        if ( DoesSettingExist < 0 )
        {
          v12 = 798LL;
          goto LABEL_6;
        }
      }
    }
  }
  lpValueName = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpValueName);
  v29 = -1LL;
  v30 = -1LL;
  CreativeEventString = ContentManagement::GetCreativeEventString(a2, a3, a4, &lpValueName);
  v11 = CreativeEventString;
  if ( CreativeEventString >= 0 )
  {
    LOBYTE(v27) = 0;
    CreativeEventString = CreativeFramework::ContentDeliveryManagerSettings::DoesSettingExist(
                            *(const WCHAR **)(a1 + 48),
                            lpValueName,
                            &v27,
                            v24);
    v11 = CreativeEventString;
    if ( CreativeEventString >= 0 )
    {
      if ( (_BYTE)v27
        || (SystemTimeAsFileTime = 0LL,
            GetSystemTimeAsFileTime(&SystemTimeAsFileTime),
            CreativeEventString = CreativeFramework::ContentDeliveryManagerSettings::Details::SetSettingValue<unsigned __int64,11>(
                                    *(const WCHAR **)(a1 + 48),
                                    (wchar_t *)lpValueName,
                                    SystemTimeAsFileTime.dwLowDateTime
                                  + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32)),
            v11 = CreativeEventString,
            CreativeEventString >= 0) )
      {
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpValueName);
        v11 = 0;
        goto LABEL_32;
      }
      v25 = 812LL;
    }
    else
    {
      v25 = 808LL;
    }
  }
  else
  {
    v25 = 804LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v25,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
    (const char *)(unsigned int)CreativeEventString);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpValueName);
LABEL_32:
  LOBYTE(v17) = 1;
  std::wstring::_Tidy(lpString2, v17, 0LL);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
  return v11;
}
