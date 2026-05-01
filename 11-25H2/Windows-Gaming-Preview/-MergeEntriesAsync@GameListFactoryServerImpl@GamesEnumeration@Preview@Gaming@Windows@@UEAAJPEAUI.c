/*
 * XREFs of ?MergeEntriesAsync@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGameListEntry@2345@0PEAPEAU?$IAsyncOperation@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Foundation@5@@Z @ 0x18001F090
 * Callers:
 *     ?MergeEntriesAsync@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGameListEntry@2345@0PEAPEAU?$IAsyncOperation@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Foundation@5@@Z @ 0x18001F070 (-MergeEntriesAsync@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGame.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B04 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Gaming::Preview::GamesEnumeration::IGameListEntry__Windows::Gaming::Preview::GamesEnumeration::GameListEntry___Windows::Internal::ComTaskPoolHandler__lambda_c7e28edb760347053732171cef665d5d___ @ 0x18001792C (Windows--Internal--MakeAsyncOperation_Windows--Internal--CMarshaledInterfaceResult_Windows--Gami.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameListStatics@GamesEnumeration@Preview@Gaming@Windows@@UIGameListStatics2@5678@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800209B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameListStatics@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::MergeEntriesAsync(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v8; // rdx
  __int64 v10; // rbx
  signed __int64 v11; // rcx
  bool v12; // zf
  signed __int64 v13; // rax
  signed __int32 v14; // eax
  __int64 v15; // r8
  signed __int64 v16; // rcx
  signed __int64 v17; // rax
  signed __int32 v18; // eax
  int v19; // edi
  int v20[4]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v21; // [rsp+30h] [rbp-28h] BYREF
  __int64 v22; // [rsp+38h] [rbp-20h]
  __int64 v23; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( !a2 )
  {
    v8 = 463LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( !a3 )
  {
    v8 = 464LL;
    goto LABEL_3;
  }
  if ( !a4 )
  {
    v8 = 465LL;
    goto LABEL_3;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  v10 = a1 - 16;
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 32);
    while ( v11 >= 0 )
    {
      if ( (_DWORD)v11 != 0x7FFFFFFF )
      {
        v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 32), v11 + 1, v11);
        v12 = v11 == v13;
        v11 = v13;
        if ( !v12 )
          continue;
      }
      goto LABEL_16;
    }
    do
      v14 = *(_DWORD *)(2 * v11 + 0x10);
    while ( v14 != 0x7FFFFFFF
         && v14 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v11 + 16), v14 + 1, v14) );
  }
LABEL_16:
  v21 = a2;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  v22 = a3;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  v23 = v10;
  if ( v10 )
  {
    v16 = *(_QWORD *)(v10 + 32);
    while ( v16 >= 0 )
    {
      if ( (_DWORD)v16 != 0x7FFFFFFF )
      {
        v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 32), v16 + 1, v16);
        v12 = v16 == v17;
        v16 = v17;
        if ( !v12 )
          continue;
      }
      goto LABEL_24;
    }
    do
      v18 = *(_DWORD *)(2 * v16 + 0x10);
    while ( v18 != 0x7FFFFFFF
         && v18 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v16 + 16), v18 + 1, v18) );
  }
LABEL_24:
  v20[0] = 3;
  v20[1] = 128;
  v20[2] = 0;
  v19 = Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Gaming::Preview::GamesEnumeration::IGameListEntry__Windows::Gaming::Preview::GamesEnumeration::GameListEntry___Windows::Internal::ComTaskPoolHandler__lambda_c7e28edb760347053732171cef665d5d___(
          (__int64)v20,
          a4,
          v15,
          (char *)&v21);
  if ( v23 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>::Release(v23);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  if ( v19 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x213,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v19);
  if ( v10 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>::Release(v10);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 16LL))(a3);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
  return (unsigned int)v19;
}
