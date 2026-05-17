/*
 * XREFs of RtlpVirtualPopShadowStack @ 0x180018EB0
 * Callers:
 *     RtlpxVirtualUnwind @ 0x180016C30 (RtlpxVirtualUnwind.c)
 *     RtlpUnwindEpilogue @ 0x180117338 (RtlpUnwindEpilogue.c)
 * Callees:
 *     RtlLocateExtendedFeature @ 0x180018F00 (RtlLocateExtendedFeature.c)
 */

__int64 __fastcall RtlpVirtualPopShadowStack(__int64 a1)
{
  __int64 result; // rax

  result = *(_DWORD *)(a1 + 48) & 0x100040;
  if ( (_DWORD)result == 1048640 )
  {
    result = RtlLocateExtendedFeature(a1 + 1232, 11LL);
    if ( result )
    {
      if ( (*(_BYTE *)result & 1) != 0 )
        *(_QWORD *)(result + 8) += 8LL;
    }
  }
  return result;
}
