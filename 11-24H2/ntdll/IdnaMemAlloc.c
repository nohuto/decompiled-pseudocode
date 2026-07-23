/*
 * XREFs of IdnaMemAlloc @ 0x1800B18CC
 * Callers:
 *     RtlIdnToUnicode @ 0x1800B1840 (RtlIdnToUnicode.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x1800CB894 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x1800CBBD4 (OpenGlobalizationUserSettingsKey_ForMua.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall IdnaMemAlloc(SIZE_T a1)
{
  return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, a1);
}
