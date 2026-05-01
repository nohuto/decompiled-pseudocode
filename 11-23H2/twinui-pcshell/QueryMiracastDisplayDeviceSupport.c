/*
 * XREFs of QueryMiracastDisplayDeviceSupport @ 0x1806FCFA4
 * Callers:
 *     ?QueryMiracastSupported@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x18025D3D4 (-QueryMiracastSupported@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAA.c)
 *     ?IsMiracastSupported@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x1806FB448 (-IsMiracastSupported@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NX.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

int __fastcall QueryMiracastDisplayDeviceSupport(__int64 a1)
{
  HMODULE Library; // rax
  int v4; // eax
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+28h] [rbp-20h]

  v5 = 0LL;
  v6 = 0;
  if ( !a1 )
    return -2147024809;
  Library = LoadLibraryExW(L"mfplat.dll", 0LL, 0x800u);
  if ( !Library )
    return -2147467263;
  FreeLibrary(Library);
  v4 = D3DKMTNetDispQueryMiracastDisplayDeviceSupport(&v5);
  if ( v4 < 0 )
    return v4 | 0x10000000;
  *(_BYTE *)a1 = v5;
  *(_DWORD *)(a1 + 4) = HIDWORD(v5);
  *(_BYTE *)(a1 + 8) = v6;
  return 0;
}
