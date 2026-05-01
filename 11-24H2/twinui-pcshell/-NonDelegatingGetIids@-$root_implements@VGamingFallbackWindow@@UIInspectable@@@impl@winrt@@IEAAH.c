/*
 * XREFs of ?NonDelegatingGetIids@?$root_implements@VGamingFallbackWindow@@UIInspectable@@@impl@winrt@@IEAAHPEAIPEAPEAUguid@3@@Z @ 0x1805031A8
 * Callers:
 *     ?GetIids@?$implements@VGamingFallbackWindow@@UIInspectable@@@winrt@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1805001E0 (-GetIids@-$implements@VGamingFallbackWindow@@UIInspectable@@@winrt@@UEAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     __Platform_CoTaskMemAlloc @ 0x1802D2C0D (__Platform_CoTaskMemAlloc.c)
 *     memmove_0 @ 0x1806CA2E8 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::root_implements<GamingFallbackWindow,IInspectable>::NonDelegatingGetIids(
        __int64 a1,
        unsigned int *a2,
        _QWORD *a3)
{
  unsigned int v5; // eax
  void *v6; // rax
  unsigned int v8; // [rsp+20h] [rbp-18h] BYREF
  void *Src; // [rsp+28h] [rbp-10h]

  if ( !a1 )
    a1 = 8LL;
  (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a1 + 32LL))(a1, &v8);
  v5 = v8;
  if ( v8 )
  {
    *a2 = v8;
    v6 = _Platform_CoTaskMemAlloc(16LL * v5);
    *a3 = v6;
    if ( !v6 )
      return 2147942414LL;
    memmove_0(v6, Src, 16LL * v8);
  }
  else
  {
    *a2 = 0;
    *a3 = 0LL;
  }
  return 0LL;
}
