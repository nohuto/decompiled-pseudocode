/*
 * XREFs of AccelpWaitForCompletionBusySpin @ 0x1404F7434
 * Callers:
 *     AccelpSiovInternalOperationHandler @ 0x140402CBC (AccelpSiovInternalOperationHandler.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x140319510 (KeStallExecutionProcessor.c)
 */

__int64 __fastcall AccelpWaitForCompletionBusySpin(int a1, _BYTE *a2)
{
  while ( a1 != 1 && a1 != 2 || (*a2 & 0x3F) == 0 )
    KeStallExecutionProcessor(0x14u);
  return 0LL;
}
