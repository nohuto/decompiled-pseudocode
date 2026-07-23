/*
 * XREFs of PspSanitizeResourceLimits @ 0x14077404C
 * Callers:
 *     PspReadUserQuotaLimits @ 0x140A2BEBC (PspReadUserQuotaLimits.c)
 *     PsInitializeQuotaSystem @ 0x140C37CA8 (PsInitializeQuotaSystem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspSanitizeResourceLimits(unsigned int *a1, int a2)
{
  int v2; // r10d
  char *v3; // r11
  unsigned int *v5; // r8
  unsigned int v6; // edx
  unsigned int v7; // eax
  unsigned int v8; // eax

  v2 = 0;
  v3 = PspResourceFlags;
  v5 = a1;
  while ( v2 < 4 )
  {
    if ( (*v3 & 2) != 0 )
    {
      v6 = *v5;
      if ( (*v5 & 0x7F) - 1 > 0x63 || v6 >= 0x80 )
      {
        if ( !a2 )
          return 3221225485LL;
        *v5 = v6 & 0xFFFFFF80 | 0x64;
      }
    }
    else if ( (*v3 & 1) != 0 && !*v5 )
    {
      *v5 = -1;
    }
    ++v2;
    v3 += 8;
    ++v5;
  }
  v7 = *a1;
  if ( *a1 != -1 )
  {
    if ( v7 >= 0xFFF )
    {
      if ( !a2 )
        return 3221225485LL;
      *a1 = -1;
    }
    else
    {
      *a1 = v7 << 20;
    }
  }
  v8 = a1[1];
  if ( v8 == -1 )
    return 0LL;
  if ( v8 < 0xFFF )
  {
    a1[1] = v8 << 20;
    return 0LL;
  }
  if ( a2 )
  {
    a1[1] = -1;
    return 0LL;
  }
  return 3221225485LL;
}
