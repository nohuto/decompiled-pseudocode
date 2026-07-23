/*
 * XREFs of DeleteNodeFromTree @ 0x18008EFF0
 * Callers:
 *     RtlDeleteElementGenericTableAvl @ 0x18008E420 (RtlDeleteElementGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvlEx @ 0x18008EF90 (RtlDeleteElementGenericTableAvlEx.c)
 * Callees:
 *     RebalanceNode @ 0x18008F1E0 (RebalanceNode.c)
 */

__int64 __fastcall DeleteNodeFromTree(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  unsigned __int8 **v5; // rsi
  unsigned __int8 **v7; // rbx
  unsigned __int8 *v8; // rax
  unsigned __int8 *v9; // rcx
  unsigned __int8 **v10; // r8
  unsigned __int8 *v11; // rcx
  unsigned __int8 *v12; // rcx
  unsigned __int8 *v13; // rdi
  __int64 result; // rax
  bool v15; // zf
  unsigned __int8 **j; // rax
  unsigned __int8 *v17; // rcx
  unsigned __int8 ***v18; // rax
  unsigned __int8 **i; // rax

  v4 = *(_QWORD *)(a2 + 8);
  v5 = (unsigned __int8 **)a2;
  if ( v4 && (v7 = *(unsigned __int8 ***)(a2 + 16)) != 0LL )
  {
    if ( *(char *)(a2 + 24) < 0 )
    {
      v7 = *(unsigned __int8 ***)(a2 + 8);
      for ( i = *(unsigned __int8 ***)(v4 + 16); i; i = (unsigned __int8 **)i[2] )
        v7 = i;
    }
    else
    {
      for ( j = (unsigned __int8 **)v7[1]; j; j = (unsigned __int8 **)j[1] )
        v7 = j;
    }
  }
  else
  {
    v7 = (unsigned __int8 **)a2;
  }
  v8 = *v7;
  LOBYTE(a2) = -1;
  v9 = v7[1];
  v10 = (unsigned __int8 **)*((_QWORD *)*v7 + 1);
  if ( v9 )
  {
    if ( v10 == v7 )
    {
      *((_QWORD *)v8 + 1) = v9;
    }
    else
    {
      *((_QWORD *)v8 + 2) = v9;
      LOBYTE(a2) = 1;
    }
    v12 = v7[1];
  }
  else
  {
    v11 = v7[2];
    if ( v10 == v7 )
    {
      *((_QWORD *)v8 + 1) = v11;
    }
    else
    {
      *((_QWORD *)v8 + 2) = v11;
      LOBYTE(a2) = 1;
    }
    v12 = v7[2];
    if ( !v12 )
      goto LABEL_8;
  }
  *(_QWORD *)v12 = *v7;
LABEL_8:
  *(_BYTE *)(a1 + 24) = 0;
  v13 = *v7;
  while ( 1 )
  {
    result = v13[24];
    if ( (_BYTE)result == (_BYTE)a2 )
    {
      v13[24] = 0;
      goto LABEL_16;
    }
    if ( !(_BYTE)result )
      break;
    result = RebalanceNode(v13, a2, v10, a4);
    if ( (_DWORD)result )
      goto LABEL_13;
    v13 = *(unsigned __int8 **)v13;
LABEL_16:
    a2 = 1LL;
    v15 = *(_QWORD *)(*(_QWORD *)v13 + 16LL) == (_QWORD)v13;
    v13 = *(unsigned __int8 **)v13;
    if ( !v15 )
      a2 = 0xFFFFFFFFLL;
  }
  v13[24] = -(char)a2;
  if ( *(_BYTE *)(a1 + 24) )
    --*(_DWORD *)(a1 + 48);
LABEL_13:
  if ( v5 != v7 )
  {
    *(_OWORD *)v7 = *(_OWORD *)v5;
    *((_OWORD *)v7 + 1) = *((_OWORD *)v5 + 1);
    v17 = *v7;
    if ( *((unsigned __int8 ***)*v5 + 1) == v5 )
      *((_QWORD *)v17 + 1) = v7;
    else
      *((_QWORD *)v17 + 2) = v7;
    v18 = (unsigned __int8 ***)v7[1];
    if ( v18 )
      *v18 = v7;
    result = (__int64)v7[2];
    if ( result )
      *(_QWORD *)result = v7;
  }
  return result;
}
