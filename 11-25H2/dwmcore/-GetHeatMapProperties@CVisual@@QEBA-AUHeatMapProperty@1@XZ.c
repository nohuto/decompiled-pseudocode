/*
 * XREFs of ?GetHeatMapProperties@CVisual@@QEBA?AUHeatMapProperty@1@XZ @ 0x18025ADB8
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800E9350 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z @ 0x18012B6A0 (-FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z.c)
 */

__int64 __fastcall CVisual::GetHeatMapProperties(__int64 a1, __int64 a2)
{
  CSparseStorage::AllocatedStorage *v2; // rcx
  __int64 v3; // r9
  struct CSparseStorage::DataInfo *Slot; // rax
  int v5; // ecx

  v2 = *(CSparseStorage::AllocatedStorage **)(a1 + 224);
  v3 = a2;
  if ( (*((_DWORD *)v2 + 1) & 0x40000000) != 0 )
  {
    Slot = CSparseStorage::AllocatedStorage::FindSlot(v2, 2);
    v5 = *((_DWORD *)Slot + 5);
    *(_OWORD *)v3 = *(_OWORD *)((char *)Slot + 4);
    *(_DWORD *)(v3 + 16) = v5;
  }
  else
  {
    *(_DWORD *)a2 = 0;
    *(_OWORD *)(a2 + 4) = 0LL;
  }
  return v3;
}
