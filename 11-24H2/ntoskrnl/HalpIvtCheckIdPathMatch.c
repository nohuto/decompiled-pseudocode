/*
 * XREFs of HalpIvtCheckIdPathMatch @ 0x1404F722C
 * Callers:
 *     IvtCreateDevice @ 0x140575F80 (IvtCreateDevice.c)
 *     IvtFindDevice @ 0x1405760B0 (IvtFindDevice.c)
 *     IvtCheckForReservedRegion @ 0x140702270 (IvtCheckForReservedRegion.c)
 * Callees:
 *     <none>
 */

char __fastcall HalpIvtCheckIdPathMatch(__int64 a1, char *a2)
{
  char v2; // r9
  char v4; // dl
  unsigned int v5; // r10d
  unsigned int v6; // eax
  unsigned int i; // r8d

  v2 = 0;
  if ( *(_DWORD *)a1 == 1 )
  {
    v4 = *a2;
    if ( (unsigned __int8)(v4 - 1) <= 1u && *(_BYTE *)(a1 + 11) == a2[5] )
    {
      v5 = *(unsigned __int16 *)(a1 + 14);
      v6 = ((unsigned int)(unsigned __int8)a2[1] - 6) >> 1;
      if ( v4 != 1 || v5 == v6 )
      {
        if ( v5 >= v6 )
        {
          v5 = ((unsigned int)(unsigned __int8)a2[1] - 6) >> 1;
        }
        else if ( v4 == 2 )
        {
          return v2;
        }
        for ( i = 0; i < v5; ++i )
        {
          if ( *(_WORD *)(*(_QWORD *)(a1 + 16) + 2LL * i) != *(_WORD *)&a2[2 * i + 6] )
            return v2;
        }
        return 1;
      }
    }
  }
  return v2;
}
