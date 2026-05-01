/*
 * XREFs of ?CheckKGLForGameFromGameConfig@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUGameConfig@ExecutionModel@@KPEAVHString@Wrappers@WRL@Microsoft@@@Z @ 0x18003AA78
 * Callers:
 *     ?GetKglDefaultsAsJson@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180036C8C (-GetKglDefaultsAsJson@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B04 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BuildJsonFromKglEntry@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJV?$ComPtr@UIGameEntry@KnownGameList@@@WRL@Microsoft@@PEAVHString@Wrappers@78@@Z @ 0x18003A70C (-BuildJsonFromKglEntry@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJV-$ComPtr@UIGam.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18003B330 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
int __fastcall Windows::Gaming::Preview::GamesEnumeration::KglDefaults::CheckKGLForGameFromGameConfig(
        RTL_SRWLOCK *this,
        struct ExecutionModel::GameConfig *a2,
        __int64 a3,
        HSTRING *a4)
{
  DWORD v7; // eax
  int v8; // eax
  unsigned int v9; // esi
  unsigned int v10; // edi
  __int64 v11; // rcx
  __int64 v12; // rcx
  _BOOL8 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v17; // rcx
  DWORD LastError; // eax
  __int64 v19; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v20[3]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]

  v7 = WaitForSingleObject(hEvent, 0x1F4u);
  if ( !v7 )
  {
    v20[1] = this + 2;
    AcquireSRWLockShared(this + 2);
    v19 = 0LL;
    v8 = (*(__int64 (__fastcall **)(PVOID, struct ExecutionModel::GameConfig *, __int64 *))(*(_QWORD *)this[1].Ptr + 64LL))(
           this[1].Ptr,
           a2,
           &v19);
    v9 = v8;
    v10 = -2147023728;
    if ( v8 == -2147023728 )
    {
      v11 = v19;
      if ( v19 )
      {
        v19 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
LABEL_15:
      ReleaseSRWLockShared(this + 2);
LABEL_16:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD0,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\kgldefaults.cpp",
        (const char *)v10);
      return v10;
    }
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xEE,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\kgldefaults.cpp",
        (const char *)(unsigned int)v8);
      v12 = v19;
      if ( v19 )
      {
        v19 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      ReleaseSRWLockShared(this + 2);
      v10 = v9;
      goto LABEL_16;
    }
    v13 = v19;
    v20[0] = v19;
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
    v14 = Windows::Gaming::Preview::GamesEnumeration::KglDefaults::BuildJsonFromKglEntry(v13, v20, a4);
    v10 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF0,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\kgldefaults.cpp",
        (const char *)(unsigned int)v14);
      v15 = v19;
      if ( v19 )
      {
        v19 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
      goto LABEL_15;
    }
    v17 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    ReleaseSRWLockShared(this + 2);
    return this[1].Ptr == 0LL ? 0x80004003 : 0;
  }
  if ( v7 == -1 )
  {
    LastError = GetLastError();
    if ( !LastError )
      return this[1].Ptr == 0LL ? 0x80004003 : 0;
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0xD4,
             (unsigned int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\kgldefaults.cpp",
             (const char *)LastError,
             v19);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD8,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\kgldefaults.cpp",
      (const char *)0x800705B4LL);
    return -2147023436;
  }
}
