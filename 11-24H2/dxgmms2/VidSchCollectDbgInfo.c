/*
 * XREFs of VidSchCollectDbgInfo @ 0x1401056E0
 * Callers:
 *     <none>
 * Callees:
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x140027710 (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 *     VidSchiCaptureProcessName @ 0x140034170 (VidSchiCaptureProcessName.c)
 *     ?end@VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAA_NXZ @ 0x1400358E0 (-end@VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAA_NXZ.c)
 *     ?VidSchiGetNumHistoryLayersUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14004AB18 (-VidSchiGetNumHistoryLayersUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiGetNumOverlayPlanesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14004AFF8 (-VidSchiGetNumOverlayPlanesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiGetNumFlipQueueEntriesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14004B0F0 (-VidSchiGetNumFlipQueueEntriesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiGetVSyncState@@YA?AW4VIDSCH_VSYNC_STATE@@PEAU_VIDSCH_GLOBAL@@I@Z @ 0x14004B488 (-VidSchiGetVSyncState@@YA-AW4VIDSCH_VSYNC_STATE@@PEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     memmove @ 0x140056040 (memmove.c)
 *     memset @ 0x140056340 (memset.c)
 *     VidSchiGetNumFlipAllocAttribs @ 0x140090894 (VidSchiGetNumFlipAllocAttribs.c)
 *     VidSchQueryDmaHeader @ 0x1400A7F1C (VidSchQueryDmaHeader.c)
 */

