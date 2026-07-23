/*
 * XREFs of TpPostWork @ 0x18003EF70
 * Callers:
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x180003190 (RtlRegisterFeatureConfigurationChangeNotification.c)
 *     LdrpQueueWork @ 0x18003E480 (LdrpQueueWork.c)
 *     TppIopExecuteCallback @ 0x180040230 (TppIopExecuteCallback.c)
 *     RtlpFcCallChangeCallbacks @ 0x1800A0254 (RtlpFcCallChangeCallbacks.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x180148D00 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     <none>
 */

void __cdecl TpPostWork(PTP_WORK Work)
{
  volatile int Flags; // eax

  if ( !Work
    || (Flags = Work->CleanupGroupMember.Flags, (Flags & 0x10000) != 0)
    || (Flags & 0x20000) != 0
    || (__int64 (__fastcall **)())Work->CleanupGroupMember.VFuncs != TppWorkpCleanupGroupMemberVFuncs
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    TppRaiseInvalidParameter();
  }
  else
  {
    TppWorkPost((_RTL_SRWLOCK *)Work);
  }
}
