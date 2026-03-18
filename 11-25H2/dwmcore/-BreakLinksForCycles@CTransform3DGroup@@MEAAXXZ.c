/*
 * XREFs of ?BreakLinksForCycles@CTransform3DGroup@@MEAAXXZ @ 0x1802B1920
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18006BC80 (--2@YAPEAX_K@Z.c)
 *     ?GetRealizationWorker@CTransform3DGroup@@IEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180218E64 (-GetRealizationWorker@CTransform3DGroup@@IEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 */

void __fastcall CTransform3DGroup::BreakLinksForCycles(CTransform3DGroup *this)
{
  struct CMILMatrix *v2; // rax

  v2 = (struct CMILMatrix *)operator new(0x44uLL);
  if ( v2 )
    *((_DWORD *)v2 + 16) = 0;
  *((_QWORD *)this + 3) = v2;
  if ( v2 )
    CTransform3DGroup::GetRealizationWorker((CTransform3DGroup *)((char *)this - 184), 0LL, v2);
  CCyclicResourceListEntry::BreakLinksForCycles(this);
}
