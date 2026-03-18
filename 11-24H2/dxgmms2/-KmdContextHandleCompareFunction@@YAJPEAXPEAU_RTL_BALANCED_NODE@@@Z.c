/*
 * XREFs of ?KmdContextHandleCompareFunction@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x14000D944
 * Callers:
 *     ?VidSchiUpdateHwSchRunningTime@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x14000D5E0 (-VidSchiUpdateHwSchRunningTime@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     ?VidSchiCreateHwContextInternal@@YAPEAUVIDSCH_HW_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_CONTEXT_DATA@@PEAVDXGCONTEXT@@@Z @ 0x140021FC4 (-VidSchiCreateHwContextInternal@@YAPEAUVIDSCH_HW_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_CONTEX.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KmdContextHandleCompareFunction(void *a1, struct _RTL_BALANCED_NODE *a2)
{
  if ( a1 == (void *)a2[-6].ParentValue )
    return 0LL;
  else
    return (unsigned __int64)a1 < a2[-6].ParentValue ? -1 : 1;
}
