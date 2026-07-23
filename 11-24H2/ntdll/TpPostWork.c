/*
 * XREFs of TpPostWork @ 0x1800D2170
 * Callers:
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x18002C970 (RtlRegisterFeatureConfigurationChangeNotification.c)
 *     TppIopExecuteCallback @ 0x18004B970 (TppIopExecuteCallback.c)
 *     RtlpFcCallChangeCallbacks @ 0x1800D1ED0 (RtlpFcCallChangeCallbacks.c)
 *     LdrpQueueWork @ 0x1800D20D4 (LdrpQueueWork.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x180145B00 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     <none>
 */

void __cdecl TpPostWork(PTP_WORK Work)
{
  __int64 v1; // r8
  char *v2; // r9
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
    TppWorkPost((_RTL_SRWLOCK *)Work, (char **)Work, v1, v2);
  }
}
