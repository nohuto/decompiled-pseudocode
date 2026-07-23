/*
 * XREFs of SignalStartWerSvc @ 0x1800AE124
 * Callers:
 *     SendMessageToWERService @ 0x1800ADEC8 (SendMessageToWERService.c)
 * Callees:
 *     EtwEventWriteNoRegistration @ 0x1800AE4F0 (EtwEventWriteNoRegistration.c)
 *     NtQueryWnfStateNameInformation @ 0x180162E60 (NtQueryWnfStateNameInformation.c)
 *     ZwUpdateWnfStateData @ 0x180163C60 (ZwUpdateWnfStateData.c)
 */

__int64 SignalStartWerSvc()
{
  unsigned int v0; // ebx
  BOOL v1; // edi
  ULONG v2; // eax
  int v3; // ecx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-18h] BYREF
  int v6; // [rsp+60h] [rbp+8h] BYREF

  v0 = 0;
  v6 = 0;
  v1 = 0;
  if ( NtQueryWnfStateNameInformation(&WNF_WER_SERVICE_START, WnfInfoSubscribersPresent, 0LL, &v6, 4u) >= 0 && v6 )
    v1 = ZwUpdateWnfStateData(&WNF_WER_SERVICE_START, 0LL, 0, 0LL, 0LL, 0, 0) >= 0;
  EventDescriptor = 0LL;
  v2 = EtwEventWriteNoRegistration(&`SignalStartWerSvc'::`2'::WerSvcTriggerGuid, &EventDescriptor, 0, 0LL);
  v3 = v1 + 1;
  if ( v2 )
    v3 = v1;
  if ( !v3 )
    return (unsigned int)-1073741696;
  return v0;
}
