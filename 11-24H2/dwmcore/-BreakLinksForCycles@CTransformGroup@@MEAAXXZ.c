/*
 * XREFs of ?BreakLinksForCycles@CTransformGroup@@MEAAXXZ @ 0x180228300
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ?GetRealizationWorker@CTransformGroup@@IEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1801FCD34 (-GetRealizationWorker@CTransformGroup@@IEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 */

void __fastcall CTransformGroup::BreakLinksForCycles(CTransformGroup *this)
{
  struct CMILMatrix *v2; // rax

  v2 = (struct CMILMatrix *)operator new(0x44uLL);
  if ( v2 )
    *((_DWORD *)v2 + 16) = 0;
  *((_QWORD *)this + 3) = v2;
  if ( v2 )
    CTransformGroup::GetRealizationWorker((CTransformGroup *)((char *)this - 184), 0LL, v2);
  CCyclicResourceListEntry::BreakLinksForCycles(this);
}
