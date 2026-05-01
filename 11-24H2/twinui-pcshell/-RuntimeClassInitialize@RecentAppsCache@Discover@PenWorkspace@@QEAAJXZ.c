/*
 * XREFs of ?RuntimeClassInitialize@RecentAppsCache@Discover@PenWorkspace@@QEAAJXZ @ 0x180064130
 * Callers:
 *     ??$MakeAndInitialize@VRecentAppsCache@Discover@PenWorkspace@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAVRecentAppsCache@Discover@PenWorkspace@@@Z @ 0x180063F24 (--$MakeAndInitialize@VRecentAppsCache@Discover@PenWorkspace@@V123@$$V@Details@WRL@Microsoft@@YAJ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18004A9BC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180062C4C (--4-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802916C8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHKEY__@@PEBG1@Z @ 0x1803F3174 (-Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHK.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::RuntimeClassInitialize(void **this)
{
  const char *v2; // r9
  unsigned int LastError; // ebx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HANDLE hObject; // [rsp+40h] [rbp+8h] BYREF

  if ( this )
    (*((void (__fastcall **)(void **))*this + 1))(this);
  hObject = CreateThread(0LL, 0LL, PenWorkspace::Discover::RecentAppsCache::s_ProcessQueueThreadProc, this, 0, 0LL);
  wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::operator=(
    this + 18,
    &hObject);
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  if ( (((unsigned __int64)this[18] + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    hObject = 0LL;
    v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize(this + 26);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x84,
        (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)v5);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&hObject);
    return 0LL;
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x7F,
                  (unsigned int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
                  v2);
    (*((void (__fastcall **)(void **))*this + 2))(this);
    return LastError;
  }
}
