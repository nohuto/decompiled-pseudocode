/*
 * XREFs of ?IndexOf@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@UWindowId@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UWindowId@UI@45@@impl@winrt@@QEBA@AEBUWindowId@UI@Windows@3@AEAI@Z @ 0x180665B30
 * Callers:
 *     ?HasWindow@RemoteSystem@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUWindowId@UI@56@@Z @ 0x180665ADC (-HasWindow@RemoteSystem@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUWindowId@UI@56@@Z.c)
 *     ?RemoveWindow@RemoteSystem@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@56@@Z @ 0x180665F1C (-RemoveWindow@RemoteSystem@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@56@.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::WindowId>,winrt::Windows::UI::WindowId>::IndexOf(
        __int64 **a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rax
  int v6; // eax
  int v8; // [rsp+30h] [rbp-28h] BYREF
  __int128 v9; // [rsp+38h] [rbp-20h]
  char v10; // [rsp+60h] [rbp+8h] BYREF
  int v11; // [rsp+68h] [rbp+10h] BYREF

  v3 = *a1;
  v4 = *a2;
  v8 = 0;
  v10 = 0;
  v5 = *v3;
  v9 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, char *))(v5 + 72))(v3, v4, a3, &v10);
  winrt::check_hresult(&v11, v6, (__int64)&v8);
  return v10;
}
