/*
 * XREFs of MiPageTableLockIsContended @ 0x140391410
 * Callers:
 *     NtUnlockVirtualMemory @ 0x140213FA0 (NtUnlockVirtualMemory.c)
 *     MiSharePages @ 0x140343830 (MiSharePages.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x14038E15C (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140390E28 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiProbePacketContended @ 0x140391364 (MiProbePacketContended.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403C8524 (MiInsertViewOfPhysicalSection.c)
 *     NtLockVirtualMemory @ 0x1403DBC30 (NtLockVirtualMemory.c)
 *     MiDecommitHardwareEnclavePages @ 0x14046CF84 (MiDecommitHardwareEnclavePages.c)
 *     MiCommitEnclavePages @ 0x14046D738 (MiCommitEnclavePages.c)
 *     MiAddPagesToEnclave @ 0x14046D958 (MiAddPagesToEnclave.c)
 *     MiProtectEnclavePages @ 0x1404C420C (MiProtectEnclavePages.c)
 *     MiVadRangeIsIoSpace @ 0x1404C49B8 (MiVadRangeIsIoSpace.c)
 *     MiScrubLargeMappedPage @ 0x14068E678 (MiScrubLargeMappedPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPageTableLockIsContended(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rax
  __int64 result; // rax
  unsigned __int64 v5; // rcx
  _KPROCESS *Process; // r8
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  char v11; // al
  __int64 v12; // r8

  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v11 = *(_DWORD *)(a1 + 184) & 0xF;
    if ( v11 )
    {
      if ( v11 == 7 )
      {
        v12 = 1LL;
      }
      else
      {
        v12 = 3LL;
        if ( v11 == 5 )
          v12 = 0LL;
      }
    }
    else
    {
      v12 = 2LL;
    }
    result = (__int64)CurrentPrcb->SelfmapLockHandle[v12].LockQueue.Next;
    if ( result )
      return 1LL;
  }
  else if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0
         || a2 < 0xFFFFF6FB7DBED000uLL
         || a2 > 0xFFFFF6FB7DBEDFFFuLL
         || (v5 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 && a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
    {
      return ((unsigned int)dword_140E2F1EC[(unsigned __int64)(2 * (unsigned int)((__int64)(a2 + 0x90482413000LL) >> 3)) >> 5] >> ((2 * ((__int64)(a2 + 0x90482413000LL) >> 3)) & 0x1F) >> 1) & 1;
    }
    else
    {
      v3 = *(_QWORD *)a2;
      if ( a2 >= 0xFFFFF6FB7DBED000uLL
        && a2 <= 0xFFFFF6FB7DBED7F8uLL
        && (v3 & 1) != 0
        && ((v3 & 0x42) == 0 || (v3 & 0x20) == 0)
        && (MiFlags & 0x600000) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process->AddressPolicy != 1 )
        {
          KernelWaitTime = Process[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v8 = *(_QWORD *)(KernelWaitTime + 8 * ((a2 >> 3) & 0x1FF));
            if ( (v8 & 0x20) != 0 )
              v3 |= 0x20uLL;
            v9 = v3;
            v3 |= 0x42uLL;
            if ( (v8 & 0x42) == 0 )
              v3 = v9;
          }
        }
      }
      return (v3 >> 60) & 2;
    }
  }
  else
  {
    return (*(_DWORD *)(v5 + 4 * ((a2 >> 3) & 0x1FF)) & 0x40000000) != 0;
  }
  return result;
}
