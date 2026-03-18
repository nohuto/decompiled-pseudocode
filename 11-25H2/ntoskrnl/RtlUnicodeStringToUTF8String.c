/*
 * XREFs of RtlUnicodeStringToUTF8String @ 0x1407781F0
 * Callers:
 *     <none>
 * Callees:
 *     CountUnicodeToUTF8 @ 0x14044F498 (CountUnicodeToUTF8.c)
 *     RtlUnicodeToUTF8N @ 0x1408E71D0 (RtlUnicodeToUTF8N.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
 */

__int64 __fastcall RtlUnicodeStringToUTF8String(__int64 a1, unsigned int **a2, char a3)
{
  unsigned int v5; // edx
  char v7; // r14
  __int64 result; // rax
  ULONG v9; // ebx
  __int64 Pool2; // rax
  _WORD *v11; // rsi
  ULONG v12; // ecx
  NTSTATUS v13; // ebx
  __int16 v14; // r8
  ULONG UTF8StringActualByteCount; // [rsp+68h] [rbp+10h] BYREF

  v5 = *(unsigned __int16 *)a2;
  UTF8StringActualByteCount = 0;
  v7 = 0;
  result = CountUnicodeToUTF8(a2[1], v5, &UTF8StringActualByteCount);
  if ( (int)result >= 0 )
  {
    v9 = UTF8StringActualByteCount + 1;
    UTF8StringActualByteCount = v9;
    if ( v9 > 0xFFFF )
      return 3221225712LL;
    if ( a3 )
    {
      Pool2 = ExAllocatePool2(0x100uLL);
      *(_QWORD *)(a1 + 8) = Pool2;
      if ( !Pool2 )
        return 3221225495LL;
      v11 = (_WORD *)(a1 + 2);
      LOWORD(v12) = v9;
      *(_WORD *)(a1 + 2) = v9;
    }
    else
    {
      v11 = (_WORD *)(a1 + 2);
      v12 = *(unsigned __int16 *)(a1 + 2);
      if ( v9 > v12 )
      {
        if ( !(_WORD)v12 )
          return 2147483653LL;
        v7 = 1;
      }
    }
    v13 = RtlUnicodeToUTF8N(
            *(PCHAR *)(a1 + 8),
            (unsigned __int16)v12 - 1,
            &UTF8StringActualByteCount,
            (PCWCH)a2[1],
            *(unsigned __int16 *)a2);
    if ( v13 < 0 )
    {
      if ( a3 )
      {
        ExFreePool(*(PVOID *)(a1 + 8));
        *(_QWORD *)(a1 + 8) = 0LL;
        *v11 = 0;
      }
    }
    else
    {
      v14 = UTF8StringActualByteCount;
      *(_BYTE *)(UTF8StringActualByteCount + *(_QWORD *)(a1 + 8)) = 0;
      *(_WORD *)a1 = v14;
      if ( v7 )
        return (unsigned int)-2147483643;
    }
    return (unsigned int)v13;
  }
  return result;
}
