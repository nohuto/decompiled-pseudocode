/*
 * XREFs of ComputeEventEntryHash @ 0x140274318
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x140274A04 (InsertEventEntryInLookUpTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ComputeEventEntryHash(char a1, unsigned __int8 a2, __int64 a3)
{
  unsigned int v3; // r9d
  unsigned __int64 i; // rcx
  int v6; // eax
  unsigned __int8 v7; // r10
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned __int64 j; // rdx
  int v11; // eax

  v3 = 0;
  for ( i = 0LL; i < 8; ++i )
  {
    v6 = *(unsigned __int8 *)(a3 + i + 16);
    v3 = ((1025 * (v3 + v6)) >> 6) ^ (1025 * (v3 + v6));
  }
  v7 = a1 + 2;
  if ( v7 < a2 )
  {
    v8 = a3 + 16LL * v7;
    v9 = (unsigned __int8)(a2 - v7);
    do
    {
      for ( j = 0LL; j < *(unsigned int *)(v8 + 8); v3 = ((1025 * (v3 + v11)) >> 6) ^ (1025 * (v3 + v11)) )
      {
        v11 = *(unsigned __int8 *)(j + *(_QWORD *)v8);
        ++j;
      }
      v8 += 16LL;
      --v9;
    }
    while ( v9 );
  }
  return 32769 * ((9 * v3) ^ ((9 * v3) >> 11));
}
