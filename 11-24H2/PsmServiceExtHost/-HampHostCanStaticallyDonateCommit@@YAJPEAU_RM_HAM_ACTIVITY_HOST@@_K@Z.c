/*
 * XREFs of ?HampHostCanStaticallyDonateCommit@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x18007DA1C
 * Callers:
 *     ?HampHostCheckSetStaticDonation@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800365FC (-HampHostCheckSetStaticDonation@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostTrySetPpleCommitTarget@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x18007E4C4 (-HampHostTrySetPpleCommitTarget@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 * Callees:
 *     ?HampHostHasExternalResourceAccess@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4Enum@ResourceType@ExecutionModel@@@Z @ 0x180044104 (-HampHostHasExternalResourceAccess@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4Enum@ResourceType@ExecutionM.c)
 *     ?RmpCommitValuesAdd@@YAJ_K0PEA_K@Z @ 0x180057610 (-RmpCommitValuesAdd@@YAJ_K0PEA_K@Z.c)
 */

__int64 __fastcall HampHostCanStaticallyDonateCommit(struct _RM_HAM_ACTIVITY_HOST *a1, __int64 a2)
{
  int v4; // ecx
  __int64 v5; // rcx
  unsigned __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  if ( (unsigned int)HampHostHasExternalResourceAccess(a1, 28) )
  {
    v5 = 1200LL;
    if ( a1 )
      v5 = (__int64)a1 + 1136;
    v4 = RmpCommitValuesAdd(*(_QWORD *)v5, a2, &v7);
    if ( v4 >= 0 )
      return *((_QWORD *)a1 + 119) < v7 ? 0xC0EC0005 : 0;
  }
  else
  {
    return (unsigned int)-1058275323;
  }
  return (unsigned int)v4;
}
