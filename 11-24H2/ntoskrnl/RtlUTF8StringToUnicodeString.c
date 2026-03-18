/*
 * XREFs of RtlUTF8StringToUnicodeString @ 0x140787330
 * Callers:
 *     PiGetDefaultMessageString @ 0x1409C8444 (PiGetDefaultMessageString.c)
 * Callees:
 *     CountUTF8ToUnicode @ 0x14047B014 (CountUTF8ToUnicode.c)
 *     RtlUTF8ToUnicodeN @ 0x1408AFDF0 (RtlUTF8ToUnicodeN.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140B72CB0 (ExFreePool.c)
 */

__int64 __fastcall RtlUTF8StringToUnicodeString(__int64 a1, char **a2, char a3)
{
  int v5; // edx
  __int64 result; // rax
  ULONG v8; // edi
  __int64 Pool2; // rax
  ULONG v10; // ecx
  NTSTATUS v11; // edi
  unsigned __int64 v12; // rcx
  unsigned int v13; // eax
  ULONG UnicodeStringActualByteCount; // [rsp+58h] [rbp+10h] BYREF

  v5 = *(unsigned __int16 *)a2;
  UnicodeStringActualByteCount = 0;
  result = CountUTF8ToUnicode(a2[1], v5, &UnicodeStringActualByteCount);
  if ( (int)result >= 0 )
  {
    v8 = UnicodeStringActualByteCount + 2;
    UnicodeStringActualByteCount = v8;
    if ( v8 > 0xFFFE )
      return 3221225712LL;
    if ( a3 )
    {
      Pool2 = ExAllocatePool2(0x100uLL);
      *(_QWORD *)(a1 + 8) = Pool2;
      if ( !Pool2 )
        return 3221225495LL;
      *(_WORD *)(a1 + 2) = v8;
      LOWORD(v10) = v8;
    }
    else
    {
      v10 = *(unsigned __int16 *)(a1 + 2);
      if ( v8 > v10 )
        return 2147483653LL;
    }
    v11 = RtlUTF8ToUnicodeN(
            *(PWSTR *)(a1 + 8),
            (unsigned __int16)v10,
            &UnicodeStringActualByteCount,
            a2[1],
            *(unsigned __int16 *)a2);
    if ( v11 < 0 )
    {
      if ( a3 )
      {
        ExFreePool(*(PVOID *)(a1 + 8));
        *(_QWORD *)(a1 + 8) = 0LL;
        *(_WORD *)(a1 + 2) = 0;
      }
      return (unsigned int)v11;
    }
    v12 = UnicodeStringActualByteCount;
    v13 = *(unsigned __int16 *)(a1 + 2);
    *(_WORD *)a1 = UnicodeStringActualByteCount;
    if ( (unsigned int)v12 < v13 )
    {
      v11 = 0;
      *(_WORD *)(*(_QWORD *)(a1 + 8) + 2 * (v12 >> 1)) = 0;
      return (unsigned int)v11;
    }
    return 2147483653LL;
  }
  return result;
}
