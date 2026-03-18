/*
 * XREFs of ?SmCompressCtxQueueEntries@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_PF_QUEUE@@@Z @ 0x140496F20
 * Callers:
 *     SmPageWrite @ 0x140246630 (SmPageWrite.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@PEAU_SMKM_WRITE_QUEUE_CONTEXT@@@Z @ 0x140246820 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxQueueEntries(PEX_SPIN_LOCK SpinLock, __int64 *a2)
{
  KIRQL v4; // al
  _QWORD *v5; // rdx
  __int64 *v6; // r8
  unsigned __int64 v7; // rsi
  __int64 v8; // rbp
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rdx

  v4 = ExAcquireSpinLockExclusive(SpinLock);
  v5 = (_QWORD *)a2[1];
  v6 = (__int64 *)*((_QWORD *)SpinLock + 3);
  v7 = v4;
  v8 = *v6;
  if ( *v5 )
  {
    v9 = v8 + *v5;
    *v6 = *a2;
    v10 = (_QWORD *)a2[1];
    *((_QWORD *)SpinLock + 3) = v10;
    *v10 = v9;
    a2[1] = (__int64)a2;
    *a2 = 0LL;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  if ( !v8 )
    KeSetEvent((PRKEVENT)(SpinLock + 8), 0, 0);
  if ( KiIrqlFlags )
  {
    LOBYTE(v11) = v7;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
  }
  __writecr8(v7);
}
