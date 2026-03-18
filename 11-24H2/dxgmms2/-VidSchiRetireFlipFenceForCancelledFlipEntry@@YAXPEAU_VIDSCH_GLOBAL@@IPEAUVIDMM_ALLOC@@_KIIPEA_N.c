/*
 * XREFs of ?VidSchiRetireFlipFenceForCancelledFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDMM_ALLOC@@_KIIPEA_N@Z @ 0x14002C250
 * Callers:
 *     ?VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II_N3@Z @ 0x1400272E8 (-VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSC.c)
 *     VidSchiCompleteFlipEntry @ 0x14002AB90 (VidSchiCompleteFlipEntry.c)
 * Callees:
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x140027710 (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 *     ?end@VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAA_NXZ @ 0x1400358E0 (-end@VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAA_NXZ.c)
 */

void __fastcall VidSchiRetireFlipFenceForCancelledFlipEntry(
        struct _VIDSCH_GLOBAL *a1,
        unsigned int a2,
        struct VIDMM_ALLOC *a3,
        unsigned __int64 a4,
        unsigned int a5,
        unsigned int a6,
        bool *a7)
{
  unsigned int v7; // edi
  unsigned __int64 v8; // r10
  __int64 v10; // r9
  int v11; // eax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // esi
  __int64 v17; // r11
  unsigned int v18; // ebx
  __int64 v19; // r15
  int v20; // eax
  unsigned int v21; // edx
  unsigned int v22; // eax
  unsigned int v23; // edx
  bool v24; // zf
  char v25; // cl
  int v26; // r8d
  char v27; // cl
  int v28; // eax
  unsigned int v29; // edx
  unsigned int v30; // r8d
  unsigned int v31; // eax
  __int64 v32; // r8
  int v33; // edx
  __int64 v34; // r8
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rax
  struct _VIDSCH_GLOBAL *v37; // [rsp+20h] [rbp-30h] BYREF
  unsigned int *v38; // [rsp+28h] [rbp-28h]
  unsigned int v39; // [rsp+30h] [rbp-20h]
  unsigned int v40; // [rsp+34h] [rbp-1Ch]
  int v41; // [rsp+38h] [rbp-18h]
  int v42; // [rsp+3Ch] [rbp-14h]
  int v43; // [rsp+40h] [rbp-10h]
  struct _VIDSCH_GLOBAL *v44; // [rsp+80h] [rbp+30h]

  v44 = a1;
  v7 = 0;
  v8 = a4;
  if ( *a7 )
  {
    if ( a4 )
    {
      if ( a2 != -1 )
      {
        v10 = *((_QWORD *)a1 + a2 + 429);
        if ( v10 )
        {
          v11 = *(_DWORD *)(v10 + 3248);
          if ( _bittest(&v11, a5) )
          {
            v16 = 0;
            while ( v16 < 2 )
            {
              if ( v16 )
                v17 = *(_QWORD *)(v10 + 8LL * a5 + 40);
              else
                v17 = *(_QWORD *)(v10 + 32);
              v18 = *(_DWORD *)(v17 + 72);
              ++v16;
LABEL_17:
              if ( v18 != (((unsigned __int8)*(_DWORD *)(v17 + 68) - 1) & 0x3F) )
              {
                v19 = 1400LL * v18;
                v20 = *(_DWORD *)(v19 + v17 + 1172);
                if ( v20 == 5 || v20 == 15 )
                {
                  v38 = *(unsigned int **)(v19 + v17 + 1312);
                  v37 = a1;
                  v21 = *v38;
                  v22 = *v38 & 0x3FF;
                  v39 = v22;
                  if ( *((_BYTE *)a1 + 156) )
                    v23 = (v21 >> 10) & 0x3FF;
                  else
                    v23 = 0;
                  v24 = !_BitScanForward(&v22, v22);
                  v25 = -1;
                  v40 = v23;
                  if ( !v24 )
                    v25 = v22;
                  v41 = 0;
                  v26 = v25;
                  v27 = -1;
                  v24 = !_BitScanForward((unsigned int *)&v28, v23);
                  v42 = v26;
                  if ( !v24 )
                    v27 = v28;
                  v43 = v27;
                  while ( 1 )
                  {
                    if ( VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::end((VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR *)&v37) )
                    {
                      a1 = v44;
                      v18 = ((_BYTE)v18 - 1) & 0x3F;
                      goto LABEL_17;
                    }
                    if ( v30 < v29 )
                      break;
LABEL_35:
                    VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++((unsigned int *)&v37);
                  }
                  v31 = *(_DWORD *)(v19 + v17 + 1216);
                  while ( 1 )
                  {
                    if ( v7 >= v31 )
                    {
                      v7 = 0;
                      goto LABEL_35;
                    }
                    v32 = *(_QWORD *)(v19 + v17 + 1312);
                    v33 = *(_DWORD *)(v32 + 4);
                    v34 = v33 * ((8 * *(_DWORD *)(v32 + 8) + 231) & 0xFFFFFFF8) + v32;
                    v35 = (unsigned __int64)(v41 + v7 * v33) << 6;
                    if ( *((_QWORD *)a3 + 12) == *(_QWORD *)(*(_QWORD *)(v35 + v34 + 48) + 96LL) )
                      break;
                    v31 = *(_DWORD *)(v19 + v17 + 1216);
                    ++v7;
                  }
                  v36 = *(_QWORD *)(v35 + v34 + 72);
                  *a7 = 0;
                  if ( v8 >= v36 )
                  {
                    *(_QWORD *)(v35 + v34 + 72) = v8;
                    v14 = *(_QWORD *)(*((_QWORD *)a3 + 12) + 32LL);
                    v15 = 2LL * *(unsigned int *)(v14 + 32);
                    *(_OWORD *)(v14 + 8 * v15 + 40) = 0LL;
                    *(_DWORD *)(v14 + 32) = ((unsigned __int8)*(_DWORD *)(v14 + 32) + 1) & 7;
                    *(_DWORD *)(v14 + 8 * v15 + 40) = 4;
                    goto LABEL_10;
                  }
                  return;
                }
              }
            }
          }
          v12 = (a6 + ((unsigned __int64)a5 << 6)) << 6;
          if ( *(_QWORD *)(v12 + v10 + 3344) == *((_QWORD *)a3 + 12) )
          {
            v13 = *(_QWORD *)(v12 + v10 + 3376);
            *a7 = 0;
            if ( v8 >= v13 )
            {
              *(_QWORD *)(v12 + v10 + 3376) = v8;
              v14 = *(_QWORD *)(*((_QWORD *)a3 + 12) + 32LL);
              v15 = 2LL * *(unsigned int *)(v14 + 32);
              *(_OWORD *)(v14 + 8 * v15 + 40) = 0LL;
              *(_DWORD *)(v14 + 32) = ((unsigned __int8)*(_DWORD *)(v14 + 32) + 1) & 7;
              *(_DWORD *)(v14 + 8 * v15 + 40) = 3;
LABEL_10:
              *(_QWORD *)(v14 + 8 * v15 + 48) = v8;
            }
          }
        }
      }
    }
  }
}
