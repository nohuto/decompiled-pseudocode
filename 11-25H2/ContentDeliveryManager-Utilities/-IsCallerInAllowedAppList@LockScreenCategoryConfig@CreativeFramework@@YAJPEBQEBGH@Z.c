/*
 * XREFs of ?IsCallerInAllowedAppList@LockScreenCategoryConfig@CreativeFramework@@YAJPEBQEBGH@Z @ 0x180033E04
 * Callers:
 *     ??$MakeAndInitialize@VContextualSuggestionsManager@ContentManagement@@UIContextualSuggestionsManager@2@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIContextualSuggestionsManager@ContentManagement@@@Z @ 0x180025D74 (--$MakeAndInitialize@VContextualSuggestionsManager@ContentManagement@@UIContextualSuggestionsMan.c)
 *     ??$MakeAndInitialize@VIdentityManager@ContentManagement@@UIIdentityManager@2@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIIdentityManager@ContentManagement@@@Z @ 0x180026444 (--$MakeAndInitialize@VIdentityManager@ContentManagement@@UIIdentityManager@2@$$V@Details@WRL@Mic.c)
 *     ??$MakeAndInitialize@VThumbnailCacheHelper@ContentManagement@@UIThumbnailCacheHelper@2@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIThumbnailCacheHelper@ContentManagement@@@Z @ 0x1800269E4 (--$MakeAndInitialize@VThumbnailCacheHelper@ContentManagement@@UIThumbnailCacheHelper@2@$$V@Detai.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A0D0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x18003A0F8 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18003D630 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?GetCallingProcessPackageFullName@CallerIdentity@@YAJPEAPEAG@Z @ 0x180071510 (-GetCallingProcessPackageFullName@CallerIdentity@@YAJPEAPEAG@Z.c)
 *     ?GetCallingProcessPackageSidString@CallerIdentity@@YAJPEAPEAG@Z @ 0x18007157C (-GetCallingProcessPackageSidString@CallerIdentity@@YAJPEAPEAG@Z.c)
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x180071988 (-GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z.c)
 *     ?IsProcessAppContainer@CallerIdentity@@YAJPEAXPEA_N@Z @ 0x180071AE4 (-IsProcessAppContainer@CallerIdentity@@YAJPEAXPEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CreativeFramework::LockScreenCategoryConfig::IsCallerInAllowedAppList(
        CreativeFramework::LockScreenCategoryConfig *this,
        const unsigned __int16 *const *a2)
{
  char v2; // di
  int CallingProcessHandle; // ebx
  bool *v4; // r8
  char *v5; // rcx
  unsigned __int16 **v7; // rdx
  int CallingProcessPackageSidString; // eax
  const WCHAR **v9; // rbx
  char *v10; // rdi
  const WCHAR *v11; // r8
  __int64 v12; // rdx
  const WCHAR *v13; // rcx
  unsigned __int16 **v14; // rdx
  int bIgnoreCase; // [rsp+20h] [rbp-40h]
  LPCWCH lpString1; // [rsp+30h] [rbp-30h] BYREF
  __int64 v17; // [rsp+38h] [rbp-28h]
  __int64 v18; // [rsp+40h] [rbp-20h]
  char *v19; // [rsp+48h] [rbp-18h] BYREF
  __int64 v20; // [rsp+50h] [rbp-10h]
  __int64 v21; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  HANDLE hObject; // [rsp+90h] [rbp+30h] BYREF
  int v24; // [rsp+98h] [rbp+38h] BYREF

  v24 = (int)a2;
  v2 = 0;
  LOBYTE(v24) = 0;
  hObject = 0LL;
  CallingProcessHandle = CallerIdentity::GetCallingProcessHandle(this, a2, &hObject);
  if ( CallingProcessHandle >= 0 )
  {
    CallingProcessHandle = CallerIdentity::IsProcessAppContainer((CallerIdentity *)hObject, &v24, v4);
    v2 = v24;
  }
  v5 = (char *)hObject;
  hObject = 0LL;
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v5);
  if ( CallingProcessHandle >= 0 )
  {
    if ( !v2 )
      return 0LL;
    lpString1 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&lpString1);
    v17 = -1LL;
    v18 = -1LL;
    CallingProcessPackageSidString = CallerIdentity::GetCallingProcessPackageSidString((LPWSTR *)&lpString1, v7);
    CallingProcessHandle = CallingProcessPackageSidString;
    if ( CallingProcessPackageSidString >= 0 )
    {
      v9 = (const WCHAR **)off_1800C9298;
      v10 = (char *)word_1800E629C;
      do
      {
        v11 = word_1800E629C;
        if ( *v9 )
          v11 = *v9;
        LODWORD(v12) = v17;
        if ( v17 == -1 )
        {
          if ( lpString1 )
          {
            v12 = -1LL;
            do
              ++v12;
            while ( lpString1[v12] );
          }
          else
          {
            LODWORD(v12) = 0;
          }
        }
        v13 = word_1800E629C;
        if ( lpString1 )
          v13 = lpString1;
        if ( CompareStringOrdinal(v13, v12, v11, -(*v9 != 0LL), 1) == 2 )
        {
          CallingProcessHandle = 0;
          goto LABEL_28;
        }
        ++v9;
      }
      while ( (__int64)v9 < (__int64)off_1800C92A0 );
      v19 = 0LL;
      v20 = 0LL;
      v21 = 0LL;
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v19);
      v20 = -1LL;
      v21 = -1LL;
      CallerIdentity::GetCallingProcessPackageFullName((CallerIdentity *)&v19, v14);
      if ( v19 )
        v10 = v19;
      CallingProcessHandle = -2147024891;
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)0x83,
        (unsigned int)"onecoreuap\\internal\\shell\\inc\\LockScreenCategoryConfig.h",
        (const char *)0x80070005LL,
        (int)"%ls",
        v10);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v19);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x73,
        (unsigned int)"onecoreuap\\internal\\shell\\inc\\LockScreenCategoryConfig.h",
        (const char *)(unsigned int)CallingProcessPackageSidString,
        bIgnoreCase);
    }
LABEL_28:
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&lpString1);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6F,
      (unsigned int)"onecoreuap\\internal\\shell\\inc\\LockScreenCategoryConfig.h",
      (const char *)(unsigned int)CallingProcessHandle,
      bIgnoreCase);
  }
  return (unsigned int)CallingProcessHandle;
}
