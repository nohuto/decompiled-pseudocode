/*
 * XREFs of RtlUpcaseUnicodeStringToCountedOemString @ 0x18013DBC0
 * Callers:
 *     RtlIsNameLegalDOS8Dot3 @ 0x180146E20 (RtlIsNameLegalDOS8Dot3.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     AllocateOrValidateCharStringBuffer @ 0x18004AD30 (AllocateOrValidateCharStringBuffer.c)
 *     RtlUnicodeToMultiByteSize @ 0x18006B270 (RtlUnicodeToMultiByteSize.c)
 *     RtlUpcaseUnicodeToOemN @ 0x1800D76C0 (RtlUpcaseUnicodeToOemN.c)
 *     RtlpDidUnicodeToOemWork @ 0x1800D7734 (RtlpDidUnicodeToOemWork.c)
 */

__int64 __fastcall RtlUpcaseUnicodeStringToCountedOemString(__int64 a1, PWCH *a2, char a3)
{
  __int64 result; // rax
  __int64 *v6; // rsi
  int v7; // ebx
  ULONG v8; // [rsp+88h] [rbp+10h] BYREF
  char v9; // [rsp+90h] [rbp+18h]

  v9 = a3;
  v8 = 0;
  RtlUnicodeToMultiByteSize(&v8, a2[1], *(unsigned __int16 *)a2);
  if ( v8 )
  {
    if ( v8 <= 0xFFFF )
    {
      v6 = (__int64 *)(a1 + 8);
      result = AllocateOrValidateCharStringBuffer(a3, v8, (__int64 *)(a1 + 8), (_WORD *)(a1 + 2));
      if ( (int)result >= 0 )
      {
        v7 = RtlUpcaseUnicodeToOemN();
        if ( v7 >= 0 )
        {
          *(_WORD *)a1 = v8;
          if ( !RtlpDidUnicodeToOemWork(a1) )
            v7 = -1073741470;
        }
        if ( v7 < 0 )
        {
          if ( a3 )
          {
            RtlpSysVolFree(*v6);
            *v6 = 0LL;
            *(_WORD *)(a1 + 2) = 0;
          }
        }
        return (unsigned int)v7;
      }
    }
    else
    {
      return 3221225712LL;
    }
  }
  else
  {
    *(_DWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 0LL;
    return 0LL;
  }
  return result;
}
