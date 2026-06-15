/*
 * XREFs of _std::vector_AudioEffectInternal_std::allocator_AudioEffectInternal___::_Insert_counted_range_AudioEffectInternal____::_1_::catch$4 @ 0x18016E01A
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180167F30 (_CxxThrowException_0.c)
 *     memmove_0 @ 0x180167F48 (memmove_0.c)
 */

void __fastcall __noreturn std::vector_AudioEffectInternal_std::allocator_AudioEffectInternal___::_Insert_counted_range_AudioEffectInternal____::_1_::catch_4(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v3; // rbx

  v3 = *(_QWORD **)(a2 + 32);
  memmove_0(*(void **)(a2 + 136), *(const void **)(a2 + 128), *v3 - *(_QWORD *)(a2 + 128));
  *v3 = *(_QWORD *)(a2 + 48);
  throw;
}
