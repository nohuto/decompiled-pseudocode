/*
 * XREFs of _anonymous_namespace_::CreateTemporaryFile @ 0x1806AC808
 * Callers:
 *     _anonymous_namespace_::CreateTemporaryLogoFile @ 0x1806ACB64 (_anonymous_namespace_--CreateTemporaryLogoFile.c)
 * Callees:
 *     ?Provider@PinManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ @ 0x180084D70 (-Provider@PinManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ??$?0V?$basic_string_view@GU?$char_traits@G@std@@@std@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@G@1@@Z @ 0x180090A78 (--$-0V-$basic_string_view@GU-$char_traits@G@std@@@std@@$0A@@-$basic_string@GU-$char_traits@G@std.c)
 *     ??Kfilesystem@std@@YA?AVpath@01@AEBV201@0@Z @ 0x180090AC8 (--Kfilesystem@std@@YA-AVpath@01@AEBV201@0@Z.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEBG$$QEAV10@@Z @ 0x180096F40 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_tra_ea_180096F40.c)
 *     ??$make_unique_string@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180097B94 (--$make_unique_string@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTa.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18018F764 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801D9368 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Convert_stringoid_to_wide@U_Normal_conversion@filesystem@std@@@filesystem@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@V?$basic_string_view@GU?$char_traits@G@std@@@1@U_Normal_conversion@01@@Z @ 0x1803D2D04 (--$_Convert_stringoid_to_wide@U_Normal_conversion@filesystem@std@@@filesystem@std@@YA-AV-$basic_.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall anonymous_namespace_::CreateTemporaryFile(__int64 a1, void **a2)
{
  unsigned int TempPath2W; // ebx
  const char *v5; // r9
  const char *v6; // r9
  HRESULT v7; // eax
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rcx
  const WCHAR *v11; // rcx
  char *FileW; // rbx
  const char *v13; // r9
  LPCWSTR *v14; // rsi
  const struct _tlgProvider_t *v15; // rax
  __int64 v16; // r9
  int dwCreationDisposition; // [rsp+20h] [rbp-E0h]
  __int64 v19; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v20; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v21; // [rsp+60h] [rbp-A0h]
  _QWORD v22[4]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v23[4]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v24[4]; // [rsp+B0h] [rbp-50h] BYREF
  LPVOID pv[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v26[2]; // [rsp+E0h] [rbp-20h] BYREF
  LPCWSTR lpFileName[2]; // [rsp+F0h] [rbp-10h] BYREF
  __m128i si128; // [rsp+100h] [rbp+0h]
  GUID pguid; // [rsp+110h] [rbp+10h] BYREF
  OLECHAR sz[40]; // [rsp+120h] [rbp+20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  v26[0] = a1;
  TempPath2W = GetTempPath2W(0LL, 0LL);
  if ( !TempPath2W )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x24,
      (int)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      v5);
  pv[0] = 0LL;
  wil::make_unique_string<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
    pv,
    0LL,
    TempPath2W);
  if ( !(unsigned int)GetTempPath2W(TempPath2W, pv[0]) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x27,
      (int)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      v6);
  v7 = CoCreateGuid(&pguid);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x2C,
      (int)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)(unsigned int)v7,
      dwCreationDisposition);
  if ( !StringFromGUID2(&pguid, sz, 39) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x2E,
      (int)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)0x8000FFFFLL,
      dwCreationDisposition);
  v8 = std::wstring::wstring(v24, a2);
  v9 = std::operator+<unsigned short>(v23, (__int64)sz, v8);
  *(_QWORD *)&v20 = 0LL;
  v21 = 0LL;
  v20 = *(_OWORD *)v9;
  v21 = *((_OWORD *)v9 + 1);
  v9[2] = 0LL;
  v9[3] = 7LL;
  *(_WORD *)v9 = 0;
  v26[0] = (__int64)pv[0];
  v10 = -1LL;
  do
    ++v10;
  while ( *((_WORD *)pv[0] + v10) );
  v26[1] = v10;
  std::filesystem::_Convert_stringoid_to_wide<std::filesystem::_Normal_conversion>(v22, (void **)v26);
  std::filesystem::operator/(lpFileName, (__int64)v22, &v20);
  std::wstring::_Tidy_deallocate((__int64)v22);
  std::wstring::_Tidy_deallocate((__int64)&v20);
  std::wstring::_Tidy_deallocate((__int64)v23);
  std::wstring::_Tidy_deallocate((__int64)v24);
  v11 = (const WCHAR *)lpFileName;
  if ( si128.m128i_i64[1] >= 8uLL )
    v11 = lpFileName[0];
  FileW = (char *)CreateFileW(v11, 0, 7u, 0LL, 1u, 0x100u, 0LL);
  v26[0] = (__int64)FileW;
  if ( (unsigned __int64)(FileW - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x34,
      (int)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      v13);
  v14 = lpFileName;
  if ( si128.m128i_i64[1] >= 8uLL )
    v14 = (LPCWSTR *)lpFileName[0];
  v15 = PinManagerTelemetry::Provider((__int64)retaddr);
  if ( *(_DWORD *)v15 > 5u )
  {
    v19 = 0x1000000LL;
    v26[0] = (__int64)v14;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
      (__int64)v15,
      (unsigned __int8 *)dword_180878713,
      0LL,
      v16,
      (const WCHAR **)v26,
      (__int64)&v19);
  }
  *(_QWORD *)a1 = FileW;
  *(_OWORD *)(a1 + 8) = *(_OWORD *)lpFileName;
  *(__m128i *)(a1 + 24) = si128;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(lpFileName[0]) = 0;
  std::wstring::_Tidy_deallocate((__int64)lpFileName);
  if ( pv[0] )
    CoTaskMemFree(pv[0]);
  return a1;
}
