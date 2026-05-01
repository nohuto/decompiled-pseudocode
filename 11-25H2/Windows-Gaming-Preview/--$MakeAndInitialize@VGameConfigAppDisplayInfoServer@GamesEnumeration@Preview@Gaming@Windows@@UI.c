/*
 * XREFs of ??$MakeAndInitialize@VGameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UIAppDisplayInfo@ApplicationModel@5@PEAUHSTRING__@@PEAU8@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIAppDisplayInfo@ApplicationModel@Windows@@@WRL@Microsoft@@@012@$$QEAPEAUHSTRING__@@1@Z @ 0x180023FF8
 * Callers:
 *     ?_InitializeAppDisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180030B7C (-_InitializeAppDisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000221C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18000CC00 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUHSTRING__@@0@Z @ 0x180012E60 (-RuntimeClassInitialize@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppDisplayInfo@ApplicationModel@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002CE50 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppDispla.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppDisplayInfo@ApplicationModel@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002DD60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppDisplayInfo@A.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Gaming::Preview::GamesEnumeration::GameConfigAppDisplayInfoServer,Windows::ApplicationModel::IAppDisplayInfo,HSTRING__ *,HSTRING__ *>(
        __int64 *a1,
        HSTRING *a2,
        HSTRING *a3)
{
  __int64 v6; // rcx
  char *v7; // rax
  char *v8; // rdi
  int Interface; // esi
  _QWORD *v10; // rsi
  char *v11; // rcx

  v6 = *a1;
  if ( v6 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  *a1 = 0LL;
  v7 = (char *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( v7 )
  {
    v10 = v7 + 16;
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v7 + 16));
    *((_QWORD *)v8 + 7) = 1LL;
    *(_QWORD *)v8 = &Microsoft::WRL::RuntimeClass<Windows::ApplicationModel::IAppDisplayInfo,Microsoft::WRL::FtmBase>::`vftable';
    *((_QWORD *)v8 + 1) = &Microsoft::WRL::RuntimeClass<Windows::ApplicationModel::IAppDisplayInfo,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
    *v10 = &Microsoft::WRL::RuntimeClass<Windows::ApplicationModel::IAppDisplayInfo,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v8 = &Windows::Gaming::Preview::GamesEnumeration::GameConfigAppDisplayInfoServer::`vftable';
    *((_QWORD *)v8 + 1) = &Windows::Gaming::Preview::GamesEnumeration::TileAppDisplayInfoServer::`vftable'{for `IWeakReferenceSource'};
    *v10 = &Windows::Gaming::Preview::GamesEnumeration::GameConfigAppDisplayInfoServer::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    *((_QWORD *)v8 + 8) = 0LL;
    *((_QWORD *)v8 + 9) = 0LL;
    *((_QWORD *)v8 + 10) = 0LL;
    Interface = Windows::Gaming::Preview::GamesEnumeration::GameConfigAppDisplayInfoServer::RuntimeClassInitialize(
                  (HSTRING *)v8,
                  *a2,
                  *a3);
    v11 = v8;
    if ( Interface >= 0 )
    {
      Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::IAppDisplayInfo,Microsoft::WRL::FtmBase>::QueryInterface(
                    v8,
                    &GUID_1aeb1103_e4d4_41aa_a4f6_c4a276e79eac,
                    a1);
      v11 = v8;
    }
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::IAppDisplayInfo,Microsoft::WRL::FtmBase>::Release(v11);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)Interface;
}
