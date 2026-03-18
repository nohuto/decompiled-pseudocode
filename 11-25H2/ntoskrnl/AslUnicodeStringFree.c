/*
 * XREFs of AslUnicodeStringFree @ 0x1407F8AB8
 * Callers:
 *     SdbResolveDatabaseEx @ 0x1407F6A54 (SdbResolveDatabaseEx.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     AslFree @ 0x14082AD34 (AslFree.c)
 */

__int64 __fastcall AslUnicodeStringFree(__int64 a1)
{
  void *v2; // rcx
  __int64 v3; // rcx
  __int64 result; // rax

  if ( a1 )
  {
    v2 = *(void **)(a1 + 8);
    if ( v2 )
    {
      memset_0(v2, 66, *(unsigned __int16 *)(a1 + 2));
      result = AslFree(v3);
    }
    *(_OWORD *)a1 = 0LL;
  }
  return result;
}
