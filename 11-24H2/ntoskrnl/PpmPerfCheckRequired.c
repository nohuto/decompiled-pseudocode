/*
 * XREFs of PpmPerfCheckRequired @ 0x1404A3880
 * Callers:
 *     PpmCheckReInit @ 0x140A6B620 (PpmCheckReInit.c)
 * Callees:
 *     <none>
 */

char __fastcall PpmPerfCheckRequired(__int64 a1)
{
  char v1; // dl
  unsigned int i; // r8d
  char v5; // cl
  char v6; // r9
  __int64 j; // rax

  v1 = 0;
  for ( i = 0; i < 2; ++i )
  {
    v5 = *(_BYTE *)(i + a1 + 42);
    v6 = *(_BYTE *)(i + a1 + 44);
    if ( v5 != v6 )
      return 1;
    if ( v5 == 100 && v6 == 100 && ((*(_DWORD *)(a1 + 72) - 1) & 0xFFFFFFFD) == 0 )
    {
      for ( j = PpmPerfDomainHead; (__int64 *)j != &PpmPerfDomainHead; j = *(_QWORD *)j )
      {
        if ( *(_DWORD *)(j + 452) > 0x64u )
          return 1;
      }
    }
  }
  return v1;
}
