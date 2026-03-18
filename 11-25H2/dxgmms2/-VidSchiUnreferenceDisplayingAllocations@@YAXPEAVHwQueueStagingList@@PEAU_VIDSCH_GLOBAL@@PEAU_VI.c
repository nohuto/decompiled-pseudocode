/*
 * XREFs of ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x14000BF58
 * Callers:
 *     VidSchiProcessVsyncCompletedFlipEntry @ 0x140008C10 (VidSchiProcessVsyncCompletedFlipEntry.c)
 *     VidSchiUnreferenceDisplayingAllocationsForThisEntry @ 0x14000C354 (VidSchiUnreferenceDisplayingAllocationsForThisEntry.c)
 *     VidSchiSetFlipDevice @ 0x140029540 (VidSchiSetFlipDevice.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x140039EF0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     VidSchiSignalFlipEvents @ 0x14000BD24 (VidSchiSignalFlipEvents.c)
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KPEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x14001A3B0 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 *     VidSchiReleaseSyncObjectReference @ 0x14001AB40 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1400209D4 (VidSchiCheckPendingDeviceCommand.c)
 *     ?VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z @ 0x140024394 (-VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z.c)
 */

void __fastcall VidSchiUnreferenceDisplayingAllocations(
        struct HwQueueStagingList ***a1,
        struct _VIDSCH_GLOBAL *a2,
        struct _VIDSCH_PRESENT_INFO *a3,
        __int16 a4)
{
  int v4; // ebx
  int v5; // r12d
  int v6; // r14d
  struct HwQueueStagingList *v8; // r10
  char v9; // cl
  bool v10; // zf
  int v11; // eax
  unsigned int v12; // r13d
  char v13; // r15
  __int64 v14; // rbp
  __int64 v15; // rbp
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rbp
  __int64 v21; // rbp
  int v22; // r15d
  _QWORD *v23; // rsi
  int updated; // eax
  __int64 v25; // r14
  int v26; // ebp
  _QWORD **v27; // rsi
  _QWORD *v28; // rax
  _QWORD *v29; // rcx
  _QWORD **v30; // rcx
  _QWORD *v31; // rax
  _QWORD *v32; // rdx
  struct HwQueueStagingList *v33; // rax
  struct HwQueueStagingList **v34; // r8
  _QWORD *v35; // r15
  __int64 v36; // rcx
  __int64 v37; // rax
  const unsigned __int64 *v38; // rsi
  __int64 v39; // rcx
  __int16 v40; // [rsp+50h] [rbp-68h]
  __int64 v41; // [rsp+68h] [rbp-50h]
  struct _VIDSCH_SYNC_OBJECT *v42; // [rsp+70h] [rbp-48h] BYREF
  char v45; // [rsp+D8h] [rbp+20h]

  v4 = 0;
  v45 = 0;
  LOWORD(v5) = 0;
  v40 = 0;
  LOWORD(v6) = a4;
  v8 = (struct HwQueueStagingList *)a1;
  if ( a4 )
  {
    do
    {
      v9 = -1;
      v10 = !_BitScanForward((unsigned int *)&v11, (unsigned __int16)v6);
      v12 = 0;
      if ( !v10 )
        v9 = v11;
      v13 = v9;
      v14 = v9;
      v41 = v9;
      if ( *((_WORD *)a3 + 22149) )
      {
        v45 = 1;
        v15 = (__int64)v9 << 6;
        do
        {
          v16 = (v15 + v12) << 6;
          v17 = *(_QWORD *)((char *)a3 + v16 + 3344);
          v18 = *(_QWORD *)(v17 + 32);
          if ( v18 )
          {
            v35 = (_QWORD *)((char *)a3 + v16 + 3376);
            if ( *v35 )
            {
              if ( (int)VidSchiSignalSyncObjectsFromCpu(
                          (struct HwQueueStagingList *)a1,
                          1u,
                          (struct _VIDSCH_SYNC_OBJECT **)(v18 + 8),
                          0,
                          (const unsigned __int64 *)((char *)a3 + v16 + 3376),
                          0LL) < 0 )
              {
                WdLogSingleEntry2(
                  1LL,
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)((char *)a3 + v16 + 3344) + 32LL) + 8LL),
                  *v35);
                v37 = *(_QWORD *)((char *)a3 + v16 + 3344);
                WdLogGlobalForLineNumber = 30064;
                DxgkLogInternalTriageEvent(*(_QWORD *)(v37 + 32), 0x40000LL);
              }
              a2 = *(struct _VIDSCH_GLOBAL **)(*(_QWORD *)((char *)a3 + v16 + 3344) + 32LL);
              v36 = 2LL * *((unsigned int *)a2 + 8);
              *(_OWORD *)((char *)a2 + 8 * v36 + 40) = 0LL;
              *((_DWORD *)a2 + 8) = ((unsigned __int8)*((_DWORD *)a2 + 8) + 1) & 7;
              *((_DWORD *)a2 + 2 * v36 + 10) = 2;
              *((_QWORD *)a2 + v36 + 6) = *v35;
            }
          }
          else
          {
            v19 = *(_QWORD *)(v17 + 24);
            if ( v19 )
              _InterlockedDecrement((volatile signed __int32 *)(v19 + 8));
          }
          VidSchiCheckPendingDeviceCommand(*((_QWORD *)a3 + 2), a2);
          *(_QWORD *)((char *)a3 + v16 + 3336) = 0LL;
          ++v12;
          *(_QWORD *)((char *)a3 + v16 + 3344) = 0LL;
          *(_WORD *)((char *)a3 + v16 + 3368) = 0;
          *(_QWORD *)((char *)a3 + v16 + 3360) = 0LL;
        }
        while ( v12 < *((unsigned __int16 *)a3 + 22149) );
        v14 = v41;
        LOWORD(v5) = v40;
        v13 = v41;
        v8 = (struct HwQueueStagingList *)a1;
      }
      v20 = v14 << 12;
      if ( *(_QWORD *)((char *)a3 + v20 + 3384) )
      {
        v38 = (const unsigned __int64 *)((char *)a3 + v20 + 3392);
        v42 = *(struct _VIDSCH_SYNC_OBJECT **)((char *)a3 + v20 + 3384);
        if ( (int)VidSchiSignalSyncObjectsFromCpu(v8, 1u, &v42, 0, v38, 0LL) < 0 )
        {
          WdLogSingleEntry2(1LL, *(_QWORD *)((char *)a3 + v20 + 3384), *v38);
          WdLogGlobalForLineNumber = 9855;
          DxgkLogInternalTriageEvent(v39, 0x40000LL);
        }
        VidSchiReleaseSyncObjectReference(*(PVOID *)((char *)a3 + v20 + 3384));
        *(_QWORD *)((char *)a3 + v20 + 3384) = 0LL;
        *v38 = 0LL;
      }
      v6 = (unsigned __int16)v6 & ~(1 << v13);
      v8 = (struct HwQueueStagingList *)a1;
      v5 = (unsigned __int16)v5 | (1 << v13);
      *((_WORD *)a3 + 22148) &= ~(1 << v13);
      v40 = v5;
    }
    while ( (_WORD)v6 );
    if ( v45 )
    {
      v21 = *((_QWORD *)a3 + 2);
      if ( v21 )
      {
        v22 = 0;
        v23 = *(_QWORD **)(v21 + 72);
        while ( v23 != (_QWORD *)(v21 + 72) )
        {
          updated = VidSchiUpdateFlipContextStatus((struct _VIDSCH_CONTEXT *)(v23 - 3));
          v23 = (_QWORD *)*v23;
          v22 |= updated;
        }
        v25 = *(_QWORD *)(v21 + 32);
        v26 = 0;
        v27 = (_QWORD **)(v25 + 3752);
        while ( 1 )
        {
          v28 = *v27;
          if ( *v27 == v27 )
            break;
          if ( (_QWORD **)v28[1] != v27 || (v29 = (_QWORD *)*v28, *(_QWORD **)(*v28 + 8LL) != v28) )
LABEL_32:
            __fastfail(3u);
          *v27 = v29;
          v29[1] = v27;
          v28[1] = 0LL;
          *v28 = 0LL;
          v26 |= VidSchiUpdateFlipContextStatus((struct _VIDSCH_CONTEXT *)(v28 - 5));
        }
        v30 = (_QWORD **)(v25 + 3768);
        while ( 1 )
        {
          v31 = *v30;
          if ( *v30 == v30 )
            break;
          if ( (_QWORD **)v31[1] != v30 )
            goto LABEL_32;
          v32 = (_QWORD *)*v31;
          if ( *(_QWORD **)(*v31 + 8LL) != v31 )
            goto LABEL_32;
          *v30 = v32;
          v32[1] = v30;
          *v31 = 0LL;
          v31[1] = 0LL;
          v33 = (struct HwQueueStagingList *)(v31 + 19);
          if ( !*(_QWORD *)v33 )
          {
            v34 = a1[2];
            if ( *v34 != (struct HwQueueStagingList *)(a1 + 1) )
              goto LABEL_32;
            *(_QWORD *)v33 = a1 + 1;
            *((_QWORD *)v33 + 1) = v34;
            *v34 = v33;
            a1[2] = (struct HwQueueStagingList **)v33;
            *((_BYTE *)a1 + 24) = 0;
          }
        }
        v4 = v22 | v26;
      }
      VidSchiSignalFlipEvents((__int64)a3, v4, a4);
      *((_WORD *)a3 + 22150) &= ~(_WORD)v5;
    }
  }
}
