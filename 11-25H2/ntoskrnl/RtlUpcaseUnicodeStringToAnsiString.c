/*
 * XREFs of RtlUpcaseUnicodeStringToAnsiString @ 0x14076DEB0
 * Callers:
 *     DifRtlUpcaseUnicodeStringToAnsiStringWrapper @ 0x14062EA80 (DifRtlUpcaseUnicodeStringToAnsiStringWrapper.c)
 * Callees:
 *     AllocateOrValidateCharStringBuffer @ 0x140441300 (AllocateOrValidateCharStringBuffer.c)
 *     RtlUnicodeToMultiByteSize @ 0x1408E66F0 (RtlUnicodeToMultiByteSize.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x1408E6D40 (RtlUpcaseUnicodeToMultiByteN.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
 */

__int64 __fastcall RtlUpcaseUnicodeStringToAnsiString(__int64 a1, PCWCH *a2, char a3)
{
  ULONG v6; // edx
  __int64 result; // rax
  _WORD *v8; // r15
  PCHAR *v9; // rdi
  NTSTATUS v10; // ebx
  __int16 v11; // dx
  ULONG BytesInMultiByteString; // [rsp+78h] [rbp+10h] BYREF
  char v13; // [rsp+80h] [rbp+18h]

  v13 = a3;
  BytesInMultiByteString = 0;
  RtlUnicodeToMultiByteSize(&BytesInMultiByteString, a2[1], *(unsigned __int16 *)a2);
  v6 = BytesInMultiByteString + 1;
  BytesInMultiByteString = v6;
  if ( v6 > 0xFFFF )
    return 3221225712LL;
  v8 = (_WORD *)(a1 + 2);
  v9 = (PCHAR *)(a1 + 8);
  result = AllocateOrValidateCharStringBuffer(a3, v6, (__int64 *)(a1 + 8), (_WORD *)(a1 + 2));
  if ( (int)result >= 0 )
  {
    v10 = RtlUpcaseUnicodeToMultiByteN(
            *v9,
            (unsigned __int16)*v8,
            &BytesInMultiByteString,
            a2[1],
            *(unsigned __int16 *)a2);
    if ( v10 >= 0 )
    {
      v11 = BytesInMultiByteString;
      (*v9)[BytesInMultiByteString] = 0;
      *(_WORD *)a1 = v11;
      v10 = 0;
    }
    if ( v10 < 0 )
    {
      if ( a3 )
      {
        ExFreePool(*v9);
        *v9 = 0LL;
        *v8 = 0;
      }
    }
    return (unsigned int)v10;
  }
  return result;
}
