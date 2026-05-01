/*
 * XREFs of ?UnmergeEntryAsync@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGameListEntry@2345@PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x180021EC0
 * Callers:
 *     ?UnmergeEntryAsync@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGameListEntry@2345@PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x180021EA0 (-UnmergeEntryAsync@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGame.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B04 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry______Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry______Windows::Internal::ComTaskPoolHandler__lambda_88afd6bbfe2a61dd98f4359340091e1e___ @ 0x180017764 (Windows--Internal--MakeAsyncOperation_Windows--Internal--CMarshaledInterfaceResult_Windows--Foun.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameListStatics@GamesEnumeration@Preview@Gaming@Windows@@UIGameListStatics2@5678@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800209B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameListStatics@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::UnmergeEntryAsync(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rdx
  volatile signed __int64 *v8; // rbx
  signed __int64 v9; // rcx
  bool v10; // zf
  signed __int64 v11; // rax
  signed __int32 v12; // eax
  __int64 v13; // r8
  signed __int64 v14; // rcx
  signed __int64 v15; // rax
  signed __int32 v16; // eax
  int v17; // esi
  int v18[4]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v19; // [rsp+30h] [rbp-18h] BYREF
  volatile signed __int64 *v20; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( !a2 )
  {
    v6 = 597LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( !a3 )
  {
    v6 = 598LL;
    goto LABEL_3;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  v8 = (volatile signed __int64 *)(a1 - 16);
  if ( v8 )
  {
    v9 = *((_QWORD *)v8 + 4);
    while ( v9 >= 0 )
    {
      if ( (_DWORD)v9 != 0x7FFFFFFF )
      {
        v11 = _InterlockedCompareExchange64(v8 + 4, v9 + 1, v9);
        v10 = v9 == v11;
        v9 = v11;
        if ( !v10 )
          continue;
      }
      goto LABEL_14;
    }
    do
      v12 = *(_DWORD *)(2 * v9 + 0x10);
    while ( v12 != 0x7FFFFFFF
         && v12 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v9 + 16), v12 + 1, v12) );
  }
LABEL_14:
  v19 = a2;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  v20 = v8;
  if ( v8 )
  {
    v14 = *((_QWORD *)v8 + 4);
    while ( v14 >= 0 )
    {
      if ( (_DWORD)v14 != 0x7FFFFFFF )
      {
        v15 = _InterlockedCompareExchange64(v8 + 4, v14 + 1, v14);
        v10 = v14 == v15;
        v14 = v15;
        if ( !v10 )
          continue;
      }
      goto LABEL_22;
    }
    do
      v16 = *(_DWORD *)(2 * v14 + 0x10);
    while ( v16 != 0x7FFFFFFF
         && v16 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v14 + 16), v16 + 1, v16) );
  }
LABEL_22:
  v18[0] = 3;
  v18[1] = 128;
  v18[2] = 0;
  v17 = Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry______Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry______Windows::Internal::ComTaskPoolHandler__lambda_88afd6bbfe2a61dd98f4359340091e1e___(
          (__int64)v18,
          a3,
          v13,
          (char *)&v19);
  if ( v20 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>::Release(v20);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v17 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2AB,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v17);
  if ( v8 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>::Release(v8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
  return (unsigned int)v17;
}
