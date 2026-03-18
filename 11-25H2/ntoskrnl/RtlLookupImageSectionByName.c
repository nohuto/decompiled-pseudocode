/*
 * XREFs of RtlLookupImageSectionByName @ 0x1404A9EA0
 * Callers:
 *     PrExtExtractDataRecordTable @ 0x140657E0C (PrExtExtractDataRecordTable.c)
 *     MiApplyDynamicFixupsToKernelAndHal @ 0x140C43F7C (MiApplyDynamicFixupsToKernelAndHal.c)
 *     MiPrepareScpFixupsForNtAndHal @ 0x140C447F4 (MiPrepareScpFixupsForNtAndHal.c)
 * Callees:
 *     strncmp @ 0x1406B4820 (strncmp.c)
 */

const char *__fastcall RtlLookupImageSectionByName(__int64 a1, const char *a2)
{
  unsigned __int16 v3; // si
  const char *v4; // rbx
  unsigned __int16 i; // di

  v3 = *(_WORD *)(a1 + 6);
  v4 = (const char *)(a1 + *(unsigned __int16 *)(a1 + 20) + 24LL);
  for ( i = 0; ; ++i )
  {
    if ( i >= v3 )
      return 0LL;
    if ( !strncmp(v4, a2, 8uLL) )
      break;
    v4 += 40;
  }
  return v4;
}
