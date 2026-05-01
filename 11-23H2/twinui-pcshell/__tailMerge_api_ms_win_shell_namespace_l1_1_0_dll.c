/*
 * XREFs of __tailMerge_api_ms_win_shell_namespace_l1_1_0_dll @ 0x1801C9CB1
 * Callers:
 *     __imp_load_ILFindLastID @ 0x1801C9CA5 (__imp_load_ILFindLastID.c)
 *     __imp_load_SHCreateItemFromParsingName @ 0x1801C9ED6 (__imp_load_SHCreateItemFromParsingName.c)
 *     __imp_load_SHGetIDListFromObject @ 0x1801CAA18 (__imp_load_SHGetIDListFromObject.c)
 *     __imp_load_ILClone @ 0x1801CAA48 (__imp_load_ILClone.c)
 *     __imp_load_SHParseDisplayName @ 0x1801CAA5A (__imp_load_SHParseDisplayName.c)
 *     __imp_load_SHCreateItemFromIDList @ 0x1801CAAF7 (__imp_load_SHCreateItemFromIDList.c)
 *     __imp_load_SHGetNameFromIDList @ 0x1801CAB09 (__imp_load_SHGetNameFromIDList.c)
 *     __imp_load_SHBindToFolderIDListParentEx @ 0x1801CAB1B (__imp_load_SHBindToFolderIDListParentEx.c)
 *     __imp_load_SHBindToParent @ 0x1801CE68A (__imp_load_SHBindToParent.c)
 *     __imp_load_ILIsParent @ 0x1801CE6BA (__imp_load_ILIsParent.c)
 *     __imp_load_ILGetSize @ 0x1801CE757 (__imp_load_ILGetSize.c)
 *     __imp_load_ILCombine @ 0x1801CE769 (__imp_load_ILCombine.c)
 *     __imp_load_ILIsEqual @ 0x1801CE787 (__imp_load_ILIsEqual.c)
 *     __imp_load_ILFindChild @ 0x1801CE799 (__imp_load_ILFindChild.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1801865D0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_shell_namespace_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_shell_namespace_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
