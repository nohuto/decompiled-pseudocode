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

void __fastcall TpPostWork(__int64 a1)
{
  int v1; // eax

  if ( !a1
    || (v1 = *(_DWORD *)(a1 + 168), (v1 & 0x10000) != 0)
    || (v1 & 0x20000) != 0
    || *(__int64 (__fastcall ***)())(a1 + 8) != TppWorkpCleanupGroupMemberVFuncs
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    TppRaiseInvalidParameter();
  }
  else
  {
    TppWorkPost(a1);
  }
}
