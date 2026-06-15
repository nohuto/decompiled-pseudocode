/*
 * XREFs of ?IsSubjectToConstraintResourceManagement@CConstraintModelResourceManager@@UEAA_NPEAUIMMDevice@@@Z @ 0x1800E9500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CConstraintModelResourceManager::IsSubjectToConstraintResourceManagement(
        CConstraintModel **this,
        struct IMMDevice *a2)
{
  return CConstraintModel::ResourceConstraintsApply(this[7], a2);
}
