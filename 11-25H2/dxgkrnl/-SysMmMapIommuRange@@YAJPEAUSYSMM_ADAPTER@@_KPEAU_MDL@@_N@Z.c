/*
 * XREFs of ?SysMmMapIommuRange@@YAJPEAUSYSMM_ADAPTER@@_KPEAU_MDL@@_N@Z @ 0x14003ADD0
 * Callers:
 *     <none>
 * Callees:
 *     ?SmmMapMdlToIommu@@YAJPEAUSYSMM_IOMMU@@_KPEAU_MDL@@_N@Z @ 0x14003AEA0 (-SmmMapMdlToIommu@@YAJPEAUSYSMM_IOMMU@@_KPEAU_MDL@@_N@Z.c)
 */

__int64 __fastcall SysMmMapIommuRange(struct SYSMM_ADAPTER *a1, unsigned __int64 a2, struct _MDL *a3, char a4)
{
  KIRQL CurrentIrql; // bp
  bool v9; // r9
  unsigned int v10; // edi

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql >= 2u )
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)a1 + 18);
  else
    ExAcquirePushLockSharedEx((char *)a1 + 80, 0LL);
  v9 = 0;
  if ( a4 || (dword_14015E600 & 4) != 0 )
    v9 = 1;
  v10 = SmmMapMdlToIommu((struct SYSMM_ADAPTER *)((char *)a1 + 64), a2, a3, v9);
  if ( CurrentIrql >= 2u )
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)a1 + 18);
  else
    ExReleasePushLockSharedEx((char *)a1 + 80, 0LL);
  return v10;
}
