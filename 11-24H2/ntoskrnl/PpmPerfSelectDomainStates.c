/*
 * XREFs of PpmPerfSelectDomainStates @ 0x140434CC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char PpmPerfSelectDomainStates()
{
  __int64 i; // rcx
  __int64 v1; // rdx
  __int64 v2; // r10
  unsigned int v3; // eax
  char v4; // r11
  char v5; // r9
  unsigned int v6; // r8d
  unsigned int v7; // eax

  for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
  {
    v3 = *(_DWORD *)(i + 296);
    v4 = 0;
    v5 = 0;
    v6 = 1;
    if ( v3 )
    {
      v2 = v3;
      v1 = *(_QWORD *)(i + 312) + 56LL;
      do
      {
        if ( *(_DWORD *)(v1 - 40) != 2 )
        {
          v7 = *(_DWORD *)v1;
          if ( *(_DWORD *)v1 <= v6 )
            v7 = v6;
          v6 = v7;
          if ( *(_BYTE *)(v1 + 4) )
            v5 = 1;
        }
        v1 += 1192LL;
        --v2;
      }
      while ( v2 );
    }
    if ( *(_DWORD *)(i + 524) != v6 || *(_BYTE *)(i + 532) != v5 )
      v4 = 1;
    *(_DWORD *)(i + 524) = v6;
    *(_BYTE *)(i + 532) = v5;
    if ( v4 )
      *(_BYTE *)(i + 1213) = 1;
  }
  return 1;
}
