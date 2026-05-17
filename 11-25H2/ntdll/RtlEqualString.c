/*
 * XREFs of RtlEqualString @ 0x1800DEF00
 * Callers:
 *     <none>
 * Callees:
 *     RtlUpperChar @ 0x1800714F0 (RtlUpperChar.c)
 *     RtlCompareMemory @ 0x1801674A0 (RtlCompareMemory.c)
 */

bool __fastcall RtlEqualString(unsigned __int16 *a1, unsigned __int16 *a2, __int64 a3)
{
  unsigned int v3; // r9d
  unsigned int v4; // eax
  int v6; // ebx
  int v7; // ebp
  bool v8; // cc
  unsigned __int8 *v9; // rsi
  __int64 v10; // rax
  unsigned __int8 *v11; // rdi
  SIZE_T v12; // r14
  unsigned __int8 *v13; // r15
  SIZE_T v14; // rax
  int v15; // ebx
  __int64 v16; // rcx
  unsigned __int8 v17; // r14
  int v18; // r12d
  __int64 v19; // rdx
  __int64 v20; // r8
  unsigned __int8 v21; // al

  v3 = *a1;
  v4 = *a2;
  if ( (_WORD)v3 != (_WORD)v4 )
    return 0;
  v6 = *a1;
  v7 = *a2;
  v8 = v3 <= v4;
  v9 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
  v10 = *a1;
  if ( !v8 )
    v10 = *a2;
  v11 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v12 = (unsigned int)v10;
  v13 = &v11[v10];
  if ( (_BYTE)a3 )
  {
    while ( v11 < v13 )
    {
      v16 = *v11;
      v17 = *v9;
      if ( (_BYTE)v16 != *v9 )
      {
        v18 = (unsigned __int8)RtlUpperChar(v16, (__int64)a2, a3);
        v21 = RtlUpperChar(v17, v19, v20);
        if ( (_BYTE)v18 != v21 )
        {
          v15 = v18 - v21;
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
      v15 = v11[v14] - v9[v14];
      return v15 == 0;
    }
  }
  v15 = v6 - v7;
  return v15 == 0;
}
