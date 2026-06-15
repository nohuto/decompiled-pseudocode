/*
 * XREFs of ?CrackPartGlobalId@@YAJPEBGPEAPEAGPEAI@Z @ 0x18012D930
 * Callers:
 *     _lambda_3a98f918f1a658d5ea4285bc11deb959_::operator() @ 0x180101124 (_lambda_3a98f918f1a658d5ea4285bc11deb959_--operator().c)
 *     ?FindMuteControlForEndpoint@CMuteHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z @ 0x18010161C (-FindMuteControlForEndpoint@CMuteHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@AEAV-$unique_any_.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180019F28 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x18001B2E0 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ??$_Traits_rfind_ch@U?$char_traits@G@std@@@std@@YA_KQEBG_K1G@Z @ 0x1800E2E14 (--$_Traits_rfind_ch@U-$char_traits@G@std@@@std@@YA_KQEBG_K1G@Z.c)
 */

__int64 __fastcall CrackPartGlobalId(char *a1, unsigned __int16 **a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rdx
  unsigned __int64 v8; // rax
  const char *v9; // r9
  unsigned __int64 v10; // rbp
  unsigned __int16 *v11; // rsi
  __int64 v12; // rdx
  int v13; // ecx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned __int16 *v16; // [rsp+50h] [rbp+8h] BYREF
  wchar_t *EndPtr; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0;
  *a2 = 0LL;
  v6 = -1LL;
  do
    ++v6;
  while ( *(_WORD *)&a1[2 * v6] );
  v8 = std::_Traits_rfind_ch<std::char_traits<unsigned short>>(a1, v6, (__int64)a3, 47);
  v10 = v8;
  if ( v8 != -1LL )
  {
    wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
      &v16,
      a1,
      v8,
      v9);
    v11 = v16;
    if ( v16 )
    {
      EndPtr = 0LL;
      v13 = wcstol((const wchar_t *)&a1[2 * v10 + 2], &EndPtr, 16);
      if ( ((v13 - 0x7FFFFFFF) & 0xFFFFFFFE) != 0 )
      {
        *a2 = v11;
        *a3 = v13;
        v16 = 0LL;
        goto LABEL_11;
      }
      v3 = -2147467259;
      v12 = 27LL;
    }
    else
    {
      v3 = -2147024882;
      v12 = 23LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\devicetopologyutil.cpp",
      (const char *)v3);
LABEL_11:
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v16);
    return v3;
  }
  v3 = -2147024773;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x14,
    (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\devicetopologyutil.cpp",
    (const char *)0x8007007BLL);
  return v3;
}
