/*
 * XREFs of RtlSectionTableFromVirtualAddress @ 0x1800DC7D0
 * Callers:
 *     LdrpLocateMrdata @ 0x180020B90 (LdrpLocateMrdata.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSectionTableFromVirtualAddress(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r9
  unsigned int i; // r10d
  unsigned int v5; // eax

  v3 = a1 + *(unsigned __int16 *)(a1 + 20) + 24LL;
  for ( i = 0; i < *(unsigned __int16 *)(a1 + 6); ++i )
  {
    v5 = *(_DWORD *)(v3 + 12);
    if ( a3 >= v5 && a3 < v5 + *(_DWORD *)(v3 + 16) )
      return v3;
    v3 += 40LL;
  }
  return 0LL;
}
