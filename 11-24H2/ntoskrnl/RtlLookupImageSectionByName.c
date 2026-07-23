/*
 * XREFs of RtlLookupImageSectionByName @ 0x1404A5560
 * Callers:
 *     PrExtExtractDataRecordTable @ 0x1406629BC (PrExtExtractDataRecordTable.c)
 *     MiApplyDynamicFixupsToKernelAndHal @ 0x140C573F4 (MiApplyDynamicFixupsToKernelAndHal.c)
 *     MiPrepareScpFixupsForNtAndHal @ 0x140C57C64 (MiPrepareScpFixupsForNtAndHal.c)
 * Callees:
 *     strncmp @ 0x1406C0A20 (strncmp.c)
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
