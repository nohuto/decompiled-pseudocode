/*
 * XREFs of ?init_apartment@winrt@@YAXW4apartment_type@1@@Z @ 0x1800A7C88
 * Callers:
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x180026554 (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 * Callees:
 *     CoInitializeEx_0 @ 0x18009F321 (CoInitializeEx_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1800A7B74 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z @ 0x1800A803C (-throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z.c)
 */

HRESULT winrt::init_apartment()
{
  HRESULT result; // eax
  __int64 v1; // rax
  unsigned int v2; // r8d
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  result = CoInitializeEx_0(0LL, 0);
  if ( result < 0 )
  {
    v1 = winrt::impl::slim_source_location::current((__int64)v3);
    winrt::throw_hresult(v2, v1);
  }
  return result;
}
