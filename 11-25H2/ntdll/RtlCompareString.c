/*
 * XREFs of RtlCompareString @ 0x180071090
 * Callers:
 *     <none>
 * Callees:
 *     RtlUpperChar @ 0x1800714F0 (RtlUpperChar.c)
 *     RtlCompareMemory @ 0x1801674A0 (RtlCompareMemory.c)
 */

__int64 __fastcall RtlCompareString(unsigned __int16 *a1, unsigned __int16 *a2, char a3)
{
  unsigned int v3; // ebp
  unsigned int v4; // r14d
  __int64 v5; // rax
  _BYTE *v6; // rbx
  unsigned __int8 *v7; // rdi
  SIZE_T v8; // rsi
  _BYTE *v9; // r15
  SIZE_T v10; // rax
  unsigned __int8 v12; // si
  int v13; // r12d
  unsigned __int8 v14; // al

  v3 = *a1;
  v4 = *a2;
  v5 = *a1;
  v6 = (_BYTE *)*((_QWORD *)a1 + 1);
  v7 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
  if ( v3 > v4 )
    v5 = *a2;
  v8 = (unsigned int)v5;
  v9 = &v6[v5];
  if ( a3 )
  {
    while ( v6 < v9 )
    {
      v12 = *v7;
      if ( *v6 != *v7 )
      {
        v13 = (unsigned __int8)((__int64 (*)(void))RtlUpperChar)();
        v14 = RtlUpperChar(v12);
        if ( (_BYTE)v13 != v14 )
          return v13 - (unsigned int)v14;
      }
      ++v6;
      ++v7;
    }
    return v3 - v4;
  }
  v10 = RtlCompareMemory(*((const void **)a1 + 1), *((const void **)a2 + 1), (unsigned int)v5);
  if ( v10 >= v8 )
    return v3 - v4;
  return (unsigned __int8)v6[v10] - (unsigned int)v7[v10];
}
