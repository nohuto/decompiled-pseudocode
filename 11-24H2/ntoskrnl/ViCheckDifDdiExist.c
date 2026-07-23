/*
 * XREFs of ViCheckDifDdiExist @ 0x140B8C6EC
 * Callers:
 *     VfCheckDifDdiExist @ 0x140B8BFE0 (VfCheckDifDdiExist.c)
 * Callees:
 *     <none>
 */

char __fastcall ViCheckDifDdiExist(__int64 a1, int a2)
{
  while ( *(_DWORD *)(a1 + 48) != a2 )
  {
    a1 += 56LL;
    if ( !*(_QWORD *)a1 )
      return 0;
  }
  return 1;
}
