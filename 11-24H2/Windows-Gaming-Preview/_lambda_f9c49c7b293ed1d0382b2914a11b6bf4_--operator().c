/*
 * XREFs of _lambda_f9c49c7b293ed1d0382b2914a11b6bf4_::operator() @ 0x18001AFF0
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_f9c49c7b293ed1d0382b2914a11b6bf4__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_______::Run @ 0x1800214F0 (Windows--Internal--COperationLambdaVar_0__lambda_f9c49c7b293ed1d0382b2914a11b6bf4___ea_1800214F0.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000221C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008BC4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$CreateExternalObjectVector@VGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@V?$AgileVector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@$0A@@Internal@Collections@Foundation@5@@detail@Internal@Collections@Foundation@Windows@@YAJP8IVectorStatics@Detail@234@EAAJPEBUObjectVectorInfo@6234@PEAPEAUIInspectable@@@ZPEAPEAV?$AgileVector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@$0A@@1234@@Z @ 0x18000BE30 (--$CreateExternalObjectVector@VGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@V-$AgileVe.c)
 *     ?RuntimeClassInitialize@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIUnifiedTileManager@Shim@UnifiedTile@Shell@WindowsInternal@@PEAUIGameListChangedEventHandler@2345@PEAUHSTRING__@@@Z @ 0x18000F0D4 (-RuntimeClassInitialize@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIUnif.c)
 *     ??0FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ @ 0x1800185E4 (--0FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIInspectable@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180020BF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIInspectable@@VFt.c)
 *     ?Set@?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Internal@Windows@@QEAAJPEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@3@@Z @ 0x180021BD4 (-Set@-$CMarshaledInterfaceResult@U-$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gamin.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall lambda_f9c49c7b293ed1d0382b2914a11b6bf4_::operator()(_QWORD *a1, __int64 a2)
{
  HSTRING v3; // r14
  __int64 v4; // rdi
  struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileManager *v5; // rsi
  Windows::Gaming::Preview::GamesEnumeration::FindAllOperation *v6; // rax
  int v7; // edi
  Windows::Gaming::Preview::GamesEnumeration::FindAllOperation *AllOperation; // rbx
  signed __int64 v9; // rcx
  unsigned int v10; // r8d
  bool v12; // zf
  signed __int64 v13; // rax
  signed __int32 v14; // eax
  int v15; // eax
  Windows::Gaming::Preview::GamesEnumeration::FindAllOperation *v16; // rcx
  _QWORD *v17; // rsi
  _QWORD *v18; // rbx
  int v19; // eax
  int v20; // eax
  Windows::Gaming::Preview::GamesEnumeration::FindAllOperation *v21; // rcx
  __int64 v22; // rcx
  Windows::Gaming::Preview::GamesEnumeration::FindAllOperation *v23; // rcx
  int v24; // eax
  unsigned int v25; // ebx
  __int64 v26; // rcx
  __int64 v27; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  Windows::Gaming::Preview::GamesEnumeration::FindAllOperation *v29; // [rsp+70h] [rbp+40h]
  Windows::Gaming::Preview::GamesEnumeration::FindAllOperation *v30; // [rsp+80h] [rbp+50h] BYREF
  __int64 v31; // [rsp+88h] [rbp+58h] BYREF

  v29 = 0LL;
  v3 = (HSTRING)a1[2];
  v4 = *(_QWORD *)(*a1 + 128LL);
  v5 = *(struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileManager **)(*a1 + 56LL);
  v6 = (Windows::Gaming::Preview::GamesEnumeration::FindAllOperation *)operator new(
                                                                         0xE8uLL,
                                                                         (const struct std::nothrow_t *)&std::nothrow);
  v30 = v6;
  if ( !v6 )
  {
    v7 = -2147024882;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18A,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_7;
  }
  AllOperation = Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::FindAllOperation(v6);
  v30 = 0LL;
  v7 = Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::RuntimeClassInitialize(
         AllOperation,
         v5,
         (struct Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler *)((v4 + 8) & -(__int64)(v4 != 0)),
         v3);
  if ( v7 < 0 )
  {
    if ( AllOperation )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,IInspectable,Microsoft::WRL::FtmBase>::Release(AllOperation);
    goto LABEL_6;
  }
  if ( AllOperation )
  {
    v9 = *((_QWORD *)AllOperation + 7);
    v10 = 0x7FFFFFFF;
    while ( v9 >= 0 )
    {
      if ( (_DWORD)v9 != 0x7FFFFFFF )
      {
        v13 = _InterlockedCompareExchange64((volatile signed __int64 *)AllOperation + 7, v9 + 1, v9);
        v12 = v9 == v13;
        v9 = v13;
        if ( !v12 )
          continue;
      }
      goto LABEL_18;
    }
    do
      v14 = *(_DWORD *)(2 * v9 + 0x10);
    while ( v14 != 0x7FFFFFFF
         && v14 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v9 + 16), v14 + 1, v14) );
  }
LABEL_18:
  v29 = AllOperation;
  if ( AllOperation )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,IInspectable,Microsoft::WRL::FtmBase>::Release(AllOperation);
  v31 = 0LL;
  v30 = 0LL;
  v15 = Windows::Foundation::Collections::Internal::detail::CreateExternalObjectVector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry,Windows::Foundation::Collections::Internal::AgileVector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,0>>(
          v9,
          &v30,
          v10);
  v7 = v15;
  if ( v15 >= 0 )
  {
    v17 = (_QWORD *)*((_QWORD *)AllOperation + 15);
    v18 = (_QWORD *)*((_QWORD *)AllOperation + 16);
    while ( v17 != v18 )
    {
      v19 = (*(__int64 (__fastcall **)(Windows::Gaming::Preview::GamesEnumeration::FindAllOperation *, _QWORD))(*(_QWORD *)v30 + 104LL))(
              v30,
              *v17);
      v7 = v19;
      if ( v19 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4D,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
          (const char *)(unsigned int)v19);
        v23 = v30;
        if ( v30 )
        {
          v30 = 0LL;
          (*(void (__fastcall **)(Windows::Gaming::Preview::GamesEnumeration::FindAllOperation *))(*(_QWORD *)v23 + 16LL))(v23);
        }
        goto LABEL_33;
      }
      ++v17;
    }
    v20 = (*(__int64 (__fastcall **)(Windows::Gaming::Preview::GamesEnumeration::FindAllOperation *, __int64 *))(*(_QWORD *)v30 + 64LL))(
            v30,
            &v31);
    v7 = v20;
    if ( v20 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x50,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
        (const char *)(unsigned int)v20);
    v21 = v30;
    if ( v30 )
    {
      v30 = 0LL;
      (*(void (__fastcall **)(Windows::Gaming::Preview::GamesEnumeration::FindAllOperation *))(*(_QWORD *)v21 + 16LL))(v21);
    }
    if ( v7 >= 0 )
    {
      v24 = Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>>::Set(
              a2,
              v31);
      v25 = v24;
      if ( v24 >= 0 )
      {
        v27 = v31;
        if ( v31 )
        {
          v31 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
        }
        if ( v29 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,IInspectable,Microsoft::WRL::FtmBase>::Release(v29);
        return 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x18A,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
          (const char *)(unsigned int)v24);
        v26 = v31;
        if ( v31 )
        {
          v31 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
        }
        if ( v29 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,IInspectable,Microsoft::WRL::FtmBase>::Release(v29);
        return v25;
      }
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x49,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v15);
    v16 = v30;
    if ( v30 )
    {
      v30 = 0LL;
      (*(void (__fastcall **)(Windows::Gaming::Preview::GamesEnumeration::FindAllOperation *))(*(_QWORD *)v16 + 16LL))(v16);
    }
  }
LABEL_33:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x18A,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
    (const char *)(unsigned int)v7);
  v22 = v31;
  if ( v31 )
  {
    v31 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
LABEL_7:
  if ( v29 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,IInspectable,Microsoft::WRL::FtmBase>::Release(v29);
  return (unsigned int)v7;
}
