/*
 * XREFs of ?VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_DEVICE@@@Z @ 0x140012DDC
 * Callers:
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N7@Z @ 0x1400142E0 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_C.c)
 * Callees:
 *     ?GetFlipManagerAuxiliaryPresentInfo@@YAPEAU_D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO@@PEAU_D3DKMT_AUXILIARYPRESENTINFO@@@Z @ 0x14000C59C (-GetFlipManagerAuxiliaryPresentInfo@@YAPEAU_D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO@@PEAU_D3DKMT.c)
 *     VidSchUnwaitFlipQueue @ 0x14000EC30 (VidSchUnwaitFlipQueue.c)
 *     ?ZeroFlipQueueEntry@_VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ @ 0x14001292C (-ZeroFlipQueueEntry@_VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x140013A18 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     McTemplateK0pqqpqqqxxqqpqit_EtwWriteTransfer @ 0x14003E138 (McTemplateK0pqqpqqqxxqqpqit_EtwWriteTransfer.c)
 *     McTemplateK0qqqq_EtwWriteTransfer @ 0x14004AFA4 (McTemplateK0qqqq_EtwWriteTransfer.c)
 *     memmove @ 0x140056480 (memmove.c)
 */

void __fastcall VidSchiSubmitIndependentFlip(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_CONTEXT *a2,
        struct VIDSCH_HW_QUEUE *a3,
        struct VIDSCH_SUBMIT_DATA2 *a4,
        union _ULARGE_INTEGER a5,
        struct _VIDSCH_DEVICE *a6)
{
  char v6; // dl
  __int64 v7; // rdi
  int v10; // eax
  __int64 v11; // rbp
  char v12; // cl
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // r14
  unsigned int i; // r9d
  int v17; // edx
  __int64 v18; // r8
  unsigned int v19; // edx
  __int64 v20; // r8
  __int64 v21; // rdx
  char v22; // cl
  int v23; // r8d
  int v24; // r12d
  __int64 v25; // rcx
  unsigned int v26; // r8d
  bool j; // zf
  int v28; // eax
  char v29; // cl
  __int64 v30; // rdi
  int v31; // eax
  int v32; // ecx
  int v33; // eax
  char LowPart; // bl
  int v35; // eax
  int v36; // ecx
  int v37; // ecx
  char v38; // r15
  int v39; // ecx
  int v40; // eax
  int v41; // ecx
  int v42; // edx
  int v43; // ecx
  __int64 v44; // rax
  void *v45; // rcx
  int v46; // edx
  int v47; // ecx
  int v48; // eax
  __int64 v49; // rax
  unsigned int v50; // r8d
  unsigned int v51; // r8d
  unsigned int v52; // r9d
  int v53; // ecx
  unsigned int v54; // eax
  unsigned int v55; // ecx
  __int64 k; // r8
  __int64 v57; // rdx
  unsigned int v58; // r15d
  __int64 v59; // r12
  __int64 v60; // rcx
  int v61; // ecx
  __int64 v62; // rax
  __int64 v63; // r8
  __int64 v64; // rdx
  __int64 v65; // rcx
  unsigned __int64 v66; // r9
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rax
  int v71; // ecx
  int v72; // eax
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rcx
  unsigned int v76; // ecx
  __int64 v77; // r10
  int v78; // r11d
  int v79; // r15d
  __int64 v80; // r12
  __int64 v81; // rdi
  __int64 v82; // r14
  int v83; // esi
  int v84; // edx
  int v85; // ecx
  __int64 v86; // r9
  unsigned int v87; // edx
  int *v88; // rcx
  int v89; // eax
  struct _D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO *FlipManagerAuxiliaryPresentInfo; // rax
  int v91; // ecx
  unsigned int v92; // [rsp+90h] [rbp-68h]
  unsigned int v93; // [rsp+A0h] [rbp-58h]
  char v94; // [rsp+A4h] [rbp-54h]
  __int64 v95; // [rsp+A8h] [rbp-50h]
  int v99; // [rsp+118h] [rbp+20h]
  char v100; // [rsp+128h] [rbp+30h]

