/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::Shim::UnifiedTileCollection___WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileCollection____Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::Shim::ContentsChangedEventArgs___WindowsInternal::Shell::UnifiedTile::Shim::IContentsChangedEventArgs_____::_)(WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileCollection___WindowsInternal::Shell::UnifiedTile::Shim::IContentsChangedEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_WindowsInternal::Shell::UnifiedTile::Shim::UnifiedTileCollection___WindowsInternal::Shell::UnifiedTile::Shim::ContentsChangedEventArgs____Microsoft::WRL::FtmBase___lambda_bf617d1671b63836cbfdc32eeaad81a0___1_WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileCollection___WindowsInternal::Shell::UnifiedTile::Shim::IContentsChangedEventArgs___::_scalar_deleting_destructor_ @ 0x18001B720
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021D8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::Shim::UnifiedTileCollection___WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileCollection____Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::Shim::ContentsChangedEventArgs___WindowsInternal::Shell::UnifiedTile::Shim::IContentsChangedEventArgs_____::___WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileCollection___WindowsInternal::Shell::UnifiedTile::Shim::IContentsChangedEventArgs____::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_WindowsInternal::Shell::UnifiedTile::Shim::UnifiedTileCollection___WindowsInternal::Shell::UnifiedTile::Shim::ContentsChangedEventArgs____Microsoft::WRL::FtmBase___lambda_bf617d1671b63836cbfdc32eeaad81a0___1_WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileCollection___WindowsInternal::Shell::UnifiedTile::Shim::IContentsChangedEventArgs___::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  v4 = a1[8];
  if ( v4 )
  {
    a1[8] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *((_DWORD *)a1 + 15) = -1073741823;
  v5 = a1[4];
  if ( v5 )
  {
    a1[4] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x58);
  return a1;
}
