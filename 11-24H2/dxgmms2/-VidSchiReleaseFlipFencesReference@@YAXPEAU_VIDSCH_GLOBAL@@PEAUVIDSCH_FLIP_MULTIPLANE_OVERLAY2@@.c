/*
 * XREFs of ?VidSchiReleaseFlipFencesReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x140029FAC
 * Callers:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x140013C80 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x140028980 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     VidSchiCompleteFlipEntry @ 0x14002AB90 (VidSchiCompleteFlipEntry.c)
 * Callees:
 *     VidSchiReleaseSyncObjectReference @ 0x14000F6E0 (VidSchiReleaseSyncObjectReference.c)
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x140027710 (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 *     ?end@VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAA_NXZ @ 0x1400358E0 (-end@VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAA_NXZ.c)
 */

void __fastcall VidSchiReleaseFlipFencesReference(
        struct _VIDSCH_GLOBAL *a1,
        struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *a2)
{
  unsigned int v2; // r8d
  unsigned int v4; // eax
  bool v5; // zf
  unsigned int v6; // r8d
  char v7; // dl
  char v8; // cl
  int v9; // eax
  unsigned int v10; // esi
  unsigned int v11; // r14d
  __int64 v12; // rdx
  int v13; // r9d
  __int64 v14; // rdi
  char *v15; // rcx
  char *v16; // rcx
  _QWORD v17[2]; // [rsp+20h] [rbp-30h] BYREF
  unsigned int v18; // [rsp+30h] [rbp-20h]
  unsigned int v19; // [rsp+34h] [rbp-1Ch]
  int v20; // [rsp+38h] [rbp-18h]
  unsigned int v21; // [rsp+3Ch] [rbp-14h]
  unsigned int v22; // [rsp+40h] [rbp-10h]

  v2 = *(_DWORD *)a2;
  v17[1] = a2;
  v17[0] = a1;
  v4 = v2 & 0x3FF;
  v5 = *((_BYTE *)a1 + 156) == 0;
  v18 = v4;
  if ( v5 )
    v6 = 0;
  else
    v6 = (v2 >> 10) & 0x3FF;
  v19 = v6;
  v5 = !_BitScanForward(&v4, v4);
  v7 = -1;
  v20 = 0;
  v8 = -1;
  if ( !v5 )
    v8 = v4;
  v5 = !_BitScanForward((unsigned int *)&v9, v6);
  v10 = v8;
  v21 = v8;
  if ( !v5 )
    v7 = v9;
  v11 = v7;
  v22 = v7;
  if ( !VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::end((VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR *)v17) )
  {
    while ( 1 )
    {
      v14 = v13 * ((8 * *((_DWORD *)a2 + 2) + 231) & 0xFFFFFFF8);
      v15 = *(char **)((char *)a2 + v14 + 208);
      if ( v15 )
      {
        VidSchiReleaseSyncObjectReference(v15, v12);
        *(_QWORD *)((char *)a2 + v14 + 208) = 0LL;
      }
      v16 = *(char **)((char *)a2 + v14 + 224);
      if ( v16 )
      {
        if ( v10 < v11 )
        {
          VidSchiReleaseSyncObjectReference(v16, v12);
          *(_QWORD *)((char *)a2 + v14 + 224) = 0LL;
        }
      }
      VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++((unsigned int *)v17);
      if ( VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::end((VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR *)v17) )
        break;
      v11 = v22;
      v10 = v21;
      v13 = v20;
    }
  }
}