  v6 = -1;
  v7 = *((unsigned int *)a4 + 29);
  j = !_BitScanForward((unsigned int *)&v10, *((_DWORD *)a4 + 150) & 0x3FF);
  v11 = *((_QWORD *)a6 + 4);
  if ( !j )
    v6 = v10;
  v94 = *((_DWORD *)a4 + 29);
  v12 = 0;
  v13 = *(_QWORD *)(v11 + 8 * v7 + 3432);
  if ( v6 != -1 )
    v12 = v6;
  v92 = v12;
  v14 = *(int *)(304LL * (unsigned int)v12 + v13 + 188);
  if ( (int)v14 <= -1 )
    v15 = 0LL;
  else
    v15 = *(_QWORD *)(v11 + 3560) + 160 * v14;
  for ( i = 0; i < *((_DWORD *)a4 + 35); *(_WORD *)((char *)a4 + v20 + 632) = *(_WORD *)(*(_QWORD *)(v21 + 96) + 10LL) )
  {
    v17 = *((_DWORD *)a4 + 151);
    v18 = v17 * ((8 * *((_DWORD *)a4 + 152) + 231) & 0xFFFFFFF8);
    v19 = i * v17;
    ++i;
    v20 = ((unsigned __int64)v19 << 6) + v18;
    v21 = *(_QWORD *)((char *)a4 + v20 + 648);
    *(_QWORD *)((char *)a4 + v20 + 640) = *(_QWORD *)(*(_QWORD *)(v21 + 96) + 40LL);
  }
  v22 = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)a6 + 5) + 16LL) + 137LL);
  v100 = v22;
  if ( (*(_DWORD *)a4 & 0x2000000) == 0 )
    goto LABEL_10;
  if ( (*((_DWORD *)a4 + 1) & 2) != 0 )
  {
    FlipManagerAuxiliaryPresentInfo = GetFlipManagerAuxiliaryPresentInfo(*((struct _D3DKMT_AUXILIARYPRESENTINFO **)a4
                                                                         + 61));
    if ( FlipManagerAuxiliaryPresentInfo && !*((_DWORD *)FlipManagerAuxiliaryPresentInfo + 3) )
    {
      v24 = *(_DWORD *)(v15 + 100);
      *((_DWORD *)a4 + 36) = v24;
      goto LABEL_15;
    }
    v22 = v100;
LABEL_10:
    v23 = *((_DWORD *)a4 + 31);
    v99 = v23;
    if ( !v23 && (*(_DWORD *)(v13 + 83108) & 1) != 0 && v22 )
      v24 = -1;
    else
      v24 = *(_DWORD *)(v13 + 83096);
    goto LABEL_18;
  }
  v24 = *((_DWORD *)a4 + 36);
  if ( v24 != *(_DWORD *)(v15 + 100) )
    goto LABEL_10;
LABEL_15:
  if ( !v24 )
    v24 = *(_DWORD *)(v13 + 83096);
  v23 = *((_DWORD *)a4 + 37);
  v99 = v23;
