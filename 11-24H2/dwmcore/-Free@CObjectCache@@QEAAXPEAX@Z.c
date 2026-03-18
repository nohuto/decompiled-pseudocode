/*
 * XREFs of ?Free@CObjectCache@@QEAAXPEAX@Z @ 0x180171E40
 * Callers:
 *     ??R?$default_delete@VCNineGridDrawListBrush@@@std@@QEBAXPEAVCNineGridDrawListBrush@@@Z @ 0x18014F9E0 (--R-$default_delete@VCNineGridDrawListBrush@@@std@@QEBAXPEAVCNineGridDrawListBrush@@@Z.c)
 *     ??_ECPrimitiveGroupDrawListBrush@@UEAAPEAXI@Z @ 0x180171DB0 (--_ECPrimitiveGroupDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??_GCEmptyRegionDrawListBrush@@UEAAPEAXI@Z @ 0x180171EA0 (--_GCEmptyRegionDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??_GCReconstructableDrawListEntry_UVx0@@UEAAPEAXI@Z @ 0x180172AF0 (--_GCReconstructableDrawListEntry_UVx0@@UEAAPEAXI@Z.c)
 *     ??_GCWarpRenderingEffect@@MEAAPEAXI@Z @ 0x180172B50 (--_GCWarpRenderingEffect@@MEAAPEAXI@Z.c)
 *     ??_ECColorDrawListBrush@@UEAAPEAXI@Z @ 0x180172BB0 (--_ECColorDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??R?$default_delete@VCEmptyRegionDrawListBrush@@@std@@QEBAXPEAVCEmptyRegionDrawListBrush@@@Z @ 0x180172FA4 (--R-$default_delete@VCEmptyRegionDrawListBrush@@@std@@QEBAXPEAVCEmptyRegionDrawListBrush@@@Z.c)
 *     ??R?$default_delete@VCColorDrawListBrush@@@std@@QEBAXPEAVCColorDrawListBrush@@@Z @ 0x180172FF8 (--R-$default_delete@VCColorDrawListBrush@@@std@@QEBAXPEAVCColorDrawListBrush@@@Z.c)
 *     ??_GCSpectreCallbackRenderer@@UEAAPEAXI@Z @ 0x180285B20 (--_GCSpectreCallbackRenderer@@UEAAPEAXI@Z.c)
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
