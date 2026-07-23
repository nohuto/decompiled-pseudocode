/*
 * XREFs of MiRestrictSystemCodeProtection @ 0x1404F8E38
 * Callers:
 *     MiSetSystemCodeProtection @ 0x1404289BC (MiSetSystemCodeProtection.c)
 *     MiProtectLargeKernelHalRange @ 0x1407E8490 (MiProtectLargeKernelHalRange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiRestrictSystemCodeProtection(__int64 a1, unsigned int a2)
{
  __int64 v2; // r9
  unsigned int v3; // r8d

  if ( (a1 & 1) != 0 )
  {
    if ( (a1 & 0x800) != 0 )
    {
      LOBYTE(v2) = 6;
      if ( a1 < 0 )
        LOBYTE(v2) = 4;
    }
    else
    {
      LOBYTE(v2) = 3;
      if ( a1 < 0 )
        LOBYTE(v2) = 1;
    }
  }
  else
  {
    v2 = ((unsigned __int64)a1 >> 5) & 0x1F;
  }
  if ( (v2 & 7) != 0 )
  {
    v3 = a2 & 0xFFFFFFFD;
    if ( (v2 & 2) != 0 )
      v3 = a2;
    if ( (v3 & 7) != 0 && (v2 & 4) == 0 )
      return v3 & 2 | 1;
  }
  else
  {
    return 24;
  }
  return v3;
}
