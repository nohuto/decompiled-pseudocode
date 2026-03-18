/*
 * XREFs of ?SmCompressCtxUpdatePriority@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@J@Z @ 0x1404B30D4
 * Callers:
 *     ?SmCompressManagerUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x1404B6720 (-SmCompressManagerUpdateMemoryCondition@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAG.c)
 *     ?SmCompressManagerCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z @ 0x1405FDC00 (-SmCompressManagerCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14020E620 (KeSetActualBasePriorityThread.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x1403A2D40 (ExReleaseSpinLockExclusive.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxUpdatePriority(PEX_SPIN_LOCK SpinLock, int a2)
{
  KIRQL v4; // al
  __int64 **v5; // rdi
  KIRQL v6; // bp

  if ( *((_DWORD *)SpinLock + 38) != a2 )
  {
    v4 = ExAcquireSpinLockExclusive(SpinLock);
    *((_DWORD *)SpinLock + 38) = a2;
    v5 = (__int64 **)*((_QWORD *)SpinLock + 13);
    v6 = v4;
    while ( v5 != (__int64 **)(SpinLock + 26) )
    {
      KeSetActualBasePriorityThread((ULONG_PTR)v5[2], a2);
      v5 = (__int64 **)*v5;
    }
    ExReleaseSpinLockExclusive(SpinLock, v6);
  }
}
