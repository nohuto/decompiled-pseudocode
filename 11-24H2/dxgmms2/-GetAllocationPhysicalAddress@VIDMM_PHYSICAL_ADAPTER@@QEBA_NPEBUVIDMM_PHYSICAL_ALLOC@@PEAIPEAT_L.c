/*
 * XREFs of ?GetAllocationPhysicalAddress@VIDMM_PHYSICAL_ADAPTER@@QEBA_NPEBUVIDMM_PHYSICAL_ALLOC@@PEAIPEAT_LARGE_INTEGER@@PEA_K@Z @ 0x1400F7074
 * Callers:
 *     VidMmGetPinnedAllocationInfo @ 0x1400F6FB0 (VidMmGetPinnedAllocationInfo.c)
 *     ?ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAIPEAT_LARGE_INTEGER@@PEA_KPEAPEAUVIDMM_ALLOC@@PEAUVIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x140111D60 (-ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAI.c)
 * Callees:
 *     <none>
 */

char __fastcall VIDMM_PHYSICAL_ADAPTER::GetAllocationPhysicalAddress(
        VIDMM_PHYSICAL_ADAPTER *this,
        const struct VIDMM_PHYSICAL_ALLOC *a2,
        unsigned int *a3,
        union _LARGE_INTEGER *a4,
        unsigned __int64 *a5)
{
  unsigned __int16 v5; // ax
  __int64 v7; // [rsp+8h] [rbp+8h]

  v7 = *((_QWORD *)a2 + 8);
  if ( v7 )
  {
    if ( (*(_DWORD *)(v7 + 104) & 0x1000) != 0 )
      v5 = 0;
    else
      v5 = *(_WORD *)(v7 + 40) + 1;
    *a3 = v5;
    a4->QuadPart = *((_QWORD *)a2 + 9) + *(_QWORD *)(v7 + 48);
    if ( a5 )
      *a5 = *((_QWORD *)a2 + 9);
    return 1;
  }
  else
  {
    *a3 = 0;
    a4->QuadPart = 0LL;
    if ( a5 )
      *a5 = 0LL;
    return 0;
  }
}
