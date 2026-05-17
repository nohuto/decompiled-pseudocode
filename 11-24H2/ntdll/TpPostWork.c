/*
 * XREFs of TpPostWork @ 0x1800D6E00
 * Callers:
 *     TppIopExecuteCallback @ 0x18001EF70 (TppIopExecuteCallback.c)
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x180097B20 (RtlRegisterFeatureConfigurationChangeNotification.c)
 *     RtlpFcCallChangeCallbacks @ 0x1800D6B60 (RtlpFcCallChangeCallbacks.c)
 *     LdrpQueueWork @ 0x1800D6D64 (LdrpQueueWork.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x180147750 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     <none>
 */

void __fastcall TpPostWork(unsigned __int64 a1, __int64 a2, __int64 a3, char *a4)
{
  int v4; // eax

  if ( !a1
    || (v4 = *(_DWORD *)(a1 + 168), (v4 & 0x10000) != 0)
    || (v4 & 0x20000) != 0
    || *(__int64 (__fastcall ***)())(a1 + 8) != TppWorkpCleanupGroupMemberVFuncs
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    TppRaiseInvalidParameter();
  }
  else
  {
    TppWorkPost(a1, (volatile signed __int32 **)a1, a3, a4);
  }
}
