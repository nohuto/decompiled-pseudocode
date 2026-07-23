/*
 * XREFs of BgkpVgaBltRoutine @ 0x14058D420
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall BgkpVgaBltRoutine(void **a1, unsigned int *a2, char a3)
{
  if ( a3 )
  {
    memset_0(a1[2], 0, *((unsigned int *)a1 + 3));
    return 3221225473LL;
  }
  else
  {
    VidBitBltEx(*a2, a2[1], *((unsigned int *)a1 + 1), *(unsigned int *)a1, a1[2]);
    return 0LL;
  }
}
