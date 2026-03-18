/*
 * XREFs of ?VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_DEVICE@@@Z @ 0x140026374
 * Callers:
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N7@Z @ 0x140025748 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_C.c)
 * Callees:
 *     McTemplateK0pqqpqqqxxqqpqit_EtwWriteTransfer @ 0x140025170 (McTemplateK0pqqpqqqxxqqpqit_EtwWriteTransfer.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x140026328 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?ZeroFlipQueueEntry@_VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ @ 0x1400276AC (-ZeroFlipQueueEntry@_VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ.c)
 *     VidSchUnwaitFlipQueue @ 0x14002A240 (VidSchUnwaitFlipQueue.c)
 *     ?GetFlipManagerAuxiliaryPresentInfo@@YAPEAU_D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO@@PEAU_D3DKMT_AUXILIARYPRESENTINFO@@@Z @ 0x14002CF78 (-GetFlipManagerAuxiliaryPresentInfo@@YAPEAU_D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO@@PEAU_D3DKMT.c)
 *     McTemplateK0qqqq_EtwWriteTransfer @ 0x14004A6B4 (McTemplateK0qqqq_EtwWriteTransfer.c)
 *     memmove @ 0x140056040 (memmove.c)
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
  int v34; // eax
  int v35; // ecx
  int v36; // ecx
  char v37; // r15
  int v38; // ecx
  int v39; // eax
  int v40; // ecx
  int v41; // edx
  int v42; // ecx
  __int64 v43; // rax
  void *v44; // rcx
  int v45; // edx
  int v46; // ecx
  int v47; // eax
  __int64 v48; // rax
  unsigned int k; // r8d
  unsigned int v50; // r8d
  unsigned int v51; // r9d
  int v52; // ecx
  unsigned int v53; // eax
  unsigned int v54; // ecx
  __int64 m; // r8
  __int64 v56; // rdx
  unsigned int v57; // r15d
  __int64 v58; // r12
  __int64 v59; // rcx
  int v60; // ecx
  __int64 v61; // rax
  __int64 v62; // r8
  __int64 v63; // rdx
  __int64 v64; // rcx
  unsigned __int64 v65; // r9
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rax
  int v70; // ecx
  int v71; // eax
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  unsigned int v75; // edx
  int *v76; // rcx
  int v77; // eax
  struct _D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO *FlipManagerAuxiliaryPresentInfo; // rax
  int v79; // ecx
  unsigned int v80; // [rsp+90h] [rbp-68h]
  unsigned int v81; // [rsp+A0h] [rbp-58h]
  __int64 v82; // [rsp+A8h] [rbp-50h]
  int v86; // [rsp+118h] [rbp+20h]
  char v87; // [rsp+128h] [rbp+30h]

  v6 = -1;
  v7 = *((unsigned int *)a4 + 29);
  j = !_BitScanForward((unsigned int *)&v10, *((_DWORD *)a4 + 150) & 0x3FF);
  v11 = *((_QWORD *)a6 + 4);
  if ( !j )
    v6 = v10;
  v12 = 0;
  v13 = *(_QWORD *)(v11 + 8 * v7 + 3432);
  if ( v6 != -1 )
    v12 = v6;
  v80 = v12;
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
  v87 = v22;
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
    v22 = v87;
LABEL_10:
    v23 = *((_DWORD *)a4 + 31);
    v86 = v23;
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
  v86 = v23;
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
    WdLogGlobalForLineNumber = 1752;
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
  v82 = *(_QWORD *)(v13 + 8LL * v80 + 40);
  v81 = *(_DWORD *)(v82 + 56);
  v30 = v82 + 1400LL * v81;
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
  *(_DWORD *)(v30 + 1168) = a5.LowPart;
  *(_DWORD *)(v30 + 1172) = 1;
  *(_DWORD *)(v30 + 1176) = *((_DWORD *)a4 + 28);
  *(_QWORD *)(v30 + 1184) = ++*(_QWORD *)(v82 + 88);
  if ( a2 )
  {
    *(_QWORD *)(v30 + 640) = *((_QWORD *)a2 + 20);
  }
  else if ( !a3 )
  {
    *(_QWORD *)(v30 + 1208) = 0LL;
    v34 = 1;
    goto LABEL_35;
  }
  *(_DWORD *)(v30 + 1212) = *((_DWORD *)a4 + 35);
  *(_DWORD *)(v30 + 1208) = *((_DWORD *)a4 + 35);
  v34 = *((_DWORD *)a4 + 35);
LABEL_35:
  *(_DWORD *)(v30 + 1216) = v34;
  *(_QWORD *)(v30 + 1160) = a6;
  *(_BYTE *)(v30 + 1196) = (*(_DWORD *)a4 & 0x10) != 0;
  v35 = *(_DWORD *)(v11 + 2804);
  if ( !v35 )
    goto LABEL_78;
  v36 = v35 - 1;
  if ( !v36 )
  {
LABEL_37:
    v37 = 0;
    goto LABEL_38;
  }
  if ( v36 != 1 )
  {
LABEL_78:
    if ( (*(_DWORD *)a4 & 0x10000000) == 0 )
      goto LABEL_37;
  }
  v37 = 1;
  if ( (*(_DWORD *)(v30 + 1272) & 0x10) != 0 && !*(_BYTE *)(v11 + 156) )
    goto LABEL_37;
LABEL_38:
  v38 = *(_DWORD *)(v30 + 1272) ^ (*(_DWORD *)(v30 + 1272) ^ (*(_DWORD *)a4 >> 19)) & 1;
  *(_DWORD *)(v30 + 1272) = v38;
  v39 = v38 ^ ((unsigned __int8)v38 ^ (unsigned __int8)(*(_DWORD *)a4 >> 19)) & 2;
  *(_DWORD *)(v30 + 1272) = v39;
  v40 = v39 ^ ((unsigned __int8)v39 ^ (unsigned __int8)(*(_DWORD *)a4 >> 19)) & 4;
  *(_DWORD *)(v30 + 1272) = v40;
  v41 = v40 ^ ((unsigned __int8)v40 ^ (unsigned __int8)(*(_DWORD *)a4 >> 19)) & 8;
  *(_DWORD *)(v30 + 1272) = v41;
  *(_QWORD *)(v30 + 1296) = *((_QWORD *)a4 + 3);
  v42 = v41 ^ ((unsigned __int16)v41 ^ (*(_DWORD *)a4 >> 20)) & 0x400;
  *(_DWORD *)(v30 + 1272) = v42;
  *(_DWORD *)(v30 + 1272) = v42 ^ (v42 ^ (*((_DWORD *)a4 + 1) << 11)) & 0x80000;
  v43 = *((_QWORD *)a4 + 4);
  *(_QWORD *)(v30 + 1304) = v43;
  if ( v43 )
    _InterlockedAdd((volatile signed __int32 *)(v43 + 12), 1u);
  v44 = (void *)*((_QWORD *)a4 + 4);
  if ( v44 )
  {
    CRefCountedBuffer::RefCountedBufferRelease(v44);
    *((_QWORD *)a4 + 4) = 0LL;
  }
  v45 = *(_DWORD *)(v30 + 1272);
  v46 = *((_DWORD *)a4 + 90);
  *(_DWORD *)(v30 + 1320) = v46;
  if ( (v45 & 0x400) != 0 )
  {
    v70 = v46 - 1;
    if ( v70 )
    {
      if ( v70 == 1 )
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
  v47 = v45 ^ (v45 ^ (*(_DWORD *)a4 >> 20)) & 0x800;
  *(_DWORD *)(v30 + 1272) = v47;
  if ( (v47 & 0x800) != 0 )
  {
    *(_OWORD *)(v30 + 1396) = *(_OWORD *)((char *)a4 + 436);
    *(_OWORD *)(v30 + 1412) = *(_OWORD *)((char *)a4 + 452);
  }
  v48 = *((_QWORD *)a4 + 70);
  if ( v48 )
  {
    *(_QWORD *)(v30 + 1472) = v48;
    *(_DWORD *)(v30 + 1480) = *((_DWORD *)a4 + 142);
    *(_QWORD *)(v30 + 1488) = *((_QWORD *)a4 + 72);
    *(_QWORD *)(v30 + 1496) = *((_QWORD *)a4 + 73);
    *(_QWORD *)(v30 + 1504) = *((_QWORD *)a4 + 74);
    v79 = *(_DWORD *)(v30 + 1512) ^ (*(_DWORD *)(v30 + 1512) ^ (*((_DWORD *)a4 + 1) >> 5)) & 1;
    *(_DWORD *)(v30 + 1512) = v79;
    *(_DWORD *)(v30 + 1512) = v79 ^ ((unsigned __int8)v79 ^ (unsigned __int8)(*((_DWORD *)a4 + 1) >> 3)) & 2;
  }
  for ( k = 0; k < *(_DWORD *)(v30 + 1216); ++k )
  {
    if ( a2 )
    {
      v63 = 8LL * k;
      v64 = *(_QWORD *)((char *)a4 + v63 + *((unsigned int *)a4 + 138));
      *(_QWORD *)(v63 + v30 + 120) = v64;
      ++*(_DWORD *)(v64 + 792);
    }
    v65 = ((unsigned __int64)(k * *((_DWORD *)a4 + 151)) << 6)
        + *((_DWORD *)a4 + 151) * ((8 * *((_DWORD *)a4 + 152) + 231) & 0xFFFFFFF8);
    v66 = *(_QWORD *)((char *)a4 + v65 + 648);
    v67 = *(_QWORD *)(v66 + 96);
    v68 = *(_QWORD *)(v67 + 32);
    if ( v68 )
    {
      *(_QWORD *)((char *)a4 + v65 + 664) = ++*(_QWORD *)(v68 + 16);
      v72 = *(_QWORD *)(*(_QWORD *)(v66 + 96) + 32LL);
      *(_QWORD *)((char *)a4 + v65 + 672) = ++*(_QWORD *)(v72 + 24);
      v73 = *(_QWORD *)(*(_QWORD *)(v66 + 96) + 32LL);
      v74 = 2LL * *(unsigned int *)(v73 + 32);
      *(_OWORD *)(v73 + 8 * v74 + 40) = 0LL;
      *(_DWORD *)(v73 + 32) = ((unsigned __int8)*(_DWORD *)(v73 + 32) + 1) & 7;
      *(_DWORD *)(v73 + 8 * v74 + 40) = 0;
      *(_QWORD *)(v73 + 8 * v74 + 48) = *(_QWORD *)((char *)a4 + v65 + 672);
    }
    else
    {
      v69 = *(_QWORD *)(v67 + 24);
      if ( v69 )
        _InterlockedAdd((volatile signed __int32 *)(v69 + 8), 1u);
    }
  }
  *(_DWORD *)(v30 + 1276) = v24;
  if ( *(_BYTE *)(v30 + 1196) )
  {
    *(_DWORD *)(v30 + 1192) = 0;
    if ( v86 )
    {
LABEL_50:
      v50 = 0;
      goto LABEL_51;
    }
LABEL_95:
    v71 = *(_DWORD *)(v30 + 1272) | 0x80;
    *(_DWORD *)(v30 + 1272) = v71;
    if ( v37 )
      *(_DWORD *)(v30 + 1272) = v71 | 0x100;
    goto LABEL_50;
  }
  if ( !v86 )
  {
    *(_DWORD *)(v30 + 1192) = 0;
    goto LABEL_95;
  }
  *(_DWORD *)(v30 + 1192) = v86;
  v50 = v86;
LABEL_51:
  v51 = *(_DWORD *)(v30 + 1456);
  if ( !v51 )
  {
    *(_DWORD *)(v30 + 1456) = 1;
    v51 = 1;
  }
  if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v30 + 1160) + 40LL) + 16LL) + 138LL) )
  {
    v75 = *(_DWORD *)(v13 + 83092);
    if ( v51 != v75 && (*(_DWORD *)(v30 + 1272) & 0x100) == 0 && *(_DWORD *)(v13 + 4) != 3 )
    {
      v76 = (int *)(v30 + 1192);
      if ( v51 < v75 )
      {
        if ( v50 )
        {
          v75 *= v50;
          v76 = (int *)(v30 + 1192);
        }
        v77 = v75;
      }
      else
      {
        v77 = v50 / v51;
        v75 = v50 / v51;
      }
      *v76 = v77;
      if ( (byte_140081244 & 4) != 0 )
        McTemplateK0qqqq_EtwWriteTransfer(
          (_DWORD)v76,
          (unsigned int)&EventVirtualizeFlipSubmissionRate,
          v50,
          v51,
          *(_DWORD *)(v13 + 83092),
          v50,
          v75);
    }
  }
  v52 = *(_DWORD *)(v30 + 1272);
  *(_DWORD *)(v30 + 1456) = *(_DWORD *)(v13 + 83092);
  if ( (v52 & 0x180) == 0x80 && (*(_DWORD *)(v13 + 83108) & 1) != 0 && v87 )
    *(_DWORD *)(v30 + 1272) = v52 | 0x200;
  memmove(*(void **)(v30 + 1312), (char *)a4 + 600, *((unsigned int *)a4 + 153));
  v53 = *(_DWORD *)(v11 + 152);
  v54 = 0;
  for ( m = *(_QWORD *)(v30 + 1312); v54 < v53; ++v54 )
  {
    v56 = *(_QWORD *)(v54 * ((8 * *(_DWORD *)(m + 8) + 231) & 0xFFFFFFF8) + m + 200);
    if ( v56 )
      _InterlockedIncrement((volatile signed __int32 *)(v56 + 12));
    v53 = *(_DWORD *)(v11 + 152);
  }
  v57 = 0;
  if ( v53 )
  {
    do
    {
      v58 = v57 * ((8 * *((_DWORD *)a4 + 152) + 231) & 0xFFFFFFF8);
      v59 = *(_QWORD *)((char *)a4 + v58 + 800);
      if ( v59 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v59 + 12), 0xFFFFFFFF) == 1 )
        {
          if ( *(_QWORD *)v59 )
            ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)v59, (PVOID)v59);
          else
            ExFreePoolWithTag((PVOID)v59, 0);
        }
        *(_QWORD *)((char *)a4 + v58 + 800) = 0LL;
      }
      ++v57;
    }
    while ( v57 < *(_DWORD *)(v11 + 152) );
  }
  *(_DWORD *)(v30 + 1200) = *((_DWORD *)a4 + 34);
  *(_DWORD *)(v30 + 1204) = *((_DWORD *)a4 + 34);
  if ( (*((_DWORD *)a4 + 1) & 2) != 0 )
  {
    v60 = *(_DWORD *)(v30 + 1272) | 0x2000;
    *(_DWORD *)(v30 + 1272) = v60;
    *(_QWORD *)(v30 + 1432) = *((_QWORD *)a4 + 60);
    v61 = *((_QWORD *)a4 + 61);
    *(_DWORD *)(v30 + 1192) = 0;
    *(_QWORD *)(v30 + 1464) = v61;
    *(_DWORD *)(v30 + 1272) = v60 & 0xFFFFFF7F;
  }
  if ( (*(_DWORD *)a4 & 0x800) != 0 )
    *(_BYTE *)(v30 + 1197) = 1;
  *(_DWORD *)(v82 + 56) = ((_BYTE)v81 + 1) & 0x3F;
  _InterlockedIncrement((volatile signed __int32 *)(v11 + 864));
  _InterlockedIncrement((volatile signed __int32 *)(v13 + 3240));
  if ( bTracingEnabled )
  {
    v62 = *((_QWORD *)a4 + 23);
    if ( v62 )
    {
      if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
        McTemplateK0pqqpqqqxxqqpqit_EtwWriteTransfer(
          (*(_DWORD *)(v30 + 1272) >> 8) & 1,
          (*(_DWORD *)(v30 + 1272) >> 19) & 1,
          v62);
    }
  }
  VidSchUnwaitFlipQueue(a1, v11);
}
