/*
 * XREFs of ?VidSchiSetNextFlipEarliestIdealTime@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x140014AA0
 * Callers:
 *     VidSchiExecuteMmIoFlip @ 0x14000CF44 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x140039EF0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 *     ?VidSchiCancelAndRequeueIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x140053D5C (-VidSchiCancelAndRequeueIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 * Callees:
 *     ?VidSchiGetCurrentVSyncPeriodQpc@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z @ 0x140016400 (-VidSchiGetCurrentVSyncPeriodQpc@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z.c)
 */

void __fastcall VidSchiSetNextFlipEarliestIdealTime(
        struct _VIDSCH_GLOBAL *a1,
        unsigned int a2,
        struct VIDSCH_FLIP_QUEUE *a3,
        struct _VIDSCH_FLIP_QUEUE_ENTRY *a4)
{
  __int64 v4; // rsi
  __int64 v7; // rax
  unsigned __int64 CurrentVSyncPeriodQpc; // rax

  v4 = *((_QWORD *)a4 + 164);
  v7 = *((_QWORD *)a1 + a2 + 429);
  if ( *(_DWORD *)(v7 + 3192) == -1 )
  {
    if ( *((_DWORD *)a4 + 289) == -1 )
      CurrentVSyncPeriodQpc = 0LL;
    else
      CurrentVSyncPeriodQpc = *(_QWORD *)(v7 + 83112);
  }
  else
  {
    CurrentVSyncPeriodQpc = VidSchiGetCurrentVSyncPeriodQpc(a1, a2, 1);
  }
  *((_QWORD *)a3 + 13) = v4 + CurrentVSyncPeriodQpc * *((unsigned int *)a4 + 268);
}
