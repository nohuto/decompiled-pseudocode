/*
 * XREFs of _lambda_931ff4dcdbf02296ac50d8c7315cbe71_::operator() @ 0x1800118DC
 * Callers:
 *     ?GetLogo@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJUSize@Foundation@5@PEAPEAUIRandomAccessStreamReference@Streams@Storage@5@@Z @ 0x1800120B0 (-GetLogo@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJUSize@Foun.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000221C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008BC4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18000CCD0 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIRandomAccessStreamReference@Streams@Storage@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800129A0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIRandomAcc.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIRandomAccessStreamReference@Streams@Storage@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180012CE0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIRandomAccessStre.c)
 *     ?_GetFileProperties@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJAEAV?$ComPtr@UIStorageItemProperties@Storage@Windows@@@WRL@Microsoft@@@Z @ 0x180013944 (-_GetFileProperties@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@AEAA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_931ff4dcdbf02296ac50d8c7315cbe71_::operator()(__int64 a1)
{
  int FileProperties; // eax
  unsigned int v3; // ebx
  __int64 v4; // rcx
  int v6; // ebp
  _QWORD *v7; // rsi
  char *v8; // rax
  char *v9; // rbx
  int Interface; // edi
  _QWORD *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v17; // [rsp+30h] [rbp+8h] BYREF

  v17 = 0LL;
  FileProperties = Windows::Gaming::Preview::GamesEnumeration::GameConfigAppDisplayInfoServer::_GetFileProperties(
                     *(_QWORD *)a1,
                     &v17);
  v3 = FileProperties;
  if ( FileProperties < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x113,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)(unsigned int)FileProperties);
    v4 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    return v3;
  }
  v6 = (int)fmaxf(**(float **)(a1 + 8), *(float *)(*(_QWORD *)(a1 + 8) + 4LL));
  v7 = **(_QWORD ***)(a1 + 16);
  *v7 = 0LL;
  v8 = (char *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  if ( !v8 )
  {
    Interface = -2147024882;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x117,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)(unsigned int)Interface);
    v14 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    return (unsigned int)Interface;
  }
  v11 = v8 + 16;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v8 + 16));
  *((_QWORD *)v9 + 7) = 1LL;
  *(_QWORD *)v9 = &Microsoft::WRL::RuntimeClass<Windows::Storage::Streams::IRandomAccessStreamReference,Microsoft::WRL::FtmBase>::`vftable';
  *((_QWORD *)v9 + 1) = &Microsoft::WRL::RuntimeClass<Windows::Storage::Streams::IRandomAccessStreamReference,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *v11 = &Microsoft::WRL::RuntimeClass<Windows::Storage::Streams::IRandomAccessStreamReference,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v9 = &off_180046AA8;
  *((_QWORD *)v9 + 1) = &Microsoft::WRL::RuntimeClass<Windows::Storage::Streams::IRandomAccessStreamReference,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *v11 = &Microsoft::WRL::RuntimeClass<Windows::Storage::Streams::IRandomAccessStreamReference,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)v9 + 8) = 0LL;
  *((_DWORD *)v9 + 18) = 0;
  v12 = v17;
  v17 = 0LL;
  v13 = *((_QWORD *)v9 + 8);
  *((_QWORD *)v9 + 8) = v12;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  *((_DWORD *)v9 + 18) = v6;
  Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Storage::Streams::IRandomAccessStreamReference,Microsoft::WRL::FtmBase>::QueryInterface(
                v9,
                &GUID_33ee3134_1dd6_4e3a_8067_d1c162e8642b,
                v7);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Storage::Streams::IRandomAccessStreamReference,Microsoft::WRL::FtmBase>::Release(v9);
  if ( Interface < 0 )
    goto LABEL_12;
  v15 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return 0LL;
}
