/*
 * XREFs of ?VidMmiAllocationMeetsCriteria@@YA_NPEAUVIDMM_GLOBAL_ALLOC@@PEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x140096C14
 * Callers:
 *     ?VidMmEvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@PEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1400968B0 (-VidMmEvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@PE.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidMmiAllocationMeetsCriteria(struct VIDMM_GLOBAL_ALLOC *a1, struct _D3DKMT_EVICTION_CRITERIA *a2)
{
  bool result; // al
  UINT64 v4; // rcx

  result = 1;
  if ( a2 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
    if ( v4 < a2->MinimumSize
      || v4 > a2->MaximumSize
      || (a2->Value & 1) != 0 && (**((_DWORD **)a1 + 49) & 0xC0000000) == 0 )
    {
      return 0;
    }
  }
  return result;
}
