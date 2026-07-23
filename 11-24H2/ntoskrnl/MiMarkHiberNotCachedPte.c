/*
 * XREFs of MiMarkHiberNotCachedPte @ 0x140B647D0
 * Callers:
 *     <none>
 * Callees:
 *     MiIsPfn @ 0x14044F7D0 (MiIsPfn.c)
 *     PoSetHiberRange @ 0x14046AD10 (PoSetHiberRange.c)
 */

__int64 __fastcall MiMarkHiberNotCachedPte(__int64 a1, unsigned __int64 *a2, int a3)
{
  unsigned __int64 v3; // rbx
  ULONG_PTR v5; // r9
  __int64 v6; // rcx

  v3 = *a2;
  if ( (*a2 & 1) != 0 && ((v3 & 0x18) == 8 || (v3 & 0x10) != 0) && (unsigned int)MiIsPfn((v3 >> 12) & 0xFFFFFFFFFFLL) )
  {
    if ( (v3 & 0x80u) == 0LL )
    {
      if ( !a3 )
      {
        v5 = 1LL;
LABEL_13:
        PoSetHiberRange(0LL, 0x14000u, (PVOID)((v3 >> 12) & 0xFFFFFFFFFFLL), v5, 0x636E6D4Du);
      }
    }
    else
    {
      v5 = 512LL;
      if ( a3 <= 1 )
        goto LABEL_13;
      v6 = (unsigned int)(a3 - 1);
      do
      {
        v5 <<= 9;
        --v6;
      }
      while ( v6 );
      if ( v5 )
        goto LABEL_13;
    }
  }
  return 0LL;
}
