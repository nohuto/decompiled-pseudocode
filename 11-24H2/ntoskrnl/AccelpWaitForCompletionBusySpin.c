/*
 * XREFs of AccelpWaitForCompletionBusySpin @ 0x1404F9B54
 * Callers:
 *     AccelpSiovInternalOperationHandler @ 0x14040A7DC (AccelpSiovInternalOperationHandler.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x14033A030 (KeStallExecutionProcessor.c)
 */

__int64 __fastcall AccelpWaitForCompletionBusySpin(int a1, _BYTE *a2)
{
  while ( a1 != 1 && a1 != 2 || (*a2 & 0x3F) == 0 )
    KeStallExecutionProcessor(0x14u);
  return 0LL;
}
