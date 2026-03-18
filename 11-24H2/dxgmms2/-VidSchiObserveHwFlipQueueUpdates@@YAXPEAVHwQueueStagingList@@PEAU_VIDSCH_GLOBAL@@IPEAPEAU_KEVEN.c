/*
 * XREFs of ?VidSchiObserveHwFlipQueueUpdates@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAPEAU_KEVENT@@PEA_N@Z @ 0x140054454
 * Callers:
 *     ?VidSchiCheckHeadTimeout@@YAHPEAU_VIDSCH_GLOBAL@@IPEAHPEAIPEA_KPEAT_ULARGE_INTEGER@@@Z @ 0x140011DD0 (-VidSchiCheckHeadTimeout@@YAHPEAU_VIDSCH_GLOBAL@@IPEAHPEAIPEA_KPEAT_ULARGE_INTEGER@@@Z.c)
 *     ?VidSchiFlushCompletedPresentsForCompSurf@@YAXPEAU_VIDSCH_DEVICE@@U_LUID@@PEAPEAU_KEVENT@@@Z @ 0x14005433C (-VidSchiFlushCompletedPresentsForCompSurf@@YAXPEAU_VIDSCH_DEVICE@@U_LUID@@PEAPEAU_KEVENT@@@Z.c)
 * Callees:
 *     ?VidSchiUpdateInterruptTargetsForAllPlanes@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14000A0EC (-VidSchiUpdateInterruptTargetsForAllPlanes@@YAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiSubmitNextFlipRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@I@Z @ 0x14000A648 (-VidSchiSubmitNextFlipRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiSynchronouslyUpdateFlipQueueLogs@@YAXPEAU_VIDSCH_GLOBAL@@IQEAKI@Z @ 0x14003A150 (-VidSchiSynchronouslyUpdateFlipQueueLogs@@YAXPEAU_VIDSCH_GLOBAL@@IQEAKI@Z.c)
 *     McTemplateK0pqXR1qqqXR5XR1_EtwWriteTransfer @ 0x14003E11C (McTemplateK0pqXR1qqqXR5XR1_EtwWriteTransfer.c)
 *     ?VidSchiTraceHwFlipQueueLogUpdate@@YAXPEAU_VIDSCH_GLOBAL@@_KIIK@Z @ 0x14003ECA4 (-VidSchiTraceHwFlipQueueLogUpdate@@YAXPEAU_VIDSCH_GLOBAL@@_KIIK@Z.c)
 *     ?VidSchiSetupFlipQueueLogTrackingArray@@YAXPEAU_VIDSCH_GLOBAL@@QEAK@Z @ 0x14003F45C (-VidSchiSetupFlipQueueLogTrackingArray@@YAXPEAU_VIDSCH_GLOBAL@@QEAK@Z.c)
 *     ?VidSchiCompleteFlipsFromLatestPresentId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IIPEAPEAU_KEVENT@@PEA_KPEAIPEA_NQEAKPEAPEAU_VIDSCH_DEVICE@@@Z @ 0x1400540EC (-VidSchiCompleteFlipsFromLatestPresentId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IIPEAPE.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 *     memset @ 0x140056340 (memset.c)
 */

void __fastcall VidSchiObserveHwFlipQueueUpdates(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_GLOBAL *a2,
        unsigned int a3,
        struct _KEVENT **a4,
        bool *a5)
{
  unsigned int v5; // ebx
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // r8
  bool v13; // zf
  unsigned int v14; // eax
  unsigned __int64 v15; // rdx
  struct _KEVENT **v16; // [rsp+20h] [rbp-E0h]
  unsigned int *v17; // [rsp+30h] [rbp-D0h]
  bool *v18; // [rsp+38h] [rbp-C8h]
  unsigned int *v19; // [rsp+40h] [rbp-C0h]
  unsigned int v20; // [rsp+60h] [rbp-A0h] BYREF
  struct _VIDSCH_DEVICE *v21; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v22[4]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v23; // [rsp+80h] [rbp-80h]
  __int64 v24; // [rsp+90h] [rbp-70h]
  _QWORD v25[10]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v26[10]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v27[10]; // [rsp+140h] [rbp+40h] BYREF

  v5 = 0;
  v10 = *((_QWORD *)a2 + a3 + 429);
  if ( *(_DWORD *)(v10 + 3248) )
  {
    v21 = 0LL;
    v20 = 0;
    memset(v26, 0, sizeof(v26));
    *(_OWORD *)v22 = 0LL;
    v24 = 0LL;
    v23 = 0LL;
    VidSchiSetupFlipQueueLogTrackingArray(a2, v22);
    VidSchiSynchronouslyUpdateFlipQueueLogs(a2, a3, v22, -1);
    VidSchiCompleteFlipsFromLatestPresentId(a1, a2, a3, 0, a4, v26, &v20, a5, v22, &v21);
    VidSchiSubmitNextFlipRange(a1, a2, a3);
    VidSchiUpdateInterruptTargetsForAllPlanes(a2, a3);
    if ( bTracingEnabled )
    {
      memset(v27, 0, sizeof(v27));
      memset(v25, 0, sizeof(v25));
      if ( *((_DWORD *)a2 + 38) )
      {
        do
        {
          v11 = 304LL * v5;
          v13 = (byte_140081244 & 4) == 0;
          v27[v5] = *(_QWORD *)(v11 + v10 + 400);
          v25[v5] = *(_QWORD *)(v11 + v10 + 424);
          if ( !v13 )
          {
            v14 = v22[v5];
            if ( v14 != -1 )
              VidSchiTraceHwFlipQueueLogUpdate(a2, *(_QWORD *)(v10 + 44352), a3, v5, v14);
          }
          ++v5;
        }
        while ( v5 < *((_DWORD *)a2 + 38) );
      }
      v15 = *(_QWORD *)(v10 + 44352);
      if ( v15 > 0xFFFFFFFF )
      {
        WdLogSingleEntry1(3LL, v15);
        WdLogGlobalForLineNumber = 7016;
      }
      if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
      {
        LODWORD(v19) = v20;
        LODWORD(v18) = *(_DWORD *)(v10 + 44352);
        LODWORD(v17) = a3;
        LODWORD(v16) = *((_DWORD *)a2 + 38);
        McTemplateK0pqXR1qqqXR5XR1_EtwWriteTransfer(
          v11,
          v15,
          v12,
          *((_QWORD *)a2 + 2),
          v16,
          v27,
          v17,
          v18,
          v19,
          v26,
          v25);
      }
    }
  }
}
