/*
 * XREFs of ?VidSchiAcquireFlipFencesReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x1400129C0
 * Callers:
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1400118F0 (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x14001D940 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchSubmitCommandToHwQueue @ 0x1400497F0 (VidSchSubmitCommandToHwQueue.c)
 *     VidSchSubmitCommand @ 0x1400D6BF0 (VidSchSubmitCommand.c)
 * Callees:
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x1400128C0 (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 *     ?end@VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAA_NXZ @ 0x140036D40 (-end@VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAA_NXZ.c)
 *     Feature_FlipPlaneLayerIndexFix__private_IsEnabledDeviceUsageNoInline @ 0x14004F6C8 (Feature_FlipPlaneLayerIndexFix__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall VidSchiAcquireFlipFencesReference(
        struct _VIDSCH_GLOBAL *a1,
        struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *a2)
{
  unsigned int v2; // r8d
  unsigned int v4; // eax
  bool v5; // zf
  unsigned int v6; // r8d
  int v7; // r14d
  char v8; // dl
  char v9; // cl
  int v10; // eax
  unsigned int v11; // esi
  unsigned int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  _QWORD v22[2]; // [rsp+20h] [rbp-30h] BYREF
  unsigned int v23; // [rsp+30h] [rbp-20h]
  unsigned int v24; // [rsp+34h] [rbp-1Ch]
  int v25; // [rsp+38h] [rbp-18h]
  unsigned int v26; // [rsp+3Ch] [rbp-14h]
  unsigned int v27; // [rsp+40h] [rbp-10h]

  v2 = *(_DWORD *)a2;
  v22[1] = a2;
  v22[0] = a1;
  v4 = v2 & 0x3FF;
  v5 = *((_BYTE *)a1 + 156) == 0;
  v23 = v4;
  if ( v5 )
    v6 = 0;
  else
    v6 = (v2 >> 10) & 0x3FF;
  v7 = 0;
  v24 = v6;
  v5 = !_BitScanForward(&v4, v4);
  v8 = -1;
  v25 = 0;
  v9 = -1;
  if ( !v5 )
    v9 = v4;
  v5 = !_BitScanForward((unsigned int *)&v10, v6);
  v11 = v9;
  v26 = v9;
  if ( !v5 )
    v8 = v10;
  v12 = v8;
  v27 = v8;
  if ( !VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::end((VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR *)v22) )
  {
    while ( 1 )
    {
      v5 = (unsigned int)Feature_FlipPlaneLayerIndexFix__private_IsEnabledDeviceUsageNoInline(v14, v13, v15, v16) == 0;
      v17 = 8 * *((_DWORD *)a2 + 2) + 231;
      if ( v5 )
      {
        if ( v11 < v12 )
          v12 = v11;
        v18 = v12 * (v17 & 0xFFFFFFF8);
      }
      else
      {
        v18 = v7 * (v17 & 0xFFFFFFF8);
      }
      v19 = (unsigned int)v18;
      v20 = *(_QWORD *)((char *)a2 + v18 + 208);
      if ( v20 )
        _InterlockedIncrement((volatile signed __int32 *)(v20 + 36));
      v21 = *(_QWORD *)((char *)a2 + v19 + 224);
      if ( v21 )
        _InterlockedIncrement((volatile signed __int32 *)(v21 + 36));
      VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++((unsigned int *)v22);
      if ( VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::end((VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR *)v22) )
        break;
      v12 = v27;
      v11 = v26;
      v7 = v25;
    }
  }
}
