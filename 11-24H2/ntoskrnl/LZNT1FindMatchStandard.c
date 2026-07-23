/*
 * XREFs of LZNT1FindMatchStandard @ 0x140B66610
 * Callers:
 *     LZNT1CompressChunk @ 0x140B66310 (LZNT1CompressChunk.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LZNT1FindMatchStandard(unsigned __int8 *a1, __int64 a2)
{
  char v2; // bl
  int v4; // edi
  int v5; // ebp
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r13
  unsigned int v9; // esi
  __int64 v10; // rax
  _BYTE **v11; // r15
  __int64 v12; // r12
  _BYTE *v13; // rcx
  unsigned int v14; // edx
  unsigned int v15; // r10d
  _BYTE *v16; // r8
  _BYTE *v18; // r13
  _BYTE *v19; // rbx
  unsigned __int64 v20; // [rsp+40h] [rbp+8h]

  v2 = *a1;
  v4 = a1[1];
  v5 = a1[2];
  v7 = *(_QWORD *)a2;
  v8 = *(_QWORD *)(a2 + 8);
  v9 = *(_DWORD *)(a2 + 16);
  v20 = v8;
  v10 = ((-24993 * (v5 ^ (16 * (v4 ^ (16 * *a1))))) >> 4) & 0xFFF;
  v11 = (_BYTE **)(a2 + 16 * (v10 + 2));
  v12 = a2 + 16LL * (unsigned int)v10;
  v13 = *(_BYTE **)(v12 + 40);
  v14 = 0;
  v15 = 0;
  v16 = *v11;
  if ( (unsigned __int64)*v11 >= v7 && v16 < a1 && *v16 == v2 && v16[1] == (_BYTE)v4 && v16[2] == (_BYTE)v5 )
  {
    v14 = 3;
    if ( v9 > 3 )
    {
      v18 = a1 + 3;
      do
      {
        if ( (unsigned __int64)&a1[v14] >= v20 )
          break;
        if ( *v18 != v18[v16 - a1] )
          break;
        ++v14;
        ++v18;
      }
      while ( v14 < v9 );
      v8 = v20;
    }
  }
  if ( (unsigned __int64)v13 >= v7 && v13 < a1 && *v13 == v2 && v13[1] == (_BYTE)v4 && v13[2] == (_BYTE)v5 )
  {
    v15 = 3;
    if ( v9 > 3 )
    {
      v19 = a1 + 3;
      do
      {
        if ( (unsigned __int64)&a1[v15] >= v8 )
          break;
        if ( *v19 != v19[v13 - a1] )
          break;
        ++v15;
        ++v19;
      }
      while ( v15 < v9 );
    }
  }
  *(_QWORD *)(v12 + 40) = v16;
  *v11 = a1;
  if ( v14 < v15 )
  {
    *(_QWORD *)(a2 + 24) = v13;
    return v15;
  }
  else
  {
    *(_QWORD *)(a2 + 24) = v16;
    return v14;
  }
}
