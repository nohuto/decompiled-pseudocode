/*
 * XREFs of ?HampDepGroupCompareDependencyLinkForHost@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1800656A4
 * Callers:
 *     ?HampDepGroupFindFirstDependencyForHost@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180065578 (-HampDepGroupFindFirstDependencyForHost@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampDepGroupCompareDependencyLinkForHost(_QWORD *a1, struct _RTL_BALANCED_NODE *a2)
{
  struct _RTL_BALANCED_NODE *v2; // r8

  v2 = a2[1].Children[0];
  if ( *a1 >= (unsigned __int64)v2 )
    return (unsigned __int64)v2 < *a1;
  else
    return 0xFFFFFFFFLL;
}
