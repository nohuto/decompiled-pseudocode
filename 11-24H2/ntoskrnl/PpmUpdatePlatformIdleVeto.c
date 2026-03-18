/*
 * XREFs of PpmUpdatePlatformIdleVeto @ 0x1403CA530
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeAddProcessorAffinityEx @ 0x140257130 (KeAddProcessorAffinityEx.c)
 *     PopExecuteOnTargetProcessors @ 0x1403529A4 (PopExecuteOnTargetProcessors.c)
 *     KeCheckProcessorAffinityEx @ 0x1403C9F30 (KeCheckProcessorAffinityEx.c)
 *     PpmUpdateIdleVeto @ 0x1403CA680 (PpmUpdateIdleVeto.c)
 *     PpmEventPlatformVetoRequest @ 0x1403CA864 (PpmEventPlatformVetoRequest.c)
 *     PopDeepSleepSetDisengageReason @ 0x1403CB2E4 (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x1403CB4D8 (PopDeepSleepClearDisengageReason.c)
 *     KeFindFirstSetLeftAffinityEx @ 0x14044C2E0 (KeFindFirstSetLeftAffinityEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall PpmUpdatePlatformIdleVeto(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  KIRQL v4; // al
  __int64 v5; // rcx
  KIRQL v6; // r14
  int updated; // edi
  __int64 v8; // r8
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned int FirstSetLeftAffinity; // eax
  _BYTE v13[16]; // [rsp+20h] [rbp-138h] BYREF
  _DWORD v14[2]; // [rsp+30h] [rbp-128h] BYREF
  _BYTE v15[264]; // [rsp+38h] [rbp-120h] BYREF

  v13[0] = 0;
  memset_0(v15, 0, 0x100uLL);
  if ( !PpmPlatformStates )
    return (unsigned int)-1073741637;
  v2 = *(unsigned int *)(a1 + 4);
  if ( (unsigned int)v2 >= *(_DWORD *)PpmPlatformStates )
    return (unsigned int)-1073741811;
  v3 = PpmPlatformStates + 448 * v2;
  v4 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
  LOBYTE(v5) = *(_BYTE *)(a1 + 12);
  v6 = v4;
  updated = PpmUpdateIdleVeto(v5, *(unsigned int *)(a1 + 8), v3 + 80, v13);
  if ( updated >= 0 )
  {
    LOBYTE(v8) = *(_BYTE *)(a1 + 12);
    PpmEventPlatformVetoRequest(*(unsigned int *)(a1 + 4), *(unsigned int *)(a1 + 8), v8);
    if ( *(_DWORD *)(a1 + 4) != *(_DWORD *)PpmPlatformStates - 1 )
      goto LABEL_5;
    if ( v13[0] )
    {
      if ( *(_BYTE *)(a1 + 12) )
        PopDeepSleepSetDisengageReason(9LL);
      else
        PopDeepSleepClearDisengageReason(9LL);
LABEL_5:
      if ( v13[0]
        && !(unsigned int)KeCheckProcessorAffinityEx((unsigned __int16 *)(v3 + 128), KeGetCurrentPrcb()->Number) )
      {
        KeReleaseSpinLock(&PpmIdleVetoLock, v6);
        v14[1] = 0;
        v14[0] = 2097153;
        memset_0(v15, 0, 0x100uLL);
        FirstSetLeftAffinity = KeFindFirstSetLeftAffinityEx(v3 + 128, v10, v11);
        KeAddProcessorAffinityEx((unsigned __int16 *)v14, FirstSetLeftAffinity);
        PopExecuteOnTargetProcessors((__int64)v14, (__int64)PdcCreateWatchdogAroundClientCall, 0LL, 0LL);
        return (unsigned int)updated;
      }
    }
  }
  KeReleaseSpinLock(&PpmIdleVetoLock, v6);
  return (unsigned int)updated;
}
