/*
 * XREFs of ?GetModuleVersion@@YAXPEBGPEAPEAG@Z @ 0x1400448B4
 * Callers:
 *     ?GetModuleInfo@@YAXPEBGW4APO_TYPE@@AEBU_GUID@@PEAUIComCatalog@@PEAPEAG44PEA_NPEAUIPropertyStore@@@Z @ 0x140016478 (-GetModuleInfo@@YAXPEBGW4APO_TYPE@@AEBU_GUID@@PEAUIComCatalog@@PEAPEAG44PEA_NPEAUIPropertyStore@.c)
 *     DoLoadedModulesContainBlockedListAPO @ 0x140072320 (DoLoadedModulesContainBlockedListAPO.c)
 * Callees:
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x140016858 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14001CEE8 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x140023638 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400590C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400593D0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x14005A0E4 (memset_0.c)
 */

void __fastcall GetModuleVersion(LPCWSTR lptstrFilename, unsigned __int16 **a2)
{
  DWORD FileVersionInfoSizeW; // eax
  DWORD v5; // esi
  void *v6; // rax
  void *v7; // rbx
  __int64 v8; // r8
  const char *v9; // r9
  unsigned __int16 *v10; // rax
  int v11; // [rsp+20h] [rbp-99h]
  int v12; // [rsp+28h] [rbp-91h]
  int v13; // [rsp+30h] [rbp-89h]
  unsigned int puLen; // [rsp+40h] [rbp-79h] BYREF
  unsigned __int16 *v15; // [rsp+48h] [rbp-71h] BYREF
  LPVOID lpBuffer; // [rsp+50h] [rbp-69h] BYREF
  unsigned __int16 v17[64]; // [rsp+60h] [rbp-59h] BYREF

  if ( lptstrFilename )
  {
    FileVersionInfoSizeW = GetFileVersionInfoSizeW(lptstrFilename, 0LL);
    v5 = FileVersionInfoSizeW;
    if ( FileVersionInfoSizeW )
    {
      v6 = operator new[](FileVersionInfoSizeW, (const struct std::nothrow_t *)&std::nothrow);
      v7 = v6;
      if ( v6 )
      {
        memset_0(v6, 0, v5);
        if ( GetFileVersionInfoW(lptstrFilename, 0, v5, v7) )
        {
          lpBuffer = 0LL;
          puLen = 0;
          if ( VerQueryValueW(v7, L"\\", &lpBuffer, &puLen) )
          {
            if ( puLen )
            {
              memset_0(v17, 0, sizeof(v17));
              v13 = *((unsigned __int16 *)lpBuffer + 6);
              v12 = *((unsigned __int16 *)lpBuffer + 7);
              v11 = *((unsigned __int16 *)lpBuffer + 4);
              if ( (int)StringCchPrintfW(v17, 64LL, L"%d.%d.%d.%d", *((unsigned __int16 *)lpBuffer + 5), v11, v12, v13) >= 0 )
              {
                wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
                  &v15,
                  (char *)v17,
                  v8,
                  v9);
                v10 = v15;
                if ( v15 )
                {
                  v15 = 0LL;
                  *a2 = v10;
                }
                wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&v15);
              }
            }
          }
        }
        operator delete(v7);
      }
    }
  }
}
