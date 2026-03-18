/*
 * XREFs of ?SmCompressCtxUpdatePriority@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@J@Z @ 0x1404B32D4
 * Callers:
 *     ?SmCompressManagerUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x1404B61D0 (-SmCompressManagerUpdateMemoryCondition@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAG.c)
 *     ?SmCompressManagerCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z @ 0x14060A0F0 (-SmCompressManagerCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14020A160 (KeSetActualBasePriorityThread.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x140379ED0 (ExReleaseSpinLockExclusive.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxUpdatePriority(PEX_SPIN_LOCK SpinLock, int a2)
{
  KIRQL v4; // al
  __int64 v5; // r8
  __int64 **v6; // rdi
  KIRQL v7; // bp

  if ( *((_DWORD *)SpinLock + 38) != a2 )
  {
    v4 = ExAcquireSpinLockExclusive(SpinLock);
    *((_DWORD *)SpinLock + 38) = a2;
    v6 = (__int64 **)*((_QWORD *)SpinLock + 13);
    v7 = v4;
    while ( v6 != (__int64 **)(SpinLock + 26) )
    {
      KeSetActualBasePriorityThread((ULONG_PTR)v6[2], a2, v5);
      v6 = (__int64 **)*v6;
    }
    ExReleaseSpinLockExclusive(SpinLock, v7);
  }
}
