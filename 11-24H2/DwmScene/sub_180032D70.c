/*
 * XREFs of sub_180032D70 @ 0x180032D70
 * Callers:
 *     sub_180035C90 @ 0x180035C90 (sub_180035C90.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_180032D70(__int64 a1)
{
  char result; // al

  result = 0;
  if ( *(float *)a1 == -1.0
    && *(float *)(a1 + 4) == -1.0
    && *(_DWORD *)(a1 + 8) == 2
    && !*(_DWORD *)(a1 + 12)
    && !*(_DWORD *)(a1 + 16)
    || *(float *)(a1 + 20) == -1.0
    && *(float *)(a1 + 24) == -1.0
    && *(_DWORD *)(a1 + 28) == 2
    && !*(_DWORD *)(a1 + 32)
    && !*(_DWORD *)(a1 + 36) )
  {
    return 1;
  }
  return result;
}
