/*
 * XREFs of MiSearchNumaNodeTable @ 0x140401E90
 * Callers:
 *     MiRestrictRangeToNode @ 0x140401E10 (MiRestrictRangeToNode.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

_QWORD *__fastcall MiSearchNumaNodeTable(ULONG_PTR BugCheckParameter2)
{
  int v1; // edx
  _QWORD *result; // rax
  int i; // eax
  int v4; // r8d
  _QWORD *v5; // r9

  v1 = dword_140E2DAC4;
  if ( dword_140E2DAC0 > (unsigned int)dword_140E2DAC4
    || (result = (char *)qword_140E2DB20 + 16 * dword_140E2DAC0, BugCheckParameter2 < *result)
    || dword_140E2DAC0 != dword_140E2DAC4 && BugCheckParameter2 >= result[2] )
  {
    for ( i = 0; ; i = v4 + 1 )
    {
      while ( 1 )
      {
        if ( v1 < i )
          KeBugCheckEx(0x1Au, 0x5180uLL, BugCheckParameter2, 0LL, 0LL);
        v4 = (i + v1) >> 1;
        v5 = (char *)qword_140E2DB20 + 16 * v4;
        if ( BugCheckParameter2 >= *v5 )
          break;
        if ( !v4 )
          KeBugCheckEx(0x1Au, 0x5180uLL, BugCheckParameter2, (ULONG_PTR)v5, 0LL);
        v1 = v4 - 1;
      }
      if ( v4 == dword_140E2DAC4 || BugCheckParameter2 < v5[2] )
        break;
    }
    dword_140E2DAC0 = (i + v1) >> 1;
    return (char *)qword_140E2DB20 + 16 * v4;
  }
  return result;
}
