/*
 * XREFs of _lambda_d5146fe69570c6dcc5cf92f3d06ab487_::operator() @ 0x1800119BC
 * Callers:
 *     ?get_DisplayName@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180013AF0 (-get_DisplayName@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B04 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001077C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetFileDescription@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJAEBV?$ComPtr@UIStorageItemProperties@Storage@Windows@@@WRL@Microsoft@@PEAPEAUHSTRING__@@@Z @ 0x180012F34 (-_GetFileDescription@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@AEA.c)
 *     ?_GetFileProperties@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJAEAV?$ComPtr@UIStorageItemProperties@Storage@Windows@@@WRL@Microsoft@@@Z @ 0x180013844 (-_GetFileProperties@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@AEAA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_d5146fe69570c6dcc5cf92f3d06ab487_::operator()(__int64 a1)
{
  int FileProperties; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  __int64 v5; // rcx
  int FileDescription; // eax
  int v8; // eax
  int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+8h]
  __int64 v13; // [rsp+30h] [rbp+10h] BYREF

  v13 = 0LL;
  FileProperties = Windows::Gaming::Preview::GamesEnumeration::GameConfigAppDisplayInfoServer::_GetFileProperties(
                     *(_QWORD *)a1,
                     &v13);
  v4 = FileProperties;
  if ( FileProperties >= 0 )
  {
    FileDescription = Windows::Gaming::Preview::GamesEnumeration::GameConfigAppDisplayInfoServer::_GetFileDescription(
                        v3,
                        &v13,
                        **(_QWORD **)(a1 + 8));
    if ( FileDescription >= 0 )
      goto LABEL_13;
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xE6,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)(unsigned int)FileDescription);
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 72LL))(v13, **(_QWORD **)(a1 + 8));
    v9 = v8;
    if ( v8 >= 0 )
      v9 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x182,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
        (const char *)(unsigned int)v8);
    if ( v9 >= 0 )
    {
LABEL_13:
      v11 = v13;
      if ( v13 )
      {
        v13 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xEB,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
        (const char *)(unsigned int)v9);
      v10 = v13;
      if ( v13 )
      {
        v13 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      return 2147500037LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE4,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)(unsigned int)FileProperties);
    v5 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    return v4;
  }
}
