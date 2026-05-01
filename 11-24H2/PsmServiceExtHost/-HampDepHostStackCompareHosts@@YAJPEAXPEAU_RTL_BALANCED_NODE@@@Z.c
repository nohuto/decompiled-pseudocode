/*
 * XREFs of ?HampDepHostStackCompareHosts@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x180067634
 * Callers:
 *     ?HampDepGroupEvaluateDependencies@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEP_HOST_STACK@@@Z @ 0x180035DF4 (-HampDepGroupEvaluateDependencies@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEP_HOST_STACK@@@Z.c)
 *     ?HampDepGroupGetTransitiveTaskCompletionsForHost@@YA_KPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180082ADC (-HampDepGroupGetTransitiveTaskCompletionsForHost@@YA_KPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampDepHostStackCompareHosts(void *a1, struct _RTL_BALANCED_NODE *a2)
{
  unsigned int v2; // r8d

  v2 = (LODWORD(a2[1].Children[0]) >> 2) & 3;
  if ( (unsigned int)a1 <= v2 )
    return (_DWORD)a1 != v2;
  else
    return 0xFFFFFFFFLL;
}
