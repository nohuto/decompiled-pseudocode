/*
 * XREFs of MiClearRangeInPartitionTree @ 0x14068AF94
 * Callers:
 *     MiAddMdlToPartitionTree @ 0x14068A980 (MiAddMdlToPartitionTree.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402911D0 (RtlAvlRemoveNode.c)
 *     RtlClearBitsEx @ 0x1402920E0 (RtlClearBitsEx.c)
 *     MiDeletePartitionPageNode @ 0x14068B124 (MiDeletePartitionPageNode.c)
 */

void __fastcall MiClearRangeInPartitionTree(unsigned __int64 *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rbp
  __int64 v5; // rsi
  char *v7; // rbx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 *v10; // r14
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rdx
  __int64 *v13; // rcx
  char v14; // r10
  __int64 v15; // r8
  __int64 *v16; // r9
  bool v17; // zf
  bool i; // zf
  __int64 v19; // rdx

  if ( a3 )
  {
    v3 = a2 & 0x3FFFFFFFFFFC0000LL;
    v4 = a3;
    v5 = a2;
    while ( 1 )
    {
      v7 = (char *)*a1;
      if ( *a1 )
      {
        v8 = v3 & 0x3FFFFFFFFFFFFFFFLL;
        do
        {
          v9 = *((_QWORD *)v7 + 3) & 0x3FFFFFFFFFFFFFFFLL;
          if ( v8 >= v9 )
          {
            if ( v8 < *((_QWORD *)v7 + 4) + v9 )
              break;
            v7 = (char *)*((_QWORD *)v7 + 1);
          }
          else
          {
            v7 = *(char **)v7;
          }
        }
        while ( v7 );
      }
      v10 = (unsigned __int64 *)(v7 + 32);
      v11 = v4;
      if ( *((_QWORD *)v7 + 4) + (*((_QWORD *)v7 + 3) & 0x3FFFFFFFFFFFFFFFuLL) - v5 <= v4 )
        v11 = *((_QWORD *)v7 + 4) + (*((_QWORD *)v7 + 3) & 0x3FFFFFFFFFFFFFFFLL) - v5;
      RtlClearBitsEx((__int64)(v7 + 32), v5 - (*((_QWORD *)v7 + 3) & 0x3FFFFFFFFFFFFFFFLL), v11);
      *((_QWORD *)v7 + 3) &= ~0x8000000000000000uLL;
      v12 = *v10;
      if ( !*v10 )
        goto LABEL_26;
      if ( v12 <= 1 )
        break;
      v13 = (__int64 *)*((_QWORD *)v7 + 5);
      v14 = v12 - 1;
      v15 = *v13;
      v16 = &v13[(v12 - 1) >> 6];
      if ( v13 != v16 )
      {
        for ( i = v15 == 0; i; i = v19 == 0 )
        {
          v19 = *++v13;
          if ( v13 == v16 )
          {
            v17 = (v19 & (0xFFFFFFFFFFFFFFFFuLL >> ~v14)) == 0;
            goto LABEL_24;
          }
        }
        goto LABEL_26;
      }
      v17 = (v15 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v12))) == 0;
LABEL_24:
      if ( v17 )
        goto LABEL_25;
LABEL_26:
      v5 += v11;
      v3 = v5 ^ (v5 ^ v3) & 0xC000000000000000uLL;
      v4 -= v11;
      if ( !v4 )
        return;
    }
    if ( v12 != 1 || _bittest64(*((const signed __int64 **)v7 + 5), 0) )
      goto LABEL_26;
LABEL_25:
    RtlAvlRemoveNode(a1, (__int64)v7);
    MiDeletePartitionPageNode(v7);
    goto LABEL_26;
  }
}
