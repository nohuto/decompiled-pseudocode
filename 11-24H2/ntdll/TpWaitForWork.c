/*
 * XREFs of TpWaitForWork @ 0x18008A170
 * Callers:
 *     LdrpDetectDetour @ 0x180089480 (LdrpDetectDetour.c)
 *     RtlpFcFreeChangeRegistration @ 0x1800F26AC (RtlpFcFreeChangeRegistration.c)
 * Callees:
 *     TppWorkWait @ 0x18008B630 (TppWorkWait.c)
 */

void __cdecl TpWaitForWork(PTP_WORK Work, LOGICAL CancelPendingCallbacks)
{
  volatile int Flags; // eax

  if ( !Work
    || (Flags = Work->CleanupGroupMember.Flags, (Flags & 0x10000) != 0)
    || (Flags & 0x20000) != 0
    || (__int64 (__fastcall **)())Work->CleanupGroupMember.VFuncs != TppWorkpCleanupGroupMemberVFuncs
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    if ( !NtCurrentPeb()->Ldr->ShutdownInProgress )
      TppRaiseInvalidParameter();
  }
  else
  {
    TppWorkWait(Work, CancelPendingCallbacks);
  }
}
