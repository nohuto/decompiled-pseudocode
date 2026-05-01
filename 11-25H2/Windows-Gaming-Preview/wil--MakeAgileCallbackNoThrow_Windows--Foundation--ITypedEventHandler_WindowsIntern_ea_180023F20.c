/*
 * XREFs of wil::MakeAgileCallbackNoThrow_Windows::Foundation::ITypedEventHandler_WindowsInternal::Shell::UnifiedTile::Shim::UnifiedTile___WindowsInternal::Shell::UnifiedTile::Shim::TileChangedEventArgs_____lambda_b4e547b9ea71bcfad52de41b57455afb___ @ 0x180023F20
 * Callers:
 *     ?_InitializeListener@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180031F00 (-_InitializeListener@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000221C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18000CC00 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall wil::MakeAgileCallbackNoThrow_Windows::Foundation::ITypedEventHandler_WindowsInternal::Shell::UnifiedTile::Shim::UnifiedTile___WindowsInternal::Shell::UnifiedTile::Shim::TileChangedEventArgs_____lambda_b4e547b9ea71bcfad52de41b57455afb___(
        _QWORD *a1,
        _QWORD *a2)
{
  _DWORD *v4; // rbx

  v4 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    *(_QWORD *)v4 = &Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *> *>::`vftable';
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v4 + 2));
    v4[15] = 1;
    *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<WindowsInternal::Shell::UnifiedTile::Shim::UnifiedTile *,WindowsInternal::Shell::UnifiedTile::Shim::TileChangedEventArgs *>,Microsoft::WRL::FtmBase>>::`vftable'{for `Windows::Foundation::ITypedEventHandler<WindowsInternal::Shell::UnifiedTile::Shim::UnifiedTile *,WindowsInternal::Shell::UnifiedTile::Shim::TileChangedEventArgs *>'};
    *((_QWORD *)v4 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<WindowsInternal::Shell::UnifiedTile::Shim::UnifiedTile *,WindowsInternal::Shell::UnifiedTile::Shim::TileChangedEventArgs *>,Microsoft::WRL::FtmBase>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_QWORD *)v4 + 8) = 0LL;
    if ( v4 + 16 != (_DWORD *)a2 )
    {
      *((_QWORD *)v4 + 8) = *a2;
      *a2 = 0LL;
    }
    *((_QWORD *)v4 + 9) = a2[1];
    *(_QWORD *)v4 = off_180048E08;
    *((_QWORD *)v4 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<WindowsInternal::Shell::UnifiedTile::Shim::UnifiedTile *,WindowsInternal::Shell::UnifiedTile::Shim::TileChangedEventArgs *>,Microsoft::WRL::FtmBase>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  }
  else
  {
    v4 = 0LL;
  }
  *a1 = v4;
  return a1;
}
