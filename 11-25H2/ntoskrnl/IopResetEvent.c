/*
 * XREFs of IopResetEvent @ 0x1402A1570
 * Callers:
 *     NtSetInformationFile @ 0x1402A04A0 (NtSetInformationFile.c)
 *     IoCancelFileOpen @ 0x1406EE040 (IoCancelFileOpen.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1407068A0 (IopSetEaOrQuotaInformationFile.c)
 *     NtQueryQuotaInformationFile @ 0x14070BB10 (NtQueryQuotaInformationFile.c)
 *     NtSetVolumeInformationFile @ 0x14070C280 (NtSetVolumeInformationFile.c)
 *     IopCloseFile @ 0x140845AF0 (IopCloseFile.c)
 *     IopGetSetSecurityObject @ 0x14086F330 (IopGetSetSecurityObject.c)
 *     BuildQueryDirectoryIrp @ 0x1408C6A20 (BuildQueryDirectoryIrp.c)
 *     NtQueryEaFile @ 0x140935870 (NtQueryEaFile.c)
 *     IopReadFile @ 0x140935F80 (IopReadFile.c)
 *     NtQueryVolumeInformationFile @ 0x140936F60 (NtQueryVolumeInformationFile.c)
 *     IopFlushBuffersFile @ 0x140938E14 (IopFlushBuffersFile.c)
 *     NtLockFile @ 0x1409869D0 (NtLockFile.c)
 *     NtQueryInformationFile @ 0x140987790 (NtQueryInformationFile.c)
 *     NtUnlockFile @ 0x140989F40 (NtUnlockFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x14098A4B0 (NtNotifyChangeDirectoryFileEx.c)
 *     NtSetEaFile @ 0x140A5F1F0 (NtSetEaFile.c)
 *     IopReadFileScatter @ 0x140A89998 (IopReadFileScatter.c)
 *     IopWriteFileGather @ 0x140A9170C (IopWriteFileGather.c)
 *     IopFreeBandwidthContract @ 0x140ABF604 (IopFreeBandwidthContract.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

void __fastcall IopResetEvent(__int64 a1)
{
  unsigned __int8 CurrentIrql; // di
  unsigned int v3; // esi

  if ( (*(_DWORD *)(a1 + 80) & 0x4000000) == 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
    v3 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 152), 7u) )
    {
      do
      {
        if ( (++v3 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
        {
          HvlNotifyLongSpinWait(v3);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( (*(_DWORD *)(a1 + 152) & 0x80u) != 0
           || _interlockedbittestandset((volatile signed __int32 *)(a1 + 152), 7u) );
    }
    *(_DWORD *)(a1 + 156) = 0;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 152), 0xFFFFFF7F);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
}
