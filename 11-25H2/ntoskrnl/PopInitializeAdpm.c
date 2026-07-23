/*
 * XREFs of PopInitializeAdpm @ 0x140C22450
 * Callers:
 *     PoInitSystem @ 0x140C50674 (PoInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite2 @ 0x1402D6940 (ExInitializeResourceLite2.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PopExtendConnectionState @ 0x140752CF8 (PopExtendConnectionState.c)
 *     ExSubscribeWnfStateChange @ 0x140A139C0 (ExSubscribeWnfStateChange.c)
 *     PopAdaptiveInitializeBootContext @ 0x140C223B8 (PopAdaptiveInitializeBootContext.c)
 */

NTSTATUS PopInitializeAdpm()
{
  NTSTATUS result; // eax
  char v1; // [rsp+40h] [rbp+8h] BYREF

  ExInitializeResourceLite2(&PopAdpmLock, -1);
  memset_0(&PopAdaptiveContext, 0, 0x50uLL);
  dword_140F06D58 = -1;
  PopMaximumConnectionSessions = 0;
  PopConnectionState = 0LL;
  dword_140F06D5C = 3;
  PopExtendConnectionState(0);
  result = ExSubscribeWnfStateChange((__int64)&v1, (__int64)&WNF_HPM_GLOBAL_HUMAN_PRESENCE_STATE);
  if ( !CmNtSkipRegistryInit )
    return PopAdaptiveInitializeBootContext();
  return result;
}
