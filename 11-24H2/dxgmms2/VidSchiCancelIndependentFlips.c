/*
 * XREFs of VidSchiCancelIndependentFlips @ 0x14003FA48
 * Callers:
 *     VidSchExitIndependentFlipInternal @ 0x1400215F8 (VidSchExitIndependentFlipInternal.c)
 *     ?VidSchiCancelQueuedIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@IPEAU_VIDSCH_DEVICE@@PEAUVIDSCH_FLIP_QUEUE@@_KAEAI444@Z @ 0x14003F754 (-VidSchiCancelQueuedIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@IPEAU_VIDSCH_DEVICE@@PEAUVIDSCH_FLI.c)
 * Callees:
 *     VidSchiCompleteFlipEntry @ 0x14002AB90 (VidSchiCompleteFlipEntry.c)
 */

void __fastcall VidSchiCancelIndependentFlips(
        struct HwQueueStagingList *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        _BYTE *a5,
        unsigned int a6,
        int a7)
{
  unsigned int v7; // r10d
  __int64 v8; // rdi
  __int64 v11; // rsi
  int v12; // ecx
  int v13; // r9d
  __int64 v14; // rdx

  if ( a4 )
  {
    v7 = a6;
    v8 = a3;
    v11 = *(_QWORD *)(a2 + 8LL * a3 + 3432);
    if ( a6 == -1 )
      v7 = *(_DWORD *)(a4 + 64);
    v12 = a7;
    if ( a7 == -1 )
      v12 = ((_BYTE)v7 - 1) & 0x3F;
    v13 = VidSchiCompleteFlipEntry(a1, a2, a3, a4, v7, v12, 0xCu, a5);
    if ( v13 )
    {
      v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 16) + 40LL) + 32LL)
                                  + 8LL * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v11 + 16) + 32LL) + 4LL))
                      + 8 * v8
                      + 88);
      _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(a2 + 8 * v8 + 6712) + 8LL), -v13);
      *(_DWORD *)(*(_QWORD *)(a2 + 8 * v8 + 6712) + 4LL) += v13;
      *(_DWORD *)(v14 + 4) += v13;
    }
  }
}
