/*
 * XREFs of MiInsertVadCharges @ 0x1408E2418
 * Callers:
 *     MiAllocateEnclaveVad @ 0x1407F6D40 (MiAllocateEnclaveVad.c)
 *     MiReserveUserMemory @ 0x1408DFE98 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x1408E0820 (MiMapViewOfDataSection.c)
 *     MiMapViewOfImageSection @ 0x1408E3418 (MiMapViewOfImageSection.c)
 *     MiInsertProcessVads @ 0x1408F8BD8 (MiInsertProcessVads.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1409C3660 (MiAllocateNewSubAllocatedRegion.c)
 *     MiMapLockedPagesInUserSpace @ 0x1409C3AE8 (MiMapLockedPagesInUserSpace.c)
 *     MiInsertChildVads @ 0x1409C407C (MiInsertChildVads.c)
 *     MiMapViewOfPhysicalSection @ 0x140A135A0 (MiMapViewOfPhysicalSection.c)
 *     MiAllocateSplitVads @ 0x140A245C0 (MiAllocateSplitVads.c)
 * Callees:
 *     MiComputeVadCharges @ 0x140236208 (MiComputeVadCharges.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x1402BAD10 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiChargeResident @ 0x1402F5FA0 (MiChargeResident.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x1403CDFC0 (PsChargeProcessNonPagedPoolQuota.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x1404065E0 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiGetProcessPartition @ 0x14043E2C0 (MiGetProcessPartition.c)
 *     PsChargeProcessPagedPoolQuota @ 0x140896630 (PsChargeProcessPagedPoolQuota.c)
 *     MiCommitPageTablesForVad @ 0x1408E26C0 (MiCommitPageTablesForVad.c)
 *     MiSetVadBits @ 0x1408E2A50 (MiSetVadBits.c)
 *     MiReturnVadCharges @ 0x1408E2F98 (MiReturnVadCharges.c)
 */

__int64 __fastcall MiInsertVadCharges(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // r15
  unsigned __int64 v6; // r12
  __int64 v7; // r15
  int v8; // edi
  struct _KTHREAD *CurrentThread; // rbx
  ULONG *ProcessPartition; // rax
  unsigned __int64 v12; // r9
  __int128 v13; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int64 v14; // [rsp+30h] [rbp-10h]

  v2 = *(unsigned __int8 *)(a1 + 32);
  v3 = *(unsigned __int8 *)(a1 + 33);
  v14 = 0LL;
  v6 = (*(unsigned int *)(a1 + 24) | (unsigned __int64)(v2 << 32)) << 12;
  v7 = ((*(unsigned int *)(a1 + 28) | (unsigned __int64)(v3 << 32)) << 12) | 0xFFF;
  v13 = 0LL;
  MiComputeVadCharges(a1, (__int64)&v13);
  if ( v14 )
  {
    v8 = PsChargeProcessNonPagedPoolQuota(a2, v14);
    if ( v8 < 0 )
    {
      v14 = 0LL;
LABEL_10:
      v13 = 0uLL;
      goto LABEL_11;
    }
  }
  if ( *((_QWORD *)&v13 + 1) )
  {
    v8 = PsChargeProcessPagedPoolQuota(a2, *((unsigned __int64 *)&v13 + 1));
    if ( v8 < 0 )
      goto LABEL_10;
  }
  if ( !(_QWORD)v13
    || (ProcessPartition = (ULONG *)MiGetProcessPartition(a2),
        (unsigned int)MiChargeResident(ProcessPartition, v12, 128LL)) )
  {
    if ( (*(unsigned int *)(a1 + 52) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 32)) >= 0x7FFFFFFFDLL
      && (*(unsigned int *)(a1 + 52) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 32)) != 0x7FFFFFFFELL
      || (CurrentThread = KeGetCurrentThread(),
          LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, a2),
          v8 = MiCommitPageTablesForVad(a1, v6, v7),
          UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, a2),
          v8 >= 0) )
    {
      MiSetVadBits(a1);
      return 0LL;
    }
  }
  else
  {
    *(_QWORD *)&v13 = 0LL;
    v8 = -1073741670;
  }
LABEL_11:
  MiReturnVadCharges(&v13);
  return (unsigned int)v8;
}
