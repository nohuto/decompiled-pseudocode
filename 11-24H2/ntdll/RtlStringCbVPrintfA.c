/*
 * XREFs of RtlStringCbVPrintfA @ 0x1800E7048
 * Callers:
 *     vDbgPrintExWithPrefixInternalHelper @ 0x1800E6DDC (vDbgPrintExWithPrefixInternalHelper.c)
 * Callees:
 *     _vsnprintf @ 0x180120CB0 (_vsnprintf.c)
 */

__int64 __fastcall RtlStringCbVPrintfA(char *a1, __int64 a2, const char *a3, va_list a4)
{
  unsigned __int64 v5; // rdi
  unsigned int v6; // ebx
  int v7; // eax

  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
  {
    v6 = -1073741811;
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    v5 = a2 - 1;
    v6 = 0;
    v7 = vsnprintf(a1, a2 - 1, a3, a4);
    if ( v7 < 0 || v7 > v5 )
    {
      a1[v5] = 0;
      return (unsigned int)-2147483643;
    }
    else if ( v7 == v5 )
    {
      a1[v5] = 0;
    }
  }
  return v6;
}
