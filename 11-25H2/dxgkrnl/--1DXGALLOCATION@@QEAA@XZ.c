/*
 * XREFs of ??1DXGALLOCATION@@QEAA@XZ @ 0x140387770
 * Callers:
 *     ??_GDXGALLOCATION@@QEAAPEAXI@Z @ 0x140039508 (--_GDXGALLOCATION@@QEAAPEAXI@Z.c)
 *     ?DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x14033AFE0 (-DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 * Callees:
 *     ?UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z @ 0x1401AF8A8 (-UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z.c)
 */

void __fastcall DXGALLOCATION::~DXGALLOCATION(DXGALLOCATION *this)
{
  if ( (*((_DWORD *)this + 18) & 0x40000) != 0 )
    UnlockParavirtualizedAllocationOnGuest(this, 1);
  if ( (*((_DWORD *)this + 18) & 0x100000) != 0 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)this + 5) + 72LL));
}
