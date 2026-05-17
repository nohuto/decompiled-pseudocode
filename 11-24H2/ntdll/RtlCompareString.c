/*
 * XREFs of RtlCompareString @ 0x1800E3EE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlUpperChar @ 0x1800708F0 (RtlUpperChar.c)
 *     RtlCompareMemory @ 0x180165F10 (RtlCompareMemory.c)
 */

__int64 __fastcall RtlCompareString(unsigned __int16 *a1, unsigned __int16 *a2, char a3)
{
  unsigned int v3; // ebp
  unsigned int v4; // r14d
  __int64 v5; // rax
  _BYTE *v6; // rbx
  _BYTE *v7; // rdi
  SIZE_T v8; // rsi
  _BYTE *v9; // r15
  SIZE_T v10; // rax
  int v12; // r12d
  unsigned __int8 v13; // al

  v3 = *a1;
  v4 = *a2;
  v5 = *a1;
  v6 = (_BYTE *)*((_QWORD *)a1 + 1);
  v7 = (_BYTE *)*((_QWORD *)a2 + 1);
  if ( v3 > v4 )
    v5 = *a2;
  v8 = (unsigned int)v5;
  v9 = &v6[v5];
  if ( a3 )
  {
    while ( v6 < v9 )
    {
      if ( *v6 != *v7 )
      {
        v12 = (unsigned __int8)RtlUpperChar();
        v13 = RtlUpperChar();
        if ( (_BYTE)v12 != v13 )
          return v12 - (unsigned int)v13;
      }
      ++v6;
      ++v7;
    }
    return v3 - v4;
  }
  v10 = RtlCompareMemory(*((const void **)a1 + 1), *((const void **)a2 + 1), (unsigned int)v5);
  if ( v10 >= v8 )
    return v3 - v4;
  return (unsigned __int8)v6[v10] - (unsigned int)(unsigned __int8)v7[v10];
}
