/*
 * XREFs of MiMarkNonPagedHiberPhasePte @ 0x140B64990
 * Callers:
 *     <none>
 * Callees:
 *     MiIsPfn @ 0x14044F7D0 (MiIsPfn.c)
 *     PoSetHiberRange @ 0x14046AD10 (PoSetHiberRange.c)
 */

__int64 __fastcall MiMarkNonPagedHiberPhasePte(__int64 a1, unsigned __int64 *a2, int a3)
{
  unsigned __int64 v3; // rbx
  ULONG_PTR v5; // r9
  __int64 v6; // rcx
  __int64 v7; // rcx

  v3 = *a2;
  if ( (*a2 & 1) != 0 && (unsigned int)MiIsPfn((v3 >> 12) & 0xFFFFFFFFFFLL) )
  {
    if ( (v3 & 0x80u) == 0LL )
    {
      if ( !a3 )
      {
        v7 = 48 * ((v3 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
        if ( (unsigned __int16)*(_DWORD *)(v7 + 32) > 1u
          || (*(_QWORD *)v7 & 1) == 0
          || (*(_DWORD *)(v7 + 32) & 0x8000000) != 0 )
        {
          v5 = 1LL;
LABEL_14:
          PoSetHiberRange(0LL, 0x14000u, (PVOID)((v3 >> 12) & 0xFFFFFFFFFFLL), v5, 0x6C64704Eu);
        }
      }
    }
    else
    {
      v5 = 512LL;
      if ( a3 <= 1 )
        goto LABEL_14;
      v6 = (unsigned int)(a3 - 1);
      do
      {
        v5 <<= 9;
        --v6;
      }
      while ( v6 );
      if ( v5 )
        goto LABEL_14;
    }
  }
  return 0LL;
}
