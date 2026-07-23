/*
 * XREFs of PpmClearSimulatedIdle @ 0x1404CF2B8
 * Callers:
 *     NtPowerInformation @ 0x14096E740 (NtPowerInformation.c)
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x1402783E0 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140278FE0 (KeRevertToUserGroupAffinityThread.c)
 *     KeGetProcessorIndexFromNumber @ 0x1403B30F0 (KeGetProcessorIndexFromNumber.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall PpmClearSimulatedIdle(_PROCESSOR_NUMBER *a1)
{
  ULONG ProcessorIndexFromNumber; // eax
  char v3; // cl
  __int64 v4; // rcx
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 v7; // rdx
  _PPM_IDLE_STATES *IdleStates; // rax
  unsigned int v9; // ebx
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-38h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-28h] BYREF

  Affinity = 0LL;
  PreviousAffinity = 0LL;
  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(a1);
  if ( ProcessorIndexFromNumber == -1 )
    return 3221225485LL;
  *(_DWORD *)Affinity.Reserved = 0;
  Affinity.Reserved[2] = 0;
  v3 = *((_DWORD *)KiGlobalState + ProcessorIndexFromNumber) & 0x3F;
  Affinity.Group = *((_DWORD *)KiGlobalState + ProcessorIndexFromNumber) >> 6;
  Affinity.Mask = 1LL << v3;
  KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentIrql = KeGetCurrentIrql();
  v7 = 2LL;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v4) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v4);
  }
  IdleStates = CurrentPrcb->PowerState.IdleStates;
  if ( IdleStates )
  {
    if ( IdleStates->IdleOverride )
    {
      IdleStates->OverrideIndex = 0;
      IdleStates->IdleOverride = 0;
    }
    v9 = 0;
  }
  else
  {
    v9 = -1073741637;
  }
  if ( KiIrqlFlags )
  {
    LOBYTE(v7) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
  }
  __writecr8(CurrentIrql);
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  return v9;
}
