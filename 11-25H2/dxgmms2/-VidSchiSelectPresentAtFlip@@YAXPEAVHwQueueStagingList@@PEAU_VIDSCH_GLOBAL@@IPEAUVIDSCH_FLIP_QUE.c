/*
 * XREFs of ?VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAKPEAPEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x1400426E8
 * Callers:
 *     ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x14000C7F4 (-VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDS.c)
 *     VidSchUnwaitFlipQueue @ 0x14000EC30 (VidSchUnwaitFlipQueue.c)
 * Callees:
 *     VidSchiCompleteFlipEntry @ 0x14000A1C0 (VidSchiCompleteFlipEntry.c)
 *     ?VidSchiCheckPendingFlipsForThisEntry@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x14000E520 (-VidSchiCheckPendingFlipsForThisEntry@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VI.c)
 *     ?VidSchiGetCurrentVSyncPeriodQpc@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z @ 0x140016400 (-VidSchiGetCurrentVSyncPeriodQpc@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z.c)
 *     ?VidSchiGetSmoothenedFrameTimeQpc@@YA_KPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@_K2@Z @ 0x140016AC0 (-VidSchiGetSmoothenedFrameTimeQpc@@YA_KPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@_K2@Z.c)
 *     McTemplateK0qqxxxt_EtwWriteTransfer @ 0x140042944 (McTemplateK0qqxxxt_EtwWriteTransfer.c)
 */

void __fastcall VidSchiSelectPresentAtFlip(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_GLOBAL *a2,
        unsigned int a3,
        struct VIDSCH_FLIP_QUEUE *a4,
        unsigned int *a5,
        struct _VIDSCH_FLIP_QUEUE_ENTRY **a6)
{
  unsigned int v6; // r13d
  __int64 v9; // rbp
  unsigned __int64 CurrentVSyncPeriodQpc; // rbx
  unsigned __int64 SmoothenedFrameTimeQpc; // rax
  struct _VIDSCH_FLIP_QUEUE_ENTRY **v12; // r12
  unsigned __int64 v13; // rdi
  struct _VIDSCH_FLIP_QUEUE_ENTRY *v14; // r8
  int v15; // eax
  unsigned int v16; // ebx
  char *v17; // r13
  int v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // eax
  __int64 v21; // r11
  unsigned __int64 v22; // r10
  unsigned __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r9
  unsigned __int64 v26; // rax
  unsigned int *v27; // rax
  unsigned int v29; // [rsp+A0h] [rbp+18h] BYREF

  v29 = a3;
  v6 = a3;
  v9 = *((_QWORD *)a2 + a3 + 429);
  CurrentVSyncPeriodQpc = VidSchiGetCurrentVSyncPeriodQpc(a2, a3, 1);
  if ( *(_DWORD *)(v9 + 3192) == -1 )
    SmoothenedFrameTimeQpc = *(_QWORD *)(v9 + 44368);
  else
    SmoothenedFrameTimeQpc = VidSchiGetSmoothenedFrameTimeQpc(
                               (struct _VIDSCH_PRESENT_INFO *)v9,
                               a2,
                               *(_QWORD *)(v9 + 44368),
                               *(_QWORD *)(v9 + 44352));
  v12 = a6;
  v13 = CurrentVSyncPeriodQpc + SmoothenedFrameTimeQpc + (CurrentVSyncPeriodQpc >> 1);
  v14 = *a6;
  if ( *((_QWORD *)*a6 + 164) <= v13 )
  {
    v15 = *((_DWORD *)a4 + 16);
    v16 = ((_BYTE)v15 + 1) & 0x3F;
    if ( v16 != v15 )
    {
      do
      {
        v17 = (char *)a4 + 1400 * v16 + 120;
        v18 = *((_DWORD *)v17 + 263);
        if ( v18 != 2 && v18 != 14 )
          break;
        if ( VidSchiCheckPendingFlipsForThisEntry(
               a2,
               (struct _VIDSCH_PRESENT_INFO *)v9,
               (unsigned int **)a4 + 175 * v16 + 15,
               a4) )
        {
          break;
        }
        if ( *((_QWORD *)v17 + 164) > v13 )
          break;
        v27 = a5;
        *v12 = (struct _VIDSCH_FLIP_QUEUE_ENTRY *)v17;
        *v27 = v16;
        v16 = ((_BYTE)v16 + 1) & 0x3F;
      }
      while ( v16 != *((_DWORD *)a4 + 16) );
      v6 = v29;
    }
    v19 = *((_DWORD *)a4 + 16);
    v20 = *a5;
    if ( *a5 != v19 )
    {
      LOBYTE(v29) = 0;
      VidSchiCompleteFlipEntry(a1, (__int64)a2, v6, (__int64)a4, v19, ((_BYTE)v20 - 1) & 0x3F, 6u, &v29);
    }
    v14 = *v12;
    *((_DWORD *)*v12 + 263) = 4;
  }
  if ( bTracingEnabled )
  {
    v21 = *((_QWORD *)v14 + 164);
    v22 = *((_QWORD *)a2 + 359);
    v23 = v13 - v21;
    if ( (__int64)(v13 - v21) < 0 )
      v23 = *((_QWORD *)v14 + 164) - v13;
    if ( is_mul_ok(v23, 0x989680uLL) )
    {
      v24 = v23 * (unsigned __int128)0x989680uLL % v22;
      v25 = v23 * (unsigned __int128)0x989680uLL / v22;
    }
    else
    {
      v25 = 10000000 * (v23 % v22) / v22;
      v26 = v23 / v22;
      v24 = v23 % v22;
      LODWORD(v23) = 10000000 * (v23 / v22);
      LOBYTE(v25) = ((_BYTE)v26 << 7) + v25;
    }
    if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
      McTemplateK0qqxxxt_EtwWriteTransfer(
        v23,
        v24,
        (_DWORD)v14,
        v6,
        *((_DWORD *)v14 + 264),
        v21,
        v13,
        v25,
        *((_DWORD *)v14 + 263) == 4);
  }
}
