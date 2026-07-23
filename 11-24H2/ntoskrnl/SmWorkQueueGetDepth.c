/*
 * XREFs of SmWorkQueueGetDepth @ 0x14044004C
 * Callers:
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x14048FB20 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmWorkQueueGetDepth(_DWORD *a1, int a2)
{
  unsigned int v2; // eax

  v2 = a1[1731];
  if ( !a2 )
    v2 >>= 8;
  return a1[1860] + a1[1730] + v2;
}
