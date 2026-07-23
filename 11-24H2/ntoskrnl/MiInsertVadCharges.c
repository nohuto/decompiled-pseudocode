/*
 * XREFs of MiInsertVadCharges @ 0x140918FC8
 * Callers:
 *     MiAllocateEnclaveVad @ 0x1407F74B4 (MiAllocateEnclaveVad.c)
 *     MiMapLockedPagesInUserSpace @ 0x1408DC1EC (MiMapLockedPagesInUserSpace.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1408DD544 (MiAllocateNewSubAllocatedRegion.c)
 *     MiReserveUserMemory @ 0x140916A48 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x1409173D0 (MiMapViewOfDataSection.c)
 *     MiAllocateSplitVads @ 0x140919FC8 (MiAllocateSplitVads.c)
 *     MiInsertProcessVads @ 0x14091A6A0 (MiInsertProcessVads.c)
 *     MiInsertChildVads @ 0x14091A854 (MiInsertChildVads.c)
 *     MiMapViewOfPhysicalSection @ 0x140A0BD00 (MiMapViewOfPhysicalSection.c)
 *     MiMapViewOfImageSection @ 0x140AE8594 (MiMapViewOfImageSection.c)
 * Callees:
 *     MiComputeVadCharges @ 0x140210398 (MiComputeVadCharges.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x1402676E0 (PsChargeProcessNonPagedPoolQuota.c)
 *     MiChargeResident @ 0x14033DD30 (MiChargeResident.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x140362450 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x1403C8D90 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiGetProcessPartition @ 0x1404329B0 (MiGetProcessPartition.c)
 *     PsChargeProcessPagedPoolQuota @ 0x14089EAD0 (PsChargeProcessPagedPoolQuota.c)
 *     MiCommitPageTablesForVad @ 0x140919270 (MiCommitPageTablesForVad.c)
 *     MiSetVadBits @ 0x140919600 (MiSetVadBits.c)
 *     MiReturnVadCharges @ 0x140919B48 (MiReturnVadCharges.c)
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
  struct _KPRCB *v12; // r9
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
        (unsigned int)MiChargeResident(ProcessPartition, (unsigned __int64)v12, 128LL, v12)) )
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
