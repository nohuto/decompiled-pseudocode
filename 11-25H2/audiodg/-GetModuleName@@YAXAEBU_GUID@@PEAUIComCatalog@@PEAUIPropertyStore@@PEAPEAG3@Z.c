/*
 * XREFs of ?GetModuleName@@YAXAEBU_GUID@@PEAUIComCatalog@@PEAUIPropertyStore@@PEAPEAG3@Z @ 0x140016868
 * Callers:
 *     ?GetModuleInfo@@YAXPEBGW4APO_TYPE@@AEBU_GUID@@PEAUIComCatalog@@PEAPEAG44PEA_NPEAUIPropertyStore@@@Z @ 0x140016780 (-GetModuleInfo@@YAXPEBGW4APO_TYPE@@AEBU_GUID@@PEAUIComCatalog@@PEAPEAG44PEA_NPEAUIPropertyStore@.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400089C8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x140016B60 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ??$_Traits_find_last_of@U?$char_traits@G@std@@$00@std@@YA_KQEBG_K101@Z @ 0x140016C18 (--$_Traits_find_last_of@U-$char_traits@G@std@@$00@std@@YA_KQEBG_K101@Z.c)
 *     ?substr@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV12@_K0@Z @ 0x140016D5C (-substr@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV12@_K0@Z.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1400178FC (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x1400181E8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x140018224 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x140018588 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14001D1E8 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x14002CD90 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x14002DEC8 (--0last_error_context@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall GetModuleName(
        const struct _GUID *a1,
        struct IComCatalog *a2,
        struct IPropertyStore *a3,
        unsigned __int16 **a4,
        unsigned __int16 **a5)
{
  __int64 v8; // rax
  const char *v9; // r9
  __int64 v10; // r8
  int v11; // r8d
  int v12; // r9d
  __int128 *v13; // rcx
  __int64 v14; // rax
  _QWORD *v15; // rax
  int v16; // eax
  __int128 *v17; // rdx
  unsigned __int16 *v18; // rax
  unsigned __int16 *v19; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v20; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v21; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+48h] [rbp-C0h] BYREF
  PROPVARIANT pvar[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+60h] [rbp-A8h]
  __int128 v25; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v26; // [rsp+78h] [rbp-90h]
  unsigned __int64 v27; // [rsp+80h] [rbp-88h]
  __int128 v28; // [rsp+88h] [rbp-80h] BYREF
  int v29; // [rsp+98h] [rbp-70h]
  _QWORD v30[3]; // [rsp+A0h] [rbp-68h] BYREF
  unsigned __int64 v31; // [rsp+B8h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+0h]

  try
  {
    v25 = 0uLL;
    v28 = (__int128)*a1;
    v29 = 100;
    v20 = 0LL;
    *(_OWORD *)pvar = 0LL;
    v24 = 0LL;
    if ( ((int (__fastcall *)(struct IPropertyStore *, __int128 *, PROPVARIANT *))a3->lpVtbl->GetValue)(a3, &v28, pvar) >= 0
      && LOWORD(pvar[0]) == 31 )
    {
      v20 = 0LL;
      v16 = CoRegisterDeviceCatalog(pvar[1], &v20);
      if ( v16 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x31,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodgtelemetry.cpp",
          (const char *)(unsigned int)v16);
      std::wstring::wstring(&v25, pvar[1]);
      v17 = &v25;
      if ( v27 > 7 )
        v17 = (__int128 *)v25;
      wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
        &v19,
        v17);
      v18 = v19;
      if ( v19 )
      {
        v19 = 0LL;
        *a5 = v18;
      }
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v19);
      std::wstring::~wstring(&v25);
    }
    v22 = 0LL;
    v8 = *(_QWORD *)a2;
    v21 = 0LL;
    if ( (*(int (__fastcall **)(struct IComCatalog *, const struct _GUID *, GUID *, __int64 *))(v8 + 24))(
           a2,
           a1,
           &GUID_000001e2_0000_0000_c000_000000000046,
           &v21) >= 0
      && (*(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v21 + 32LL))(v21, 1LL, &v22) >= 0 )
    {
      v25 = 0LL;
      v26 = 0LL;
      v27 = 0LL;
      v10 = -1LL;
      do
        ++v10;
      while ( *(_WORD *)(v22 + 2 * v10) );
      std::wstring::_Construct<1,unsigned short const *>(&v25, v22);
      v13 = &v25;
      if ( v27 > 7 )
        LODWORD(v13) = v25;
      v14 = std::_Traits_find_last_of<std::char_traits<unsigned short>,1>((_DWORD)v13, v26, v11, v12, 2LL);
      v15 = (_QWORD *)std::wstring::substr(&v25, v30, v14 + 1);
      if ( v15[3] > 7uLL )
        v15 = (_QWORD *)*v15;
      wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
        &v19,
        v15);
      if ( v31 > 7 )
        std::_Deallocate<16,0>(v30[0], 2 * v31 + 2);
      if ( v19 )
        *a4 = v19;
      if ( v27 > 7 )
        std::_Deallocate<16,0>(v25, 2 * v27 + 2);
    }
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    PropVariantClear(pvar);
    if ( v20 )
      CoRevokeDeviceCatalog(v20);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x47,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodgtelemetry.cpp",
      v9);
  }
}
