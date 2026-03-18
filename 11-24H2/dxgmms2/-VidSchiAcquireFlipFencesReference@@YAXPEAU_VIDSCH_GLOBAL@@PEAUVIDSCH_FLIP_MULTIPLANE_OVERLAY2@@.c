/*
 * XREFs of ?VidSchiAcquireFlipFencesReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x140027598
 * Callers:
 *     VidSchiSubmitMmIoFlipCommand @ 0x1400124E0 (VidSchiSubmitMmIoFlipCommand.c)
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140027780 (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchSubmitCommandToHwQueue @ 0x140048F00 (VidSchSubmitCommandToHwQueue.c)
 *     VidSchSubmitCommand @ 0x1400D2850 (VidSchSubmitCommand.c)
 * Callees:
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x140027710 (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 *     ?end@VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAA_NXZ @ 0x1400358E0 (-end@VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAA_NXZ.c)
 */

void __fastcall VidSchiAcquireFlipFencesReference(
        struct _VIDSCH_GLOBAL *a1,
        struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // eax
  unsigned int v4; // r8d
  bool v5; // zf
  char v6; // dl
  char v7; // cl
  int v8; // eax
  __int64 v9; // r9
  int v10; // r10d
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD v14[2]; // [rsp+20h] [rbp-30h] BYREF
  unsigned int v15; // [rsp+30h] [rbp-20h]
  unsigned int v16; // [rsp+34h] [rbp-1Ch]
  int v17; // [rsp+38h] [rbp-18h]
  int v18; // [rsp+3Ch] [rbp-14h]
  int v19; // [rsp+40h] [rbp-10h]

  v2 = *(_DWORD *)a2;
  v14[1] = a2;
  v14[0] = a1;
  v3 = v2 & 0x3FF;
  v15 = v3;
  if ( *((_BYTE *)a1 + 156) )
  {
    v4 = (v2 >> 10) & 0x3FF;
    v16 = v4;
  }
  else
  {
    v4 = 0;
    v16 = 0;
  }
  v5 = !_BitScanForward(&v3, v3);
  v6 = -1;
  v17 = 0;
  v7 = -1;
  if ( !v5 )
    v7 = v3;
  v18 = v7;
  v5 = !_BitScanForward((unsigned int *)&v8, v4);
  if ( !v5 )
    v6 = v8;
  v19 = v6;
  if ( !VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::end((VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR *)v14) )
  {
    while ( 1 )
    {
      v11 = v10 * ((8 * *(_DWORD *)(v9 + 8) + 231) & 0xFFFFFFF8);
      v12 = *(_QWORD *)(v11 + v9 + 208);
      if ( v12 )
        _InterlockedIncrement((volatile signed __int32 *)(v12 + 36));
      v13 = *(_QWORD *)(v11 + v9 + 224);
      if ( v13 )
        _InterlockedIncrement((volatile signed __int32 *)(v13 + 36));
      VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++(v14);
      if ( VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::end((VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR *)v14) )
        break;
      v10 = v17;
    }
  }
}
