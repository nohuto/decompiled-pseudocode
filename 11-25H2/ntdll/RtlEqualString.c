/*
 * XREFs of RtlEqualString @ 0x1800DEF00
 * Callers:
 *     <none>
 * Callees:
 *     RtlUpperChar @ 0x1800714F0 (RtlUpperChar.c)
 *     RtlCompareMemory @ 0x1801674A0 (RtlCompareMemory.c)
 */

BOOLEAN __cdecl RtlEqualString(PSTRING String1, PSTRING String2, BOOLEAN CaseInSensitive)
{
  unsigned int Length; // r9d
  unsigned int v4; // eax
  int v6; // ebx
  int v7; // ebp
  bool v8; // cc
  char *Buffer; // rsi
  __int64 v10; // rax
  char *v11; // rdi
  SIZE_T v12; // r14
  char *v13; // r15
  SIZE_T v14; // rax
  int v15; // ebx
  CHAR v16; // r14
  int v17; // r12d
  unsigned __int8 v18; // al

  Length = String1->Length;
  v4 = String2->Length;
  if ( (_WORD)Length != (_WORD)v4 )
    return 0;
  v6 = String1->Length;
  v7 = String2->Length;
  v8 = Length <= v4;
  Buffer = String2->Buffer;
  v10 = String1->Length;
  if ( !v8 )
    v10 = String2->Length;
  v11 = String1->Buffer;
  v12 = (unsigned int)v10;
  v13 = &v11[v10];
  if ( CaseInSensitive )
  {
    while ( v11 < v13 )
    {
      v16 = *Buffer;
      if ( *v11 != *Buffer )
      {
        v17 = (unsigned __int8)RtlUpperChar(*v11);
        v18 = RtlUpperChar(v16);
        if ( (_BYTE)v17 != v18 )
        {
          v15 = v17 - v18;
          return v15 == 0;
        }
      }
      ++v11;
      ++Buffer;
    }
  }
  else
  {
    v14 = RtlCompareMemory(v11, Buffer, (unsigned int)v10);
    if ( v14 < v12 )
    {
      v15 = (unsigned __int8)v11[v14] - (unsigned __int8)Buffer[v14];
      return v15 == 0;
    }
  }
  v15 = v6 - v7;
  return v15 == 0;
}
