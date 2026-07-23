/*
 * XREFs of EtwpCoverageValidateCP @ 0x14044D4CC
 * Callers:
 *     EtwTelemetryCoverageReport @ 0x14044D270 (EtwTelemetryCoverageReport.c)
 *     EtwpCoverageRecordAtHighIrql @ 0x14064DEA0 (EtwpCoverageRecordAtHighIrql.c)
 *     EtwpCoverageCheckCP @ 0x1407AAF5C (EtwpCoverageCheckCP.c)
 *     EtwpCoverageResetCP @ 0x1407AB4F4 (EtwpCoverageResetCP.c)
 *     EtwpCoverageRecord @ 0x1408DC9D4 (EtwpCoverageRecord.c)
 * Callees:
 *     TelemetryCoverageValidateName @ 0x1404AD90C (TelemetryCoverageValidateName.c)
 */

__int64 __fastcall EtwpCoverageValidateCP(char **a1, _DWORD *a2)
{
  int v4; // r8d
  char *v5; // r11
  char i; // al
  int v7; // edx
  int v8; // r11d

  v4 = -2128831035;
  v5 = *a1;
  for ( i = **a1; i; i = *v5 )
  {
    v4 = i + 16777619 * v4;
    ++v5;
  }
  v7 = 1;
  if ( v4 )
    v7 = v4;
  if ( v7 == *((_DWORD *)a1 + 2) && (unsigned int)TelemetryCoverageValidateName() )
  {
    *a2 = v8;
    return 1LL;
  }
  else
  {
    *((_DWORD *)a1 + 3) = -1;
    return 0LL;
  }
}
