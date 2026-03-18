/*
 * XREFs of ?VidSchiReleaseFlipFencesReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x1400117BC
 * Callers:
 *     VidSchiCompleteFlipEntry @ 0x14000A1C0 (VidSchiCompleteFlipEntry.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x140010190 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x14001F0E0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 * Callees:
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x1400128C0 (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 *     VidSchiReleaseSyncObjectReference @ 0x14001AB40 (VidSchiReleaseSyncObjectReference.c)
 *     ?end@VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAA_NXZ @ 0x140036D40 (-end@VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAA_NXZ.c)
 *     Feature_FlipPlaneLayerIndexFix__private_IsEnabledDeviceUsageNoInline @ 0x14004F6C8 (Feature_FlipPlaneLayerIndexFix__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall VidSchiReleaseFlipFencesReference(
        struct _VIDSCH_GLOBAL *a1,
        struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *a2)
{
  unsigned int v2; // r8d
  unsigned int v4; // eax
  bool v5; // zf
  unsigned int v6; // r8d
  int v7; // edi
  char v8; // dl
  char v9; // cl
  int v10; // eax
  unsigned int v11; // esi
  unsigned int v12; // r14d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // eax
  unsigned int v18; // ecx
  __int64 v19; // rax
  void *v20; // rcx
  __int64 v21; // rdi
  void *v22; // rcx
  _QWORD v23[2]; // [rsp+20h] [rbp-30h] BYREF
  unsigned int v24; // [rsp+30h] [rbp-20h]
  unsigned int v25; // [rsp+34h] [rbp-1Ch]
  int v26; // [rsp+38h] [rbp-18h]
  unsigned int v27; // [rsp+3Ch] [rbp-14h]
  unsigned int v28; // [rsp+40h] [rbp-10h]

  v2 = *(_DWORD *)a2;
  v23[1] = a2;
  v23[0] = a1;
  v4 = v2 & 0x3FF;
  v5 = *((_BYTE *)a1 + 156) == 0;
  v24 = v4;
  if ( v5 )
    v6 = 0;
  else
    v6 = (v2 >> 10) & 0x3FF;
  v7 = 0;
  v25 = v6;
  v5 = !_BitScanForward(&v4, v4);
  v8 = -1;
  v26 = 0;
  v9 = -1;
  if ( !v5 )
    v9 = v4;
  v5 = !_BitScanForward((unsigned int *)&v10, v6);
  v11 = v9;
  v27 = v9;
  if ( !v5 )
    v8 = v10;
  v12 = v8;
  v28 = v8;
  if ( !VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::end((VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR *)v23) )
  {
    while ( 1 )
    {
      v5 = (unsigned int)Feature_FlipPlaneLayerIndexFix__private_IsEnabledDeviceUsageNoInline(v14, v13, v15, v16) == 0;
      v17 = 8 * *((_DWORD *)a2 + 2) + 231;
      if ( v5 )
      {
        v18 = v12;
        if ( v11 < v12 )
          v18 = v11;
        v19 = v18 * (v17 & 0xFFFFFFF8);
      }
      else
      {
        v19 = v7 * (v17 & 0xFFFFFFF8);
      }
      v20 = *(void **)((char *)a2 + v19 + 208);
      v21 = (unsigned int)v19;
      if ( v20 )
      {
        VidSchiReleaseSyncObjectReference(v20);
        *(_QWORD *)((char *)a2 + v21 + 208) = 0LL;
      }
      v22 = *(void **)((char *)a2 + v21 + 224);
      if ( v22 )
      {
        if ( v11 < v12 )
        {
          VidSchiReleaseSyncObjectReference(v22);
          *(_QWORD *)((char *)a2 + v21 + 224) = 0LL;
        }
      }
      VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++(v23);
      if ( VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::end((VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR *)v23) )
        break;
      v12 = v28;
      v11 = v27;
      v7 = v26;
    }
  }
}
