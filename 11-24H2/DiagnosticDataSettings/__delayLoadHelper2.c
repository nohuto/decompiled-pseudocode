/*
 * XREFs of __delayLoadHelper2 @ 0x1800054B0
 * Callers:
 *     __tailMerge_api_ms_win_privacy_coreprivacysettingsstore_l1_1_0_dll @ 0x180001F30 (__tailMerge_api_ms_win_privacy_coreprivacysettingsstore_l1_1_0_dll.c)
 *     __tailMerge_netapi32_dll @ 0x180001FCD (__tailMerge_netapi32_dll.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _delayLoadHelper2(__int64 a1, __int64 a2)
{
  return ResolveDelayLoadedAPI(
           &_ImageBase,
           a1,
           _pfnDefaultDliFailureHook2,
           DelayLoadFailureHook,
           a2,
           _ResolveDelayLoadedAPIFlags);
}
