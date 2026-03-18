/*
 * XREFs of RtlStringLengthWorkerA @ 0x1400437C0
 * Callers:
 *     ?RtlStringCbCatA@@YAJPEAD_KPEBD@Z @ 0x14006EF20 (-RtlStringCbCatA@@YAJPEAD_KPEBD@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringLengthWorkerA(STRSAFE_PCNZCH psz, size_t cchMax, size_t *pcchLength)
{
  size_t i; // r9
  NTSTATUS result; // eax

  for ( i = cchMax; cchMax; --cchMax )
  {
    if ( !*psz )
      break;
    ++psz;
  }
  result = cchMax == 0 ? 0xC000000D : 0;
  if ( pcchLength )
  {
    if ( cchMax )
      *pcchLength = i - cchMax;
    else
      *pcchLength = 0LL;
  }
  return result;
}
