/*
 * XREFs of VidSchiVirtualizeFlipInterval @ 0x140031584
 * Callers:
 *     ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x14002D1D0 (-VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDS.c)
 *     ?VidSchiSubmitNextFlipQueueEntryRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1400310FC (-VidSchiSubmitNextFlipQueueEntryRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAU.c)
 * Callees:
 *     McTemplateK0qqqq_EtwWriteTransfer @ 0x14004A6B4 (McTemplateK0qqqq_EtwWriteTransfer.c)
 */

__int64 __fastcall VidSchiVirtualizeFlipInterval(__int64 a1, __int64 a2)
{
  unsigned int v2; // r9d
  __int64 v5; // rcx
  __int64 result; // rax
  unsigned int v7; // edx
  unsigned int v8; // r8d

  v2 = *(_DWORD *)(a2 + 1336);
  if ( !v2 )
  {
    v2 = 1;
    *(_DWORD *)(a2 + 1336) = 1;
  }
  v5 = *(_QWORD *)(*(_QWORD *)(a2 + 1040) + 40LL);
  if ( !*(_BYTE *)(*(_QWORD *)(v5 + 16) + 138LL) )
  {
    v7 = *(_DWORD *)(a1 + 83092);
    if ( v2 != v7 && (*(_DWORD *)(a2 + 1152) & 0x100) == 0 && *(_DWORD *)(a1 + 4) != 3 )
    {
      v8 = *(_DWORD *)(a2 + 1072);
      if ( v2 < v7 )
      {
        if ( v8 )
          v7 *= v8;
        *(_DWORD *)(a2 + 1072) = v7;
      }
      else
      {
        LOBYTE(v7) = v8 / v2;
        *(_DWORD *)(a2 + 1072) = v8 / v2;
      }
      if ( (byte_140081244 & 4) != 0 )
        McTemplateK0qqqq_EtwWriteTransfer(
          v5,
          (unsigned int)&EventVirtualizeFlipSubmissionRate,
          v8,
          v2,
          *(_DWORD *)(a1 + 83092),
          v8,
          v7);
    }
  }
  result = *(unsigned int *)(a1 + 83092);
  *(_DWORD *)(a2 + 1336) = result;
  return result;
}
