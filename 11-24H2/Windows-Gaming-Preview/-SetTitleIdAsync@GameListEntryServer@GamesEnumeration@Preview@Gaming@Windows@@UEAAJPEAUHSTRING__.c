/*
 * XREFs of ?SetTitleIdAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIAsyncAction@Foundation@5@@Z @ 0x18002F640
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008BC4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000EA60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@Ga.c)
 *     Windows::Internal::MakeAsyncAction_Microsoft::WRL::DisableCausality_Windows::Internal::ComTaskPoolHandler__lambda_03439e650b830430b1a78af8029ec968___ @ 0x180024434 (Windows--Internal--MakeAsyncAction_Microsoft--WRL--DisableCausality_Windows--Internal--ComTaskPo.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::SetTitleIdAsync(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this,
        HSTRING a2,
        struct Windows::Foundation::IAsyncAction **a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  HRESULT v8; // eax
  volatile signed __int64 *v9; // rbx
  signed __int64 v10; // rcx
  bool v11; // zf
  signed __int64 v12; // rax
  signed __int32 v13; // eax
  HSTRING v14; // r8
  signed __int64 v15; // rcx
  signed __int64 v16; // rax
  signed __int32 v17; // eax
  int v18; // edi
  _DWORD v20[4]; // [rsp+20h] [rbp-30h] BYREF
  char *v21; // [rsp+30h] [rbp-20h] BYREF
  volatile signed __int64 *v22; // [rsp+38h] [rbp-18h]
  HSTRING v23; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  HSTRING newString; // [rsp+70h] [rbp+20h] BYREF

  if ( !a3 )
  {
    v6 = -2147467261;
    v7 = 1574LL;
LABEL_30:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)v6);
    return v6;
  }
  *a3 = 0LL;
  if ( WindowsGetStringLen(a2) >= 0x104 )
  {
    v6 = -2147024809;
    v7 = 1578LL;
    goto LABEL_30;
  }
  WindowsDeleteString(0LL);
  newString = 0LL;
  v8 = WindowsDuplicateString(a2, &newString);
  v6 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x62D,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v8);
    WindowsDeleteString(newString);
    return v6;
  }
  v9 = (volatile signed __int64 *)((char *)this - 16);
  if ( this != (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)16 )
  {
    v10 = *((_QWORD *)v9 + 17);
    while ( v10 >= 0 )
    {
      if ( (_DWORD)v10 != 0x7FFFFFFF )
      {
        v12 = _InterlockedCompareExchange64(v9 + 17, v10 + 1, v10);
        v11 = v10 == v12;
        v10 = v12;
        if ( !v11 )
          continue;
      }
      goto LABEL_14;
    }
    do
      v13 = *(_DWORD *)(2 * v10 + 0x10);
    while ( v13 != 0x7FFFFFFF
         && v13 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v10 + 16), v13 + 1, v13) );
  }
LABEL_14:
  v14 = newString;
  newString = 0LL;
  v21 = (char *)this - 16;
  v22 = (volatile signed __int64 *)((char *)this - 16);
  if ( this != (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)16 )
  {
    v15 = *((_QWORD *)v9 + 17);
    while ( v15 >= 0 )
    {
      if ( (_DWORD)v15 != 0x7FFFFFFF )
      {
        v16 = _InterlockedCompareExchange64(v9 + 17, v15 + 1, v15);
        v11 = v15 == v16;
        v15 = v16;
        if ( !v11 )
          continue;
      }
      goto LABEL_22;
    }
    do
      v17 = *(_DWORD *)(2 * v15 + 0x10);
    while ( v17 != 0x7FFFFFFF
         && v17 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v15 + 16), v17 + 1, v17) );
  }
LABEL_22:
  v20[2] = 0;
  v23 = v14;
  v20[0] = 3;
  v20[1] = 128;
  v18 = Windows::Internal::MakeAsyncAction_Microsoft::WRL::DisableCausality_Windows::Internal::ComTaskPoolHandler__lambda_03439e650b830430b1a78af8029ec968___(
          (__int64)v20,
          (__int64)a3,
          (__int64)v14,
          &v21);
  if ( v22 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v22);
  if ( v18 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x641,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v18);
  if ( v9 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v9);
  WindowsDeleteString(newString);
  return (unsigned int)v18;
}
