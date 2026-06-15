/*
 * XREFs of ?StringCchPrintfA@@YAJPEAD_KPEBDZZ @ 0x180055A68
 * Callers:
 *     ?RuntimeClassInitialize@CAPOWrapperClient@@QEAAJPEBGW4APO_TYPE@@AEBU_GUID@@@Z @ 0x18001F490 (-RuntimeClassInitialize@CAPOWrapperClient@@QEAAJPEBGW4APO_TYPE@@AEBU_GUID@@@Z.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x1800252E8 (--1CPerfTracker@@QEAA@XZ.c)
 * Callees:
 *     _vsnprintf @ 0x1800A5034 (_vsnprintf.c)
 */

__int64 StringCchPrintfA(char *a1, __int64 a2, const char *a3, ...)
{
  unsigned __int64 v4; // rdi
  unsigned int v5; // ebx
  int v6; // eax
  va_list ArgList; // [rsp+68h] [rbp+20h] BYREF

  va_start(ArgList, a3);
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
  {
    v5 = -2147024809;
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    v4 = a2 - 1;
    v5 = 0;
    v6 = vsnprintf(a1, a2 - 1, a3, ArgList);
    if ( v6 < 0 )
      goto LABEL_9;
    if ( v6 == v4 )
    {
      a1[v4] = 0;
      return v5;
    }
    if ( v6 > v4 )
    {
LABEL_9:
      a1[v4] = 0;
      return (unsigned int)-2147024774;
    }
  }
  return v5;
}
