/*
 * XREFs of ?Value@?$consume_Windows_Foundation_IReference@U?$IReference@G@Foundation@Windows@winrt@@G@impl@winrt@@QEBA@XZ @ 0x180652994
 * Callers:
 *     ??$unbox_value_type@GAEBUIInspectable@Foundation@Windows@winrt@@@impl@winrt@@YAGAEBUIInspectable@Foundation@Windows@1@@Z @ 0x18064849C (--$unbox_value_type@GAEBUIInspectable@Foundation@Windows@winrt@@@impl@winrt@@YAGAEBUIInspectable.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_Foundation_IReference<winrt::Windows::Foundation::IReference<unsigned short>,unsigned short>::Value(
        __int64 **a1)
{
  __int64 *v1; // rcx
  __int64 v2; // rax
  int v3; // eax
  int v5; // [rsp+20h] [rbp-28h] BYREF
  __int128 v6; // [rsp+28h] [rbp-20h]
  unsigned __int16 v7; // [rsp+50h] [rbp+8h] BYREF
  int v8; // [rsp+58h] [rbp+10h] BYREF

  v1 = *a1;
  v7 = 0;
  v5 = 0;
  v2 = *v1;
  v6 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int16 *))(v2 + 48))(v1, &v7);
  winrt::check_hresult(&v8, v3, (__int64)&v5);
  return v7;
}
