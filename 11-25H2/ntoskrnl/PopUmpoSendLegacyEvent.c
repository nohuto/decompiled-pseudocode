/*
 * XREFs of PopUmpoSendLegacyEvent @ 0x140A87C14
 * Callers:
 *     PopDirectedDripsSendSuspendResumeNotification @ 0x140740984 (PopDirectedDripsSendSuspendResumeNotification.c)
 *     PopSendSuspendResumeServiceNotification @ 0x140747B6C (PopSendSuspendResumeServiceNotification.c)
 *     NtPowerInformation @ 0x14096E740 (NtPowerInformation.c)
 * Callees:
 *     PopUmpoSendPowerMessage @ 0x140426264 (PopUmpoSendPowerMessage.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PfIoPowerEventNotify @ 0x140739AC4 (PfIoPowerEventNotify.c)
 */

__int64 __fastcall PopUmpoSendLegacyEvent(__int128 *a1)
{
  __int64 v2; // rdx
  bool v3; // zf
  __int128 v4; // xmm0
  _DWORD Src[2]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v7; // [rsp+28h] [rbp-50h]

  Src[1] = 0;
  memset_0(Src, 0, 0x44uLL);
  v3 = *((_BYTE *)a1 + 12) == 0;
  v4 = *a1;
  Src[0] = 7;
  v7 = v4;
  if ( !v3 )
    PfIoPowerEventNotify(*((_DWORD *)a1 + 1), v2, 0);
  return PopUmpoSendPowerMessage(Src, 0x48uLL, *((_BYTE *)a1 + 13));
}
