/*
 * XREFs of KxNmiInterrupt @ 0x1406B6C40
 * Callers:
 *     KiNmiInterruptStart @ 0x1406B67C0 (KiNmiInterruptStart.c)
 * Callees:
 *     KiProcessNMI @ 0x1405B7670 (KiProcessNMI.c)
 *     KiSaveProcessorState @ 0x1405CA440 (KiSaveProcessorState.c)
 */

char __fastcall KxNmiInterrupt(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  _BYTE v6[48]; // [rsp+0h] [rbp-138h] BYREF

  if ( __readgsdword(0x2F08u) != 5 )
    KiSaveProcessorState(v4 - 128, (__int64)v6);
  return KiProcessNMI(v4 - 128, (__int64)v6, a3, a4);
}
