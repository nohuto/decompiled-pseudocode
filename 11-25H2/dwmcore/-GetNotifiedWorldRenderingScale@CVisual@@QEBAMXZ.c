/*
 * XREFs of ?GetNotifiedWorldRenderingScale@CVisual@@QEBAMXZ @ 0x18003E5EC
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800BB3C0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z @ 0x18012B6A0 (-FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z.c)
 */

float __fastcall CVisual::GetNotifiedWorldRenderingScale(CVisual *this)
{
  CSparseStorage::AllocatedStorage *v1; // rcx

  v1 = (CSparseStorage::AllocatedStorage *)*((_QWORD *)this + 28);
  if ( (*((_DWORD *)v1 + 1) & 0x1000000) != 0 )
    return *((float *)CSparseStorage::AllocatedStorage::FindSlot(v1, 8u) + 1);
  else
    return 0.0;
}
