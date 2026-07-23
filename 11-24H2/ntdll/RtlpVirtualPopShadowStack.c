/*
 * XREFs of RtlpVirtualPopShadowStack @ 0x1800458B0
 * Callers:
 *     RtlpxVirtualUnwind @ 0x180043630 (RtlpxVirtualUnwind.c)
 *     RtlpUnwindEpilogue @ 0x180112328 (RtlpUnwindEpilogue.c)
 * Callees:
 *     RtlLocateExtendedFeature @ 0x180045900 (RtlLocateExtendedFeature.c)
 */

_QWORD *__fastcall RtlpVirtualPopShadowStack(__int64 a1)
{
  _QWORD *result; // rax

  result = (_QWORD *)(*(_DWORD *)(a1 + 48) & 0x100040);
  if ( (_DWORD)result == 1048640 )
  {
    result = RtlLocateExtendedFeature((PCONTEXT_EX)(a1 + 1232), 0xBu, 0LL);
    if ( result )
    {
      if ( (*(_BYTE *)result & 1) != 0 )
        result[1] += 8LL;
    }
  }
  return result;
}
