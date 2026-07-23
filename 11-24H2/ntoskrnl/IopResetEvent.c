/*
 * XREFs of IopResetEvent @ 0x1403B3230
 * Callers:
 *     NtSetInformationFile @ 0x1403B2080 (NtSetInformationFile.c)
 *     IopAllocateAndPopulateWriteIrp @ 0x1403FB9B0 (IopAllocateAndPopulateWriteIrp.c)
 *     IoCancelFileOpen @ 0x1406F7A40 (IoCancelFileOpen.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140710530 (IopSetEaOrQuotaInformationFile.c)
 *     NtQueryQuotaInformationFile @ 0x1407157A0 (NtQueryQuotaInformationFile.c)
 *     NtSetVolumeInformationFile @ 0x140715F10 (NtSetVolumeInformationFile.c)
 *     IopCloseFile @ 0x14083E330 (IopCloseFile.c)
 *     IopGetSetSecurityObject @ 0x14087DA20 (IopGetSetSecurityObject.c)
 *     IopReadFile @ 0x1408BDFD0 (IopReadFile.c)
 *     BuildQueryDirectoryIrp @ 0x1408C22B0 (BuildQueryDirectoryIrp.c)
 *     NtQueryEaFile @ 0x140956950 (NtQueryEaFile.c)
 *     NtQueryVolumeInformationFile @ 0x140957060 (NtQueryVolumeInformationFile.c)
 *     IopFlushBuffersFile @ 0x140957794 (IopFlushBuffersFile.c)
 *     NtQueryInformationFile @ 0x140957E20 (NtQueryInformationFile.c)
 *     NtUnlockFile @ 0x14095AC90 (NtUnlockFile.c)
 *     NtLockFile @ 0x1409C2A10 (NtLockFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x140A0AE70 (NtNotifyChangeDirectoryFileEx.c)
 *     NtSetEaFile @ 0x140A59680 (NtSetEaFile.c)
 *     IopReadFileScatter @ 0x140A8AFD8 (IopReadFileScatter.c)
 *     IopWriteFileGather @ 0x140A920EC (IopWriteFileGather.c)
 *     IopFreeBandwidthContract @ 0x140ABE044 (IopFreeBandwidthContract.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
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
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    v3 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 152), 7u) )
    {
      do
      {
        if ( (++v3 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
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
