/*
 * XREFs of __tailMerge_ext_ms_onecore_appmodel_staterepository_internal_l1_1_3_dll @ 0x1800ABD66
 * Callers:
 *     __imp_load_SRDictionaryToPropertySet @ 0x1800ABDE5 (__imp_load_SRDictionaryToPropertySet.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180088820 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_onecore_appmodel_staterepository_internal_l1_1_3_dll(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_onecore_appmodel_staterepository_internal_l1_1_3_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
