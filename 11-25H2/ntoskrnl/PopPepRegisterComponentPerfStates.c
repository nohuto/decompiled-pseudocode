/*
 * XREFs of PopPepRegisterComponentPerfStates @ 0x1405D6D80
 * Callers:
 *     PopFxRegisterComponentPerfStates @ 0x140742464 (PopFxRegisterComponentPerfStates.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x1402BBA30 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockShared @ 0x14035E450 (ExReleaseSpinLockShared.c)
 */

void __fastcall PopPepRegisterComponentPerfStates(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rbx
  KIRQL v6; // al

  v5 = 208LL * a2;
  v6 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 64));
  *(_BYTE *)(v5 + a1 + 376) = 1;
  *(_QWORD *)(v5 + a1 + 216) = a3;
  if ( (a3 & 2) != 0 )
    *(_BYTE *)(a1 + 176) = 1;
  if ( (a3 & 4) != 0 )
    *(_BYTE *)(a1 + 177) = 1;
  ExReleaseSpinLockShared((PEX_SPIN_LOCK)(a1 + 64), v6);
}
