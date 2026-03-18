/*
 * XREFs of PpmParkFreeParkNodes @ 0x140751EB4
 * Callers:
 *     PpmParkFreeAllParkNodes @ 0x140751DE0 (PpmParkFreeAllParkNodes.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PpmParkFreeParkNodes(char *P, unsigned int a2)
{
  char *v3; // rbx
  __int64 v4; // rbp
  void *v5; // rcx
  unsigned int i; // esi
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx

  if ( P )
  {
    if ( a2 )
    {
      v3 = P + 48;
      v4 = a2;
      do
      {
        if ( *(_QWORD *)v3 )
          ExFreePoolWithTag(*(PVOID *)v3, 0x704D5050u);
        v5 = (void *)*((_QWORD *)v3 + 18);
        if ( v5 )
          ExFreePoolWithTag(v5, 0x704D5050u);
        for ( i = 0; i < (unsigned __int8)*(v3 - 37); ++i )
        {
          v7 = *(void **)(104LL * i + *((_QWORD *)v3 + 19) + 32);
          if ( v7 )
            ExFreePoolWithTag(v7, 0x704D5050u);
        }
        v8 = (void *)*((_QWORD *)v3 + 16);
        if ( v8 )
          ExFreePoolWithTag(v8, 0x704D5050u);
        v3 += 208;
        --v4;
      }
      while ( v4 );
    }
    v9 = (void *)*((_QWORD *)P + 25);
    if ( v9 )
      ExFreePoolWithTag(v9, 0x704D5050u);
    ExFreePoolWithTag(P, 0x704D5050u);
  }
}
