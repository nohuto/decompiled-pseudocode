/*
 * XREFs of MiRotatedToFrameBuffer @ 0x140213AD4
 * Callers:
 *     MiProtectPrivateMemory @ 0x140211610 (MiProtectPrivateMemory.c)
 *     MiRevertValidPte @ 0x140212130 (MiRevertValidPte.c)
 *     NtUnlockVirtualMemory @ 0x140213FA0 (NtUnlockVirtualMemory.c)
 *     MiLockStealUserVm @ 0x14025539C (MiLockStealUserVm.c)
 *     MiActOnPte @ 0x14029B3E0 (MiActOnPte.c)
 *     MiGetPageProtection @ 0x14030C130 (MiGetPageProtection.c)
 *     MiGetWorkingSetInfoList @ 0x14030D190 (MiGetWorkingSetInfoList.c)
 *     MiDeleteRotateVa @ 0x14038DD68 (MiDeleteRotateVa.c)
 *     MiMakeVaRangeNoAccess @ 0x14049351C (MiMakeVaRangeNoAccess.c)
 *     MiValidFault @ 0x1404F0710 (MiValidFault.c)
 *     MiCheckCommitReleaseFromVad @ 0x14066AA50 (MiCheckCommitReleaseFromVad.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiRotatedToFrameBuffer(unsigned __int64 a1)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rcx
  __int64 v4; // rdx
  unsigned int v5; // ecx

  if ( (*(_QWORD *)a1 & 1) == 0 )
    return 0LL;
  v2 = (*(_QWORD *)a1 >> 12) & 0xFFFFFFFFFFLL;
  if ( v2 <= qword_140E2DD20 && ((*(_QWORD *)(48 * v2 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
  {
    v3 = *(_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v4 = 48 * v2 - 0x220000000000LL;
    if ( (*(_QWORD *)(v4 + 8) | 0x8000000000000000uLL) != a1
      || ((*(_QWORD *)(v4 + 40) ^ (v3 >> 12)) & 0xFFFFFFFFFFLL) != 0 )
    {
      v5 = 0;
      if ( *(__int64 *)(v4 + 40) < 0
        && (*(_QWORD *)(v4 + 40) & 0x10000000000LL) == 0
        && *(__int64 *)(48 * v2 - 0x220000000000LL + 8) >= 0 )
      {
        LOBYTE(v5) = *(_QWORD *)(48 * v2 - 0x220000000000LL + 8) == 0LL;
        return v5;
      }
      return 1LL;
    }
    return 0LL;
  }
  return 1LL;
}
