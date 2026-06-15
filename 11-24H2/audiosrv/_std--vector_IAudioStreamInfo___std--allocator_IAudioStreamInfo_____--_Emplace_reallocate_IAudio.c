/*
 * XREFs of _std::vector_IAudioStreamInfo___std::allocator_IAudioStreamInfo_____::_Emplace_reallocate_IAudioStreamInfo___const_&__::_1_::catch$0 @ 0x18016B809
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180018614 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x180167F30 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_IAudioStreamInfo___std::allocator_IAudioStreamInfo_____::_Emplace_reallocate_IAudioStreamInfo___const____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(char **)(a2 + 88), (const struct std::nothrow_t *)(8LL * *(_QWORD *)(a2 + 80)));
  throw;
}
