/*
 * XREFs of RtlEqualString @ 0x1800E2230
 * Callers:
 *     <none>
 * Callees:
 *     RtlUpperChar @ 0x1800708F0 (RtlUpperChar.c)
 *     RtlCompareMemory @ 0x180165F10 (RtlCompareMemory.c)
 */

bool __fastcall RtlEqualString(unsigned __int16 *a1, unsigned __int16 *a2, char a3)
{
  unsigned int v3; // r9d
  unsigned int v4; // eax
  int v6; // ebx
  int v7; // ebp
  bool v8; // cc
  _BYTE *v9; // rsi
  __int64 v10; // rax
  _BYTE *v11; // rdi
  SIZE_T v12; // r14
  _BYTE *v13; // r15
  SIZE_T v14; // rax
  int v15; // ebx
  int v16; // r12d
  unsigned __int8 v17; // al

  v3 = *a1;
  v4 = *a2;
  if ( (_WORD)v3 != (_WORD)v4 )
    return 0;
  v6 = *a1;
  v7 = *a2;
  v8 = v3 <= v4;
  v9 = (_BYTE *)*((_QWORD *)a2 + 1);
  v10 = *a1;
  if ( !v8 )
    v10 = *a2;
  v11 = (_BYTE *)*((_QWORD *)a1 + 1);
  v12 = (unsigned int)v10;
  v13 = &v11[v10];
  if ( a3 )
  {
    while ( v11 < v13 )
    {
      if ( *v11 != *v9 )
      {
        v16 = (unsigned __int8)RtlUpperChar();
        v17 = RtlUpperChar();
        if ( (_BYTE)v16 != v17 )
        {
          v15 = v16 - v17;
          return v15 == 0;
        }
      }
      ++v11;
      ++v9;
    }
  }
  else
  {
    v14 = RtlCompareMemory(v11, v9, (unsigned int)v10);
    if ( v14 < v12 )
    {
      v15 = (unsigned __int8)v11[v14] - (unsigned __int8)v9[v14];
      return v15 == 0;
    }
  }
  v15 = v6 - v7;
  return v15 == 0;
}
