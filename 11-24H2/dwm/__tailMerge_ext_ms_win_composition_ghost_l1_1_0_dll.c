/*
 * XREFs of __tailMerge_ext_ms_win_composition_ghost_l1_1_0_dll @ 0x140005CCE
 * Callers:
 *     __imp_load_DWMGhostInitialize @ 0x140005D4D (__imp_load_DWMGhostInitialize.c)
 *     __imp_load_DWMGhostSetInShutdown @ 0x140005D5F (__imp_load_DWMGhostSetInShutdown.c)
 *     __imp_load_DWMGhostCleanup @ 0x140005D71 (__imp_load_DWMGhostCleanup.c)
 *     __imp_load_DWMGhostHandleGhostMsg @ 0x140005D83 (__imp_load_DWMGhostHandleGhostMsg.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x140003C40 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_composition_ghost_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_composition_ghost_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
