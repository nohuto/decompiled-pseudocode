/*
 * XREFs of PpmParkFreeParkNodes @ 0x14075D868
 * Callers:
 *     PpmParkFreeAllParkNodes @ 0x14075D778 (PpmParkFreeAllParkNodes.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PpmParkFreeParkNodes(char *P, unsigned int a2)
{
  char *v3; // rbx
  __int64 v4; // rbp
  void *v5; // rcx
  __int64 i; // rsi
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx

  if ( P )
  {
    if ( a2 )
    {
      v3 = P + 1104;
      v4 = a2;
      do
      {
        if ( *(_QWORD *)v3 )
          ExFreePoolWithTag(*(PVOID *)v3, 0x704D5050u);
        v5 = (void *)*((_QWORD *)v3 + 22);
        if ( v5 )
          ExFreePoolWithTag(v5, 0x704D5050u);
        for ( i = 0LL; (unsigned int)i < (unsigned __int8)*(v3 - 1092); i = (unsigned int)(i + 1) )
        {
          v7 = *(void **)(640 * i + *((_QWORD *)v3 + 23) + 568);
          if ( v7 )
            ExFreePoolWithTag(v7, 0x704D5050u);
        }
        v8 = (void *)*((_QWORD *)v3 + 19);
        if ( v8 )
          ExFreePoolWithTag(v8, 0x704D5050u);
        v3 += 1296;
        --v4;
      }
      while ( v4 );
    }
    v9 = (void *)*((_QWORD *)P + 161);
    if ( v9 )
      ExFreePoolWithTag(v9, 0x704D5050u);
    ExFreePoolWithTag(P, 0x704D5050u);
  }
}
