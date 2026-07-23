/*
 * XREFs of TpAllocPool @ 0x180086D10
 * Callers:
 *     <none>
 * Callees:
 *     TppRaiseInvalidParameter @ 0x1800880D4 (TppRaiseInvalidParameter.c)
 */

NTSTATUS __cdecl TpAllocPool(PTP_POOL *PoolReturn, PVOID Reserved)
{
  if ( PoolReturn && !Reserved && !NtCurrentPeb()->Ldr->ShutdownInProgress )
    return TpAllocPoolInternal(PoolReturn, 0);
  TppRaiseInvalidParameter(PoolReturn);
  return -1073741811;
}
