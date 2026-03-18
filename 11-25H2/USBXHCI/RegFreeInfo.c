/*
 * XREFs of RegFreeInfo @ 0x14008039C
 * Callers:
 *     TelemetryData_pInitWerContext @ 0x14007FE64 (TelemetryData_pInitWerContext.c)
 *     RegRetrieveValueInfo @ 0x1400803C4 (RegRetrieveValueInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall RegFreeInfo(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x74614454u);
}
