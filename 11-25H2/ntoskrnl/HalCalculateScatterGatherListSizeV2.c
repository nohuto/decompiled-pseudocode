/*
 * XREFs of HalCalculateScatterGatherListSizeV2 @ 0x1404A7CB0
 * Callers:
 *     <none>
 * Callees:
 *     HalpCalculateScatterGatherListSize @ 0x140334C80 (HalpCalculateScatterGatherListSize.c)
 */

__int64 __fastcall HalCalculateScatterGatherListSizeV2(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5,
        _DWORD *a6)
{
  return HalpCalculateScatterGatherListSize(a1, a2, a3, a4, a5, a6, 0LL);
}
