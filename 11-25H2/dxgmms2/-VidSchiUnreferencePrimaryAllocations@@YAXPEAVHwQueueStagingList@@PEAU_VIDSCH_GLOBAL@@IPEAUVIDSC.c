/*
 * XREFs of ?VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II_N3@Z @ 0x140012ACC
 * Callers:
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x140010190 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N7@Z @ 0x1400142E0 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_C.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x14001F0E0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?VidSchiRetireFlipFenceForCancelledFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDMM_ALLOC@@_KIIPEA_N@Z @ 0x14000B880 (-VidSchiRetireFlipFenceForCancelledFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDMM_ALLOC@@_KIIPEA_N.c)
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x1400128C0 (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KPEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x14001A3B0 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 */

void __fastcall VidSchiUnreferencePrimaryAllocations(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_GLOBAL *a2,
        unsigned int a3,
        struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *a4,
        unsigned int a5,
        unsigned int a6,
        bool a7,
        bool a8)
{
  unsigned int v8; // r14d
  unsigned int v9; // eax
  unsigned int v10; // esi
  struct _VIDSCH_GLOBAL *v11; // r11
  unsigned int v12; // r12d
  struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *v13; // r12
  unsigned int v14; // edx
  unsigned int v15; // r8d
  unsigned int v16; // edx
  unsigned int v17; // r14d
  char v18; // cl
  bool v19; // zf
  int v20; // eax
  int v21; // r10d
  int v22; // eax
  unsigned int v23; // r9d
  char v24; // cl
  unsigned int v25; // eax
  int v26; // edx
  char *v27; // rax
  unsigned __int64 v28; // rdx
  __int64 v29; // r13
  unsigned __int64 v30; // rbx
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rsi
  __int64 v36; // rdi
  __int64 v37; // r15
  __int64 v38; // rcx
  bool v39; // [rsp+58h] [rbp-51h] BYREF
  unsigned int v40; // [rsp+5Ch] [rbp-4Dh]
  int v41; // [rsp+60h] [rbp-49h]
  int v42; // [rsp+64h] [rbp-45h]
  _QWORD v43[2]; // [rsp+68h] [rbp-41h] BYREF
  _QWORD v44[2]; // [rsp+78h] [rbp-31h] BYREF
  unsigned int v45; // [rsp+88h] [rbp-21h]
  unsigned int v46; // [rsp+8Ch] [rbp-1Dh]
  int v47; // [rsp+90h] [rbp-19h]
  unsigned int v48; // [rsp+94h] [rbp-15h]
  unsigned int v49; // [rsp+98h] [rbp-11h]

  v8 = a5;
  v9 = 0;
  v10 = a3;
  v40 = 0;
  v11 = a2;
  if ( a5 )
  {
    v12 = a6;
    do
    {
      if ( (v8 & 1) != 0 )
      {
        if ( (v12 & 1) != 0 )
        {
          v13 = a4;
          v44[0] = v11;
          v44[1] = a4;
          v14 = *(_DWORD *)a4;
          v15 = *(_DWORD *)a4 & 0x3FF;
          v45 = v15;
          if ( *((_BYTE *)v11 + 156) )
            v16 = (v14 >> 10) & 0x3FF;
          else
            v16 = 0;
          v17 = v40;
          v18 = -1;
          v19 = !_BitScanForward((unsigned int *)&v20, v15);
          v46 = v16;
          v21 = 0;
          v41 = v20;
          if ( !v19 )
            v18 = v20;
          v47 = 0;
          v19 = !_BitScanForward((unsigned int *)&v22, v16);
          v23 = v18;
          v24 = -1;
          v42 = v22;
          if ( !v19 )
            v24 = v22;
          v48 = v23;
          v25 = v24;
          v49 = v24;
          while ( v15 || v16 )
          {
            if ( v23 < v25 )
            {
              v26 = *((_DWORD *)v13 + 1);
              v39 = a8;
              v27 = (char *)v13 + v26 * ((8 * *((_DWORD *)v13 + 2) + 231) & 0xFFFFFFF8);
              v28 = (unsigned __int64)(v21 + v17 * v26) << 6;
              v29 = *(_QWORD *)&v27[v28 + 48];
              v30 = *(_QWORD *)&v27[v28 + 72];
              v31 = *(_QWORD *)&v27[v28 + 64];
              VidSchiRetireFlipFenceForCancelledFlipEntry(v11, v10, (struct VIDMM_ALLOC *)v29, v30, v23, v17, &v39);
              v32 = *(_QWORD *)(v29 + 96);
              v33 = *(_QWORD *)(v32 + 32);
              _InterlockedDecrement((volatile signed __int32 *)(v29 + 104));
              if ( a7 )
              {
                v34 = *(_QWORD *)(v32 + 24);
                if ( v34 )
                  _InterlockedDecrement((volatile signed __int32 *)(v34 + 8));
              }
              if ( v39 && v33 )
              {
                v35 = 0LL;
                v43[0] = v31;
                v36 = 0LL;
                v37 = 2LL;
                v43[1] = v30;
                do
                {
                  if ( v43[v36] )
                  {
                    if ( (int)VidSchiSignalSyncObjectsFromCpu(
                                a1,
                                1u,
                                (struct _VIDSCH_SYNC_OBJECT **)(*(_QWORD *)(*(_QWORD *)(v29 + 96) + 32LL) + 8 * v35),
                                0,
                                &v43[v35],
                                0LL) < 0 )
                    {
                      WdLogSingleEntry3(
                        1LL,
                        v35,
                        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v29 + 96) + 32LL) + v36 * 8),
                        v43[v36]);
                      WdLogGlobalForLineNumber = 30229;
                      DxgkLogInternalTriageEvent(v38, 0x40000LL);
                    }
                  }
                  ++v35;
                  ++v36;
                  --v37;
                }
                while ( v37 );
                v13 = a4;
                v10 = a3;
              }
            }
            VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++((unsigned int *)v44);
            v25 = v49;
            v16 = v46;
            v15 = v45;
            v23 = v48;
            v21 = v47;
          }
          v8 = a5;
          v12 = a6;
          v9 = v40;
        }
        v40 = ++v9;
      }
      v8 >>= 1;
      v12 >>= 1;
      a5 = v8;
      a6 = v12;
    }
    while ( v8 );
  }
}
