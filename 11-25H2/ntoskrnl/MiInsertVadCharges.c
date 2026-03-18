/*
 * XREFs of MiInsertVadCharges @ 0x140900770
 * Callers:
 *     MiAllocateEnclaveVad @ 0x1407E6EB0 (MiAllocateEnclaveVad.c)
 *     MiMapViewOfPhysicalSection @ 0x1408B6998 (MiMapViewOfPhysicalSection.c)
 *     MiMapLockedPagesInUserSpace @ 0x1408F8DEC (MiMapLockedPagesInUserSpace.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1408F9D30 (MiAllocateNewSubAllocatedRegion.c)
 *     MiMapViewOfDataSection @ 0x1408FEC20 (MiMapViewOfDataSection.c)
 *     MiReserveUserMemory @ 0x1409012DC (MiReserveUserMemory.c)
 *     MiAllocateSplitVads @ 0x1409021D4 (MiAllocateSplitVads.c)
 *     MiMapViewOfImageSection @ 0x1409028FC (MiMapViewOfImageSection.c)
 *     MiInsertProcessVads @ 0x140905110 (MiInsertProcessVads.c)
 *     MiInsertChildVads @ 0x140A40F24 (MiInsertChildVads.c)
 * Callees:
 *     MiChargeResident @ 0x14022CAE0 (MiChargeResident.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x140320330 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x140384DF0 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiComputeVadCharges @ 0x14038505C (MiComputeVadCharges.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x1403C5810 (PsChargeProcessNonPagedPoolQuota.c)
 *     MiGetProcessPartition @ 0x1404402D0 (MiGetProcessPartition.c)
 *     PsChargeProcessPagedPoolQuota @ 0x1408B0170 (PsChargeProcessPagedPoolQuota.c)
 *     MiCommitPageTablesForVad @ 0x140900E00 (MiCommitPageTablesForVad.c)
 *     MiSetVadBits @ 0x14090116C (MiSetVadBits.c)
 *     MiReturnVadCharges @ 0x140901270 (MiReturnVadCharges.c)
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
LABEL_13:
      v13 = 0uLL;
      goto LABEL_14;
    }
  }
  if ( *((_QWORD *)&v13 + 1) )
  {
    v8 = PsChargeProcessPagedPoolQuota(a2, *((unsigned __int64 *)&v13 + 1));
    if ( v8 < 0 )
      goto LABEL_13;
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
LABEL_14:
  MiReturnVadCharges(&v13);
  return (unsigned int)v8;
}
