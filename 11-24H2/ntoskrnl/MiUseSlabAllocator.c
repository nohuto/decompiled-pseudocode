/*
 * XREFs of MiUseSlabAllocator @ 0x140349AF8
 * Callers:
 *     MiResolveMappedFileFault @ 0x140214824 (MiResolveMappedFileFault.c)
 *     MiGetHardFaultPages @ 0x1402F4630 (MiGetHardFaultPages.c)
 *     MiPfPutPagesInTransition @ 0x140347F6C (MiPfPutPagesInTransition.c)
 *     MiWalkEntireImage @ 0x140349C00 (MiWalkEntireImage.c)
 *     MiFinalizeImageHeaderPage @ 0x1404998B8 (MiFinalizeImageHeaderPage.c)
 *     MiPfPrepareReadList @ 0x14093919C (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x140939D28 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUseSlabAllocator(__int64 a1, _DWORD *a2, __int16 a3, unsigned int a4, _DWORD *a5)
{
  __int64 v5; // r10
  int v7; // edx
  unsigned __int64 v9; // r8

  v5 = *(_QWORD *)a2;
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 56LL) & 0x20) == 0 || (*(_BYTE *)(v5 + 62) & 0xC) == 4 || (a3 & 0x400) == 0 )
    return 0LL;
  v7 = (a2[8] >> 1) & 0x1F;
  if ( (*(_DWORD *)(v5 + 92) & 0xC0000) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 4) & 8) == 0 || (a2[8] & 0x20000) != 0 && (v7 & 5) == 4 )
      return 0LL;
    LODWORD(v9) = 2;
    if ( (MiFlags & 0x100000000LL) != 0 )
    {
      if ( (v7 & 2) == 0 )
      {
        if ( !_bittest((const signed __int32 *)(v5 + 92), 0x11u) || a2 == (_DWORD *)(v5 + 128) || v7 != 1 )
          return 0LL;
        goto LABEL_15;
      }
    }
    else if ( (v7 & 2) == 0 )
    {
      if ( (v7 & 1) == 0 )
      {
LABEL_16:
        *a5 = v9;
        return 1LL;
      }
LABEL_15:
      v9 = ((unsigned __int64)MiFlags >> 15) & 1;
      goto LABEL_16;
    }
    LODWORD(v9) = 0;
    goto LABEL_16;
  }
  if ( !byte_140E2D96D
    || !(*(_QWORD *)(57216LL * a4 + *(_QWORD *)(a1 + 16) + 16952)
       + **(_QWORD **)(57216LL * a4 + *(_QWORD *)(a1 + 16) + 16936)) )
  {
    return 0LL;
  }
  *a5 = 5;
  return 1LL;
}