LABEL_18:
  _InterlockedIncrement((volatile signed __int32 *)a6 + v7 + 425);
  v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a6 + 5) + 32LL)
                              + 8LL * *(unsigned int *)(*((_QWORD *)a6 + 4) + 4LL))
                  + 8 * v7
                  + 88);
  if ( (*(_DWORD *)a4 & 0x80u) == 0 )
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v11 + 8 * v7 + 6712) + 8LL));
  _InterlockedIncrement((volatile signed __int32 *)(v25 + 8));
  if ( *(_DWORD *)(v15 + 112) == 1 )
  {
    WdLogSingleEntry5(
      8LL,
      *((_QWORD *)a4 + 13),
      *((unsigned int *)a4 + 28),
      v23,
      *(_QWORD *)((char *)a4 + *((_DWORD *)a4 + 151) * ((8 * *((_DWORD *)a4 + 152) + 231) & 0xFFFFFFF8) + 640),
      *(unsigned __int16 *)((char *)a4 + *((_DWORD *)a4 + 151) * ((8 * *((_DWORD *)a4 + 152) + 231) & 0xFFFFFFF8) + 632));
    *(_DWORD *)(v15 + 116) = 0;
    WdLogGlobalForLineNumber = 1755;
    *(_DWORD *)(v15 + 112) = 2;
    *(_QWORD *)(v15 + 152) = a6;
  }
  ++*(_DWORD *)(v11 + 860);
  ++*((_DWORD *)a6 + 458);
  ++*(_DWORD *)(v15 + 116);
  ++*(_DWORD *)(v13 + 3236);
  if ( (*(_DWORD *)a4 & 0x4000000) != 0 )
    v26 = ((unsigned __int16)*((_DWORD *)a4 + 150) | (unsigned __int16)(*((_DWORD *)a4 + 150) >> 10)) & 0x3FF;
  else
    v26 = (1 << *(_DWORD *)(v11 + 152)) - 1;
  for ( j = !_BitScanForward((unsigned int *)&v28, v26); ; j = !_BitScanForward((unsigned int *)&v28, v26) )
  {
    v29 = -1;
    if ( !j )
      v29 = v28;
    if ( !v26 )
      break;
    ++*(_DWORD *)(304LL * v29 + *(_QWORD *)(v11 + 8 * v7 + 3432) + 196);
    v26 &= ~(1 << v29);
  }
  v95 = *(_QWORD *)(v13 + 8LL * v92 + 40);
  v93 = *(_DWORD *)(v95 + 56);
  v30 = v95 + 1400LL * v93;
  _VIDSCH_FLIP_QUEUE_ENTRY::ZeroFlipQueueEntry((_VIDSCH_FLIP_QUEUE_ENTRY *)(v30 + 120));
  *(_QWORD *)(v30 + 1280) = *((_QWORD *)a4 + 12);
  *(_QWORD *)(v30 + 1288) = *((_QWORD *)a4 + 13);
  v31 = *(_DWORD *)(v30 + 1272) | 0x20;
  *(_DWORD *)(v30 + 1272) = v31;
  v32 = v31 ^ ((unsigned __int8)v31 ^ (unsigned __int8)(*(_DWORD *)a4 >> 22)) & 0x10;
  *(_DWORD *)(v30 + 1272) = v32;
  if ( (*(_DWORD *)a4 & 8) != 0 && *(_DWORD *)(v11 + 2808) == 2 )
    *(_DWORD *)(v30 + 1272) = v32 | 0x1000;
  v33 = *((_DWORD *)a4 + 36);
  if ( v33 != *(_DWORD *)(v15 + 104) )
  {
    *(_DWORD *)(v15 + 104) = v33;
    *(_DWORD *)(v30 + 1272) |= 0x40u;
  }
  LowPart = a5.LowPart;
  *(_DWORD *)(v30 + 1168) = a5.LowPart;
  *(_DWORD *)(v30 + 1172) = 1;
  *(_DWORD *)(v30 + 1176) = *((_DWORD *)a4 + 28);
  *(_QWORD *)(v30 + 1184) = ++*(_QWORD *)(v95 + 88);
  if ( a2 )
  {
    *(_QWORD *)(v30 + 640) = *((_QWORD *)a2 + 20);
  }
  else if ( !a3 )
  {
    *(_QWORD *)(v30 + 1208) = 0LL;
    v35 = 1;
    goto LABEL_35;
  }
  *(_DWORD *)(v30 + 1212) = *((_DWORD *)a4 + 35);
  *(_DWORD *)(v30 + 1208) = *((_DWORD *)a4 + 35);
  v35 = *((_DWORD *)a4 + 35);
LABEL_35:
  *(_DWORD *)(v30 + 1216) = v35;
  *(_QWORD *)(v30 + 1160) = a6;
  *(_BYTE *)(v30 + 1196) = (*(_DWORD *)a4 & 0x10) != 0;
  v36 = *(_DWORD *)(v11 + 2804);
  if ( !v36 )
    goto LABEL_77;
  v37 = v36 - 1;
  if ( !v37 )
  {
LABEL_37:
    v38 = 0;
    goto LABEL_38;
  }
  if ( v37 != 1 )
  {
LABEL_77:
    if ( (*(_DWORD *)a4 & 0x10000000) == 0 )
      goto LABEL_37;
  }
  v38 = 1;
  if ( (*(_DWORD *)(v30 + 1272) & 0x10) != 0 && !*(_BYTE *)(v11 + 156) )
    goto LABEL_37;
