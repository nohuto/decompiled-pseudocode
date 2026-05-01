/*
 * XREFs of ?SaveDataToDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x18004A9EC
 * Callers:
 *     ?ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ @ 0x18004C164 (-ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18004A9BC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SaveDataToJson@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAPEAUIJsonObject@Json@Data@Windows@@@Z @ 0x18004AE74 (-SaveDataToJson@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAPEAUIJsonObject@Json@Data@Windows.c)
 *     ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x18005D41C (--1-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     ??1?$CCoTaskMemPtr@E@@QEAA@XZ @ 0x18022581C (--1-$CCoTaskMemPtr@E@@QEAA@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802916C8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::SaveDataToDisk(
        PenWorkspace::Discover::RecentAppsCache *this)
{
  int v2; // eax
  unsigned int LastError; // ebx
  struct Windows::Data::Json::IJsonObject *v4; // rbx
  __int64 (__fastcall *v5)(struct Windows::Data::Json::IJsonObject *, GUID *, __int64 *); // rdi
  int v6; // eax
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, HSTRING *); // rdi
  int v9; // eax
  HANDLE FileW; // rbx
  __int64 v11; // rsi
  PCWSTR StringRawBuffer; // rax
  void *v13; // rdi
  const WCHAR *v14; // rax
  __int64 v15; // rcx
  struct Windows::Data::Json::IJsonObject *v16; // rcx
  struct Windows::Data::Json::IJsonObject *v18; // rcx
  __int64 v19; // rdx
  const char *v20; // r9
  const char *v21; // r9
  HSTRING string; // [rsp+40h] [rbp-C0h] BYREF
  struct Windows::Data::Json::IJsonObject *v23; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE v25; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v26[2]; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR Dst[264]; // [rsp+70h] [rbp-90h] BYREF
  WCHAR FileName[264]; // [rsp+280h] [rbp+180h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+4B8h] [rbp+3B8h]

  v23 = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v23);
  v2 = PenWorkspace::Discover::RecentAppsCache::SaveDataToJson(this, &v23);
  LastError = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2E7,
      (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)v2);
    v18 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(struct Windows::Data::Json::IJsonObject *))(*(_QWORD *)v18 + 16LL))(v18);
    }
    return LastError;
  }
  v24 = 0LL;
  v4 = v23;
  v5 = **(__int64 (__fastcall ***)(struct Windows::Data::Json::IJsonObject *, GUID *, __int64 *))v23;
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v24);
  v6 = v5(v4, &GUID_a3219ecb_f0b3_4dcd_beee_19d48cd3ed1e, &v24);
  LastError = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2EA,
      (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)v6);
LABEL_35:
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v24);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v23);
    return LastError;
  }
  string = 0LL;
  v7 = v24;
  v8 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v24 + 56LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v9 = v8(v7, &string);
  LastError = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2ED,
      (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)v9);
LABEL_25:
    WindowsDeleteString(string);
LABEL_34:
    string = 0LL;
    goto LABEL_35;
  }
  if ( !ExpandEnvironmentStringsW(L"%LOCALAPPDATA%\\Microsoft\\PenWorkspace", Dst, 0x104u) )
  {
    v19 = 752LL;
LABEL_28:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)0x80004005LL);
    WindowsDeleteString(string);
    LastError = -2147467259;
    goto LABEL_34;
  }
  if ( !ExpandEnvironmentStringsW(L"%LOCALAPPDATA%\\Microsoft\\PenWorkspace\\DiscoverCacheData.dat", FileName, 0x104u) )
  {
    v19 = 755LL;
    goto LABEL_28;
  }
  if ( GetFileAttributesW(Dst) == -1 && !CreateDirectoryW(Dst, 0LL) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x2F9,
                  (unsigned int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
                  v20);
    goto LABEL_25;
  }
  FileW = CreateFileW(FileName, 0x40000000u, 2u, 0LL, 2u, 0x8000080u, 0LL);
  v25 = FileW;
  v11 = -1LL;
  if ( FileW == (HANDLE)-1LL )
  {
    LastError = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2FD,
      (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)0x80070490LL);
LABEL_24:
    wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v25);
    goto LABEL_25;
  }
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  do
    ++v11;
  while ( StringRawBuffer[v11] );
  v13 = CoTaskMemAlloc((unsigned int)v11);
  v26[0] = v13;
  v14 = WindowsGetStringRawBuffer(string, 0LL);
  if ( WideCharToMultiByte(0xFDE9u, 0, v14, v11, (LPSTR)v13, v11, 0LL, 0LL) )
  {
    if ( WriteFile(FileW, v13, v11, 0LL, 0LL) )
    {
      CCoTaskMemPtr<unsigned char>::~CCoTaskMemPtr<unsigned char>(v26);
      wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v25);
      WindowsDeleteString(string);
      LastError = 0;
      goto LABEL_34;
    }
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x303,
                  (unsigned int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
                  v21);
    CCoTaskMemPtr<unsigned char>::~CCoTaskMemPtr<unsigned char>(v26);
    goto LABEL_24;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x301,
    (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
    (const char *)0x80004005LL);
  CoTaskMemFree(v13);
  if ( FileW )
    CloseHandle(FileW);
  WindowsDeleteString(string);
  string = 0LL;
  v15 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v16 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(struct Windows::Data::Json::IJsonObject *))(*(_QWORD *)v16 + 16LL))(v16);
  }
  return 2147500037LL;
}
