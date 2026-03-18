/*
 * XREFs of ?SysMmUnmapIommuRange@@YAXPEAUSYSMM_ADAPTER@@_KPEAU_MDL@@_N@Z @ 0x14003ADF0
 * Callers:
 *     <none>
 * Callees:
 *     ?SmmUnmapMdlFromIommu@@YAXPEAUSYSMM_IOMMU@@_KPEAU_MDL@@_N@Z @ 0x14003AEBC (-SmmUnmapMdlFromIommu@@YAXPEAUSYSMM_IOMMU@@_KPEAU_MDL@@_N@Z.c)
 */

void __fastcall SysMmUnmapIommuRange(struct SYSMM_ADAPTER *a1, unsigned __int64 a2, struct _MDL *a3, char a4)
{
  KIRQL CurrentIrql; // bp
  bool v9; // r9

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql >= 2u )
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)a1 + 18);
  else
    ExAcquirePushLockSharedEx((char *)a1 + 80, 0LL);
  v9 = 0;
  if ( a4 || (dword_140161610 & 4) != 0 )
    v9 = 1;
  SmmUnmapMdlFromIommu((struct SYSMM_ADAPTER *)((char *)a1 + 64), a2, a3, v9);
  if ( CurrentIrql >= 2u )
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)a1 + 18);
  else
    ExReleasePushLockSharedEx((char *)a1 + 80, 0LL);
}
