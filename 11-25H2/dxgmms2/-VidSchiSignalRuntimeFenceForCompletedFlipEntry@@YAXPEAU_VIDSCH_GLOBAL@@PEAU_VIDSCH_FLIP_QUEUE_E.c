/*
 * XREFs of ?VidSchiSignalRuntimeFenceForCompletedFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@W4_VIDSCH_FLIP_STATUS@@PEAVHwQueueStagingList@@@Z @ 0x14000BADC
 * Callers:
 *     VidSchiCompleteFlipEntry @ 0x14000A1C0 (VidSchiCompleteFlipEntry.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x1400128C0 (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KPEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x14001A3B0 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 *     ?end@VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAA_NXZ @ 0x140036D40 (-end@VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAA_NXZ.c)
 *     Feature_FlipPlaneLayerIndexFix__private_IsEnabledDeviceUsageNoInline @ 0x14004F6C8 (Feature_FlipPlaneLayerIndexFix__private_IsEnabledDeviceUsageNoInline.c)
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
  int v11; // esi
  char v12; // dl
  char v13; // cl
  int v14; // eax
  unsigned int v15; // edi
  unsigned int v16; // ebx
  bool result; // al
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 v27; // rcx
  __int64 v28; // rcx
  struct VIDSCH_HW_QUEUE **v29; // [rsp+50h] [rbp-9h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v30; // [rsp+58h] [rbp-1h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v31; // [rsp+60h] [rbp+7h] BYREF
  __int64 v32; // [rsp+68h] [rbp+Fh] BYREF
  unsigned int *v33; // [rsp+70h] [rbp+17h]
  unsigned int v34; // [rsp+78h] [rbp+1Fh]
  unsigned int v35; // [rsp+7Ch] [rbp+23h]
  int v36; // [rsp+80h] [rbp+27h]
  unsigned int v37; // [rsp+84h] [rbp+2Bh]
  unsigned int v38; // [rsp+88h] [rbp+2Fh]

  v33 = *(unsigned int **)(a2 + 1192);
  v32 = a1;
  v7 = *v33;
  v8 = *v33 & 0x3FF;
  v9 = *(_BYTE *)(a1 + 156) == 0;
  v34 = v8;
  if ( v9 )
    v10 = 0;
  else
    v10 = (v7 >> 10) & 0x3FF;
  v11 = 0;
  v35 = v10;
  v9 = !_BitScanForward(&v8, v8);
  v12 = -1;
  v36 = 0;
  v13 = -1;
  if ( !v9 )
    v13 = v8;
  v9 = !_BitScanForward((unsigned int *)&v14, v10);
  v15 = v13;
  v37 = v13;
  if ( !v9 )
    v12 = v14;
  v16 = v12;
  v38 = v12;
  result = VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::end((VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR *)&v32);
  if ( !result )
  {
    while ( 1 )
    {
      IsEnabledDeviceUsageNoInline = Feature_FlipPlaneLayerIndexFix__private_IsEnabledDeviceUsageNoInline(
                                       v19,
                                       v18,
                                       v20,
                                       v21);
      v23 = *(_QWORD *)(a2 + 1192);
      v9 = IsEnabledDeviceUsageNoInline == 0;
      v24 = *(_DWORD *)(v23 + 8);
      if ( v9 )
      {
        if ( v15 < v16 )
          v16 = v15;
        v25 = v16 * ((8 * v24 + 231) & 0xFFFFFFF8);
      }
      else
      {
        v25 = v11 * ((8 * v24 + 231) & 0xFFFFFFF8);
      }
      v26 = v23 + v25;
      if ( *(_QWORD *)(v26 + 208) )
      {
        v30 = *(struct _VIDSCH_SYNC_OBJECT **)(v26 + 208);
        v29 = *(struct VIDSCH_HW_QUEUE ***)(v26 + 216);
        if ( (int)VidSchiSignalSyncObjectsFromCpu(a4, 1u, &v30, 0, (const unsigned __int64 *)&v29, 0LL) < 0 )
        {
          WdLogSingleEntry2(1LL, *(_QWORD *)(v26 + 208), v29);
          WdLogGlobalForLineNumber = 23551;
          DxgkLogInternalTriageEvent(v27, 0x40000LL);
        }
      }
      if ( *(_QWORD *)(v26 + 224) && a3 )
      {
        v31 = *(struct _VIDSCH_SYNC_OBJECT **)(v26 + 224);
        if ( (int)VidSchiSignalSyncObjectsFromCpu(a4, 1u, &v31, 0, (const unsigned __int64 *)(v26 + 232), 0LL) < 0 )
        {
          WdLogSingleEntry2(1LL, *(_QWORD *)(v26 + 224), *(_QWORD *)(v26 + 232));
          WdLogGlobalForLineNumber = 23574;
          DxgkLogInternalTriageEvent(v28, 0x40000LL);
        }
      }
      VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++(&v32);
      result = VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::end((VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR *)&v32);
      if ( result )
        break;
      v16 = v38;
      v15 = v37;
      v11 = v36;
    }
  }
  return result;
}
