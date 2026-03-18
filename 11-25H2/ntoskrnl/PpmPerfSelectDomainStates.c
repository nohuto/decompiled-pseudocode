/*
 * XREFs of PpmPerfSelectDomainStates @ 0x14043EAD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char PpmPerfSelectDomainStates()
{
  __int64 i; // rcx
  unsigned int v1; // eax
  unsigned int v2; // r8d
  __int64 v3; // rdx
  __int64 v4; // r10
  unsigned int v5; // eax
  char v6; // r11
  char v8; // r9

  for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
  {
    v5 = *(_DWORD *)(i + 296);
    v6 = 0;
    v8 = 0;
    v2 = 1;
    if ( v5 )
    {
      v4 = v5;
      v3 = *(_QWORD *)(i + 312) + 56LL;
      do
      {
        if ( *(_DWORD *)(v3 - 40) != 2 )
        {
          v1 = *(_DWORD *)v3;
          if ( *(_DWORD *)v3 <= v2 )
            v1 = v2;
          v2 = v1;
          if ( *(_BYTE *)(v3 + 4) )
            v8 = 1;
        }
        v3 += 1192LL;
        --v4;
      }
      while ( v4 );
    }
    if ( *(_DWORD *)(i + 524) != v2 || *(_BYTE *)(i + 532) != v8 )
      v6 = 1;
    *(_DWORD *)(i + 524) = v2;
    *(_BYTE *)(i + 532) = v8;
    if ( v6 )
      *(_BYTE *)(i + 1213) = 1;
  }
  return 1;
}
