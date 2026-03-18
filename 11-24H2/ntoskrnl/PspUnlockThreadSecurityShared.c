/*
 * XREFs of PspUnlockThreadSecurityShared @ 0x14041AFC0
 * Callers:
 *     PspWow64ReadOrWriteThreadCpuAreaOld @ 0x14077A5B0 (PspWow64ReadOrWriteThreadCpuAreaOld.c)
 *     PsReferenceEffectiveToken @ 0x14085D1B0 (PsReferenceEffectiveToken.c)
 *     SeCreateClientSecurity @ 0x140896720 (SeCreateClientSecurity.c)
 *     NtAlpcImpersonateClientOfPort @ 0x140896970 (NtAlpcImpersonateClientOfPort.c)
 *     ObpLookupObjectName @ 0x14089D210 (ObpLookupObjectName.c)
 *     CmpCmdHiveOpen @ 0x14092E91C (CmpCmdHiveOpen.c)
 *     CmpOpenHiveFile @ 0x14092FE64 (CmpOpenHiveFile.c)
 *     ObpReferenceCurrentDeviceMap @ 0x140984EA0 (ObpReferenceCurrentDeviceMap.c)
 *     NtQueryInformationThread @ 0x1409A7C80 (NtQueryInformationThread.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x140AD198C (PspWow64ReadOrWriteThreadCpuArea.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14025CDA0 (KiAbEntryFreeAndEnableInterrupts.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall PspUnlockThreadSecurityShared(__int64 a1)
{
  ULONG_PTR v1; // rbx
  struct _KTHREAD *CurrentThread; // r11
  _KLOCK_ENTRIES *KernelAbEntries; // r8
  unsigned int i; // eax
  char *v5; // r10
  __int64 v6; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v10; // eax
  signed __int32 v11; // ett

  v1 = a1 + 1424;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1424), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 1424));
  CurrentThread = KeGetCurrentThread();
  _disable();
  KernelAbEntries = CurrentThread->KernelAbEntries;
  for ( i = 0; i < KernelAbEntries->EntryCount; ++i )
  {
    v5 = (char *)KernelAbEntries + 88 * i;
    v6 = *((_QWORD *)v5 + 2);
    if ( (v6 & 0x7FFFFFFFFFFFFFFCLL) == (v1 & 0x7FFFFFFFFFFFFFFCLL) && v5[26] && (v6 & 1) == 0 )
    {
      v5[26] = 0;
      KiAbEntryFreeAndEnableInterrupts((__int64)(v5 + 16), (ULONG_PTR)CurrentThread, v1, 1, 0LL);
      return KeLeaveCriticalRegionThread();
    }
  }
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v1, 0LL, 0LL);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v10 = *SchedulerAssist;
    do
    {
      v11 = v10;
      v10 = _InterlockedCompareExchange(SchedulerAssist, v10 & 0xFFDFFFFF, v10);
    }
    while ( v11 != v10 );
    if ( (v10 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  _enable();
  return KeLeaveCriticalRegionThread();
}
