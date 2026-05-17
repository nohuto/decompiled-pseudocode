/*
 * XREFs of SignalStartWerSvc @ 0x1800D00FC
 * Callers:
 *     SendMessageToWERService @ 0x1800CFEA0 (SendMessageToWERService.c)
 * Callees:
 *     EtwEventWriteNoRegistration @ 0x1800D1F90 (EtwEventWriteNoRegistration.c)
 *     NtQueryWnfStateNameInformation @ 0x180166030 (NtQueryWnfStateNameInformation.c)
 *     ZwUpdateWnfStateData @ 0x180166E30 (ZwUpdateWnfStateData.c)
 */

__int64 SignalStartWerSvc()
{
  unsigned int v0; // ebx
  BOOL v1; // edi
  int v2; // eax
  int v3; // ecx
  __int128 v5; // [rsp+40h] [rbp-18h] BYREF
  int v6; // [rsp+60h] [rbp+8h] BYREF

  v0 = 0;
  v6 = 0;
  v1 = 0;
  if ( (int)NtQueryWnfStateNameInformation(&WNF_WER_SERVICE_START, 1LL, 0LL, &v6, 4) >= 0 && v6 )
    v1 = (int)ZwUpdateWnfStateData(&WNF_WER_SERVICE_START, 0LL, 0LL, 0LL, 0LL, 0, 0) >= 0;
  v5 = 0LL;
  v2 = EtwEventWriteNoRegistration(&`SignalStartWerSvc'::`2'::WerSvcTriggerGuid, &v5, 0LL, 0LL);
  v3 = v1 + 1;
  if ( v2 )
    v3 = v1;
  if ( !v3 )
    return (unsigned int)-1073741696;
  return v0;
}
