/*
 * XREFs of TpWaitForWork @ 0x18003A590
 * Callers:
 *     RtlpFcFreeChangeRegistration @ 0x18003A2D4 (RtlpFcFreeChangeRegistration.c)
 *     LdrpDetectDetour @ 0x18003A320 (LdrpDetectDetour.c)
 * Callees:
 *     TppWorkWait @ 0x180041190 (TppWorkWait.c)
 */

void __cdecl TpWaitForWork(PTP_WORK Work, LOGICAL CancelPendingCallbacks)
{
  volatile int Flags; // eax
  _PEB_LDR_DATA *Ldr; // rcx

  if ( !Work
    || (Flags = Work->CleanupGroupMember.Flags, (Flags & 0x10000) != 0)
    || (Flags & 0x20000) != 0
    || (__int64 (__fastcall **)())Work->CleanupGroupMember.VFuncs != TppWorkpCleanupGroupMemberVFuncs
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    Ldr = NtCurrentPeb()->Ldr;
    if ( !Ldr->ShutdownInProgress )
      TppRaiseInvalidParameter(Ldr, CancelPendingCallbacks, Work);
  }
  else
  {
    TppWorkWait(Work, CancelPendingCallbacks);
  }
}