__int64 __fastcall VidSchCollectDbgInfo(__int64 a1, unsigned int *a2, size_t a3)
{
  size_t v3; // r15
  unsigned int *v4; // rsi
  __int64 v6; // r9
  int v7; // eax
  __int64 v8; // r14
  __int64 v9; // r13
  __int64 *v10; // rdi
  int v11; // ebx
  unsigned int NumHistoryLayersUsed; // eax
  int v13; // ebx
  int NumFlipAllocAttribs; // eax
  __int64 v15; // r11
  unsigned int v16; // edx
  unsigned int v17; // edi
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // r13
  char *v22; // r11
  char *v23; // r13
  int v24; // edi
  __int64 v25; // rax
  unsigned int v26; // esi
  char *v27; // r15
  __int64 v28; // rdx
  _DWORD *v29; // rdx
  __int64 v30; // rax
  _DWORD *v31; // r10
  unsigned int v32; // esi
  __int64 v33; // r12
  __int64 v34; // rcx
  char *v35; // r8
  unsigned int v36; // r11d
  unsigned int v37; // eax
  int v38; // ecx
  unsigned int v39; // eax
  int v40; // ecx
  bool v41; // zf
  unsigned int v42; // ecx
  __int64 v43; // r9
  int v44; // edx
  unsigned int v45; // edx
  unsigned int v46; // eax
  unsigned int v47; // edx
  char v48; // cl
  unsigned int v49; // r9d
  char v50; // cl
  int v51; // eax
  unsigned int v52; // edx
  unsigned int v53; // r9d
  __int64 v54; // r9
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // r9
  int v58; // edx
  int v59; // ecx
  int v60; // eax
  int v61; // ecx
  int v62; // edx
  unsigned int v63; // r8d
  __int64 v64; // rdx
  unsigned int *v65; // r8
  __int64 v66; // r9
  __int64 v67; // rdx
  unsigned int i; // r9d
  __int64 v69; // r8
  __int64 v70; // r10
  __int64 v71; // rdx
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rax
  unsigned int v76; // [rsp+30h] [rbp-69h]
  unsigned int v77; // [rsp+30h] [rbp-69h]
  unsigned int v78; // [rsp+34h] [rbp-65h]
  unsigned int NumFlipQueueEntriesUsed; // [rsp+38h] [rbp-61h]
  char *v80; // [rsp+40h] [rbp-59h]
  __int64 v81; // [rsp+40h] [rbp-59h]
  unsigned int v82; // [rsp+48h] [rbp-51h]
  unsigned int NumOverlayPlanesUsed; // [rsp+4Ch] [rbp-4Dh]
  __int64 v84; // [rsp+58h] [rbp-41h]
  char *v85; // [rsp+58h] [rbp-41h]
  char *v86; // [rsp+68h] [rbp-31h]
  __int64 v87; // [rsp+70h] [rbp-29h] BYREF
  unsigned int *v88; // [rsp+78h] [rbp-21h]
  unsigned int v89; // [rsp+80h] [rbp-19h]
  unsigned int v90; // [rsp+84h] [rbp-15h]
  int v91; // [rsp+88h] [rbp-11h]
  unsigned int v92; // [rsp+8Ch] [rbp-Dh]
  unsigned int v93; // [rsp+90h] [rbp-9h]
  __int64 v94; // [rsp+98h] [rbp-1h]
  __int64 v95; // [rsp+A0h] [rbp+7h]
  __int64 v96; // [rsp+100h] [rbp+67h]
  unsigned int v97; // [rsp+100h] [rbp+67h]
  int v98; // [rsp+100h] [rbp+67h]
  unsigned int v101; // [rsp+118h] [rbp+7Fh]

  v3 = a3;
  v4 = a2;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 3128LL);
  v7 = *(_DWORD *)(a1 + 16);
  v8 = *(_QWORD *)(v6 + 744);
  if ( v7 == 2 )
  {
    v9 = 16LL;
    v96 = *(_QWORD *)(v8 + 3256);
    v10 = (__int64 *)(v96 + 576);
    do
    {
      VidSchQueryDmaHeader(v8, *(_QWORD *)(v8 + 3256), *v10, *((_DWORD *)v10 - 4) == 3, (__int64)(v10 - 4));
      v10 += 7;
      --v9;
    }
    while ( v9 );
    if ( v3 >= 0x390 )
      v3 = 912LL;
    memmove(v4, (const void *)(v96 + 512), v3);
  }
  else if ( v7 == 3 )
  {
    v11 = *(_DWORD *)(a1 + 80);
    NumOverlayPlanesUsed = VidSchiGetNumOverlayPlanesUsed(*(struct _VIDSCH_GLOBAL **)(v6 + 744), v11);
    NumHistoryLayersUsed = VidSchiGetNumHistoryLayersUsed((struct _VIDSCH_GLOBAL *)v8, v11);
    v13 = *(_DWORD *)(a1 + 80);
    v78 = NumHistoryLayersUsed;
    NumFlipQueueEntriesUsed = VidSchiGetNumFlipQueueEntriesUsed((struct _VIDSCH_GLOBAL *)v8, v13);
    LODWORD(v84) = (((_DWORD)v4 + 163) & 0xFFFFFFF8) - (_DWORD)v4;
    NumFlipAllocAttribs = VidSchiGetNumFlipAllocAttribs(v8, v13);
    v15 = 4LL;
    v16 = (((_DWORD)v4 + 163) & 0xFFFFFFF8) + 280 * NumFlipAllocAttribs;
    HIDWORD(v84) = v16 - (_DWORD)v4;
    v17 = v16 + 48 * v78 - (_DWORD)v4 + 56 * NumFlipQueueEntriesUsed;
    v97 = v16 + 48 * v78 - (_DWORD)v4;
    v95 = v17;
    if ( v3 >= v17 )
    {
      memset(v4, 0, v17);
      *v4 = v17;
      v4[1] = 3;
      v4[3] = VidSchiGetVSyncState(v8, *(_DWORD *)(a1 + 80));
      v18 = *(unsigned int *)(a1 + 80);
      v4[2] = v18;
      v4[37] = *(_DWORD *)(a1 + 88);
      *(_QWORD *)(v4 + 35) = *(_QWORD *)(a1 + 96);
      *((_QWORD *)v4 + 16) = v84;
      v4[34] = v97;
      if ( (_DWORD)v18 != -1 && (unsigned int)v18 < *(_DWORD *)(v8 + 40) )
      {
        v19 = *(_QWORD *)(v8 + 8 * v18 + 3432);
        if ( v19 )
        {
          v20 = *(_QWORD *)(v19 + 16);
          if ( v20 )
          {
            VidSchiCaptureProcessName(v20, (char *)v4 + 16);
            v21 = v4[34];
            v22 = (char *)v4 + v4[32];
            v4[8] = *(_DWORD *)(v19 + 4);
            v23 = (char *)v4 + v21;
            v85 = v22;
            v80 = (char *)v4 + v4[33];
            v24 = -1;
            v25 = v4[2];
            v26 = 0;
            v27 = v80;
            v82 = v25;
            v98 = 0;
            v101 = 0;
            v76 = 0;
            while ( v24 != *(_DWORD *)(v8 + 152) )
            {
              v28 = *(_QWORD *)(v8 + 8 * v25 + 3432);
              if ( v24 == -1 )
                v29 = *(_DWORD **)(v28 + 32);
              else
                v29 = *(_DWORD **)(v28 + 8LL * v24 + 40);
              if ( v29 )
              {
                v30 = v26;
                v31 = v29 + 328;
                v32 = v76;
                v33 = 64LL;
                v34 = 280 * v30;
                v81 = 64LL;
                *(_DWORD *)&v22[v34] = v24;
                v35 = &v22[280 * v30 + 24];
                *(_DWORD *)&v22[v34 + 4] = v29[14];
                *(_DWORD *)&v22[v34 + 8] = v29[15];
                *(_DWORD *)&v22[v34 + 12] = v29[16];
                *(_DWORD *)&v22[v34 + 16] = v29[17];
                *(_DWORD *)&v22[v34 + 20] = v29[19];
                v36 = v101;
                v86 = v35;
                do
                {
                  v37 = *(v31 - 35);
                  if ( v37 <= 0xC && (v38 = 4673, _bittest(&v38, v37)) )
                  {
                    *(_DWORD *)v35 = -1;
                  }
                  else
                  {
                    *(_DWORD *)v35 = v32;
                    v39 = 0;
                    v40 = *(v31 - 28);
                    if ( (v40 & 1) == 0 )
                    {
                      do
                      {
                        if ( v39 >= *(_DWORD *)(v8 + 76) )
                          break;
                        ++v39;
                      }
                      while ( !_bittest(&v40, v39) );
                    }
                    v41 = v39 == *(_DWORD *)(v8 + 76);
                    v42 = 0;
                    v87 = v8;
                    if ( !v41 )
                      v42 = v39;
                    v43 = 56LL * v32;
                    v77 = v42;
                    v94 = v43;
                    v44 = *(_DWORD *)&v23[v43 + 52];
                    *(_DWORD *)&v23[v43] = v36;
                    *(_DWORD *)&v23[v43 + 52] = v44 ^ (**(_DWORD **)v31 ^ v44) & 0x3FF;
                    v88 = *(unsigned int **)v31;
                    v45 = *v88;
                    v46 = *v88 & 0x3FF;
                    v89 = v46;
                    if ( *(_BYTE *)(v8 + 156) )
                    {
                      v47 = (v45 >> 10) & 0x3FF;
                      v90 = v47;
                    }
                    else
                    {
                      v47 = 0;
                      v90 = 0;
                    }
                    v41 = !_BitScanForward(&v46, v46);
                    v48 = -1;
                    v91 = 0;
                    if ( !v41 )
                      v48 = v46;
                    v49 = v48;
                    v50 = -1;
                    v41 = !_BitScanForward((unsigned int *)&v51, v47);
                    v92 = v49;
                    if ( !v41 )
                      v50 = v51;
                    v93 = v50;
                    if ( !VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::end((VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR *)&v87) )
                    {
                      while ( 1 )
                      {
                        if ( v53 < v52 )
                        {
                          v54 = 6LL * v36;
                          *(_QWORD *)&v27[8 * v54] = *(_QWORD *)(((unsigned __int64)(v91
                                                                                   + v77
                                                                                   * *(_DWORD *)(*(_QWORD *)v31 + 4LL)) << 6)
                                                               + *(_QWORD *)v31
                                                               + *(_DWORD *)(*(_QWORD *)v31 + 4LL)
                                                               * ((8 * *(_DWORD *)(*(_QWORD *)v31 + 8LL) + 231) & 0xFFFFFFF8)
                                                               + 40);
                          v55 = *(_QWORD *)v31;
                          v56 = v91 * ((8 * *(_DWORD *)(*(_QWORD *)v31 + 8LL) + 231) & 0xFFFFFFF8);
                          *(_OWORD *)&v27[8 * v54 + 8] = *(_OWORD *)(v56 + *(_QWORD *)v31 + 160);
                          *(_OWORD *)&v27[8 * v54 + 24] = *(_OWORD *)(v56 + v55 + 176);
                          *(_DWORD *)&v27[8 * v54 + 40] = *(_DWORD *)(v56 + v55 + 192);
                        }
                        VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++((unsigned int *)&v87);
                        if ( VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::end((VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR *)&v87) )
                          break;
                        v52 = v93;
                        v53 = v92;
                      }
                      v35 = v86;
                      v33 = v81;
                      v101 = v36;
                    }
                    v57 = v94;
                    *(_DWORD *)&v23[v94 + 4] = *(v31 - 35);
                    *(_DWORD *)&v23[v57 + 8] = *(v31 - 34);
                    v58 = *(_DWORD *)&v23[v57 + 52] ^ ((unsigned __int16)*(_DWORD *)&v23[v57 + 52] ^ (unsigned __int16)((unsigned __int16)*(v31 - 30) << 10)) & 0x3C00;
                    *(_DWORD *)&v23[v57 + 52] = v58;
                    *(_DWORD *)&v23[v57 + 12] = *(v31 - 28);
                    *(_QWORD *)&v23[v57 + 16] = *((_QWORD *)v31 - 11);
                    *(_QWORD *)&v23[v57 + 24] = *((_QWORD *)v31 - 10);
                    *(_QWORD *)&v23[v57 + 40] = *((_QWORD *)v31 - 8);
                    v59 = v58 ^ (v58 ^ (*((unsigned __int8 *)v31 - 116) << 18)) & 0x40000;
                    *(_DWORD *)&v23[v57 + 52] = v59;
                    v23[v57 + 48] = *((_BYTE *)v31 - 104);
                    v23[v57 + 49] = *((_BYTE *)v31 - 100);
                    v60 = v59 ^ ((unsigned __int16)v59 ^ (unsigned __int16)((unsigned __int16)*(v31 - 10) << 10)) & 0x4000;
                    *(_DWORD *)&v23[v57 + 52] = v60;
                    v61 = v60 ^ ((unsigned __int16)v60 ^ (unsigned __int16)((unsigned __int16)*(v31 - 10) << 10)) & 0x8000;
                    *(_DWORD *)&v23[v57 + 52] = v61;
                    v62 = v61 ^ (v61 ^ (*(v31 - 10) << 9)) & 0x10000;
                    *(_DWORD *)&v23[v57 + 52] = v62;
                    *(_DWORD *)&v23[v57 + 52] = v62 ^ (v62 ^ (*(v31 - 10) << 9)) & 0x20000;
                    ++v32;
                  }
                  v35 += 4;
                  v31 += 350;
                  --v33;
                  v86 = v35;
                  v81 = v33;
                }
                while ( v33 );
                v22 = v85;
                v76 = v32;
                v26 = ++v98;
              }
              v25 = v82;
              ++v24;
            }
            v4 = a2;
            v3 = a3;
          }
        }
      }
      v63 = 0;
      v4[14] = *(_DWORD *)(v8 + 2464);
      v4[15] = *(_DWORD *)(v8 + 40);
      v4[10] = *(_DWORD *)(v8 + 152);
      v4[11] = NumOverlayPlanesUsed;
      v4[12] = v78;
      v4[13] = NumFlipQueueEntriesUsed;
      for ( v4[9] = *(_DWORD *)(v8 + 76);
            v63 < *(_DWORD *)(v8 + 40);
            v4[v64 + 16] = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 3120LL) + 128LL)
                                     + 4024 * v64
                                     + 1072) )
      {
        v64 = v63++;
      }
      v3 -= v95;
      v15 = 4LL;
      v4 = (unsigned int *)((char *)v4 + v95);
    }
    if ( v3 >= 0x40 )
    {
      v65 = v4;
      v66 = 4LL;
      v67 = (*(_DWORD *)(v8 + 6648) - 1) & 3;
      do
      {
        *(_QWORD *)v65 = *(_QWORD *)(v8 + 8 * v67 + 6656);
        v65[2] = *(_DWORD *)(v8 + 4 * v67 + 6688);
        v67 = ((_DWORD)v67 - 1) & 3;
        v65 += 4;
        --v66;
      }
      while ( v66 );
      v3 -= 64LL;
      v4 += 16;
    }
    for ( i = 0; i < *(_DWORD *)(v8 + 40); ++i )
    {
      v69 = *(_QWORD *)(v8 + 8LL * i + 3432);
      if ( v3 >= 0x160 && v69 )
      {
        v70 = 4LL;
        v71 = (*(_DWORD *)(v69 + 44492) - 1) & 3;
        do
        {
          *(_QWORD *)v4 = *(_QWORD *)(v69 + 8 * v71 + 44496);
          v72 = 10 * v71;
          v71 = ((_DWORD)v71 - 1) & 3;
          *(_OWORD *)(v4 + 2) = *(_OWORD *)(v69 + 8 * v72 + 44528);
          *(_OWORD *)(v4 + 6) = *(_OWORD *)(v69 + 8 * v72 + 44544);
          *(_OWORD *)(v4 + 10) = *(_OWORD *)(v69 + 8 * v72 + 44560);
          *(_OWORD *)(v4 + 14) = *(_OWORD *)(v69 + 8 * v72 + 44576);
          *(_OWORD *)(v4 + 18) = *(_OWORD *)(v69 + 8 * v72 + 44592);
          v4 += 22;
          --v70;
        }
        while ( v70 );
        v3 -= 352LL;
      }
    }
    if ( v3 >= 0x160 )
    {
      v73 = (*(_DWORD *)(v8 + 6288) - 1) & 3;
      do
      {
        *(_QWORD *)v4 = *(_QWORD *)(v8 + 8 * v73 + 6296);
        v74 = 10 * v73;
        v4 += 22;
        v73 = ((_DWORD)v73 - 1) & 3;
        *((_OWORD *)v4 - 5) = *(_OWORD *)(v8 + 8 * v74 + 6328);
        *((_OWORD *)v4 - 4) = *(_OWORD *)(v8 + 8 * v74 + 6344);
        *((_OWORD *)v4 - 3) = *(_OWORD *)(v8 + 8 * v74 + 6360);
        *((_OWORD *)v4 - 2) = *(_OWORD *)(v8 + 8 * v74 + 6376);
        *((_OWORD *)v4 - 1) = *(_OWORD *)(v8 + 8 * v74 + 6392);
        --v15;
      }
      while ( v15 );
    }
  }
  return 0LL;
}
