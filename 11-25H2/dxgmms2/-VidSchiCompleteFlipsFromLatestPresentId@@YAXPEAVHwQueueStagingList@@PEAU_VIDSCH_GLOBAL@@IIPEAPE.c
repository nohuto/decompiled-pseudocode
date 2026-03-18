/*
 * XREFs of ?VidSchiCompleteFlipsFromLatestPresentId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IIPEAPEAU_KEVENT@@PEA_KPEAIPEA_NQEAKPEAPEAU_VIDSCH_DEVICE@@@Z @ 0x14005451C
 * Callers:
 *     ?VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x14002C51C (-VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z.c)
 *     ?VidSchiObserveHwFlipQueueUpdates@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAPEAU_KEVENT@@PEA_N@Z @ 0x14005488C (-VidSchiObserveHwFlipQueueUpdates@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAPEAU_KEVEN.c)
 * Callees:
 *     VidSchiProcessVsyncCompletedFlipEntry @ 0x140008C10 (VidSchiProcessVsyncCompletedFlipEntry.c)
 *     ?GetFlipManagerAuxiliaryPresentInfo@@YAPEAU_D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO@@PEAU_D3DKMT_AUXILIARYPRESENTINFO@@@Z @ 0x14000C59C (-GetFlipManagerAuxiliaryPresentInfo@@YAPEAU_D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO@@PEAU_D3DKMT.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1400209D4 (VidSchiCheckPendingDeviceCommand.c)
 *     ?GetFlipQueue@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAUVIDSCH_FLIP_QUEUE@@XZ @ 0x140033820 (-GetFlipQueue@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAUVIDSCH_FLIP_QUEUE@@XZ.c)
 *     ?VidSchiIsExpectedVSyncCookie3@@YAHPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@QEAK@Z @ 0x14003DC20 (-VidSchiIsExpectedVSyncCookie3@@YAHPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLI.c)
 */

void __fastcall VidSchiCompleteFlipsFromLatestPresentId(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_GLOBAL *a2,
        unsigned int a3,
        int a4,
        struct _KEVENT **a5,
        unsigned __int64 *a6,
        unsigned int *a7,
        bool *a8,
        unsigned int *const a9,
        struct _VIDSCH_DEVICE **a10)
{
  int v11; // edi
  struct VIDSCH_FLIP_QUEUE *FlipQueue; // rax
  int v13; // r9d
  struct VIDSCH_FLIP_QUEUE *v14; // r15
  int v15; // ecx
  unsigned int v16; // esi
  unsigned int v17; // ebx
  __int64 v18; // r13
  char *v19; // r12
  struct _VIDSCH_PRESENT_INFO *v20; // rdi
  char *v21; // rsi
  unsigned int v22; // eax
  int v23; // ecx
  struct _KEVENT **v24; // rbx
  struct _D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO *FlipManagerAuxiliaryPresentInfo; // rax
  __int64 v26; // r10
  unsigned int v27; // edx
  __int64 v28; // r8
  unsigned int v29; // [rsp+38h] [rbp-81h]
  struct _VIDSCH_GLOBAL *v30; // [rsp+40h] [rbp-79h] BYREF
  unsigned int v31; // [rsp+48h] [rbp-71h]
  int v32; // [rsp+4Ch] [rbp-6Dh]
  struct _VIDSCH_PRESENT_INFO *v33; // [rsp+50h] [rbp-69h]
  __int64 v34; // [rsp+58h] [rbp-61h]
  __int64 v35[2]; // [rsp+68h] [rbp-51h] BYREF
  unsigned int v36; // [rsp+78h] [rbp-41h]
  int v37; // [rsp+7Ch] [rbp-3Dh]
  struct VIDSCH_FLIP_QUEUE *v38; // [rsp+80h] [rbp-39h]
  unsigned int v39; // [rsp+88h] [rbp-31h]
  int v40; // [rsp+8Ch] [rbp-2Dh]
  __int64 v41; // [rsp+90h] [rbp-29h]
  __int64 v42; // [rsp+98h] [rbp-21h]
  __int64 v43; // [rsp+A0h] [rbp-19h]
  __int64 v44; // [rsp+A8h] [rbp-11h]
  __int64 v45; // [rsp+B0h] [rbp-9h]
  int v47; // [rsp+110h] [rbp+57h] BYREF
  unsigned int v48; // [rsp+118h] [rbp+5Fh]
  int v49; // [rsp+120h] [rbp+67h]

