/*
 * XREFs of ??1LayoutRow@GridLayoutFactory@@QEAA@XZ @ 0x1804D6950
 * Callers:
 *     _GridLayoutFactory::_CalculateRowSize_::_1_::dtor$0 @ 0x1806EFFF1 (_GridLayoutFactory--_CalculateRowSize_--_1_--dtor$0.c)
 *     _GridLayoutFactory::_SplitIntoRows_::_1_::dtor$0 @ 0x1806F0015 (_GridLayoutFactory--_SplitIntoRows_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall GridLayoutFactory::LayoutRow::~LayoutRow(GridLayoutFactory::LayoutRow *this)
{
  CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::RemoveAll(this);
}
