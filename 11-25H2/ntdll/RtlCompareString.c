/*
 * XREFs of RtlCompareString @ 0x180071090
 * Callers:
 *     <none>
 * Callees:
 *     RtlUpperChar @ 0x1800714F0 (RtlUpperChar.c)
 *     RtlCompareMemory @ 0x1801674A0 (RtlCompareMemory.c)
 */

LONG __cdecl RtlCompareString(PSTRING String1, PSTRING String2, BOOLEAN CaseInSensitive)
{
  unsigned int Length; // ebp
  unsigned int v4; // r14d
  __int64 v5; // rax
  char *Buffer; // rbx
  char *v7; // rdi
  SIZE_T v8; // rsi
  char *v9; // r15
  SIZE_T v10; // rax
  CHAR v12; // si
  int v13; // r12d
  unsigned __int8 v14; // al

  Length = String1->Length;
  v4 = String2->Length;
  v5 = String1->Length;
  Buffer = String1->Buffer;
  v7 = String2->Buffer;
  if ( Length > v4 )
    v5 = String2->Length;
  v8 = (unsigned int)v5;
  v9 = &Buffer[v5];
  if ( CaseInSensitive )
  {
    while ( Buffer < v9 )
    {
      v12 = *v7;
      if ( *Buffer != *v7 )
      {
        v13 = (unsigned __int8)RtlUpperChar(*Buffer);
        v14 = RtlUpperChar(v12);
        if ( (_BYTE)v13 != v14 )
          return v13 - v14;
      }
      ++Buffer;
      ++v7;
    }
    return Length - v4;
  }
  v10 = RtlCompareMemory(String1->Buffer, String2->Buffer, (unsigned int)v5);
  if ( v10 >= v8 )
    return Length - v4;
  return (unsigned __int8)Buffer[v10] - (unsigned __int8)v7[v10];
}
