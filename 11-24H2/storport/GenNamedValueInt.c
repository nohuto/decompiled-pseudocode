/*
 * XREFs of GenNamedValueInt @ 0x1401431F0
 * Callers:
 *     GenAssignNamespaceParams @ 0x14013D340 (GenAssignNamespaceParams.c)
 *     GenDeassignNamespaceParams @ 0x14013D3A0 (GenDeassignNamespaceParams.c)
 *     GenGetBandMetadataParams @ 0x14013D3F0 (GenGetBandMetadataParams.c)
 *     GenSetBandMetadataParams @ 0x14013D490 (GenSetBandMetadataParams.c)
 *     GenGetTableColumnParams @ 0x14013E830 (GenGetTableColumnParams.c)
 *     GenActivateParams @ 0x14013F600 (GenActivateParams.c)
 * Callees:
 *     GenInteger @ 0x140142F4C (GenInteger.c)
 *     GenNamedValueBegin @ 0x14014314C (GenNamedValueBegin.c)
 */

__int64 __fastcall GenNamedValueInt(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // rcx

  result = GenNamedValueBegin(a1, a2);
  if ( (int)result >= 0 )
  {
    result = GenInteger(a1, a3);
    if ( (int)result >= 0 )
    {
      v6 = *(unsigned int *)(a1 + 12);
      if ( (unsigned int)(v6 + 1) <= *(_DWORD *)(a1 + 8) )
      {
        *(_BYTE *)(v6 + *(_QWORD *)a1) = -13;
        ++*(_DWORD *)(a1 + 12);
        return 0LL;
      }
      else
      {
        return 3221225507LL;
      }
    }
  }
  return result;
}
