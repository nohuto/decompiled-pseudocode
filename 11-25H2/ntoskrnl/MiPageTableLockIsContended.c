/*
 * XREFs of MiPageTableLockIsContended @ 0x140338780
 * Callers:
 *     MiSharePages @ 0x140238650 (MiSharePages.c)
 *     MiInsertViewOfPhysicalSection @ 0x1402A496C (MiInsertViewOfPhysicalSection.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1403381B0 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiProbePacketContended @ 0x1403386E0 (MiProbePacketContended.c)
 *     NtUnlockVirtualMemory @ 0x1403875B0 (NtUnlockVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x140388E00 (NtLockVirtualMemory.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x140391464 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiDecommitHardwareEnclavePages @ 0x1403FC4C8 (MiDecommitHardwareEnclavePages.c)
 *     MiCommitEnclavePages @ 0x1403FCC78 (MiCommitEnclavePages.c)
 *     MiAddPagesToEnclave @ 0x1403FCE98 (MiAddPagesToEnclave.c)
 *     MiProtectEnclavePages @ 0x1404CAFB0 (MiProtectEnclavePages.c)
 *     MiVadRangeIsIoSpace @ 0x1404CB75C (MiVadRangeIsIoSpace.c)
 *     MiScrubLargeMappedPage @ 0x140681CB8 (MiScrubLargeMappedPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPageTableLockIsContended(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 result; // rax
  unsigned __int64 v4; // rax
  struct _KPRCB *CurrentPrcb; // rdx
  char v6; // al
  __int64 v7; // rcx
  _KPROCESS *Process; // r8
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx

  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v6 = *(_DWORD *)(a1 + 184) & 0xF;
    if ( v6 )
    {
      if ( v6 == 7 )
      {
        v7 = 1LL;
      }
      else
      {
        v7 = 3LL;
        if ( v6 == 5 )
          v7 = 0LL;
      }
    }
    else
    {
      v7 = 2LL;
    }
    result = (__int64)CurrentPrcb->SelfmapLockHandle[v7].LockQueue.Next;
    if ( result )
      return 1LL;
  }
  else if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0
         || a2 < 0xFFFFF6FB7DBED000uLL
         || a2 > 0xFFFFF6FB7DBEDFFFuLL
         || (v4 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 && a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
    {
      return ((unsigned int)dword_140E2EE6C[(unsigned __int64)(2 * (unsigned int)((__int64)(a2 + 0x90482413000LL) >> 3)) >> 5] >> ((2 * ((__int64)(a2 + 0x90482413000LL) >> 3)) & 0x1F) >> 1) & 1;
    }
    else
    {
      v2 = *(_QWORD *)a2;
      if ( a2 >= 0xFFFFF6FB7DBED000uLL
        && a2 <= 0xFFFFF6FB7DBED7F8uLL
        && (v2 & 1) != 0
        && ((v2 & 0x42) == 0 || (v2 & 0x20) == 0)
        && (MiFlags & 0x600000) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process->AddressPolicy != 1 )
        {
          KernelWaitTime = Process[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v10 = *(_QWORD *)(KernelWaitTime + 8 * ((a2 >> 3) & 0x1FF));
            if ( (v10 & 0x20) != 0 )
              v2 |= 0x20uLL;
            v11 = v2;
            v2 |= 0x42uLL;
            if ( (v10 & 0x42) == 0 )
              v2 = v11;
          }
        }
      }
      return (v2 >> 60) & 2;
    }
  }
  else
  {
    return (*(_DWORD *)(v4 + 4 * ((a2 >> 3) & 0x1FF)) >> 30) & 1;
  }
  return result;
}
