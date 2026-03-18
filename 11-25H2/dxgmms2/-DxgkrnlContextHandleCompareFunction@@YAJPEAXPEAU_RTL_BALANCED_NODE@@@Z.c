/*
 * XREFs of ?DxgkrnlContextHandleCompareFunction@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x140018D90
 * Callers:
 *     ?VidSchiUpdateHwSchRunningTime@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x140018A48 (-VidSchiUpdateHwSchRunningTime@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     ?VidSchiCreateHwContextInternal@@YAPEAUVIDSCH_HW_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_CONTEXT_DATA@@PEAVDXGCONTEXT@@@Z @ 0x140031674 (-VidSchiCreateHwContextInternal@@YAPEAUVIDSCH_HW_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_CONTEX.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkrnlContextHandleCompareFunction(struct _RTL_BALANCED_NODE *a1, struct _RTL_BALANCED_NODE *a2)
{
  if ( a1 == a2[-5].Children[0] )
    return 0LL;
  else
    return a1 < a2[-5].Children[0] ? -1 : 1;
}
