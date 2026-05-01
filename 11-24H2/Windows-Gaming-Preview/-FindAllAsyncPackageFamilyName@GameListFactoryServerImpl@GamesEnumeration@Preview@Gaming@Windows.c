/*
 * XREFs of ?FindAllAsyncPackageFamilyName@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x18001C880
 * Callers:
 *     ?FindAllAsync@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x18001C840 (-FindAllAsync@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU-$IAsyn.c)
 *     ?FindAllAsync@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x18001C860 (-FindAllAsync@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU-$I.c)
 *     ?FindAllAsyncPackageFamilyName@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x18001C870 (-FindAllAsyncPackageFamilyName@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008BC4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry______Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry______Windows::Internal::ComTaskPoolHandler__lambda_f9c49c7b293ed1d0382b2914a11b6bf4___ @ 0x180017940 (Windows--Internal--MakeAsyncOperation_Windows--Internal--CMarshaledInterfaceResult__ea_180017940.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameListStatics@GamesEnumeration@Preview@Gaming@Windows@@UIGameListStatics2@5678@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180020B30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameListStatics@.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::FindAllAsyncPackageFamilyName(
        __int64 a1,
        HSTRING a2,
        __int64 a3)
{
  signed __int64 v6; // r9
  bool v7; // zf
  signed __int64 v8; // rax
  signed __int32 v9; // eax
  int v10; // edi
  __int64 v11; // r8
  __int64 v12; // rdx
  signed __int64 v13; // rcx
  signed __int64 v14; // rax
  signed __int32 v15; // eax
  HSTRING v16; // rax
  _DWORD v18[4]; // [rsp+20h] [rbp-40h] BYREF
  HSTRING newString; // [rsp+30h] [rbp-30h] BYREF
  __int16 v20; // [rsp+38h] [rbp-28h]
  __int64 v21; // [rsp+40h] [rbp-20h] BYREF
  __int64 v22; // [rsp+48h] [rbp-18h]
  HSTRING string; // [rsp+50h] [rbp-10h]
  char v24; // [rsp+58h] [rbp-8h]
  char v25; // [rsp+59h] [rbp-7h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  if ( a1 )
  {
    v6 = *(_QWORD *)(a1 + 32);
    while ( v6 >= 0 )
    {
      if ( (_DWORD)v6 != 0x7FFFFFFF )
      {
        v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32), v6 + 1, v6);
        v7 = v6 == v8;
        v6 = v8;
        if ( !v7 )
          continue;
      }
      goto LABEL_9;
    }
    do
      v9 = *(_DWORD *)(2 * v6 + 0x10);
    while ( v9 != 0x7FFFFFFF && v9 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v6 + 16), v9 + 1, v9) );
  }
LABEL_9:
  v20 = 0;
  WindowsDeleteString(0LL);
  newString = 0LL;
  v10 = WindowsDuplicateString(a2, &newString);
  if ( v10 < 0 )
  {
    v12 = 377LL;
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_24;
  }
  v21 = a1;
  v22 = a1;
  if ( a1 )
  {
    v13 = *(_QWORD *)(a1 + 32);
    while ( v13 >= 0 )
    {
      if ( (_DWORD)v13 != 0x7FFFFFFF )
      {
        v14 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32), v13 + 1, v13);
        v7 = v13 == v14;
        v13 = v14;
        if ( !v7 )
          continue;
      }
      goto LABEL_19;
    }
    do
      v15 = *(_DWORD *)(2 * v13 + 0x10);
    while ( v15 != 0x7FFFFFFF
         && v15 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v13 + 16), v15 + 1, v15) );
  }
LABEL_19:
  v16 = newString;
  newString = 0LL;
  v18[2] = 0;
  string = v16;
  v24 = 0;
  v25 = HIBYTE(v20) + 1;
  LOBYTE(v20) = 1;
  v18[0] = 3;
  v18[1] = 128;
  v10 = Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry______Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry______Windows::Internal::ComTaskPoolHandler__lambda_f9c49c7b293ed1d0382b2914a11b6bf4___(
          (__int64)v18,
          a3,
          v11,
          (__int64)&v21);
  WindowsDeleteString(string);
  if ( v22 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>::Release(v22);
  if ( v10 < 0 )
  {
    v12 = 394LL;
    goto LABEL_23;
  }
LABEL_24:
  WindowsDeleteString(newString);
  newString = 0LL;
  if ( a1 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>::Release(a1);
  return (unsigned int)v10;
}
