/*
 * XREFs of VfUtilEqualUnicodeString @ 0x140B85228
 * Callers:
 *     ViDifCheckCallbackInterception @ 0x140B8C858 (ViDifCheckCallbackInterception.c)
 *     ViFaultsIsAppTarget @ 0x140B98CF0 (ViFaultsIsAppTarget.c)
 * Callees:
 *     RtlCompareMemory @ 0x1406B4930 (RtlCompareMemory.c)
 */

_BOOL8 __fastcall VfUtilEqualUnicodeString(const void **a1, __int64 a2)
{
  return *(_WORD *)a1 == *(_WORD *)a2
      && RtlCompareMemory(a1[1], *(const void **)(a2 + 8), *(unsigned __int16 *)a1) == *(unsigned __int16 *)a1;
}
