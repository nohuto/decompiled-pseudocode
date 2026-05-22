/*
 * XREFs of ?Break@PointerMetadata@@YAXPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@Z @ 0x1800696B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PointerMetadata::Break(__int64 a1, _QWORD *a2)
{
  __int64 i; // r8
  __int64 v3; // r9
  unsigned __int64 v4; // r10
  int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // r10
  __int64 v8; // r9
  __int64 v9; // r10
  __int64 v10; // rax
  int v11; // [rsp+8h] [rbp+8h]

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 316); i = (unsigned int)(i + 1) )
  {
    v3 = 0xCBF29CE484222325uLL;
    v4 = 0LL;
    v5 = *(_DWORD *)(a1 + 144 * i + 324);
    v11 = v5;
    do
    {
      v6 = *((unsigned __int8 *)&v11 + v4++);
      v3 = 0x100000001B3LL * (v6 ^ v3);
    }
    while ( v4 < 4 );
    v7 = v3 & a2[6];
    v8 = a2[3];
    v9 = 2 * v7;
    v10 = *(_QWORD *)(v8 + 8 * v9 + 8);
    if ( v10 == a2[1] )
    {
LABEL_8:
      v10 = 0LL;
    }
    else
    {
      while ( v5 != *(_DWORD *)(v10 + 16) )
      {
        if ( v10 == *(_QWORD *)(v8 + 8 * v9) )
          goto LABEL_8;
        v10 = *(_QWORD *)(v10 + 8);
      }
    }
    if ( v10 )
      *(_DWORD *)(a1 + 144 * i + 332) |= 0x48000u;
  }
}
