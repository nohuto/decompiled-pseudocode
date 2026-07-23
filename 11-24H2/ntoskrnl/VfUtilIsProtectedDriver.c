/*
 * XREFs of VfUtilIsProtectedDriver @ 0x140B854AC
 * Callers:
 *     VfDriverApplyDifVerification @ 0x140B8C038 (VfDriverApplyDifVerification.c)
 *     VfDriverEnableVerifier @ 0x140B8C250 (VfDriverEnableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x140B8C3B4 (VfDriverEnableVerifierForAll.c)
 *     ViDriverReApplyVerifierForAll @ 0x140B8C8E4 (ViDriverReApplyVerifierForAll.c)
 * Callees:
 *     MiIsImportOptimizationEnabled @ 0x14049A000 (MiIsImportOptimizationEnabled.c)
 *     KeIsImageIATProtected @ 0x1405AD758 (KeIsImageIATProtected.c)
 */

__int64 VfUtilIsProtectedDriver()
{
  bool IsImportOptimizationEnabled; // al
  __int64 v1; // rcx
  unsigned int v2; // edx

  IsImportOptimizationEnabled = MiIsImportOptimizationEnabled();
  v2 = 0;
  if ( IsImportOptimizationEnabled )
    LOBYTE(v2) = (*(_WORD *)(v1 + 110) & 0x180) != 0;
  else
    return (unsigned int)KeIsImageIATProtected(v1);
  return v2;
}
