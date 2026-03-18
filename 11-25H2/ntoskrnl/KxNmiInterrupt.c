/*
 * XREFs of KxNmiInterrupt @ 0x1406AB940
 * Callers:
 *     KiNmiInterruptStart @ 0x1406AB4C0 (KiNmiInterruptStart.c)
 * Callees:
 *     KiProcessNMI @ 0x1405B37B0 (KiProcessNMI.c)
 *     KiSaveProcessorState @ 0x1405C5E20 (KiSaveProcessorState.c)
 */

char __fastcall KxNmiInterrupt()
{
  __int64 v0; // rbp
  __int64 v2; // [rsp+0h] [rbp-138h] BYREF

  if ( __readgsdword(0x2F08u) != 5 )
    KiSaveProcessorState(v0 - 128, (__int64)&v2);
  return KiProcessNMI(v0 - 128);
}
