/*
 * XREFs of Amd64FindUncoreById @ 0x14056B188
 * Callers:
 *     Amd64InitializeUncoreStatusEnhanced @ 0x14056BDF8 (Amd64InitializeUncoreStatusEnhanced.c)
 *     Amd64InitializeUncoreStatusOriginal @ 0x14056BE94 (Amd64InitializeUncoreStatusOriginal.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall Amd64FindUncoreById(__int64 **a1, int a2)
{
  __int64 *result; // rax

  for ( result = *a1; result != (__int64 *)a1; result = (__int64 *)*result )
  {
    if ( *((_DWORD *)result + 5) == a2 )
      return result;
  }
  return 0LL;
}
