/*
 * XREFs of RtlUnicodeStringToCountedOemString @ 0x18013C290
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSysVolFree @ 0x180001470 (RtlpSysVolFree.c)
 *     AllocateOrValidateCharStringBuffer @ 0x18000BE90 (AllocateOrValidateCharStringBuffer.c)
 *     RtlUnicodeToMultiByteSize @ 0x1800B18B0 (RtlUnicodeToMultiByteSize.c)
 *     RtlpDidUnicodeToOemWork @ 0x1800D4484 (RtlpDidUnicodeToOemWork.c)
 *     RtlUnicodeToOemN @ 0x1801073E0 (RtlUnicodeToOemN.c)
 */

__int64 __fastcall RtlUnicodeStringToCountedOemString(__int64 a1, PWCH *a2, char a3)
{
  __int64 result; // rax
  _WORD *v7; // r15
  __int64 *v8; // rsi
  int v9; // ebx
  ULONG v10; // [rsp+88h] [rbp+10h] BYREF
  char v11; // [rsp+90h] [rbp+18h]

  v11 = a3;
  v10 = 0;
  RtlUnicodeToMultiByteSize(&v10, a2[1], *(unsigned __int16 *)a2);
  if ( v10 )
  {
    if ( v10 <= 0xFFFF )
    {
      v7 = (_WORD *)(a1 + 2);
      v8 = (__int64 *)(a1 + 8);
      result = AllocateOrValidateCharStringBuffer(a3, v10, (__int64 *)(a1 + 8), (_WORD *)(a1 + 2));
      if ( (int)result >= 0 )
      {
        v9 = RtlUnicodeToOemN(*v8, (unsigned __int16)*v7, (__int64)&v10, (__int64)a2[1], *(unsigned __int16 *)a2);
        if ( v9 >= 0 )
        {
          *(_WORD *)a1 = v10;
          if ( !RtlpDidUnicodeToOemWork(a1) )
            v9 = -1073741470;
        }
        if ( v9 < 0 )
        {
          if ( a3 )
          {
            RtlpSysVolFree(*v8);
            *v8 = 0LL;
            *v7 = 0;
          }
        }
        return (unsigned int)v9;
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
