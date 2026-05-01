/*
 * XREFs of ?Reset@GridLayout@@QEAAXXZ @ 0x1804C916C
 * Callers:
 *     ?ItemAdded@CSwitchItemGrid@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@Z @ 0x1804C83C0 (-ItemAdded@CSwitchItemGrid@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@Z.c)
 *     ?RemoveAllDescendants@CSwitchItemGrid@@UEAAXXZ @ 0x1804C9020 (-RemoveAllDescendants@CSwitchItemGrid@@UEAAXXZ.c)
 *     ?ResetRowHeight@CSwitchItemGrid@@UEAAXXZ @ 0x1804C91A0 (-ResetRowHeight@CSwitchItemGrid@@UEAAXXZ.c)
 *     ?SetHostMonitorSize@CSwitchItemGrid@@UEAAXAEBUCSize@Geometry@@@Z @ 0x1804C9550 (-SetHostMonitorSize@CSwitchItemGrid@@UEAAXAEBUCSize@Geometry@@@Z.c)
 *     ?SetPosition@CSwitchItemGrid@@UEAAXAEBUCRect@Geometry@@W4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x1804C9810 (-SetPosition@CSwitchItemGrid@@UEAAXAEBUCRect@Geometry@@W4DCompThumbnailAnimation@@PEAUIUIAnimati.c)
 *     ?LayoutItems@GridLayoutFactory@@QEAAJAEBUCSize@Geometry@@AEAVGridLayout@@@Z @ 0x1804D6D88 (-LayoutItems@GridLayoutFactory@@QEAAJAEBUCSize@Geometry@@AEAVGridLayout@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall GridLayout::Reset(GridLayout *this)
{
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  *((_BYTE *)this + 12) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  CTSimpleArray<GridRow,4294967294,CTPolicyCoTaskMem<GridRow>,CSimpleArrayStandardCompareHelper<GridRow>,CSimpleArrayStandardMergeHelper<GridRow>>::RemoveAll((__int64)this + 48);
}