  v49 = a4;
  v48 = a3;
  v34 = a3;
  v11 = -1;
  v30 = a2;
  v31 = a3;
  v33 = (struct _VIDSCH_PRESENT_INFO *)*((_QWORD *)a2 + a3 + 429);
  while ( 1 )
  {
    v32 = v11;
    if ( v11 == *((_DWORD *)a2 + 38) )
      break;
    FlipQueue = VIDSCH_FLIP_QUEUE_ITERATOR::GetFlipQueue((VIDSCH_FLIP_QUEUE_ITERATOR *)&v30);
    v14 = FlipQueue;
    if ( FlipQueue )
    {
      v15 = *((_DWORD *)FlipQueue + 18);
      v16 = 0;
      v47 = 0;
      v17 = *((_DWORD *)FlipQueue + 17);
      v18 = 0LL;
      v29 = 0;
      v19 = 0LL;
      if ( v17 != (((_BYTE)v15 + 1) & 0x3F) )
      {
        v20 = v33;
        while ( 1 )
        {
          v21 = (char *)v14 + 1400 * v17;
          v22 = *((_DWORD *)v21 + 293);
          if ( v22 > 0xC || (v23 = 4673, !_bittest(&v23, v22)) )
          {
            if ( v22 != 5 && v22 != 15
              || v13 && v13 != *((_DWORD *)v21 + 300)
              || !(unsigned int)VidSchiIsExpectedVSyncCookie3(
                                  a2,
                                  v20,
                                  (struct _VIDSCH_FLIP_QUEUE_ENTRY *)(v21 + 120),
                                  a9) )
            {
LABEL_15:
              v11 = v32;
              v16 = v29;
              break;
            }
            v19 = v21 + 120;
            v18 = *((_QWORD *)v21 + 145);
            v13 = v49;
            v29 = v17;
            *a10 = (struct _VIDSCH_DEVICE *)v18;
          }
          v17 = ((_BYTE)v17 + 1) & 0x3F;
          if ( v17 == (((unsigned __int8)*((_DWORD *)v14 + 18) + 1) & 0x3F) )
            goto LABEL_15;
        }
      }
      if ( v18 )
      {
        if ( *((_BYTE *)a2 + 7068) )
        {
          v24 = a5;
          if ( a5 )
          {
            if ( v19 )
            {
              FlipManagerAuxiliaryPresentInfo = GetFlipManagerAuxiliaryPresentInfo(*((struct _D3DKMT_AUXILIARYPRESENTINFO **)v19
                                                                                   + 168));
              if ( FlipManagerAuxiliaryPresentInfo )
              {
                *((_QWORD *)FlipManagerAuxiliaryPresentInfo + 2) = *v24;
                *v24 = 0LL;
              }
            }
          }
        }
        v37 = 0;
        v40 = 0;
        v36 = v48;
        v41 = *((_QWORD *)v33 + 5544);
        v42 = *((_QWORD *)v33 + 5546);
        v43 = *((_QWORD *)v33 + 5545);
        v44 = *((_QWORD *)v33 + 5547);
        v45 = *((_QWORD *)v33 + 5548);
        v35[0] = (__int64)a2;
        v35[1] = v18;
        v38 = v14;
        v39 = v16;
        VidSchiProcessVsyncCompletedFlipEntry(a1, v35, (__int64)a6, a7, &v47, a8);
        VidSchiCheckPendingDeviceCommand((_QWORD *)v18);
        v26 = v34;
        v27 = -v47;
        v28 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 40) + 32LL)
                                    + 8LL * *(unsigned int *)(*(_QWORD *)(v18 + 32) + 4LL))
                        + 8 * v34
                        + 88);
        _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)a2 + v34 + 839) + 8LL), -v47);
        **((_DWORD **)a2 + v26 + 839) += v47;
        _InterlockedAdd((volatile signed __int32 *)(v28 + 8), v27);
        *(_DWORD *)v28 += v47;
        v11 = v32;
      }
    }
    ++v11;
  }
}
