/*
 * XREFs of ?GenerateStoreId@StoreHelpers@CreativeFramework@@YAJPEAUHSTRING__@@0PEAPEAU3@@Z @ 0x1800744FC
 * Callers:
 *     ?GetEntitlementInternal@AppManager@ContentManagement@@AEAAJPEAUHSTRING__@@000E0@Z @ 0x180074B20 (-GetEntitlementInternal@AppManager@ContentManagement@@AEAAJPEAUHSTRING__@@000E0@Z.c)
 *     ?StartProductInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0EE00@Z @ 0x180075BC0 (-StartProductInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0EE00@Z.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002E6CC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800B6D70 (__security_check_cookie.c)
 */

__int64 __fastcall CreativeFramework::StoreHelpers::GenerateStoreId(
        HSTRING string1,
        HSTRING string2,
        HSTRING *newString,
        HSTRING *a4)
{
  HRESULT v7; // eax
  unsigned int v8; // ebx
  HRESULT v10; // eax
  __int64 v11; // rdx
  HSTRING newStringa; // [rsp+20h] [rbp-48h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+28h] [rbp-40h] BYREF
  HSTRING string2a; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *newString = 0LL;
  if ( !WindowsIsStringEmpty(string2) )
  {
    WindowsDeleteString(0LL);
    newStringa = 0LL;
    string2a = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"/", 2u, 1u);
    v10 = WindowsConcatString(string1, string2a, &newStringa);
    v8 = v10;
    if ( v10 >= 0 )
    {
      v10 = WindowsConcatString(newStringa, string2, newString);
      v8 = v10;
      if ( v10 >= 0 )
      {
        WindowsDeleteString(newStringa);
        return 0LL;
      }
      v11 = 30LL;
    }
    else
    {
      v11 = 28LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\StoreHelpers.h",
      (const char *)(unsigned int)v10);
    WindowsDeleteString(newStringa);
    return v8;
  }
  v7 = WindowsDuplicateString(string1, newString);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\StoreHelpers.h",
      (const char *)(unsigned int)v7);
    return v8;
  }
  return 0LL;
}
