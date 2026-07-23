/*
 * XREFs of KiIntSteerInit @ 0x140C2C194
 * Callers:
 *     KeInitSystem @ 0x140C62E30 (KeInitSystem.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140287740 (KeAddProcessorAffinityEx.c)
 *     KeQueryActiveProcessorCountEx @ 0x140339940 (KeQueryActiveProcessorCountEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     KiIntSteerDetermineSteeringEnabled @ 0x140C2C11C (KiIntSteerDetermineSteeringEnabled.c)
 *     IntPartGetClassAffinityGroup @ 0x140C5EB40 (IntPartGetClassAffinityGroup.c)
 *     IntPartCreate @ 0x140C5EE28 (IntPartCreate.c)
 */

__int64 __fastcall KiIntSteerInit(int a1)
{
  unsigned int v1; // ebx
  __int64 Pool2; // rax
  ULONG ActiveProcessorCount; // eax
  __int64 v4; // rcx
  __int64 v5; // rcx
  unsigned int v6; // eax

  v1 = 0;
  if ( a1 == 1 )
  {
    KiIntTrackRootCount = 0;
    qword_140F0FF38 = (__int64)&KiIntTrackRootList;
    KiIntTrackRootList = (__int64)&KiIntTrackRootList;
    KiIntTrackSpinlock = 0LL;
    KiIntSteerMask[0] = 2097153LL;
    memset_0(qword_140F100E8, 0, sizeof(qword_140F100E8));
    KeAddProcessorAffinityEx((unsigned __int16 *)KiIntSteerMask, 0);
    *(_QWORD *)&KiIntSteerAffinitizedInterrupts.Count = 2097153LL;
    memset_0(&KiIntSteerAffinitizedInterrupts.8, 0, sizeof(KiIntSteerAffinitizedInterrupts.8));
    guard_dispatch_icall_no_overrides(39LL, 4LL);
    KiIntSteerEnabled = KiIntSteerDetermineSteeringEnabled();
    if ( KiIntSteerEnabled )
    {
      KiIntSteerDistributionContext = (void *)ExAllocatePool2(0x40uLL, 0x204uLL, 0x6B725449uLL);
      Pool2 = ExAllocatePool2(0x40uLL, 0x200uLL, 0x6B725449uLL);
      KiIntSteerPerProcIsrDpcTimeAffinitized = Pool2;
      if ( !KiIntSteerDistributionContext || !Pool2 )
        return (unsigned int)-1073741670;
    }
  }
  else if ( a1 == 2 && KiIntSteerEnabled )
  {
    ActiveProcessorCount = KeQueryActiveProcessorCountEx(0);
    KiInterruptEfficiencyClassGroup = IntPartGetClassAffinityGroup(v4, ActiveProcessorCount);
    if ( KiInterruptEfficiencyClassGroup )
    {
      v6 = IntPartCreate(v5, (KiInterruptSteeringFlags & 4) != 0);
      KiIntPartInitialized = 1;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
    return v6;
  }
  return v1;
}
