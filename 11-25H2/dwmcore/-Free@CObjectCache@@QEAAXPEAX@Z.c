/*
 * XREFs of ?Free@CObjectCache@@QEAAXPEAX@Z @ 0x180044720
 * Callers:
 *     ??_GCReconstructableDrawListEntry_UVx0@@UEAAPEAXI@Z @ 0x180043A60 (--_GCReconstructableDrawListEntry_UVx0@@UEAAPEAXI@Z.c)
 *     ??_GCEmptyRegionDrawListBrush@@UEAAPEAXI@Z @ 0x180044690 (--_GCEmptyRegionDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??_ECPrimitiveGroupDrawListBrush@@UEAAPEAXI@Z @ 0x180044780 (--_ECPrimitiveGroupDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??R?$default_delete@VCNineGridDrawListBrush@@@std@@QEBAXPEAVCNineGridDrawListBrush@@@Z @ 0x18011A3A0 (--R-$default_delete@VCNineGridDrawListBrush@@@std@@QEBAXPEAVCNineGridDrawListBrush@@@Z.c)
 *     ??_GCWarpRenderingEffect@@MEAAPEAXI@Z @ 0x1801E7FE0 (--_GCWarpRenderingEffect@@MEAAPEAXI@Z.c)
 *     ??R?$default_delete@VCEmptyRegionDrawListBrush@@@std@@QEBAXPEAVCEmptyRegionDrawListBrush@@@Z @ 0x18020D744 (--R-$default_delete@VCEmptyRegionDrawListBrush@@@std@@QEBAXPEAVCEmptyRegionDrawListBrush@@@Z.c)
 *     ??R?$default_delete@VCColorDrawListBrush@@@std@@QEBAXPEAVCColorDrawListBrush@@@Z @ 0x180210F28 (--R-$default_delete@VCColorDrawListBrush@@@std@@QEBAXPEAVCColorDrawListBrush@@@Z.c)
 *     ??_ECColorDrawListBrush@@UEAAPEAXI@Z @ 0x180210F60 (--_ECColorDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??_GCSpectreCallbackRenderer@@UEAAPEAXI@Z @ 0x1802910C0 (--_GCSpectreCallbackRenderer@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CObjectCache::Free(CObjectCache *this, _QWORD *a2)
{
  HANDLE ProcessHeap; // rax

  if ( *((_DWORD *)this + 1) < *(_DWORD *)this )
  {
    *a2 = *((_QWORD *)this + 1);
    ++*((_DWORD *)this + 1);
    *((_QWORD *)this + 1) = a2;
  }
  else if ( a2 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, a2);
  }
}
