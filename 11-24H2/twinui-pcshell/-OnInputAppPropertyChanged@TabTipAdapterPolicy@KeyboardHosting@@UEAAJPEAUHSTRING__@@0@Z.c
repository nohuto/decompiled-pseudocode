/*
 * XREFs of ?OnInputAppPropertyChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAUHSTRING__@@0@Z @ 0x18014B260
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180048710 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Check_offset@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBAX_K@Z @ 0x180056DA4 (-_Check_offset@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBAX_K@Z.c)
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x180056E00 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800F2678 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x18014036C (--$_Try_emplace@AEBI$$V@-$map@IV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$.c)
 *     ?find@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KQEBG_K@Z @ 0x18014B430 (-find@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_KQEBG_K@Z.c)
 *     ?stoul@std@@YAKAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@PEA_KH@Z @ 0x18020B208 (-stoul@std@@YAKAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@PEA_KH@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::OnInputAppPropertyChanged(
        __int64 **this,
        HSTRING a2,
        HSTRING a3)
{
  WCHAR *StringRawBuffer; // rax
  WCHAR *v6; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r8
  void **v9; // rdx
  unsigned int v10; // r9d
  __int64 v11; // rax
  __int64 v12; // r8
  void **v13; // rdx
  unsigned int v14; // r9d
  __int64 v15; // rax
  __int64 v16; // r8
  unsigned int v18; // [rsp+20h] [rbp-29h] BYREF
  void *v19[2]; // [rsp+28h] [rbp-21h] BYREF
  __int64 v20; // [rsp+38h] [rbp-11h]
  unsigned __int64 v21; // [rsp+40h] [rbp-9h]
  wchar_t String[8]; // [rsp+48h] [rbp-1h] BYREF
  __int128 v23; // [rsp+58h] [rbp+Fh]
  void *v24[4]; // [rsp+68h] [rbp+1Fh] BYREF

  StringRawBuffer = (WCHAR *)WindowsGetStringRawBuffer(a2, 0LL);
  std::wstring::wstring((char **)v19, StringRawBuffer);
  v6 = (WCHAR *)WindowsGetStringRawBuffer(a3, 0LL);
  std::wstring::wstring((char **)v24, v6);
  v7 = -1LL;
  if ( std::wstring::find(v19, L"RegistryKeyNameForLastPositionX:", 0LL) != -1 )
  {
    *(_OWORD *)String = 0LL;
    v23 = 0LL;
    std::_String_val<std::_Simple_types<unsigned short>>::_Check_offset((__int64)v19, 0x20uLL);
    v8 = -1LL;
    if ( v20 != 31 )
      v8 = v20 - 32;
    v9 = v19;
    if ( v21 > 7 )
      v9 = (void **)v19[0];
    std::wstring::_Construct<1,unsigned short const *>((char **)String, v9 + 8, v8);
    v18 = std::stoul(String);
    std::wstring::_Tidy_deallocate((void **)String);
    v11 = std::map<unsigned int,std::wstring>::_Try_emplace<unsigned int const &,>(this + 7, (__int64)String, &v18, v10);
    std::wstring::operator=((char *)(*(_QWORD *)v11 + 40LL), (char *)v24, v12);
  }
  if ( std::wstring::find(v19, L"RegistryKeyNameForLastPositionY:", 0LL) != -1 )
  {
    *(_OWORD *)String = 0LL;
    v23 = 0LL;
    std::_String_val<std::_Simple_types<unsigned short>>::_Check_offset((__int64)v19, 0x20uLL);
    if ( v20 != 31 )
      v7 = v20 - 32;
    v13 = v19;
    if ( v21 > 7 )
      v13 = (void **)v19[0];
    std::wstring::_Construct<1,unsigned short const *>((char **)String, v13 + 8, v7);
    v18 = std::stoul(String);
    std::wstring::_Tidy_deallocate((void **)String);
    v15 = std::map<unsigned int,std::wstring>::_Try_emplace<unsigned int const &,>(this + 9, (__int64)String, &v18, v14);
    std::wstring::operator=((char *)(*(_QWORD *)v15 + 40LL), (char *)v24, v16);
  }
  std::wstring::_Tidy_deallocate(v24);
  std::wstring::_Tidy_deallocate(v19);
  return 0LL;
}
