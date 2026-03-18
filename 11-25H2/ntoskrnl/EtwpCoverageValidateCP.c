/*
 * XREFs of EtwpCoverageValidateCP @ 0x14045781C
 * Callers:
 *     EtwTelemetryCoverageReport @ 0x1404575C0 (EtwTelemetryCoverageReport.c)
 *     EtwpCoverageRecordAtHighIrql @ 0x140643800 (EtwpCoverageRecordAtHighIrql.c)
 *     EtwpCoverageCheckCP @ 0x14079B6C4 (EtwpCoverageCheckCP.c)
 *     EtwpCoverageResetCP @ 0x14079BC54 (EtwpCoverageResetCP.c)
 *     EtwpCoverageRecord @ 0x140A57C90 (EtwpCoverageRecord.c)
 * Callees:
 *     TelemetryCoverageValidateName @ 0x1404B1D9C (TelemetryCoverageValidateName.c)
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
