/*
 * XREFs of MmLocateUnloadedDriver @ 0x14066C3F8
 * Callers:
 *     KeBugCheck2 @ 0x1405B1780 (KeBugCheck2.c)
 *     KiDumpParameterImages @ 0x1405B3C54 (KiDumpParameterImages.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MmLocateUnloadedDriver(unsigned __int64 a1)
{
  unsigned int i; // edx
  _QWORD *result; // rax

  if ( MmUnloadedDrivers )
  {
    for ( i = 0; i < MmLastUnloadedDriver; ++i )
    {
      result = (char *)MmUnloadedDrivers + 40 * (MmLastUnloadedDriver - i) - 40;
      if ( result[1] && a1 >= result[2] && a1 < result[3] )
        return result;
    }
  }
  return 0LL;
}
