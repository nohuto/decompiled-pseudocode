/*
 * XREFs of _std::vector__tagpropertykey_std::allocator__tagpropertykey___::_Emplace_reallocate__tagpropertykey_const_&__::_1_::catch$0 @ 0x180164A1A
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180025844 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18015E870 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector__tagpropertykey_std::allocator__tagpropertykey___::_Emplace_reallocate__tagpropertykey_const____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(char **)(a2 + 88), (const struct std::nothrow_t *)(20LL * *(_QWORD *)(a2 + 80)));
  throw;
}