LABEL_38:
  v39 = *(_DWORD *)(v30 + 1272) ^ (*(_DWORD *)(v30 + 1272) ^ (*(_DWORD *)a4 >> 19)) & 1;
  *(_DWORD *)(v30 + 1272) = v39;
  v40 = v39 ^ ((unsigned __int8)v39 ^ (unsigned __int8)(*(_DWORD *)a4 >> 19)) & 2;
  *(_DWORD *)(v30 + 1272) = v40;
  v41 = v40 ^ ((unsigned __int8)v40 ^ (unsigned __int8)(*(_DWORD *)a4 >> 19)) & 4;
  *(_DWORD *)(v30 + 1272) = v41;
  v42 = v41 ^ ((unsigned __int8)v41 ^ (unsigned __int8)(*(_DWORD *)a4 >> 19)) & 8;
  *(_DWORD *)(v30 + 1272) = v42;
  *(_QWORD *)(v30 + 1296) = *((_QWORD *)a4 + 3);
  v43 = v42 ^ ((unsigned __int16)v42 ^ (*(_DWORD *)a4 >> 20)) & 0x400;
  *(_DWORD *)(v30 + 1272) = v43;
  *(_DWORD *)(v30 + 1272) = v43 ^ (v43 ^ (*((_DWORD *)a4 + 1) << 11)) & 0x80000;
  v44 = *((_QWORD *)a4 + 4);
  *(_QWORD *)(v30 + 1304) = v44;
  if ( v44 )
    _InterlockedAdd((volatile signed __int32 *)(v44 + 12), 1u);
  v45 = (void *)*((_QWORD *)a4 + 4);
  if ( v45 )
  {
    CRefCountedBuffer::RefCountedBufferRelease(v45);
    *((_QWORD *)a4 + 4) = 0LL;
  }
  v46 = *(_DWORD *)(v30 + 1272);
  v47 = *((_DWORD *)a4 + 90);
  *(_DWORD *)(v30 + 1320) = v47;
  if ( (v46 & 0x400) != 0 )
  {
    v71 = v47 - 1;
    if ( v71 )
    {
      if ( v71 == 1 )
      {
        *(_OWORD *)(v30 + 1324) = *(_OWORD *)((char *)a4 + 364);
        *(_OWORD *)(v30 + 1340) = *(_OWORD *)((char *)a4 + 380);
        *(_OWORD *)(v30 + 1356) = *(_OWORD *)((char *)a4 + 396);
        *(_OWORD *)(v30 + 1372) = *(_OWORD *)((char *)a4 + 412);
        *(_QWORD *)(v30 + 1388) = *(_QWORD *)((char *)a4 + 428);
      }
    }
    else
    {
      *(_OWORD *)(v30 + 1324) = *(_OWORD *)((char *)a4 + 364);
      *(_QWORD *)(v30 + 1340) = *(_QWORD *)((char *)a4 + 380);
      *(_DWORD *)(v30 + 1348) = *((_DWORD *)a4 + 97);
    }
  }
  v48 = v46 ^ (v46 ^ (*(_DWORD *)a4 >> 20)) & 0x800;
  *(_DWORD *)(v30 + 1272) = v48;
  if ( (v48 & 0x800) != 0 )
  {
    *(_OWORD *)(v30 + 1396) = *(_OWORD *)((char *)a4 + 436);
    *(_OWORD *)(v30 + 1412) = *(_OWORD *)((char *)a4 + 452);
  }
  v49 = *((_QWORD *)a4 + 70);
  if ( v49 )
  {
    *(_QWORD *)(v30 + 1472) = v49;
    *(_DWORD *)(v30 + 1480) = *((_DWORD *)a4 + 142);
    *(_QWORD *)(v30 + 1488) = *((_QWORD *)a4 + 72);
    *(_QWORD *)(v30 + 1496) = *((_QWORD *)a4 + 73);
    *(_QWORD *)(v30 + 1504) = *((_QWORD *)a4 + 74);
    v91 = *(_DWORD *)(v30 + 1512) ^ (*(_DWORD *)(v30 + 1512) ^ (*((_DWORD *)a4 + 1) >> 5)) & 1;
    *(_DWORD *)(v30 + 1512) = v91;
    *(_DWORD *)(v30 + 1512) = v91 ^ ((unsigned __int8)v91 ^ (unsigned __int8)(*((_DWORD *)a4 + 1) >> 3)) & 2;
  }
  v50 = 0;
  if ( *(_DWORD *)(v30 + 1216) )
  {
    do
    {
      if ( a2 )
      {
        v64 = 8LL * v50;
        v65 = *(_QWORD *)((char *)a4 + v64 + *((unsigned int *)a4 + 138));
        *(_QWORD *)(v64 + v30 + 120) = v65;
        ++*(_DWORD *)(v65 + 792);
      }
      v66 = ((unsigned __int64)(v50 * *((_DWORD *)a4 + 151)) << 6)
          + *((_DWORD *)a4 + 151) * ((8 * *((_DWORD *)a4 + 152) + 231) & 0xFFFFFFF8);
      v67 = *(_QWORD *)((char *)a4 + v66 + 648);
      v68 = *(_QWORD *)(v67 + 96);
      v69 = *(_QWORD *)(v68 + 32);
      if ( v69 )
      {
        *(_QWORD *)((char *)a4 + v66 + 664) = ++*(_QWORD *)(v69 + 16);
        v73 = *(_QWORD *)(*(_QWORD *)(v67 + 96) + 32LL);
        *(_QWORD *)((char *)a4 + v66 + 672) = ++*(_QWORD *)(v73 + 24);
        v74 = *(_QWORD *)(*(_QWORD *)(v67 + 96) + 32LL);
        v75 = 2LL * *(unsigned int *)(v74 + 32);
        *(_OWORD *)(v74 + 8 * v75 + 40) = 0LL;
        *(_DWORD *)(v74 + 32) = ((unsigned __int8)*(_DWORD *)(v74 + 32) + 1) & 7;
        *(_DWORD *)(v74 + 8 * v75 + 40) = 0;
        *(_QWORD *)(v74 + 8 * v75 + 48) = *(_QWORD *)((char *)a4 + v66 + 672);
      }
      else
      {
        v70 = *(_QWORD *)(v68 + 24);
        if ( v70 )
          _InterlockedAdd((volatile signed __int32 *)(v70 + 8), 1u);
      }
      ++v50;
    }
    while ( v50 < *(_DWORD *)(v30 + 1216) );
    LowPart = a5.LowPart;
  }
  *(_DWORD *)(v30 + 1276) = v24;
  if ( *(_BYTE *)(v30 + 1196) )
  {
    *(_DWORD *)(v30 + 1192) = 0;
    if ( v99 )
    {
LABEL_50:
      v51 = 0;
      goto LABEL_51;
    }
LABEL_94:
    v72 = *(_DWORD *)(v30 + 1272) | 0x80;
    *(_DWORD *)(v30 + 1272) = v72;
    if ( v38 )
      *(_DWORD *)(v30 + 1272) = v72 | 0x100;
    goto LABEL_50;
  }
  if ( !v99 )
  {
    *(_DWORD *)(v30 + 1192) = 0;
    goto LABEL_94;
  }
  *(_DWORD *)(v30 + 1192) = v99;
  v51 = v99;
