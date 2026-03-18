/*
 * XREFs of ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140027780
 * Callers:
 *     ?VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x140011740 (-VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_H.c)
 *     ?VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x140051E80 (-VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_H.c)
 * Callees:
 *     ?VidSchiUpdateInterruptTargetsForAllPlanes@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14000A0EC (-VidSchiUpdateInterruptTargetsForAllPlanes@@YAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     VidSchiCompletePendingFlipOnPlane @ 0x14001C0D8 (VidSchiCompletePendingFlipOnPlane.c)
 *     VidSchiIsHardwareCompletedDependingCommandForFlip @ 0x1400237E0 (VidSchiIsHardwareCompletedDependingCommandForFlip.c)
 *     ?VidSchiAcquireFlipFencesReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x140027598 (-VidSchiAcquireFlipFencesReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@.c)
 *     ?VidSchiIsFocusHwContext@@YA_NPEAUVIDSCH_HW_CONTEXT@@@Z @ 0x140027678 (-VidSchiIsFocusHwContext@@YA_NPEAUVIDSCH_HW_CONTEXT@@@Z.c)
 *     ?ZeroFlipQueueEntry@_VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ @ 0x1400276AC (-ZeroFlipQueueEntry@_VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ.c)
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x140027710 (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x140028980 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     VidSchiExecuteMmIoFlip @ 0x14002D920 (VidSchiExecuteMmIoFlip.c)
 *     ?VidSchiCheckPendingFlipsForThisEntry@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x14002EEFC (-VidSchiCheckPendingFlipsForThisEntry@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VI.c)
 *     VidSchiRestartQueuedFlip @ 0x140031464 (VidSchiRestartQueuedFlip.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x140036E1C (McTemplateK0qqqqq_EtwWriteTransfer.c)
 *     McTemplateK0qqqq_EtwWriteTransfer @ 0x14004A6B4 (McTemplateK0qqqq_EtwWriteTransfer.c)
 *     memmove @ 0x140056040 (memmove.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchiSubmitHwQueueMmIoFlipCommand(struct HwQueueStagingList *a1, struct _VIDSCH_QUEUE_PACKET *a2)
{
  unsigned int v2; // r15d
  __int64 v3; // rax
  __int64 v5; // r9
  __int64 v6; // r10
  struct VIDSCH_FLIP_QUEUE *v7; // rbx
  __int64 v8; // r14
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // r12
  unsigned int v12; // r8d
  bool i; // zf
  int v14; // eax
  char v15; // cl
  __int64 v16; // r9
  int v17; // ecx
  int v18; // edx
  char *v19; // r15
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  unsigned __int16 v23; // r8
  _DWORD *v24; // r14
  unsigned int v25; // r8d
  int v26; // eax
  char v27; // cl
  int v28; // eax
  int *v29; // rdi
  int v30; // r8d
  bool IsFocusHwContext; // al
  int v32; // r8d
  int v33; // ecx
  int v34; // edx
  __int64 v35; // rax
  int v36; // edx
  int v37; // ecx
  unsigned int v38; // eax
  unsigned int v39; // ecx
  __int64 j; // r8
  __int64 v41; // rdx
  unsigned int v42; // ebx
  __int64 v43; // rdi
  __int64 v44; // rax
  int v45; // ecx
  int v46; // eax
  int v47; // ecx
  __int64 v48; // rax
  int v49; // eax
  int v50; // eax
  int v51; // eax
  char *v52; // rdx
  unsigned int v53; // r9d
  __int64 v54; // rcx
  bool v55; // dl
  int v56; // eax
  char v57; // r11
  unsigned int *v58; // rax
  unsigned int v59; // edx
  unsigned int v60; // r8d
  unsigned int v61; // edx
  int v62; // r10d
  int v63; // eax
  char v64; // cl
  int v65; // eax
  unsigned int v66; // r9d
  unsigned int v67; // eax
  struct _VIDSCH_FLIP_QUEUE_ENTRY *v68; // r15
  int v69; // ecx
  int v70; // eax
  int v71; // ecx
  __int64 v72; // rax
  unsigned int v73; // edx
  unsigned int v74; // r8d
  int v75; // eax
  int v76; // eax
  unsigned int v77; // edi
  int v78; // edi
  unsigned int v79; // r11d
  int v80; // ebx
  __int64 v81; // rdx
  int v82; // ecx
  __int64 v83; // rax
  __int64 v84; // r9
  unsigned __int64 v85; // r8
  __int64 v86; // rcx
  __int64 v87; // rax
  __int64 v88; // r10
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // rax
  __int64 v95; // r9
  int v96; // eax
  __int64 v97; // rcx
  int v98; // ecx
  __int64 *v99; // rax
  int v100; // [rsp+20h] [rbp-89h]
  unsigned int v101; // [rsp+40h] [rbp-69h]
  int v102; // [rsp+44h] [rbp-65h]
  unsigned int v103; // [rsp+48h] [rbp-61h]
  int v104; // [rsp+4Ch] [rbp-5Dh]
  struct VIDSCH_FLIP_QUEUE *v105; // [rsp+50h] [rbp-59h]
  unsigned int v106; // [rsp+70h] [rbp-39h]
  _QWORD *v107; // [rsp+78h] [rbp-31h]
  __int64 v108; // [rsp+80h] [rbp-29h]
  _QWORD v109[2]; // [rsp+88h] [rbp-21h] BYREF
  unsigned int v110; // [rsp+98h] [rbp-11h]
  unsigned int v111; // [rsp+9Ch] [rbp-Dh]
  int v112; // [rsp+A0h] [rbp-9h]
  unsigned int v113; // [rsp+A4h] [rbp-5h]
  unsigned int v114; // [rsp+A8h] [rbp-1h]
  struct _VIDSCH_FLIP_QUEUE_ENTRY *v115; // [rsp+B0h] [rbp+7h]
  char v117; // [rsp+118h] [rbp+6Fh] BYREF
  __int64 v118; // [rsp+120h] [rbp+77h] BYREF
  char v119; // [rsp+128h] [rbp+7Fh] BYREF

  v3 = *((unsigned int *)a2 + 42);
  v5 = *((_QWORD *)a2 + 12);
  v6 = (unsigned int)v3;
  v101 = *((_DWORD *)a2 + 42);
  v7 = *(struct VIDSCH_FLIP_QUEUE **)(v5 + 40);
  v8 = *((_QWORD *)v7 + 1);
  v118 = v8;
  v9 = *(_QWORD *)(v8 + 32);
  v10 = v9 + 8 * v3;
  v11 = *(_QWORD *)(v10 + 3432);
  if ( (*(_BYTE *)(v9 + 3268) & 1) != 0
    || *(_DWORD *)(v9 + 3244)
    || *(_BYTE *)(v8 + 204)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 200), 0, 0)
    || (*((_DWORD *)a2 + 16) & 0x20) != 0 )
  {
    goto LABEL_86;
  }
  v107 = (_QWORD *)(v8 + 8 * ((unsigned int)v3 + 47LL));
  if ( *((_QWORD *)a2 + 110) - *v107 > (unsigned __int64)(unsigned int)(64 - *(_DWORD *)(v11 + 3236)) )
  {
    v97 = *((int *)a2 + 12);
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 2048LL, v5, a2, v97);
    WdLogGlobalForLineNumber = 906;
LABEL_158:
    g_DxgMmsBugcheckExportIndex = v2;
    WdLogSingleEntry5(0LL, 281LL, 0x100000LL, v15, v6, v9);
    WdLogGlobalForLineNumber = 906;
LABEL_159:
    McTemplateK0qqqqq_EtwWriteTransfer(
      v17,
      (unsigned int)&EventBoostUnboostRefreshRate,
      v12,
      v6,
      *(_DWORD *)(v11 + 3192),
      v17,
      *((_DWORD *)a2 + 224),
      v18);
LABEL_153:
    *(_DWORD *)(v11 + 83092) = *((_DWORD *)a2 + 226);
    goto LABEL_21;
  }
  v117 = 0;
  v2 = 1;
  if ( *(_DWORD *)(v11 + 4) == 3 || !*((_DWORD *)a2 + 219) && (*((_DWORD *)a2 + 188) & 0x10000000) != 0 )
  {
    v102 = 1;
    v108 = 1LL;
  }
  else
  {
    v102 = 0;
    v108 = 0LL;
  }
  v105 = *(struct VIDSCH_FLIP_QUEUE **)(v11 + 32);
  if ( (*((_DWORD *)a2 + 18) & 0x800000) != 0 )
    v12 = ((unsigned __int16)*((_DWORD *)a2 + 338) | (unsigned __int16)(*((_DWORD *)a2 + 338) >> 10)) & 0x3FF;
  else
    v12 = (1 << *(_DWORD *)(v9 + 152)) - 1;
  for ( i = !_BitScanForward((unsigned int *)&v14, v12); ; i = !_BitScanForward((unsigned int *)&v14, v12) )
  {
    v15 = -1;
    if ( !i )
      v15 = v14;
    if ( !v12 )
      break;
    v16 = *(int *)(304LL * (unsigned int)v15 + *(_QWORD *)(v9 + 8 * v6 + 3432) + 188);
    if ( (int)v16 > -1 && *(_DWORD *)(160 * v16 + *(_QWORD *)(v9 + 3560) + 112) == 2 )
      goto LABEL_158;
    v12 &= ~(1 << v15);
  }
  if ( *(_BYTE *)(*(_QWORD *)(v8 + 40) + 2632LL) )
  {
    v17 = *(_DWORD *)(v11 + 83092);
    v18 = *((_DWORD *)a2 + 226);
    if ( v17 != v18 )
    {
LABEL_151:
      if ( *(_BYTE *)(*(_QWORD *)(v9 + 16) + 3070LL) )
        goto LABEL_21;
      if ( (byte_140081244 & 4) == 0 )
        goto LABEL_153;
      goto LABEL_159;
    }
  }
LABEL_21:
  v104 = *((_DWORD *)a2 + 220) - *(_DWORD *)v107;
  v106 = (*((_BYTE *)a2 + 880) - *(_BYTE *)v107 + (unsigned __int8)*((_DWORD *)v105 + 14)) & 0x3F;
  v19 = (char *)v105 + 1400 * ((*((_BYTE *)a2 + 880) - *(_BYTE *)v107 + (unsigned __int8)*((_DWORD *)v105 + 14)) & 0x3F);
  v115 = (struct _VIDSCH_FLIP_QUEUE_ENTRY *)(v19 + 120);
  WdLogSingleEntry4(8LL, a2, v105);
  v20 = *((_QWORD *)v7 + 2);
  v21 = *(_QWORD *)(v9 + 688);
  WdLogGlobalForLineNumber = 4056;
  v22 = *(unsigned __int16 *)(v20 + 4);
  if ( (unsigned int)v22 < *(_DWORD *)(v9 + 760) )
    v21 += 8 * v22;
  v23 = *(_WORD *)(*(_QWORD *)v21 + 6LL);
  v103 = v23;
  if ( *((_DWORD *)v19 + 293) == 8 )
  {
    *(_QWORD *)&v19[8 * *((unsigned int *)v19 + 303) + 120] = *((_QWORD *)a2 + 160);
    *(_QWORD *)&v19[8 * *((unsigned int *)v19 + 303) + 632] = *((_QWORD *)a2 + 161);
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)a2 + 160) + 36LL));
    v94 = *((_QWORD *)v7 + 1);
    v52 = v19 + 1160;
    ++*((_DWORD *)v19 + 303);
    v29 = (int *)(v19 + 1272);
    *((_QWORD *)v19 + 145) = v94;
    *((_DWORD *)v19 + 301) |= 1 << v23;
  }
  else
  {
    ++*(_DWORD *)(v9 + 860);
    ++*(_DWORD *)(v8 + 1832);
    v24 = (_DWORD *)((char *)a2 + 1352);
    ++*(_DWORD *)(v11 + 3236);
    if ( (*((_DWORD *)a2 + 188) & 0x800000) != 0 )
      v25 = ((unsigned __int16)*v24 | (unsigned __int16)(*v24 >> 10)) & 0x3FF;
    else
      v25 = (1 << *(_DWORD *)(v9 + 152)) - 1;
    i = !_BitScanForward((unsigned int *)&v26, v25);
    v27 = -1;
    if ( !i )
      v27 = v26;
    while ( v25 )
    {
      ++*(_DWORD *)(304LL * v27 + *(_QWORD *)(v10 + 3432) + 196);
      v28 = 1 << v27;
      v27 = -1;
      v25 &= ~v28;
      i = !_BitScanForward((unsigned int *)&v28, v25);
      if ( !i )
        v27 = v28;
    }
    _VIDSCH_FLIP_QUEUE_ENTRY::ZeroFlipQueueEntry((_VIDSCH_FLIP_QUEUE_ENTRY *)(v19 + 120));
    v29 = (int *)(v19 + 1272);
    v30 = *((_DWORD *)v19 + 318) | 0x4000;
    *((_QWORD *)v19 + 145) = *((_QWORD *)v7 + 1);
    *((_DWORD *)v19 + 318) = v30;
    IsFocusHwContext = VidSchiIsFocusHwContext(v7);
    *((_DWORD *)v19 + 318) = v32 & 0xFFFF7FFF | (IsFocusHwContext << 15);
    *((_QWORD *)v19 + 15) = *((_QWORD *)a2 + 160);
    *((_QWORD *)v19 + 79) = *((_QWORD *)a2 + 161);
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)a2 + 160) + 36LL));
    *((_DWORD *)v19 + 292) = *((_DWORD *)a2 + 28);
    *((_DWORD *)v19 + 294) = *((_DWORD *)a2 + 216);
    v19[1196] = (*((_DWORD *)a2 + 188) & 0x10) != 0;
    v33 = *v29 ^ ((unsigned __int8)*v29 ^ (unsigned __int8)(*((_DWORD *)a2 + 18) >> 19)) & 0x10;
    *((_DWORD *)v19 + 318) = v33;
    v34 = v33 ^ ((unsigned __int16)v33 ^ (*((_DWORD *)a2 + 188) >> 20)) & 0x400;
    *((_DWORD *)v19 + 318) = v34;
    *((_DWORD *)v19 + 318) = v34 ^ ((unsigned __int16)v34 ^ (*((_DWORD *)a2 + 188) >> 20)) & 0x800;
    v35 = *((_QWORD *)a2 + 164);
    if ( v35 )
    {
      *((_QWORD *)v19 + 184) = v35;
      *((_DWORD *)v19 + 370) = *((_DWORD *)a2 + 330);
      *((_QWORD *)v19 + 186) = *((_QWORD *)a2 + 166);
      *((_QWORD *)v19 + 187) = *((_QWORD *)a2 + 167);
      *((_QWORD *)v19 + 188) = *((_QWORD *)a2 + 168);
      v98 = *((_DWORD *)v19 + 378) ^ ((unsigned __int8)*((_DWORD *)v19 + 378) ^ (unsigned __int8)(*((_DWORD *)a2 + 189) >> 5)) & 1;
      *((_DWORD *)v19 + 378) = v98;
      *((_DWORD *)v19 + 378) = v98 ^ ((unsigned __int8)v98 ^ (unsigned __int8)(*((_DWORD *)a2 + 189) >> 3)) & 2;
    }
    if ( !v104 )
      *((_QWORD *)v19 + 148) = ++*((_QWORD *)v105 + 11);
    v36 = *v29;
    v37 = *((_DWORD *)a2 + 278);
    *((_DWORD *)v19 + 330) = v37;
    if ( (v36 & 0x400) != 0 )
    {
      v69 = v37 - 1;
      if ( v69 )
      {
        if ( v69 == 1 )
        {
          *(_OWORD *)(v19 + 1324) = *(_OWORD *)((char *)a2 + 1116);
          *(_OWORD *)(v19 + 1340) = *(_OWORD *)((char *)a2 + 1132);
          *(_OWORD *)(v19 + 1356) = *(_OWORD *)((char *)a2 + 1148);
          *(_OWORD *)(v19 + 1372) = *(_OWORD *)((char *)a2 + 1164);
          *(_QWORD *)(v19 + 1388) = *(_QWORD *)((char *)a2 + 1180);
        }
      }
      else
      {
        *(_OWORD *)(v19 + 1324) = *(_OWORD *)((char *)a2 + 1116);
        *(_QWORD *)(v19 + 1340) = *(_QWORD *)((char *)a2 + 1132);
        *((_DWORD *)v19 + 337) = *((_DWORD *)a2 + 285);
      }
    }
    if ( (v36 & 0x800) != 0 )
    {
      *(_OWORD *)(v19 + 1396) = *(_OWORD *)((char *)a2 + 1188);
      *(_OWORD *)(v19 + 1412) = *(_OWORD *)((char *)a2 + 1204);
    }
    memmove(*((void **)v19 + 164), (char *)a2 + 1352, *((unsigned int *)a2 + 341));
    v38 = *(_DWORD *)(v9 + 152);
    v39 = 0;
    for ( j = *((_QWORD *)v19 + 164); v39 < v38; ++v39 )
    {
      v41 = *(_QWORD *)(v39 * ((8 * *(_DWORD *)(j + 8) + 231) & 0xFFFFFFF8) + j + 200);
      if ( v41 )
        _InterlockedIncrement((volatile signed __int32 *)(v41 + 12));
      v38 = *(_DWORD *)(v9 + 152);
    }
    v42 = 0;
    if ( v38 )
    {
      do
      {
        v43 = v42 * ((8 * *((_DWORD *)a2 + 340) + 231) & 0xFFFFFFF8);
        v44 = *(_QWORD *)((char *)a2 + v43 + 1552);
        if ( v44 )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v44 + 12), 0xFFFFFFFF) == 1 )
          {
            if ( *(_QWORD *)v44 )
              ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)v44, (PVOID)v44);
            else
              ExFreePoolWithTag((PVOID)v44, 0);
          }
          *(_QWORD *)((char *)v24 + v43 + 200) = 0LL;
        }
        ++v42;
      }
      while ( v42 < *(_DWORD *)(v9 + 152) );
      v29 = (int *)(v19 + 1272);
    }
    VidSchiAcquireFlipFencesReference(
      (struct _VIDSCH_GLOBAL *)v9,
      *((struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 **)v19 + 164));
    *((_DWORD *)v19 + 300) = *((_DWORD *)a2 + 222);
    *((_DWORD *)v19 + 301) = 1 << v103;
    v45 = *v29 ^ (*v29 ^ (*((_DWORD *)a2 + 188) >> 19)) & 1;
    *v29 = v45;
    v46 = v45 ^ ((unsigned __int8)v45 ^ (unsigned __int8)(*((_DWORD *)a2 + 188) >> 19)) & 2;
    *v29 = v46;
    v47 = v46 ^ ((unsigned __int8)v46 ^ (unsigned __int8)(*((_DWORD *)a2 + 188) >> 19)) & 4;
    *v29 = v47;
    *v29 = v47 ^ ((unsigned __int8)v47 ^ (unsigned __int8)(*((_DWORD *)a2 + 188) >> 19)) & 8;
    *((_QWORD *)v19 + 162) = *((_QWORD *)a2 + 97);
    v48 = *((_QWORD *)a2 + 98);
    *((_QWORD *)v19 + 163) = v48;
    if ( v48 )
      _InterlockedIncrement((volatile signed __int32 *)(v48 + 12));
    v49 = *((_DWORD *)a2 + 188);
    *((_DWORD *)v19 + 303) = 1;
    if ( (v49 & 0x400) != 0 )
    {
      *((_DWORD *)v19 + 302) = *((_DWORD *)a2 + 223);
      v50 = *((_DWORD *)a2 + 223);
    }
    else
    {
      *((_DWORD *)v19 + 302) = 1;
      v50 = 1;
    }
    *((_DWORD *)v19 + 304) = v50;
    if ( v19[1196] || v102 )
    {
      v70 = *v29;
      v52 = v19 + 1160;
      v8 = v118;
      *((_DWORD *)v19 + 298) = 0;
      v71 = v70 ^ ((unsigned __int8)v70 ^ (unsigned __int8)(*((_DWORD *)a2 + 188) >> 21)) & 0x80;
      *v29 = v71;
      *v29 = v71 ^ ((unsigned __int16)v71 ^ (*((_DWORD *)a2 + 188) >> 20)) & 0x100;
    }
    else
    {
      v51 = *((_DWORD *)a2 + 219);
      v52 = v19 + 1160;
      v8 = v118;
      if ( v51 )
      {
        *((_DWORD *)v19 + 298) = v51;
      }
      else
      {
        v96 = *v29 | 0x80;
        *((_DWORD *)v19 + 298) = 0;
        *v29 = v96 & 0xFFFFFEFF;
      }
    }
  }
  v53 = *((_DWORD *)v19 + 364);
  if ( !v53 )
  {
    *((_DWORD *)v19 + 364) = 1;
    v53 = 1;
  }
  v54 = *(_QWORD *)(*(_QWORD *)v52 + 40LL);
  if ( !*(_BYTE *)(*(_QWORD *)(v54 + 16) + 138LL) )
  {
    v73 = *(_DWORD *)(v11 + 83092);
    if ( v53 != v73 && (*v29 & 0x100) == 0 && *(_DWORD *)(v11 + 4) != 3 )
    {
      v74 = *((_DWORD *)v19 + 298);
      if ( v53 < v73 )
      {
        if ( v74 )
          v73 *= v74;
        v75 = v73;
      }
      else
      {
        v75 = v74 / v53;
        v73 = v74 / v53;
      }
      *((_DWORD *)v19 + 298) = v75;
      if ( (byte_140081244 & 4) != 0 )
        McTemplateK0qqqq_EtwWriteTransfer(
          v54,
          (unsigned int)&EventVirtualizeFlipSubmissionRate,
          v74,
          v53,
          *(_DWORD *)(v11 + 83092),
          v74,
          v73);
    }
  }
  v55 = 0;
  *((_DWORD *)v19 + 364) = *(_DWORD *)(v11 + 83092);
  if ( (*(_DWORD *)(v11 + 83108) & 1) != 0 )
  {
    v72 = *(_QWORD *)(v8 + 40);
    if ( *(_BYTE *)(v72 + 2632) || *(_BYTE *)(*(_QWORD *)(v72 + 16) + 137LL) )
    {
      if ( (*v29 & 0x80u) != 0 || v102 )
        v55 = (**((_DWORD **)v19 + 164) & 0x3FF) != 0;
      if ( (*v29 & 0x180) == 0x80 )
        *v29 |= 0x200u;
    }
  }
  v56 = *((_DWORD *)a2 + 224);
  if ( v56 )
    goto LABEL_64;
  if ( !v55 )
  {
    v56 = *(_DWORD *)(v11 + 83096);
LABEL_64:
    v57 = -1;
    goto LABEL_65;
  }
  v57 = -1;
  v56 = -1;
LABEL_65:
  *((_DWORD *)v19 + 319) = v56;
  if ( (*((_DWORD *)a2 + 188) & 0x800) != 0 )
    v19[1197] = 1;
  v58 = (unsigned int *)*((_QWORD *)v19 + 164);
  v109[0] = v9;
  v109[1] = v58;
  v59 = *v58;
  v60 = *v58 & 0x3FF;
  i = *(_BYTE *)(v9 + 156) == 0;
  v110 = v60;
  if ( i )
    v61 = 0;
  else
    v61 = (v59 >> 10) & 0x3FF;
  v62 = 0;
  v111 = v61;
  i = !_BitScanForward((unsigned int *)&v63, v60);
  v64 = -1;
  v112 = 0;
  if ( !i )
    v64 = v63;
  i = !_BitScanForward((unsigned int *)&v65, v61);
  v66 = v64;
  if ( !i )
    v57 = v65;
  v113 = v64;
  v67 = v57;
  v114 = v57;
  while ( v60 || v61 )
  {
    if ( v66 < v67 )
    {
      v78 = 0;
      v79 = 0;
      v80 = 1;
      while ( v79 <= v103 )
      {
        if ( (v80 & *((_DWORD *)v19 + 300)) != 0 )
        {
          v81 = *((_QWORD *)v19 + 164);
          v82 = *(_DWORD *)(v81 + 4);
          v83 = v82 * ((8 * *(_DWORD *)(v81 + 8) + 231) & 0xFFFFFFF8);
          v84 = (unsigned int)v83;
          v85 = (unsigned __int64)(unsigned int)(v62 + v78 * v82) << 6;
          v86 = *(_QWORD *)(v85 + v83 + v81 + 48);
          if ( ((*(_DWORD *)(v86 + 32) >> 2) & 0x3F) == v103 )
          {
            v87 = *(_QWORD *)(v86 + 96);
            v88 = v81 + v84 + v85;
            v89 = *(_QWORD *)(v87 + 32);
            if ( v89 )
            {
              *(_QWORD *)(v88 + 64) = ++*(_QWORD *)(v89 + 16);
              v91 = *(_QWORD *)(*(_QWORD *)(v86 + 96) + 32LL);
              *(_QWORD *)(v88 + 72) = ++*(_QWORD *)(v91 + 24);
              v92 = *(_QWORD *)(*(_QWORD *)(v86 + 96) + 32LL);
              v93 = 2LL * *(unsigned int *)(v92 + 32);
              *(_OWORD *)(v92 + 8 * v93 + 40) = 0LL;
              *(_DWORD *)(v92 + 32) = ((unsigned __int8)*(_DWORD *)(v92 + 32) + 1) & 7;
              *(_DWORD *)(v92 + 8 * v93 + 40) = 0;
              *(_QWORD *)(v92 + 8 * v93 + 48) = *(_QWORD *)(v88 + 72);
            }
            else
            {
              v90 = *(_QWORD *)(v87 + 24);
              if ( v90 )
                _InterlockedIncrement((volatile signed __int32 *)(v90 + 8));
            }
            break;
          }
          ++v78;
        }
        ++v79;
        v80 *= 2;
      }
    }
    VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++((unsigned int *)v109);
    v67 = v114;
    v61 = v111;
    v60 = v110;
    v66 = v113;
    v62 = v112;
  }
  v8 = v118;
  v7 = v105;
  if ( *((_DWORD *)v19 + 302) > *((_DWORD *)v19 + 303) )
  {
    *((_DWORD *)v19 + 293) = 8;
  }
  else
  {
    if ( !v104 )
    {
      v10 = v106;
      v68 = v115;
      while ( 1 )
      {
        *((_DWORD *)v105 + 14) = ((_BYTE)v10 + 1) & 0x3F;
        ++*v107;
        _InterlockedIncrement((volatile signed __int32 *)(v9 + 864));
        _InterlockedIncrement((volatile signed __int32 *)(v11 + 3240));
        if ( *((_DWORD *)v68 + 263) == 7 )
          *((_QWORD *)v68 + 133) = ++*((_QWORD *)v105 + 11);
        if ( (unsigned int)VidSchiIsHardwareCompletedDependingCommandForFlip((__int64)v68) && *(_BYTE *)(v11 + 78948) )
          break;
        *((_DWORD *)v68 + 263) = 16;
LABEL_83:
        v10 = *((unsigned int *)v105 + 14);
        v68 = (struct VIDSCH_FLIP_QUEUE *)((char *)v105 + 1400 * v10 + 120);
        if ( *((_DWORD *)v68 + 263) != 7 )
          goto LABEL_84;
      }
      *((_DWORD *)v68 + 263) = 2;
      v76 = *((_DWORD *)v105 + 16);
      if ( v108 )
      {
        if ( (_DWORD)v10 != v76 )
          goto LABEL_122;
        if ( *(_BYTE *)(v9 + 156)
          && VidSchiCheckPendingFlipsForThisEntry(
               (struct _VIDSCH_GLOBAL *)v9,
               (struct _VIDSCH_PRESENT_INFO *)v11,
               v68,
               v105) )
        {
          v77 = v101;
          if ( *(_BYTE *)(v9 + 59) )
            goto LABEL_137;
          *((_QWORD *)v68 + 138) = MEMORY[0xFFFFF78000000320];
LABEL_123:
          if ( !*(_BYTE *)(v9 + 59) )
          {
LABEL_124:
            if ( *((_DWORD *)v105 + 350 * *((unsigned int *)v105 + 15) + 293) != 16 )
              *((_DWORD *)v105 + 15) = *((_DWORD *)v105 + 14);
            goto LABEL_83;
          }
LABEL_137:
          if ( *((_DWORD *)v68 + 263) == 2 )
            VidSchiUpdateInterruptTargetsForAllPlanes((struct _VIDSCH_GLOBAL *)v9, v77);
          goto LABEL_124;
        }
        LOBYTE(v118) = 0;
        *((_DWORD *)v68 + 263) = 4;
        VidSchiExecuteMmIoFlip(a1, v9, v101, v105, v10, &v117, &v118);
        if ( !(_BYTE)v118 )
          goto LABEL_122;
        v99 = &v118;
      }
      else
      {
        if ( (_DWORD)v10 != v76 && !*((_BYTE *)v68 + 1076) )
        {
          v95 = ((_BYTE)v10 - 1) & 0x3F;
          if ( (*((_DWORD *)v105 + 350 * v95 + 318) & 0x20) != 0 )
          {
            g_DxgMmsBugcheckExportIndex = 1;
            WdLogSingleEntry5(0LL, 281LL, 0x100000LL, v95, v105, v9);
            WdLogGlobalForLineNumber = 906;
            goto LABEL_151;
          }
          goto LABEL_122;
        }
        if ( !*(_BYTE *)(v9 + 59) )
          *((_QWORD *)v68 + 138) = MEMORY[0xFFFFF78000000320];
        if ( VidSchiCheckPendingFlipsForThisEntry(
               (struct _VIDSCH_GLOBAL *)v9,
               (struct _VIDSCH_PRESENT_INFO *)v11,
               v68,
               v105) )
        {
          goto LABEL_122;
        }
        if ( *((_BYTE *)v68 + 1076) )
          VidSchiRestartQueuedFlip(a1, v8, v101, v105, v10);
        if ( *((_DWORD *)v105 + 28) )
        {
          *((_DWORD *)v68 + 263) = 3;
          goto LABEL_122;
        }
        *((_DWORD *)v68 + 263) = 4;
        v119 = 0;
        VidSchiExecuteMmIoFlip(a1, v9, v101, v105, v10, &v117, &v119);
        if ( !v119 )
        {
LABEL_122:
          v77 = v101;
          goto LABEL_123;
        }
        v99 = (__int64 *)&v119;
      }
      v100 = v10;
      v77 = v101;
      VidSchiExecuteMmIoFlip(a1, v9, v101, v105, v100, &v117, v99);
      goto LABEL_123;
    }
    *((_DWORD *)v19 + 293) = 7;
  }
LABEL_84:
  *((_DWORD *)a2 + 16) |= 2u;
  if ( v117 )
    VidSchiCompletePendingFlipOnPlane((__int64)a1, v9, v101, (__int64)v105, 9);
LABEL_86:
  VidSchiCompleteHwQueuePacket(a1, a2, 0);
}
