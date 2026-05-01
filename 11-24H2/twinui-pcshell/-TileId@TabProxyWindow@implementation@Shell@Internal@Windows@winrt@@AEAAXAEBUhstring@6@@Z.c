/*
 * XREFs of ?TileId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z @ 0x180055E2C
 * Callers:
 *     ?CreateWindow@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ @ 0x18026D9D0 (-CreateWindow@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ.c)
 *     ?OnTabChanged@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabView@3UI@456@AEBUWindowTabViewPropertyChangedEventArgs@38456@@Z @ 0x18026DEA0 (-OnTabChanged@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabView.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180048710 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z @ 0x1800547B8 (-create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z.c)
 *     ??$_Traits_rfind@U?$char_traits@G@std@@@std@@YA_KQEBG_K101@Z @ 0x180055FA8 (--$_Traits_rfind@U-$char_traits@G@std@@@std@@YA_KQEBG_K101@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x180056268 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?_Check_offset@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBAX_K@Z @ 0x180056DA4 (-_Check_offset@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBAX_K@Z.c)
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x180056E00 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800BADF8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TileId(
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow *this,
        const struct winrt::hstring *a2)
{
  unsigned __int16 *v3; // rax
  int v4; // r8d
  int v5; // r9d
  char **v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdi
  winrt::impl *v9; // rax
  char v10; // bl
  winrt::impl *v11; // rcx
  volatile signed __int32 **v12; // rdi
  struct winrt::impl::hstring_header *hstring_on_heap; // rsi
  __int64 v14; // rbx
  char **v15; // rax
  struct winrt::impl::hstring_header *v16; // [rsp+38h] [rbp-31h] BYREF
  char *v17[2]; // [rsp+40h] [rbp-29h] BYREF
  __int64 v18; // [rsp+50h] [rbp-19h]
  unsigned __int64 v19; // [rsp+58h] [rbp-11h]
  _OWORD v20[2]; // [rsp+60h] [rbp-9h] BYREF
  _BYTE v21[32]; // [rsp+80h] [rbp+17h] BYREF

  v3 = (unsigned __int16 *)winrt::hstring::c_str(a2);
  std::wstring::wstring(v17, v3);
  v6 = v17;
  if ( v19 > 7 )
    LODWORD(v6) = v17[0];
  v7 = std::_Traits_rfind<std::char_traits<unsigned short>>((_DWORD)v6, v18, v4, v5, 1LL);
  v8 = -1LL;
  if ( v7 == -1 )
  {
    v9 = (winrt::impl *)std::wstring::wstring(v21, v17);
    v10 = 1;
  }
  else
  {
    v14 = v7 + 1;
    memset(v20, 0, sizeof(v20));
    std::_String_val<std::_Simple_types<unsigned short>>::_Check_offset(v17, v7 + 1);
    if ( v18 - v14 != -1 )
      v8 = v18 - v14;
    v15 = v17;
    if ( v19 > 7 )
      v15 = (char **)v17[0];
    std::wstring::_Construct<1,unsigned short const *>(v20, (char *)v15 + 2 * v14, v8);
    v9 = (winrt::impl *)v20;
    v10 = 6;
  }
  v11 = v9;
  if ( *((_QWORD *)v9 + 3) > 7uLL )
    v11 = *(winrt::impl **)v9;
  v12 = (volatile signed __int32 **)((char *)this + 64);
  hstring_on_heap = winrt::impl::create_hstring_on_heap(v11, (winrt::impl *)*((unsigned int *)v9 + 4));
  v16 = hstring_on_heap;
  if ( v12 != (volatile signed __int32 **)&v16 )
  {
    v16 = 0LL;
    winrt::handle_type<winrt::impl::hstring_traits>::close(v12);
    winrt::handle_type<winrt::impl::hstring_traits>::close(v12);
    *v12 = (volatile signed __int32 *)hstring_on_heap;
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v16);
  if ( (v10 & 2) != 0 )
  {
    v10 &= ~2u;
    std::wstring::_Tidy_deallocate(v20);
  }
  if ( (v10 & 1) != 0 )
    std::wstring::_Tidy_deallocate(v21);
  std::wstring::_Tidy_deallocate(v17);
}
