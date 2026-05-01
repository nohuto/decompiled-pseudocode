/*
 * XREFs of __tailMerge_ext_ms_win_resourcemanager_crm_private_ext_l1_1_0_dll @ 0x18001472C
 * Callers:
 *     __imp_load_CrmpInProcActivityAllocate @ 0x1800147AB (__imp_load_CrmpInProcActivityAllocate.c)
 *     __imp_load_CrmpInProcActivityStop @ 0x1800147BD (__imp_load_CrmpInProcActivityStop.c)
 *     __imp_load_CrmpInProcActivityWindowClosedReasonUnsubscribe @ 0x1800147CF (__imp_load_CrmpInProcActivityWindowClosedReasonUnsubscribe.c)
 *     __imp_load_CrmpInProcActivityFree @ 0x1800147E1 (__imp_load_CrmpInProcActivityFree.c)
 *     __imp_load_CrmpInProcActivityStart @ 0x1800147F3 (__imp_load_CrmpInProcActivityStart.c)
 *     __imp_load_CrmpInProcActivityWindowClosedReasonSubscribe @ 0x180014805 (__imp_load_CrmpInProcActivityWindowClosedReasonSubscribe.c)
 *     __imp_load_CrmpInProcActivityQueryWindowClosedReasons @ 0x180014817 (__imp_load_CrmpInProcActivityQueryWindowClosedReasons.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x18000FFE0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_resourcemanager_crm_private_ext_l1_1_0_dll(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_resourcemanager_crm_private_ext_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
