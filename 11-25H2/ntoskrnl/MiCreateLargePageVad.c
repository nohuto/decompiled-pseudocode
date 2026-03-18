/*
 * XREFs of MiCreateLargePageVad @ 0x140A7F47C
 * Callers:
 *     MiReserveUserMemory @ 0x1409012DC (MiReserveUserMemory.c)
 *     MiMapViewOfImageSection @ 0x1409028FC (MiMapViewOfImageSection.c)
 *     MiAllocateChildVads @ 0x140A40978 (MiAllocateChildVads.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     MiInsertVadEvent @ 0x1402A33D8 (MiInsertVadEvent.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1403D887C (LOCK_ADDRESS_SPACE_SHARED.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1403D88FC (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiChargeFullProcessCommitment @ 0x1409020A0 (MiChargeFullProcessCommitment.c)
 *     MiChargeProcessPhysicalPages @ 0x140A7F608 (MiChargeProcessPhysicalPages.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreateLargePageVad(__int64 a1, __int64 a2, void *a3)
{
  int v3; // r15d
  __int64 Pool; // rbx
  struct _KTHREAD *CurrentThread; // r14
  _KPROCESS *Process; // r12
  __int64 v10; // rcx
  unsigned __int64 v11; // rbp
  int v12; // r9d
  int v14; // esi

  v3 = 1;
  Pool = 1LL;
  if ( (*(_DWORD *)(a2 + 48) & 0x200000) != 0 )
    Pool = -(__int64)(a3 != 0LL) & 1;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  if ( Pool )
  {
    Pool = MiAllocatePool(0x40uLL, 0x58uLL, 1649175885);
    if ( !Pool )
      return 3221225626LL;
  }
  v10 = *(unsigned int *)(a2 + 52);
  v11 = v10 | ((unsigned __int64)*(unsigned __int8 *)(a2 + 34) << 32);
  if ( !v11 )
  {
    if ( !a3 )
      goto LABEL_9;
    goto LABEL_7;
  }
  if ( (unsigned int)MiChargeProcessPhysicalPages(a1, v10 | ((unsigned __int64)*(unsigned __int8 *)(a2 + 34) << 32)) )
  {
    if ( a3 )
    {
LABEL_7:
      ObfReferenceObjectWithTag(a3, 0x746C6644u);
      *(_QWORD *)(Pool + 24) = a3;
LABEL_9:
      if ( Pool )
      {
        *(_DWORD *)(Pool + 80) = 16;
        MiInsertVadEvent(a2, (unsigned __int64 *)Pool, 0);
      }
      return 0LL;
    }
    if ( v12 || Process != (_KPROCESS *)a1 )
      v3 = 0;
    else
      LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
    v14 = MiChargeFullProcessCommitment(a1, v11);
    if ( v3 )
      UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
    if ( v14 >= 0 )
      goto LABEL_9;
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 1392), -(__int64)v11);
    if ( Pool )
      ExFreePoolWithTag((PVOID)Pool, 0);
    return (unsigned int)v14;
  }
  else
  {
    if ( Pool )
      ExFreePoolWithTag((PVOID)Pool, 0);
    return 3221225773LL;
  }
}
