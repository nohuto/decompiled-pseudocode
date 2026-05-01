/*
 * XREFs of HampIpcChannelAcquireLock @ 0x1800054D0
 * Callers:
 *     HamIpcChannelRundown @ 0x180005458 (HamIpcChannelRundown.c)
 *     HamCreateExtendedExecution @ 0x18000C810 (HamCreateExtendedExecution.c)
 *     HamAssociateActivityContext @ 0x18001A630 (HamAssociateActivityContext.c)
 * Callees:
 *     <none>
 */

DWORD __fastcall HampIpcChannelAcquireLock(__int64 a1)
{
  DWORD result; // eax

  RtlAcquireSRWLockExclusive(a1 + 8);
  result = GetCurrentThreadId();
  *(_DWORD *)(a1 + 16) = result;
  return result;
}
