/*
 * XREFs of IdnaMemAlloc @ 0x1800BEB6C
 * Callers:
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x18008A784 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x18008AAA4 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     RtlIdnToUnicode @ 0x1800BEAE0 (RtlIdnToUnicode.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall IdnaMemAlloc(SIZE_T a1)
{
  return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, a1);
}
