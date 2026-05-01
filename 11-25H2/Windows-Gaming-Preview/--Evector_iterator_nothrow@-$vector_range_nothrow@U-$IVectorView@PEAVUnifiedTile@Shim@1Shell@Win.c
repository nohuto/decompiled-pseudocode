/*
 * XREFs of ??Evector_iterator_nothrow@?$vector_range_nothrow@U?$IVectorView@PEAVUnifiedTile@Shim@1Shell@WindowsInternal@@@Collections@Foundation@Windows@@@wil@@QEAAAEAV012@XZ @ 0x18000D3B0
 * Callers:
 *     ?_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x1800107AC (-_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_ProcessAddedOrRemovedTiles@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAU?$IVectorView@PEAVUnifiedTile@Shim@1Shell@WindowsInternal@@@Collections@Foundation@5@V?$function@$$A6AJPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@@Z@std@@_N@Z @ 0x180022D60 (-_ProcessAddedOrRemovedTiles@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_DWORD *__fastcall wil::vector_range_nothrow<Windows::Foundation::Collections::IVectorView<WindowsInternal::Shell::UnifiedTile::Shim::UnifiedTile *>>::vector_iterator_nothrow::operator++(
        _DWORD *a1)
{
  unsigned int v2; // ebp
  __int64 *v3; // rdi
  __int64 v4; // r14
  __int64 (__fastcall *v5)(__int64, _QWORD, __int64); // r15
  __int64 v6; // rcx

  v2 = ++a1[2];
  v3 = *(__int64 **)a1;
  if ( **(int **)(*(_QWORD *)a1 + 16LL) >= 0 && v2 < *((_DWORD *)v3 + 2) )
  {
    v4 = *v3;
    v5 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)*v3 + 48LL);
    v6 = v3[4];
    if ( v6 )
    {
      v3[4] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    *(_DWORD *)v3[2] = v5(v4, v2, (__int64)(v3 + 4));
  }
  return a1;
}
