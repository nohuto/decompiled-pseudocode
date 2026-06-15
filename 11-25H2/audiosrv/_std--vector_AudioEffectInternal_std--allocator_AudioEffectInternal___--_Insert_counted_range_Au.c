/*
 * XREFs of _std::vector_AudioEffectInternal_std::allocator_AudioEffectInternal___::_Insert_counted_range_AudioEffectInternal____::_1_::catch$0 @ 0x180164A4C
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180025844 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18015E870 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_AudioEffectInternal_std::allocator_AudioEffectInternal___::_Insert_counted_range_AudioEffectInternal____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(char **)(a2 + 32), (const struct std::nothrow_t *)(24LL * *(_QWORD *)(a2 + 136)));
  throw;
}
