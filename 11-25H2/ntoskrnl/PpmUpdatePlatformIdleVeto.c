/*
 * XREFs of PpmUpdatePlatformIdleVeto @ 0x14026A200
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeAddProcessorAffinityEx @ 0x140256160 (KeAddProcessorAffinityEx.c)
 *     PpmUpdateIdleVeto @ 0x14026A350 (PpmUpdateIdleVeto.c)
 *     PpmEventPlatformVetoRequest @ 0x14026A534 (PpmEventPlatformVetoRequest.c)
 *     KeCheckProcessorAffinityEx @ 0x14026BAA0 (KeCheckProcessorAffinityEx.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     PopDeepSleepSetDisengageReason @ 0x140354D44 (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x140354F38 (PopDeepSleepClearDisengageReason.c)
 *     PopExecuteOnTargetProcessors @ 0x1403B2EE8 (PopExecuteOnTargetProcessors.c)
 *     KeFindFirstSetLeftAffinityEx @ 0x14044CAD0 (KeFindFirstSetLeftAffinityEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
  __int64 v9; // r8
  __int64 v10; // r9
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
      if ( v13[0] && !(unsigned int)KeCheckProcessorAffinityEx(v3 + 128, KeGetCurrentPrcb()->Number, v9, v10) )
      {
        KeReleaseSpinLock(&PpmIdleVetoLock, v6);
        v14[1] = 0;
        v14[0] = 2097153;
        memset_0(v15, 0, 0x100uLL);
        FirstSetLeftAffinity = KeFindFirstSetLeftAffinityEx(v3 + 128);
        KeAddProcessorAffinityEx((unsigned __int16 *)v14, FirstSetLeftAffinity);
        PopExecuteOnTargetProcessors(v14, PdcCreateWatchdogAroundClientCall, 0LL, 0LL);
        return (unsigned int)updated;
      }
    }
  }
  KeReleaseSpinLock(&PpmIdleVetoLock, v6);
  return (unsigned int)updated;
}
