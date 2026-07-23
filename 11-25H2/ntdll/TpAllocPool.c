/*
 * XREFs of TpAllocPool @ 0x1800FB950
 * Callers:
 *     <none>
 * Callees:
 *     TppRaiseInvalidParameter @ 0x18003EEE4 (TppRaiseInvalidParameter.c)
 */

NTSTATUS __cdecl TpAllocPool(PTP_POOL *PoolReturn, PVOID Reserved)
{
  if ( PoolReturn && !Reserved && !NtCurrentPeb()->Ldr->ShutdownInProgress )
    return TpAllocPoolInternal(PoolReturn, 0);
  TppRaiseInvalidParameter();
  return -1073741811;
}
