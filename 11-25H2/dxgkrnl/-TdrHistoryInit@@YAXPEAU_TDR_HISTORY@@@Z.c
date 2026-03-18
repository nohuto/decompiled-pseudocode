/*
 * XREFs of ?TdrHistoryInit@@YAXPEAU_TDR_HISTORY@@@Z @ 0x1403BE920
 * Callers:
 *     ?TdrInit@@YAXXZ @ 0x1401CA994 (-TdrInit@@YAXXZ.c)
 * Callees:
 *     memset @ 0x14009FCC0 (memset.c)
 */

void __fastcall TdrHistoryInit(UUID *Uuid)
{
  NTSTATUS v2; // eax

  memset(Uuid, 0, 0xA18uLL);
  v2 = ExUuidCreate(Uuid);
  if ( v2 < 0 )
  {
    WdLogSingleEntry1(2LL, v2);
    WdLogGlobalForLineNumber = 649;
  }
  Uuid[1].Data1 = KeQueryTimeIncrement();
}
