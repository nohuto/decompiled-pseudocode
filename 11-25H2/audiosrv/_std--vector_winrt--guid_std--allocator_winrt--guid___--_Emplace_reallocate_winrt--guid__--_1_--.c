/*
 * XREFs of _std::vector_winrt::guid_std::allocator_winrt::guid___::_Emplace_reallocate_winrt::guid__::_1_::catch$0 @ 0x1801655B8
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@Uguid@winrt@@@std@@QEAAXQEAUguid@winrt@@_K@Z @ 0x1800E32BC (-deallocate@-$allocator@Uguid@winrt@@@std@@QEAAXQEAUguid@winrt@@_K@Z.c)
 *     _CxxThrowException_0 @ 0x18015E870 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_winrt::guid_std::allocator_winrt::guid___::_Emplace_reallocate_winrt::guid__::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::allocator<winrt::guid>::deallocate(a1, *(char **)(a2 + 88), *(_QWORD *)(a2 + 80));
  throw;
}
