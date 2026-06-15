/*
 * XREFs of memmove_0 @ 0x1400919E4
 * Callers:
 *     memmove_s @ 0x14000C4A0 (memmove_s.c)
 *     ?RuntimeClassInitialize@CAudioSystemEffectsPropertyChangeNotificationsHandler@@QEAAJPEBGU_GUID@@PEAUIMMDevice@@@Z @ 0x14003FC20 (-RuntimeClassInitialize@CAudioSystemEffectsPropertyChangeNotificationsHandler@@QEAAJPEBGU_GUID@@.c)
 *     ??$_Insert_counted_range@PEBE@?$vector@EV?$allocator@E@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@PEBE_K@Z @ 0x140056B78 (--$_Insert_counted_range@PEBE@-$vector@EV-$allocator@E@std@@@std@@AEAAXV-$_Vector_const_iterator.c)
 *     ??$_Emplace_reallocate@AEBU_GUID@@@?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@AEAAPEAU_GUID@@QEAU2@AEBU2@@Z @ 0x140065C18 (--$_Emplace_reallocate@AEBU_GUID@@@-$vector@U_GUID@@V-$allocator@U_GUID@@@std@@@std@@AEAAPEAU_GU.c)
 *     _std::vector_unsigned_char_std::allocator_unsigned_char___::_Insert_counted_range_unsigned_char_const____::_1_::catch$2 @ 0x14009572B (_std--vector_unsigned_char_std--allocator_unsigned_char___--_Insert_counted_range_u_ea_14009572B.c)
 *     _std::vector_unsigned_char_std::allocator_unsigned_char___::_Insert_counted_range_unsigned_char_const____::_1_::catch$4 @ 0x14009578E (_std--vector_unsigned_char_std--allocator_unsigned_char___--_Insert_counted_range_u_ea_14009578E.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memmove_0(void *a1, const void *Src, size_t Size)
{
  return memmove(a1, Src, Size);
}
