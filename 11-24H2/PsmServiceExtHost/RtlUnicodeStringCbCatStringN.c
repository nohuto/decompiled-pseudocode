/*
 * XREFs of RtlUnicodeStringCbCatStringN @ 0x1800A6180
 * Callers:
 *     AslpPathWildcardAllocMatchNode @ 0x1800A5A24 (AslpPathWildcardAllocMatchNode.c)
 * Callees:
 *     RtlUnicodeStringValidateDestWorker @ 0x1800A62E8 (RtlUnicodeStringValidateDestWorker.c)
 *     RtlWideCharArrayCopyStringWorker @ 0x1800A6394 (RtlWideCharArrayCopyStringWorker.c)
 */

__int64 __fastcall RtlUnicodeStringCbCatStringN(_WORD *a1, int a2, unsigned __int64 a3)
{
  __int64 result; // rax
  unsigned __int64 v7; // rdi
  __int16 v8; // bx
  __int64 v9; // [rsp+30h] [rbp-20h] BYREF
  __int64 v10; // [rsp+38h] [rbp-18h] BYREF
  __int64 v11; // [rsp+40h] [rbp-10h] BYREF
  __int64 v12; // [rsp+88h] [rbp+38h] BYREF

  v10 = 0LL;
  v12 = 0LL;
  v9 = 0LL;
  result = RtlUnicodeStringValidateDestWorker(a1, &v10, &v12, &v9);
  if ( (int)result >= 0 )
  {
    v7 = a3 >> 1;
    if ( v7 <= 0x7FFF )
    {
      v11 = 0LL;
      v8 = v9;
      result = RtlWideCharArrayCopyStringWorker((int)v10 + 2 * (int)v9, (int)v12 - (int)v9, (unsigned int)&v11, a2, v7);
      *a1 = 2 * (v11 + v8);
    }
    else
    {
      return 3221225485LL;
    }
  }
  return result;
}
