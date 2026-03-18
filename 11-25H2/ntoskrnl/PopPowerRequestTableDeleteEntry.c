/*
 * XREFs of PopPowerRequestTableDeleteEntry @ 0x140A415E0
 * Callers:
 *     PopPowerRequestCreateCommon @ 0x140425C44 (PopPowerRequestCreateCommon.c)
 *     PopPowerRequestDelete @ 0x140A414A0 (PopPowerRequestDelete.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x1403EAAD0 (RtlDeleteElementGenericTableAvl.c)
 */

BOOLEAN __fastcall PopPowerRequestTableDeleteEntry(int a1)
{
  __int128 Buffer; // [rsp+20h] [rbp-18h] BYREF

  Buffer = 0LL;
  DWORD2(Buffer) = a1;
  return RtlDeleteElementGenericTableAvl(&PopPowerRequestTable, &Buffer);
}
