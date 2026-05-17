/*
 * XREFs of _SafeReallocBlob @ 0x180113D64
 * Callers:
 *     RtlpMuiRegConfigListAddLanguage @ 0x1800F6F18 (RtlpMuiRegConfigListAddLanguage.c)
 *     RtlpMuiRegGrowLanguages @ 0x1801499EC (RtlpMuiRegGrowLanguages.c)
 *     RtlpMuiRegResizeLanguageList @ 0x180149A84 (RtlpMuiRegResizeLanguageList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SafeReallocBlob(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        unsigned int *a7)
{
  unsigned __int64 v7; // r8
  unsigned int v8; // eax

  if ( !a1 )
    return 0LL;
  v7 = a4 * (unsigned __int64)a3;
  if ( v7 > 0xFFFFFFFF )
    return 0LL;
  v8 = v7 + a2;
  if ( (unsigned int)v7 + a2 < a2 )
    return 0LL;
  if ( a7 )
    *a7 = v8;
  return RtlReAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1, v8);
}
