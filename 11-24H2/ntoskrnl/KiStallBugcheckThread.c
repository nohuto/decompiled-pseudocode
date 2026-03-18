/*
 * XREFs of KiStallBugcheckThread @ 0x1405C66D8
 * Callers:
 *     KiScheduleBugcheckRecovery @ 0x1405C6580 (KiScheduleBugcheckRecovery.c)
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x140339650 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14033A250 (KeRevertToUserGroupAffinityThread.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     RtlRaiseException @ 0x1405E88F0 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

void KiStallBugcheckThread()
{
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 CurrentIrql; // di
  unsigned __int8 NestingLevel; // dl
  unsigned int v3; // ecx
  int v4; // edx
  unsigned __int8 v5; // cl
  int v6; // edx
  unsigned __int8 v7; // cl
  struct _GROUP_AFFINITY Affinity; // [rsp+30h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+40h] [rbp-28h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  NestingLevel = CurrentPrcb->NestingLevel;
  if ( NestingLevel )
  {
    if ( NestingLevel == 1 && CurrentPrcb->DpcRoutineActive )
    {
      if ( CurrentIrql > 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 2u);
        __writecr8(2uLL);
      }
      byte_140F0FB17 |= 4u;
      RtlRaiseException((ULONG_PTR)&KiRecoverableBugcheckException);
      __debugbreak();
    }
    __fastfail(4u);
  }
  if ( CurrentIrql > 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 2u);
    __writecr8(2uLL);
  }
  v3 = *((_DWORD *)KiGlobalState + KeGetCurrentPrcb()->Number);
  Affinity.Reserved[1] = 0;
  Affinity.Reserved[2] = 0;
  *(_DWORD *)&Affinity.Group = (unsigned __int16)(v3 >> 6);
  Affinity.Mask = 1LL << (v3 & 0x3F);
  KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 0);
  __writecr8(0LL);
  byte_140F0FB17 |= 2u;
  KeWaitForSingleObject(&KiBugcheckBlockingEvent, Executive, 0, 0, 0LL);
  v5 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v4) = 2;
    KiRaiseIrqlProcessIrqlFlags(v5, v4);
  }
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  if ( CurrentIrql > 2u )
  {
    v7 = KeGetCurrentIrql();
    __writecr8(CurrentIrql);
    if ( KiIrqlFlags )
    {
      LOBYTE(v6) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v7, v6);
    }
  }
}
