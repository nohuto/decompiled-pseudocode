/*
 * XREFs of ??B?$SGKEYBOARDgfEnableHexNumpad@I@@QEBAIXZ @ 0x140213FF8
 * Callers:
 *     xxxInternalToUnicode @ 0x140097BA0 (xxxInternalToUnicode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SGKEYBOARDgfEnableHexNumpad<unsigned int>::operator unsigned int(__int64 a1)
{
  return *(unsigned int *)(W32GetUserSessionState(a1) + 14708);
}
