/*
 * XREFs of VidSchiReferenceDisplayingAllocationsForThisEntry @ 0x14003A8E8
 * Callers:
 *     VidSchiProcessVsyncCompletedFlipEntry @ 0x140008C10 (VidSchiProcessVsyncCompletedFlipEntry.c)
 *     VidSchiExecuteMmIoFlip @ 0x14000CF44 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x140039EF0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 * Callees:
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x1400128C0 (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 *     ?end@VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAA_NXZ @ 0x140036D40 (-end@VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAA_NXZ.c)
 *     ?VidMmReferenceDisplayingAllocation@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_DISPLAYING_ALLOCATION@@_K2@Z @ 0x14003B134 (-VidMmReferenceDisplayingAllocation@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_DISPLAYING_ALLOCATIO.c)
 *     Feature_FlipPlaneLayerIndexFix__private_IsEnabledDeviceUsageNoInline @ 0x14004F6C8 (Feature_FlipPlaneLayerIndexFix__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall VidSchiReferenceDisplayingAllocationsForThisEntry(
        struct HwQueueStagingList *a1,
        __int64 a2,
        _WORD *a3,
        __int64 a4)
{
  unsigned int v7; // r10d
  unsigned int v8; // eax
  bool v9; // zf
  unsigned int v10; // r10d
  int v11; // r14d
  char v12; // dl
  char v13; // cl
  int v14; // eax
  unsigned int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int i; // r12d
  unsigned __int64 v21; // r10
  __int16 v22; // r9
  __int64 v23; // r9
  int v24; // r8d
  __int64 v25; // rax
  __int64 v26; // r8
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v28; // rcx
  int v29; // edx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rax
  unsigned __int64 v33; // rcx
  __int64 result; // rax
  __int64 v35; // [rsp+20h] [rbp-30h] BYREF
  unsigned int *v36; // [rsp+28h] [rbp-28h]
  unsigned int v37; // [rsp+30h] [rbp-20h]
  unsigned int v38; // [rsp+34h] [rbp-1Ch]
  int v39; // [rsp+38h] [rbp-18h]
  unsigned int v40; // [rsp+3Ch] [rbp-14h]
  unsigned int v41; // [rsp+40h] [rbp-10h]

  v36 = *(unsigned int **)(a4 + 1192);
  v35 = a2;
  v7 = *v36;
  v8 = *v36 & 0x3FF;
  v9 = *(_BYTE *)(a2 + 156) == 0;
  v37 = v8;
  if ( v9 )
    v10 = 0;
  else
    v10 = (v7 >> 10) & 0x3FF;
  v11 = 0;
  v38 = v10;
  v9 = !_BitScanForward(&v8, v8);
  v12 = -1;
  v39 = 0;
  v13 = -1;
  if ( !v9 )
    v13 = v8;
  v9 = !_BitScanForward((unsigned int *)&v14, v10);
  v15 = v13;
  v40 = v13;
  if ( !v9 )
    v12 = v14;
  v41 = v12;
  if ( !VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::end((VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR *)&v35) )
  {
    while ( 1 )
    {
      if ( v15 < (unsigned int)v18 )
      {
        for ( i = 0; i < *(_DWORD *)(a4 + 1096); ++i )
        {
          v21 = (((unsigned __int64)v15 << 6) + i) << 6;
          *(_QWORD *)((char *)a3 + v21 + 3344) = *(_QWORD *)(*(_QWORD *)(((unsigned __int64)(v11
                                                                                           + i
                                                                                           * *(_DWORD *)(*(_QWORD *)(a4 + 1192) + 4LL)) << 6)
                                                                       + *(_QWORD *)(a4 + 1192)
                                                                       + *(_DWORD *)(*(_QWORD *)(a4 + 1192) + 4LL)
                                                                       * ((8 * *(_DWORD *)(*(_QWORD *)(a4 + 1192) + 8LL)
                                                                         + 231) & 0xFFFFFFF8)
                                                                       + 48)
                                                           + 96LL);
          *(_QWORD *)((char *)a3 + v21 + 3336) = *(_QWORD *)(((unsigned __int64)(v11
                                                                               + i
                                                                               * *(_DWORD *)(*(_QWORD *)(a4 + 1192) + 4LL)) << 6)
                                                           + *(_QWORD *)(a4 + 1192)
                                                           + *(_DWORD *)(*(_QWORD *)(a4 + 1192) + 4LL)
                                                           * ((8 * *(_DWORD *)(*(_QWORD *)(a4 + 1192) + 8LL) + 231) & 0xFFFFFFF8)
                                                           + 24);
          v22 = a3[22150];
          if ( *(_QWORD *)(((unsigned __int64)(v11 + i * *(_DWORD *)(*(_QWORD *)(a4 + 1192) + 4LL)) << 6)
                         + *(_QWORD *)(a4 + 1192)
                         + *(_DWORD *)(*(_QWORD *)(a4 + 1192) + 4LL)
                         * ((8 * *(_DWORD *)(*(_QWORD *)(a4 + 1192) + 8LL) + 231) & 0xFFFFFFF8)
                         + 56) )
          {
            a3[22150] = v22 | (1 << v15);
            *(_QWORD *)((char *)a3 + v21 + 3352) = *(_QWORD *)(((unsigned __int64)(v11
                                                                                 + i
                                                                                 * *(_DWORD *)(*(_QWORD *)(a4 + 1192)
                                                                                             + 4LL)) << 6)
                                                             + *(_QWORD *)(a4 + 1192)
                                                             + *(_DWORD *)(*(_QWORD *)(a4 + 1192) + 4LL)
                                                             * ((8 * *(_DWORD *)(*(_QWORD *)(a4 + 1192) + 8LL) + 231) & 0xFFFFFFF8)
                                                             + 56);
          }
          else
          {
            a3[22150] = v22 & ~(1 << v15);
          }
          *(_WORD *)((char *)a3 + v21 + 3368) = *(_WORD *)(((unsigned __int64)(v11
                                                                             + i
                                                                             * *(_DWORD *)(*(_QWORD *)(a4 + 1192) + 4LL)) << 6)
                                                         + *(_QWORD *)(a4 + 1192)
                                                         + *(_DWORD *)(*(_QWORD *)(a4 + 1192) + 4LL)
                                                         * ((8 * *(_DWORD *)(*(_QWORD *)(a4 + 1192) + 8LL) + 231) & 0xFFFFFFF8)
                                                         + 32);
          *(_QWORD *)((char *)a3 + v21 + 3360) = *(_QWORD *)(((unsigned __int64)(v11
                                                                               + i
                                                                               * *(_DWORD *)(*(_QWORD *)(a4 + 1192) + 4LL)) << 6)
                                                           + *(_QWORD *)(a4 + 1192)
                                                           + *(_DWORD *)(*(_QWORD *)(a4 + 1192) + 4LL)
                                                           * ((8 * *(_DWORD *)(*(_QWORD *)(a4 + 1192) + 8LL) + 231) & 0xFFFFFFF8)
                                                           + 40);
          v23 = *(_QWORD *)(a4 + 1192);
          v24 = *(_DWORD *)(v23 + 4);
          v25 = v11 + i * v24;
          v26 = v23 + v24 * ((8 * *(_DWORD *)(v23 + 8) + 231) & 0xFFFFFFF8);
          VidMmReferenceDisplayingAllocation(
            a1,
            (struct _VIDSCH_DISPLAYING_ALLOCATION *)((char *)a3 + v21 + 3336),
            *(_QWORD *)((v25 << 6) + v26 + 64),
            *(_QWORD *)((v25 << 6) + v26 + 72));
        }
        IsEnabledDeviceUsageNoInline = Feature_FlipPlaneLayerIndexFix__private_IsEnabledDeviceUsageNoInline(
                                         v17,
                                         v16,
                                         v18,
                                         v19);
        v28 = *(_QWORD *)(a4 + 1192);
        v29 = 8 * *(_DWORD *)(v28 + 8) + 231;
        if ( IsEnabledDeviceUsageNoInline )
          v30 = v11 * (v29 & 0xFFFFFFF8);
        else
          v30 = v15 * (v29 & 0xFFFFFFF8);
        v31 = v28 + v30;
        v32 = *(_QWORD *)(v31 + 224);
        if ( v32 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v32 + 36));
          LOBYTE(v15) = v40;
          v33 = (unsigned __int64)v40 << 12;
          *(_QWORD *)((char *)a3 + v33 + 3384) = *(_QWORD *)(v31 + 224);
          *(_QWORD *)((char *)a3 + v33 + 3392) = *(_QWORD *)(v31 + 232);
        }
        a3[22148] |= 1 << v15;
      }
      VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++((unsigned int *)&v35);
      if ( VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::end((VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR *)&v35) )
        break;
      v18 = v41;
      v15 = v40;
      v11 = v39;
    }
  }
  result = *(unsigned __int16 *)(a4 + 1096);
  a3[22149] = result;
  return result;
}
