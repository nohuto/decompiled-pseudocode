/*
 * XREFs of LZNT1FindMatchStandard @ 0x140B543A0
 * Callers:
 *     LZNT1CompressChunk @ 0x140B540B0 (LZNT1CompressChunk.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LZNT1FindMatchStandard(char *a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // r10d
  unsigned __int64 v5; // rbp
  int v6; // r12d
  unsigned __int64 v7; // r13
  char v8; // r14
  int v9; // r15d
  __int64 v10; // rax
  unsigned __int64 v11; // r11
  _BYTE *v12; // rdx
  __int64 result; // rax
  _BYTE *v14; // r9
  _BYTE *v15; // r9
  unsigned __int64 *v16; // [rsp+40h] [rbp+8h]
  unsigned __int64 *v17; // [rsp+48h] [rbp+10h]

  v2 = *(_DWORD *)(a2 + 16);
  v3 = 0;
  v5 = *(_QWORD *)(a2 + 8);
  v6 = (unsigned __int8)a1[2];
  v7 = *(_QWORD *)a2;
  v8 = *a1;
  v9 = (unsigned __int8)a1[1];
  v10 = ((-24993 * (v6 ^ (16 * (v9 ^ (16 * (unsigned __int8)*a1))))) >> 4) & 0xFFF;
  v17 = (unsigned __int64 *)(a2 + 16 * (v10 + 2));
  v11 = *v17;
  v16 = (unsigned __int64 *)(16LL * (unsigned int)v10 + a2 + 40);
  v12 = (_BYTE *)*v16;
  result = 0LL;
  if ( *v17 >= v7 && v11 < (unsigned __int64)a1 && *(_BYTE *)v11 == v8 && *(_WORD *)(v11 + 1) == __PAIR16__(v6, v9) )
  {
    v3 = 3;
    if ( v2 > 3 )
    {
      v14 = a1 + 3;
      do
      {
        if ( (unsigned __int64)&a1[v3] >= v5 )
          break;
        if ( *v14 != v14[v11 - (_QWORD)a1] )
          break;
        ++v3;
        ++v14;
      }
      while ( v3 < v2 );
    }
  }
  if ( (unsigned __int64)v12 >= v7 && v12 < a1 && *v12 == v8 && v12[1] == (_BYTE)v9 && v12[2] == (_BYTE)v6 )
  {
    result = 3LL;
    if ( v2 > 3 )
    {
      v15 = a1 + 3;
      do
      {
        if ( (unsigned __int64)&a1[(unsigned int)result] >= v5 )
          break;
        if ( *v15 != v15[v12 - a1] )
          break;
        result = (unsigned int)(result + 1);
        ++v15;
      }
      while ( (unsigned int)result < v2 );
    }
  }
  *v16 = v11;
  *v17 = (unsigned __int64)a1;
  if ( v3 < (unsigned int)result )
  {
    *(_QWORD *)(a2 + 24) = v12;
  }
  else
  {
    *(_QWORD *)(a2 + 24) = v11;
    return v3;
  }
  return result;
}
