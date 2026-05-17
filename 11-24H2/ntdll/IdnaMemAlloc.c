/*
 * XREFs of IdnaMemAlloc @ 0x180080824
 * Callers:
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x180080044 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x180080384 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     RtlIdnToUnicode @ 0x1800B9AA0 (RtlIdnToUnicode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IdnaMemAlloc(unsigned __int64 a1)
{
  return RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, a1);
}
