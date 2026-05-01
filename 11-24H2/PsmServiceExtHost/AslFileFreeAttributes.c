/*
 * XREFs of AslFileFreeAttributes @ 0x1800A004C
 * Callers:
 *     SdbpCheckAllAttributes @ 0x180096F1C (SdbpCheckAllAttributes.c)
 * Callees:
 *     AslFree @ 0x18009D9EC (AslFree.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 */

void *__fastcall AslFileFreeAttributes(char *a1)
{
  char *v2; // rbx
  __int64 v3; // rsi
  void *result; // rax

  if ( a1 )
  {
    v2 = a1 + 16;
    v3 = 36LL;
    do
    {
      if ( (v2[8] & 1) != 0 && *((_DWORD *)v2 - 4) == 4 && (v2[8] & 4) != 0 )
        AslFree(NtCurrentPeb()->ProcessHeap, *(void **)v2);
      v2 += 32;
      --v3;
    }
    while ( v3 );
    return memset_0(a1, 0, 0x480uLL);
  }
  return result;
}
