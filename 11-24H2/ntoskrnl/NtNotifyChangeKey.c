/*
 * XREFs of NtNotifyChangeKey @ 0x1408BF6E0
 * Callers:
 *     ExpWatchProductTypeInitialization @ 0x140C416CC (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     NtNotifyChangeMultipleKeys @ 0x1408BF750 (NtNotifyChangeMultipleKeys.c)
 */

__int64 __fastcall NtNotifyChangeKey(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        char a7,
        __int64 a8,
        int a9,
        char a10)
{
  return NtNotifyChangeMultipleKeys(a1, 0, 0, a2, a3, a4, a5, a6, a7, a8, a9, a10);
}
