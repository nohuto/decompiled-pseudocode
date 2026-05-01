/*
 * XREFs of ??$CCv6s_HeapReallocArray@PEAX@@YAJPEAXK0_K1PEAPEAPEAX@Z @ 0x1806C99E0
 * Callers:
 *     DPA_Grow @ 0x1806C9C60 (DPA_Grow.c)
 * Callees:
 *     ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x180148D24 (-ULongLongMult@@YAJ_K0PEA_K@Z.c)
 */

__int64 __fastcall CCv6s_HeapReallocArray<void *>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        _QWORD *a6)
{
  __int64 result; // rax
  DWORD v7; // ecx
  void *v8; // r10
  void *v9; // r11
  LPVOID v10; // rax
  SIZE_T dwBytes; // [rsp+48h] [rbp+20h] BYREF

  dwBytes = 0LL;
  result = ULongLongMult(8uLL, a5, &dwBytes);
  if ( (int)result >= 0 )
  {
    if ( v8 )
      v10 = HeapReAlloc(v9, v7, v8, dwBytes);
    else
      v10 = HeapAlloc(v9, v7, dwBytes);
    if ( v10 )
    {
      *a6 = v10;
      return 0LL;
    }
    else
    {
      return 2147942414LL;
    }
  }
  return result;
}
