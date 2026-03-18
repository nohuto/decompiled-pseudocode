/*
 * XREFs of ?VidSchiSignalRuntimeFenceForCompletedFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@W4_VIDSCH_FLIP_STATUS@@PEAVHwQueueStagingList@@@Z @ 0x14002C4AC
 * Callers:
 *     VidSchiCompleteFlipEntry @ 0x14002AB90 (VidSchiCompleteFlipEntry.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KPEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x14000EF50 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x140027710 (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 *     ?end@VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAA_NXZ @ 0x1400358E0 (-end@VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAA_NXZ.c)
 */

bool __fastcall VidSchiSignalRuntimeFenceForCompletedFlipEntry(
        __int64 a1,
        __int64 a2,
        int a3,
        struct HwQueueStagingList *a4)
{
  unsigned int v7; // r10d
  unsigned int v8; // eax
  bool v9; // zf
  unsigned int v10; // r10d
  char v11; // dl
  char v12; // cl
  int v13; // eax
  bool result; // al
  int v15; // r8d
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rcx
  struct VIDSCH_HW_QUEUE **v20; // [rsp+50h] [rbp-9h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v21; // [rsp+58h] [rbp-1h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v22; // [rsp+60h] [rbp+7h] BYREF
  __int64 v23; // [rsp+68h] [rbp+Fh] BYREF
  unsigned int *v24; // [rsp+70h] [rbp+17h]
  unsigned int v25; // [rsp+78h] [rbp+1Fh]
  unsigned int v26; // [rsp+7Ch] [rbp+23h]
  int v27; // [rsp+80h] [rbp+27h]
  int v28; // [rsp+84h] [rbp+2Bh]
  int v29; // [rsp+88h] [rbp+2Fh]

  v24 = *(unsigned int **)(a2 + 1192);
  v23 = a1;
  v7 = *v24;
  v8 = *v24 & 0x3FF;
  v9 = *(_BYTE *)(a1 + 156) == 0;
  v25 = v8;
  if ( v9 )
    v10 = 0;
  else
    v10 = (v7 >> 10) & 0x3FF;
  v26 = v10;
  v9 = !_BitScanForward(&v8, v8);
  v11 = -1;
  v27 = 0;
  v12 = -1;
  if ( !v9 )
    v12 = v8;
  v28 = v12;
  v9 = !_BitScanForward((unsigned int *)&v13, v10);
  if ( !v9 )
    v11 = v13;
  v29 = v11;
  result = VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::end((VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR *)&v23);
  if ( !result )
  {
    while ( 1 )
    {
      v16 = *(_QWORD *)(a2 + 1192);
      v17 = v15 * ((8 * *(_DWORD *)(v16 + 8) + 231) & 0xFFFFFFF8);
      if ( *(_QWORD *)(v17 + v16 + 208) )
      {
        v21 = *(struct _VIDSCH_SYNC_OBJECT **)(v15 * ((8 * *(_DWORD *)(v16 + 8) + 231) & 0xFFFFFFF8) + v16 + 208);
        v20 = *(struct VIDSCH_HW_QUEUE ***)(v17 + v16 + 216);
        if ( (int)VidSchiSignalSyncObjectsFromCpu(a4, 1u, &v21, 0, (char *)&v20, 0LL) < 0 )
        {
          WdLogSingleEntry2(1LL, *(_QWORD *)(v17 + v16 + 208), v20);
          WdLogGlobalForLineNumber = 23638;
          DxgkLogInternalTriageEvent(v18, 0x40000LL);
        }
      }
      if ( *(_QWORD *)(v17 + v16 + 224) && a3 )
      {
        v22 = *(struct _VIDSCH_SYNC_OBJECT **)(v17 + v16 + 224);
        if ( (int)VidSchiSignalSyncObjectsFromCpu(a4, 1u, &v22, 0, (char *)(v17 + v16 + 232), 0LL) < 0 )
        {
          WdLogSingleEntry2(1LL, *(_QWORD *)(v17 + v16 + 224), *(_QWORD *)(v17 + v16 + 232));
          WdLogGlobalForLineNumber = 23661;
          DxgkLogInternalTriageEvent(v19, 0x40000LL);
        }
      }
      VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++((unsigned int *)&v23);
      result = VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::end((VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR *)&v23);
      if ( result )
        break;
      v15 = v27;
    }
  }
  return result;
}