LABEL_51:
  v52 = *(_DWORD *)(v30 + 1456);
  if ( !v52 )
  {
    *(_DWORD *)(v30 + 1456) = 1;
    v52 = 1;
  }
  if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v30 + 1160) + 40LL) + 16LL) + 138LL) )
  {
    v87 = *(_DWORD *)(v13 + 83092);
    if ( v52 != v87 && (*(_DWORD *)(v30 + 1272) & 0x100) == 0 && *(_DWORD *)(v13 + 4) != 3 )
    {
      v88 = (int *)(v30 + 1192);
      if ( v52 < v87 )
      {
        if ( v51 )
        {
          v87 *= v51;
          v88 = (int *)(v30 + 1192);
        }
        v89 = v87;
      }
      else
      {
        v89 = v51 / v52;
        v87 = v51 / v52;
      }
      *v88 = v89;
      if ( (byte_140081244 & 4) != 0 )
        McTemplateK0qqqq_EtwWriteTransfer(
          (_DWORD)v88,
          (unsigned int)&EventVirtualizeFlipSubmissionRate,
          v51,
          v52,
          *(_DWORD *)(v13 + 83092),
          v51,
          v87);
    }
  }
  v53 = *(_DWORD *)(v30 + 1272);
  *(_DWORD *)(v30 + 1456) = *(_DWORD *)(v13 + 83092);
  if ( (v53 & 0x180) == 0x80 && (*(_DWORD *)(v13 + 83108) & 1) != 0 && v100 )
    *(_DWORD *)(v30 + 1272) = v53 | 0x200;
  memmove(*(void **)(v30 + 1312), (char *)a4 + 600, *((unsigned int *)a4 + 153));
  v54 = *(_DWORD *)(v11 + 152);
  v55 = 0;
  for ( k = *(_QWORD *)(v30 + 1312); v55 < v54; ++v55 )
  {
    v57 = *(_QWORD *)(v55 * ((8 * *(_DWORD *)(k + 8) + 231) & 0xFFFFFFF8) + k + 200);
    if ( v57 )
      _InterlockedIncrement((volatile signed __int32 *)(v57 + 12));
    v54 = *(_DWORD *)(v11 + 152);
  }
  v58 = 0;
  if ( v54 )
  {
    do
    {
      v59 = v58 * ((8 * *((_DWORD *)a4 + 152) + 231) & 0xFFFFFFF8);
      v60 = *(_QWORD *)((char *)a4 + v59 + 800);
      if ( v60 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v60 + 12), 0xFFFFFFFF) == 1 )
        {
          if ( *(_QWORD *)v60 )
            ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)v60, (PVOID)v60);
          else
            ExFreePoolWithTag((PVOID)v60, 0);
        }
        *(_QWORD *)((char *)a4 + v59 + 800) = 0LL;
      }
      ++v58;
    }
    while ( v58 < *(_DWORD *)(v11 + 152) );
  }
  *(_DWORD *)(v30 + 1200) = *((_DWORD *)a4 + 34);
  *(_DWORD *)(v30 + 1204) = *((_DWORD *)a4 + 34);
  if ( (*((_DWORD *)a4 + 1) & 2) != 0 )
  {
    v61 = *(_DWORD *)(v30 + 1272) | 0x2000;
    *(_DWORD *)(v30 + 1272) = v61;
    *(_QWORD *)(v30 + 1432) = *((_QWORD *)a4 + 60);
    v62 = *((_QWORD *)a4 + 61);
    *(_DWORD *)(v30 + 1192) = 0;
    *(_QWORD *)(v30 + 1464) = v62;
    *(_DWORD *)(v30 + 1272) = v61 & 0xFFFFFF7F;
  }
  if ( (*(_DWORD *)a4 & 0x800) != 0 )
    *(_BYTE *)(v30 + 1197) = 1;
  *(_DWORD *)(v95 + 56) = ((_BYTE)v93 + 1) & 0x3F;
  _InterlockedIncrement((volatile signed __int32 *)(v11 + 864));
  _InterlockedIncrement((volatile signed __int32 *)(v13 + 3240));
  if ( bTracingEnabled )
  {
    v63 = *((_QWORD *)a4 + 23);
    if ( v63 )
    {
      if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
      {
        v76 = *(_DWORD *)(v30 + 1272);
        v77 = *(_QWORD *)(v30 + 1432);
        v78 = *(_DWORD *)(v30 + 1276);
        v79 = *((_DWORD *)a4 + 28);
        v80 = *(_QWORD *)(v15 + 8);
        v81 = *(_QWORD *)(v30 + 1472);
        v82 = *(_QWORD *)v15;
        v83 = *((_DWORD *)a4 + 48);
        v84 = (v76 >> 19) & 1;
        v85 = (v76 >> 8) & 1;
        if ( a2 )
        {
          v86 = *((_QWORD *)a2 + 7);
          if ( !v86 || (*((_DWORD *)a2 + 28) & 0x40) != 0 )
            LODWORD(v86) = (_DWORD)a2;
        }
        else if ( a3 )
        {
          v86 = *((_QWORD *)a3 + 6);
          if ( !v86 )
            LODWORD(v86) = (_DWORD)a3;
        }
        else
        {
          LODWORD(v86) = 0;
        }
        McTemplateK0pqqpqqqxxqqpqit_EtwWriteTransfer(
          v85,
          v84,
          v63,
          v86,
          LowPart,
          v94,
          v63,
          v99,
          v92,
          v83,
          v82,
          v80,
          v79,
          v85,
          v81,
          v78,
          v77,
          v84);
      }
    }
  }
  VidSchUnwaitFlipQueue(a1, v11);
}
