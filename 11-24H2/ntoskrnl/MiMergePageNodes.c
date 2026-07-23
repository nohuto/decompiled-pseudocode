/*
 * XREFs of MiMergePageNodes @ 0x14068BF00
 * Callers:
 *     MiFinishChildPartitionHotAdd @ 0x14068B460 (MiFinishChildPartitionHotAdd.c)
 *     MiInsertPartitionPageNodes @ 0x14068B7F4 (MiInsertPartitionPageNodes.c)
 *     MiReturnPartitionPagesToParent @ 0x14068C3BC (MiReturnPartitionPagesToParent.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x1402903E0 (RtlAvlInsertNodeEx.c)
 *     RtlAvlRemoveNode @ 0x1402911D0 (RtlAvlRemoveNode.c)
 *     RtlMergeBitMapsEx @ 0x1405E56D0 (RtlMergeBitMapsEx.c)
 */

__int64 __fastcall MiMergePageNodes(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 v4; // rsi
  unsigned __int64 v5; // rbx
  unsigned int v6; // r14d
  unsigned __int64 *v8; // r12
  _QWORD *v9; // rdi
  bool v10; // bp
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rsi
  unsigned __int64 *v16; // rbx
  unsigned __int64 v17; // rdx
  __int64 *v18; // rcx
  char v19; // r10
  __int64 v20; // r8
  __int64 *v21; // r9
  bool v22; // zf
  bool i; // zf
  __int64 v24; // rdx
  unsigned __int64 v26; // [rsp+38h] [rbp-40h]
  __int64 v27; // [rsp+40h] [rbp-38h] BYREF
  __int64 v28; // [rsp+48h] [rbp-30h]
  __int64 v29; // [rsp+88h] [rbp+10h]

  v4 = *(_QWORD *)(a2 + 40);
  v5 = *(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  v6 = 0;
  v29 = *(_QWORD *)(a2 + 32);
  v26 = v5;
  v28 = v4;
  v27 = 0x40000LL;
  if ( !v29 )
    return v6;
  v8 = (unsigned __int64 *)(a1 + 24);
  do
  {
    v9 = (_QWORD *)*v8;
    v10 = 0;
    if ( !*v8 )
    {
LABEL_7:
      if ( a3 )
      {
        v14 = (_QWORD *)*a3;
        if ( *a3 )
        {
          do
          {
            v15 = (__int64)v14;
            v14 = (_QWORD *)*v14;
          }
          while ( v14 );
          RtlAvlRemoveNode(a3, v15);
          *(_QWORD *)(v15 + 24) = v5 & 0x3FFFFFFFFFFFFFFFLL;
          RtlAvlInsertNodeEx(v8, (unsigned __int64)v9, v10, (_QWORD *)v15);
          goto LABEL_11;
        }
      }
      RtlAvlInsertNodeEx(v8, (unsigned __int64)v9, v10, (_QWORD *)a2);
      goto LABEL_35;
    }
    v11 = v5 & 0x3FFFFFFFFFFFFFFFLL;
    while ( 1 )
    {
      v12 = v9[3] & 0x3FFFFFFFFFFFFFFFLL;
      if ( v11 < v12 )
      {
        v13 = (_QWORD *)*v9;
        if ( !*v9 )
          goto LABEL_7;
        goto LABEL_21;
      }
      if ( v11 < v9[4] + v12 )
        break;
      v13 = (_QWORD *)v9[1];
      if ( !v13 )
      {
        v10 = 1;
        goto LABEL_7;
      }
LABEL_21:
      v9 = v13;
    }
    v15 = (__int64)v9;
LABEL_11:
    v16 = (unsigned __int64 *)(v15 + 32);
    RtlMergeBitMapsEx((unsigned __int64 *)(v15 + 32), &v27);
    if ( !_bittest64((const signed __int64 *)(a2 + 24), 0x3Eu) || !_bittest64((const signed __int64 *)(v15 + 24), 0x3Eu) )
      *(_QWORD *)(v15 + 24) &= ~0x4000000000000000uLL;
    v17 = *v16;
    if ( *v16 )
    {
      if ( v17 > 1 )
      {
        v18 = *(__int64 **)(v15 + 40);
        v19 = v17 - 1;
        v20 = *v18;
        v21 = &v18[(v17 - 1) >> 6];
        if ( v18 == v21 )
        {
          v22 = ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v17)) & v20) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v17);
LABEL_31:
          if ( v22 )
LABEL_32:
            *(_QWORD *)(v15 + 24) |= 0x8000000000000000uLL;
        }
        else
        {
          for ( i = v20 == -1; i; i = v24 == -1 )
          {
            v24 = *++v18;
            if ( v18 == v21 )
            {
              v22 = ((0xFFFFFFFFFFFFFFFFuLL >> ~v19) & v24) == 0xFFFFFFFFFFFFFFFFuLL >> ~v19;
              goto LABEL_31;
            }
          }
        }
      }
      else if ( v17 == 1 && _bittest64(*(const signed __int64 **)(v15 + 40), 0) )
      {
        goto LABEL_32;
      }
    }
    v4 = v28;
    v6 = 1;
    v5 = v26;
LABEL_35:
    v4 += 0x8000LL;
    v28 = v4;
    v5 = v5 & 0xC000000000000000uLL | (v5 + 0x40000) & 0x3FFFFFFFFFFFFFFFLL;
    v22 = v29 == 0x40000;
    v29 -= 0x40000LL;
    v26 = v5;
  }
  while ( !v22 );
  return v6;
}
