/*
 * XREFs of KevSkipVerification @ 0x1406A2B5C
 * Callers:
 *     ExFreePoolSanityChecks @ 0x140BA64B0 (ExFreePoolSanityChecks.c)
 * Callees:
 *     <none>
 */

__int64 KevSkipVerification()
{
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int v1; // edx
  unsigned int v2; // ecx

  if ( KeGetCurrentIrql() < 2u )
    return 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v1 = 0;
  if ( !CurrentPrcb->DpcRoutineActive || (CurrentPrcb->DpcRequestSummary & 8) == 0 )
    return 0LL;
  if ( KiSerializeTimerExpiration )
    v2 = *(_DWORD *)(KiProcessorBlock[0] + 33556);
  else
    v2 = CurrentPrcb->TimerTable.TableState.LastTimerHand[1];
  LOBYTE(v1) = v2 + 100 < (unsigned int)(MEMORY[0xFFFFF78000000008] >> 18);
  return v1;
}
