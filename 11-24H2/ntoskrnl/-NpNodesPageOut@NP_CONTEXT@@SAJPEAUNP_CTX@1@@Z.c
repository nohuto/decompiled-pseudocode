/*
 * XREFs of ?NpNodesPageOut@NP_CONTEXT@@SAJPEAUNP_CTX@1@@Z @ 0x1406082FC
 * Callers:
 *     ?StMetaRegionsUpdate@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1404B1B48 (-StMetaRegionsUpdate@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?NpiPerformPageOut@NP_CONTEXT@@SAJPEAU1@PEAUNP_CTX@1@@Z @ 0x140608440 (-NpiPerformPageOut@NP_CONTEXT@@SAJPEAU1@PEAUNP_CTX@1@@Z.c)
 */

int __fastcall NP_CONTEXT::NpNodesPageOut(struct NP_CONTEXT::NP_CTX *a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)a1;
  if ( *(_DWORD *)(v2 + 40) <= *(_DWORD *)v2 )
    return 0;
  else
    return NP_CONTEXT::NpiPerformPageOut((struct NP_CONTEXT *)v2, a1);
}
