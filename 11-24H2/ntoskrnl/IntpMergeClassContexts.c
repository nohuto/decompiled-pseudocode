/*
 * XREFs of IntpMergeClassContexts @ 0x140C5ED10
 * Callers:
 *     IntPartCreate @ 0x140C5EE28 (IntPartCreate.c)
 * Callees:
 *     <none>
 */

void __fastcall IntpMergeClassContexts(__int64 a1, unsigned int a2, unsigned __int8 a3)
{
  unsigned int v6; // eax
  unsigned int v7; // r8d
  unsigned int v8; // ebx
  unsigned __int8 *v9; // rcx
  unsigned int v10; // edx
  __int64 v11; // rbx
  __int64 i; // r9
  __int64 j; // r8
  __int64 v14; // rcx

  if ( a2 != 1 )
  {
    while ( 1 )
    {
      v6 = 0;
      v7 = 255;
      v8 = -1;
      if ( a2 )
      {
        v9 = (unsigned __int8 *)(a1 + 1);
        do
        {
          v10 = *v9;
          if ( (_BYTE)v10 && v10 <= v8 )
          {
            v7 = v6;
            v8 = *v9;
          }
          ++v6;
          v9 += 24;
        }
        while ( v6 < a2 );
      }
      v11 = 3LL * v7;
      if ( a3 <= *(_BYTE *)(a1 + 24LL * v7 + 1) )
        break;
      if ( v7 != a2 - 1 )
      {
        for ( i = v7 + 1; (unsigned int)i < a2; i = (unsigned int)(i + 1) )
        {
          if ( *(_BYTE *)(a1 + 24 * i + 1) )
            goto LABEL_15;
        }
      }
      LODWORD(i) = -1;
LABEL_15:
      if ( v7 )
      {
        for ( j = v7 - 1; !*(_BYTE *)(a1 + 24 * j + 1); j = (unsigned int)(j - 1) )
        {
          if ( !(_DWORD)j )
            goto LABEL_20;
        }
      }
      else
      {
LABEL_20:
        LODWORD(j) = -1;
      }
      if ( (_DWORD)i == -1 )
      {
        if ( (_DWORD)j == -1 )
          return;
      }
      else
      {
        if ( (_DWORD)j != -1
          && *(_BYTE *)(a1 + 24LL * (unsigned int)j + 1) <= *(_BYTE *)(a1 + 24LL * (unsigned int)i + 1) )
        {
          LODWORD(i) = j;
        }
        LODWORD(j) = i;
      }
      v14 = 3LL * (unsigned int)j;
      *(_QWORD *)(a1 + 8 * v14 + 8) |= *(_QWORD *)(a1 + 8 * v11 + 8);
      *(_BYTE *)(a1 + 8 * v14 + 1) += *(_BYTE *)(a1 + 8 * v11 + 1);
      *(_QWORD *)(a1 + 8 * v11 + 8) = 0LL;
      *(_BYTE *)(a1 + 8 * v11 + 1) = 0;
    }
  }
}
