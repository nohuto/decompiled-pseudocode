/*
 * XREFs of ?RtlStringCbPrintfA@@YAJPEAD_KPEBDZZ @ 0x1401009B0
 * Callers:
 *     ?CreateWin32KFilterBitmap@@YAJKQEBQEBDHKPEAE@Z @ 0x14010089C (-CreateWin32KFilterBitmap@@YAJKQEBQEBDHKPEAE@Z.c)
 * Callees:
 *     _vsnprintf @ 0x1401A0518 (_vsnprintf.c)
 */

__int64 RtlStringCbPrintfA(char *a1, __int64 a2, const char *a3, ...)
{
  unsigned __int64 v4; // rdi
  unsigned int v5; // ebx
  int v6; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, a3);
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
  {
    v5 = -1073741811;
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    v4 = a2 - 1;
    v5 = 0;
    v6 = vsnprintf(a1, a2 - 1, a3, Args);
    if ( v6 < 0 || v6 > v4 )
    {
      a1[v4] = 0;
      return (unsigned int)-2147483643;
    }
    else if ( v6 == v4 )
    {
      a1[v4] = 0;
    }
  }
  return v5;
}
