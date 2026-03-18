/*
 * XREFs of VidSchiSubmitMmIoFlipCommand @ 0x14001D940
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1400AE500 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1400AE770 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     ?VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x14000CAF4 (-VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAU.c)
 *     VidSchiExecuteMmIoFlip @ 0x14000CF44 (VidSchiExecuteMmIoFlip.c)
 *     ?VidSchiCheckPendingFlipsForThisEntry@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x14000E520 (-VidSchiCheckPendingFlipsForThisEntry@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VI.c)
 *     VidSchiIsHardwareCompletedDependingCommandForFlip @ 0x14000F680 (VidSchiIsHardwareCompletedDependingCommandForFlip.c)
 *     ?VidSchiAcquireFlipFencesReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x1400129C0 (-VidSchiAcquireFlipFencesReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14001D740 (-ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x14001F0E0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiUpdateContextStatus @ 0x1400260E0 (VidSchiUpdateContextStatus.c)
 *     VidSchiCompleteRewindPacket @ 0x1400269F0 (VidSchiCompleteRewindPacket.c)
 *     VidSchiCompletePendingFlipOnPlane @ 0x140027538 (VidSchiCompletePendingFlipOnPlane.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x14002DBDC (McTemplateK0qqqqq_EtwWriteTransfer.c)
 *     VidSchiRestartQueuedFlip @ 0x14002E36C (VidSchiRestartQueuedFlip.c)
 *     McTemplateK0qqqq_EtwWriteTransfer @ 0x14004AFA4 (McTemplateK0qqqq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140056480 (memmove.c)
 *     memset @ 0x140056780 (memset.c)
 *     VidSchIsVSyncEnabled @ 0x1400D9780 (VidSchIsVSyncEnabled.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchiSubmitMmIoFlipCommand(struct _VIDSCH_QUEUE_PACKET *a1)
{
  struct _VIDSCH_PRESENT_INFO *v1; // r13
  struct _VIDSCH_QUEUE_PACKET *v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // r15
  __int64 v6; // rsi
  struct _VIDSCH_PRESENT_INFO **v7; // r14
  unsigned int v8; // r14d
  struct VIDSCH_FLIP_QUEUE *v9; // r12
  __int128 v10; // xmm0
  int v11; // eax
  struct _VIDSCH_PRESENT_INFO *v12; // r11
  unsigned __int64 v13; // rcx
  struct VIDSCH_FLIP_QUEUE *v14; // r12
  int v15; // eax
  unsigned int v16; // r8d
  bool v17; // zf
  int v18; // eax
  char v19; // r10
  __int64 v20; // r9
  int v21; // ecx
  int v22; // edx
  char v23; // al
  __int64 v24; // rcx
  __int64 v25; // rax
  char *v26; // r15
  __int64 v27; // rax
  unsigned __int16 v28; // r8
  _DWORD *v29; // r12
  unsigned int v30; // r8d
  int v31; // eax
  char v32; // cl
  struct _VIDSCH_PRESENT_INFO **v33; // r9
  int v34; // eax
  _DWORD *v35; // rdi
  __int64 v36; // rax
  int *v37; // r13
  int v38; // ecx
  int v39; // edx
  struct VIDSCH_FLIP_QUEUE *v40; // rax
  int v41; // edx
  int v42; // ecx
  __int64 v43; // rax
  unsigned int v44; // eax
  unsigned int v45; // ecx
  __int64 i; // r8
  __int64 v47; // rdx
  unsigned int v48; // edi
  __int64 v49; // r14
  __int64 v50; // rcx
  int v51; // ecx
  int v52; // eax
  int v53; // ecx
  __int64 v54; // rax
  int v55; // eax
  int v56; // eax
  int v57; // edi
  int v58; // eax
  char *v59; // rdx
  unsigned int v60; // r9d
  __int64 v61; // rcx
  bool v62; // dl
  int v63; // eax
  _DWORD *v64; // rax
  unsigned int v65; // r10d
  int v66; // edi
  unsigned int v67; // r9d
  char v68; // cl
  int v69; // eax
  int v70; // eax
  unsigned int v71; // r13d
  char v72; // cl
  unsigned int v73; // edx
  __int64 v74; // rdi
  struct _VIDSCH_PRESENT_INFO **v75; // rax
  struct _VIDSCH_PRESENT_INFO *v76; // r14
  __int64 v77; // rdx
  __int64 v78; // rdi
  void *v79; // rcx
  int v80; // eax
  int v81; // ecx
  int v82; // eax
  int v83; // ecx
  char v84; // di
  int v85; // eax
  struct _VIDSCH_FLIP_QUEUE_ENTRY *v86; // rax
  __int64 v87; // rax
  unsigned int v88; // edx
  unsigned int v89; // r8d
  int v90; // eax
  int v91; // r12d
  unsigned int v92; // r14d
  int v93; // r8d
  __int64 v94; // rdx
  int v95; // ecx
  __int64 v96; // r11
  unsigned __int64 v97; // r8
  __int64 v98; // rcx
  __int64 v99; // r11
  __int64 v100; // rax
  __int64 v101; // rdx
  __int64 v102; // rax
  char v103; // cl
  int v104; // eax
  __int64 v105; // rax
  __int64 v106; // r8
  __int64 v107; // rdx
  char v108; // cl
  int v109; // eax
  void (__fastcall *v110)(_QWORD, _QWORD); // rax
  struct _VIDSCH_PRESENT_INFO **v111; // rax
  __int64 v112; // rax
  __int64 v113; // r9
  __int64 v114; // rdi
  __int64 v115; // rdx
  int v116; // eax
  int v117; // eax
  void (__fastcall *v118)(_QWORD, _QWORD); // rax
  int v119; // ecx
  unsigned int v120; // [rsp+40h] [rbp-C0h]
  unsigned int v121; // [rsp+44h] [rbp-BCh]
  int v122; // [rsp+48h] [rbp-B8h]
  int v123; // [rsp+48h] [rbp-B8h]
  struct _VIDSCH_FLIP_QUEUE_ENTRY *v124; // [rsp+50h] [rbp-B0h]
  unsigned int v125; // [rsp+58h] [rbp-A8h]
  __int64 v126; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v127[2]; // [rsp+68h] [rbp-98h] BYREF
  char v128; // [rsp+78h] [rbp-88h]
  int v129; // [rsp+7Ch] [rbp-84h]
  unsigned int v130; // [rsp+80h] [rbp-80h]
  int v131; // [rsp+84h] [rbp-7Ch]
  struct VIDSCH_FLIP_QUEUE *v132; // [rsp+88h] [rbp-78h]
  int v133; // [rsp+90h] [rbp-70h]
  int v134; // [rsp+94h] [rbp-6Ch]
  int v135; // [rsp+98h] [rbp-68h]
  int v136; // [rsp+9Ch] [rbp-64h]
  int v137; // [rsp+A0h] [rbp-60h]
  int v138; // [rsp+A4h] [rbp-5Ch]
  int v139; // [rsp+A8h] [rbp-58h]
  int v140; // [rsp+ACh] [rbp-54h]
  __int64 v141; // [rsp+B0h] [rbp-50h]
  __int64 v142; // [rsp+B8h] [rbp-48h]
  struct _VIDSCH_PRESENT_INFO **v143; // [rsp+C0h] [rbp-40h]
  _QWORD *v144; // [rsp+C8h] [rbp-38h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v146; // [rsp+E8h] [rbp-18h]
  __int64 v147; // [rsp+F8h] [rbp-8h]
  char v148; // [rsp+150h] [rbp+50h] BYREF
  struct _VIDSCH_PRESENT_INFO *v149; // [rsp+158h] [rbp+58h] BYREF
  char v150; // [rsp+160h] [rbp+60h] BYREF
  KIRQL v151; // [rsp+168h] [rbp+68h]

  v1 = (struct _VIDSCH_PRESENT_INFO *)*((_QWORD *)a1 + 11);
  v2 = a1;
  v3 = *((unsigned int *)a1 + 42);
  v120 = v3;
  v4 = (unsigned int)v3;
  v5 = *((_QWORD *)v1 + 13);
  v141 = v5;
  v6 = *(_QWORD *)(v5 + 32);
  v7 = (struct _VIDSCH_PRESENT_INFO **)(v6 + 8 * (v3 + 429));
  v149 = *v7;
  v143 = v7;
  if ( (*(_BYTE *)(v6 + 3268) & 1) != 0
    || *(_DWORD *)(v6 + 3244)
    || *(_BYTE *)(v5 + 204)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 200), 0, 0) )
  {
    do
      v2 = VidSchiProcessCompletedQueuePacketInternal(v2);
    while ( v2 );
    return;
  }
  if ( (*(_DWORD *)(v5 + 48) & 2) != 0 || *((int *)v2 + 218) >= 4 || *(_BYTE *)(v6 + 156) )
    VidSchIsVSyncEnabled((struct _VIDSCH_GLOBAL *)v6, v3);
  v8 = *((_DWORD *)*v7 + 11122);
  if ( v8 != -1 )
  {
    v118 = *(void (__fastcall **)(_QWORD, _QWORD))(v6 + 3288);
    if ( v118 )
      v118(*(_QWORD *)(v6 + 3352), v8);
  }
  v151 = KfRaiseIrql(2u);
  LOBYTE(v9) = v151;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v6 + 1984), &LockHandle);
  v126 = v6;
  v10 = 0LL;
  v128 = 0;
  v127[1] = v127;
  v127[0] = v127;
  v11 = *((_DWORD *)v2 + 16);
  v129 = 2;
  if ( (v11 & 0x20) != 0 )
  {
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v126, 0LL);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    KeLowerIrql((KIRQL)v9);
    do
      v2 = VidSchiProcessCompletedQueuePacketInternal(v2);
    while ( v2 );
    if ( v8 != -1 )
    {
      v110 = *(void (__fastcall **)(_QWORD, _QWORD))(v6 + 3304);
      if ( v110 )
        goto LABEL_161;
    }
    goto LABEL_96;
  }
  v12 = v149;
  v13 = *((_QWORD *)v2 + 110) - *(_QWORD *)(v5 + 8 * (v4 + 47));
  v144 = (_QWORD *)(v5 + 8 * (v4 + 47));
  if ( v13 > (unsigned int)(64 - *((_DWORD *)v149 + 809)) )
    goto LABEL_178;
  v148 = 0;
  v8 = 1;
  if ( *((_DWORD *)v149 + 1) == 3 || !*((_DWORD *)v2 + 219) && (*((_DWORD *)v2 + 188) & 0x10000000) != 0 )
  {
    v122 = 1;
    v142 = 1LL;
  }
  else
  {
    v122 = 0;
    v142 = 0LL;
  }
  v14 = (struct VIDSCH_FLIP_QUEUE *)*((_QWORD *)v149 + 4);
  v15 = *((_DWORD *)v2 + 18) >> 23;
  v132 = v14;
  if ( (v15 & 1) != 0 )
    v16 = ((unsigned __int16)*((_DWORD *)v2 + 338) | (unsigned __int16)(*((_DWORD *)v2 + 338) >> 10)) & 0x3FF;
  else
    v16 = (1 << *(_DWORD *)(v6 + 152)) - 1;
  v17 = !_BitScanForward((unsigned int *)&v18, v16);
  v133 = v18;
  while ( 1 )
  {
    v19 = -1;
    if ( !v17 )
      v19 = v18;
    if ( !v16 )
      break;
    v20 = *(int *)(304LL * (unsigned int)v19 + *(_QWORD *)(v6 + 8 * v4 + 3432) + 188);
    if ( (int)v20 > -1 && *(_DWORD *)(160 * v20 + *(_QWORD *)(v6 + 3560) + 112) == 2 )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 281LL, 0x100000LL, v19, v4, v6);
      WdLogGlobalForLineNumber = 906;
LABEL_188:
      McTemplateK0qqqqq_EtwWriteTransfer(
        v21,
        (unsigned int)&EventBoostUnboostRefreshRate,
        v16,
        v4,
        *((_DWORD *)v12 + 798),
        v21,
        *((_DWORD *)v2 + 224),
        v22);
      v12 = v149;
LABEL_172:
      *((_DWORD *)v12 + 20773) = *((_DWORD *)v2 + 226);
      goto LABEL_26;
    }
    v16 &= ~(1 << v19);
    v17 = !_BitScanForward((unsigned int *)&v18, v16);
    v134 = v18;
  }
  if ( *(_BYTE *)(*(_QWORD *)(v5 + 40) + 2632LL) )
  {
    v21 = *((_DWORD *)v149 + 20773);
    v22 = *((_DWORD *)v2 + 226);
    if ( v21 != v22 && !*(_BYTE *)(*(_QWORD *)(v6 + 16) + 3070LL) )
    {
      if ( (byte_140081244 & 4) != 0 )
        goto LABEL_188;
      goto LABEL_172;
    }
  }
LABEL_26:
  v23 = *((_BYTE *)v2 + 880) - *(_BYTE *)(v5 + 8 * v4 + 376) + *((_DWORD *)v14 + 14);
  v131 = *((_DWORD *)v2 + 220) - *(_DWORD *)(v5 + 8 * v4 + 376);
  v24 = *(_QWORD *)(v6 + 688);
  v25 = v23 & 0x3F;
  v121 = v25;
  v26 = (char *)v14 + 1400 * v25;
  v124 = (struct _VIDSCH_FLIP_QUEUE_ENTRY *)(v26 + 120);
  v27 = *((unsigned int *)v1 + 22);
  if ( (unsigned int)v27 < *(_DWORD *)(v6 + 760) )
    v24 += 8 * v27;
  v28 = *(_WORD *)(*(_QWORD *)v24 + 6LL);
  v125 = v28;
  if ( *((_DWORD *)v26 + 293) == 8 )
  {
    v59 = v26 + 1160;
    v57 = v122;
    *(_QWORD *)&v26[8 * *((unsigned int *)v26 + 303) + 120] = v1;
    *(_QWORD *)&v26[8 * *((unsigned int *)v26 + 303) + 640] = *((_QWORD *)v1 + 19);
    v112 = *((_QWORD *)v1 + 13);
    ++*((_DWORD *)v26 + 303);
    *((_QWORD *)v26 + 145) = v112;
    ++*((_DWORD *)v1 + 198);
    v37 = (int *)(v26 + 1272);
    *((_DWORD *)v26 + 301) |= 1 << v28;
  }
  else
  {
    ++*(_DWORD *)(v6 + 860);
    v29 = (_DWORD *)((char *)v2 + 1352);
    ++*(_DWORD *)(v141 + 1832);
    ++*((_DWORD *)v1 + 198);
    ++*((_DWORD *)v12 + 809);
    if ( (*((_DWORD *)v2 + 188) & 0x800000) != 0 )
      v30 = ((unsigned __int16)*v29 | (unsigned __int16)(*v29 >> 10)) & 0x3FF;
    else
      v30 = (1 << *(_DWORD *)(v6 + 152)) - 1;
    v17 = !_BitScanForward((unsigned int *)&v31, v30);
    v32 = -1;
    v135 = v31;
    if ( !v17 )
      v32 = v31;
    if ( v30 )
    {
      v33 = v143;
      do
      {
        ++*((_DWORD *)*v33 + 76 * v32 + 49);
        v34 = 1 << v32;
        v32 = -1;
        v30 &= ~v34;
        v17 = !_BitScanForward((unsigned int *)&v34, v30);
        v136 = v34;
        if ( !v17 )
          v32 = v34;
      }
      while ( v30 );
    }
    v35 = (_DWORD *)*((_QWORD *)v26 + 164);
    memset(v26 + 120, 0, 0x4A8uLL);
    memset(v26 + 1320, 0, 0xC8uLL);
    *((_QWORD *)v26 + 164) = v35;
    memset(v35 + 4, 0, v35[1] * ((v35[2] << 6) + ((8 * v35[2] + 231) & 0xFFFFFFF8)));
    *((_QWORD *)v26 + 15) = v1;
    *((_QWORD *)v26 + 145) = *((_QWORD *)v1 + 13);
    *((_DWORD *)v26 + 292) = *((_DWORD *)v2 + 28);
    *((_DWORD *)v26 + 294) = *((_DWORD *)v2 + 216);
    v36 = *((_QWORD *)v1 + 19);
    v37 = (int *)(v26 + 1272);
    *((_QWORD *)v26 + 80) = v36;
    v26[1196] = (*((_DWORD *)v2 + 188) & 0x10) != 0;
    v38 = *((_DWORD *)v26 + 318) ^ ((unsigned __int8)*((_DWORD *)v26 + 318) ^ (unsigned __int8)(*((_DWORD *)v2 + 18) >> 19)) & 0x10;
    *((_DWORD *)v26 + 318) = v38;
    v39 = v38 ^ ((unsigned __int16)v38 ^ (*((_DWORD *)v2 + 188) >> 20)) & 0x400;
    *((_DWORD *)v26 + 318) = v39;
    v17 = v131 == 0;
    *((_DWORD *)v26 + 318) = v39 ^ ((unsigned __int16)v39 ^ (*((_DWORD *)v2 + 188) >> 20)) & 0x800;
    if ( v17 )
    {
      v40 = v132;
      ++*((_QWORD *)v132 + 11);
      *((_QWORD *)v26 + 148) = *((_QWORD *)v40 + 11);
    }
    v41 = *v37;
    v42 = *((_DWORD *)v2 + 278);
    *((_DWORD *)v26 + 330) = v42;
    if ( (v41 & 0x400) != 0 )
    {
      v81 = v42 - 1;
      if ( v81 )
      {
        if ( v81 == 1 )
        {
          *(_OWORD *)(v26 + 1324) = *(_OWORD *)((char *)v2 + 1116);
          *(_OWORD *)(v26 + 1340) = *(_OWORD *)((char *)v2 + 1132);
          *(_OWORD *)(v26 + 1356) = *(_OWORD *)((char *)v2 + 1148);
          *(_OWORD *)(v26 + 1372) = *(_OWORD *)((char *)v2 + 1164);
          v10 = *(unsigned __int64 *)((char *)v2 + 1180);
          *(_QWORD *)(v26 + 1388) = v10;
        }
      }
      else
      {
        v10 = *(_OWORD *)((char *)v2 + 1116);
        *(_OWORD *)(v26 + 1324) = v10;
        *(_QWORD *)(v26 + 1340) = *(_QWORD *)((char *)v2 + 1132);
        *((_DWORD *)v26 + 337) = *((_DWORD *)v2 + 285);
      }
    }
    if ( (v41 & 0x800) != 0 )
    {
      *(_OWORD *)(v26 + 1396) = *(_OWORD *)((char *)v2 + 1188);
      v10 = *(_OWORD *)((char *)v2 + 1204);
      *(_OWORD *)(v26 + 1412) = v10;
    }
    v43 = *((_QWORD *)v2 + 164);
    if ( v43 )
    {
      *((_QWORD *)v26 + 184) = v43;
      *((_DWORD *)v26 + 370) = *((_DWORD *)v2 + 330);
      *((_QWORD *)v26 + 186) = *((_QWORD *)v2 + 166);
      *((_QWORD *)v26 + 187) = *((_QWORD *)v2 + 167);
      *((_QWORD *)v26 + 188) = *((_QWORD *)v2 + 168);
      v119 = *((_DWORD *)v26 + 378) ^ (*((_DWORD *)v26 + 378) ^ (*((_DWORD *)v2 + 189) >> 5)) & 1;
      *((_DWORD *)v26 + 378) = v119;
      *((_DWORD *)v26 + 378) = v119 ^ ((unsigned __int8)v119 ^ (unsigned __int8)(*((_DWORD *)v2 + 189) >> 3)) & 2;
    }
    memmove(*((void **)v26 + 164), (char *)v2 + 1352, *((unsigned int *)v2 + 341));
    v44 = *(_DWORD *)(v6 + 152);
    v45 = 0;
    for ( i = *((_QWORD *)v26 + 164); v45 < v44; ++v45 )
    {
      v47 = *(_QWORD *)(v45 * ((8 * *(_DWORD *)(i + 8) + 231) & 0xFFFFFFF8) + i + 200);
      if ( v47 )
        _InterlockedIncrement((volatile signed __int32 *)(v47 + 12));
      v44 = *(_DWORD *)(v6 + 152);
    }
    v48 = 0;
    if ( v44 )
    {
      do
      {
        v49 = v48 * ((8 * *((_DWORD *)v2 + 340) + 231) & 0xFFFFFFF8);
        v50 = *(_QWORD *)((char *)v29 + v49 + 200);
        if ( v50 )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v50 + 12), 0xFFFFFFFF) == 1 )
          {
            if ( *(_QWORD *)v50 )
              ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)v50, (PVOID)v50);
            else
              ExFreePoolWithTag((PVOID)v50, 0);
          }
          *(_QWORD *)((char *)v29 + v49 + 200) = 0LL;
        }
        ++v48;
      }
      while ( v48 < *(_DWORD *)(v6 + 152) );
      v8 = 1;
    }
    VidSchiAcquireFlipFencesReference(
      (struct _VIDSCH_GLOBAL *)v6,
      *((struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 **)v26 + 164));
    *((_DWORD *)v26 + 300) = *((_DWORD *)v2 + 222);
    *((_DWORD *)v26 + 301) = 1 << v125;
    v51 = *v37 ^ ((unsigned __int8)*v37 ^ (unsigned __int8)(*((_DWORD *)v2 + 188) >> 19)) & 1;
    *v37 = v51;
    v52 = v51 ^ ((unsigned __int8)v51 ^ (unsigned __int8)(*((_DWORD *)v2 + 188) >> 19)) & 2;
    *v37 = v52;
    v53 = v52 ^ ((unsigned __int8)v52 ^ (unsigned __int8)(*((_DWORD *)v2 + 188) >> 19)) & 4;
    *v37 = v53;
    *v37 = v53 ^ ((unsigned __int8)v53 ^ (unsigned __int8)(*((_DWORD *)v2 + 188) >> 19)) & 8;
    *((_QWORD *)v26 + 162) = *((_QWORD *)v2 + 97);
    v54 = *((_QWORD *)v2 + 98);
    *((_QWORD *)v26 + 163) = v54;
    if ( v54 )
      _InterlockedIncrement((volatile signed __int32 *)(v54 + 12));
    v55 = *((_DWORD *)v2 + 188);
    *((_DWORD *)v26 + 303) = 1;
    if ( (v55 & 0x400) != 0 )
    {
      *((_DWORD *)v26 + 302) = *((_DWORD *)v2 + 223);
      v56 = *((_DWORD *)v2 + 223);
    }
    else
    {
      *((_DWORD *)v26 + 302) = 1;
      v56 = 1;
    }
    v57 = v122;
    *((_DWORD *)v26 + 304) = v56;
    if ( v26[1196] || v122 )
    {
      v82 = *v37;
      v59 = v26 + 1160;
      v12 = v149;
      *((_DWORD *)v26 + 298) = 0;
      v83 = v82 ^ ((unsigned __int8)v82 ^ (unsigned __int8)(*((_DWORD *)v2 + 188) >> 21)) & 0x80;
      *v37 = v83;
      *v37 = v83 ^ ((unsigned __int16)v83 ^ (*((_DWORD *)v2 + 188) >> 20)) & 0x100;
    }
    else
    {
      v58 = *((_DWORD *)v2 + 219);
      v59 = v26 + 1160;
      v12 = v149;
      if ( v58 )
      {
        *((_DWORD *)v26 + 298) = v58;
      }
      else
      {
        v117 = *v37 | 0x80;
        *((_DWORD *)v26 + 298) = 0;
        *v37 = v117 & 0xFFFFFEFF;
      }
    }
  }
  v60 = *((_DWORD *)v26 + 364);
  if ( !v60 )
  {
    *((_DWORD *)v26 + 364) = 1;
    v60 = 1;
  }
  v61 = *(_QWORD *)(*(_QWORD *)v59 + 40LL);
  if ( !*(_BYTE *)(*(_QWORD *)(v61 + 16) + 138LL) )
  {
    v88 = *((_DWORD *)v12 + 20773);
    if ( v60 != v88 && (*v37 & 0x100) == 0 && *((_DWORD *)v12 + 1) != 3 )
    {
      v89 = *((_DWORD *)v26 + 298);
      if ( v60 < v88 )
      {
        if ( v89 )
          v88 *= v89;
        v90 = v88;
      }
      else
      {
        v90 = v89 / v60;
        v88 = v89 / v60;
      }
      *((_DWORD *)v26 + 298) = v90;
      if ( (byte_140081244 & 4) != 0 )
      {
        McTemplateK0qqqq_EtwWriteTransfer(
          v61,
          (unsigned int)&EventVirtualizeFlipSubmissionRate,
          v89,
          v60,
          *((_DWORD *)v12 + 20773),
          v89,
          v88);
        v12 = v149;
      }
    }
  }
  v62 = 0;
  *((_DWORD *)v26 + 364) = *((_DWORD *)v12 + 20773);
  if ( (*((_DWORD *)v12 + 20777) & 1) != 0 )
  {
    v87 = *(_QWORD *)(v141 + 40);
    if ( *(_BYTE *)(v87 + 2632) || *(_BYTE *)(*(_QWORD *)(v87 + 16) + 137LL) )
    {
      if ( (*v37 & 0x80u) != 0 || v57 )
        v62 = (**((_DWORD **)v26 + 164) & 0x3FF) != 0;
      if ( (*v37 & 0x180) == 0x80 )
        *v37 |= 0x200u;
    }
  }
  v63 = *((_DWORD *)v2 + 224);
  if ( !v63 )
  {
    if ( v62 )
      v63 = -1;
    else
      v63 = *((_DWORD *)v12 + 20774);
  }
  *((_DWORD *)v26 + 319) = v63;
  if ( (*((_DWORD *)v2 + 188) & 0x800) != 0 )
    v26[1197] = 1;
  v64 = (_DWORD *)*((_QWORD *)v26 + 164);
  v65 = 0;
  v66 = 0;
  v67 = *v64 & 0x3FF;
  if ( *(_BYTE *)(v6 + 156) )
    v65 = (*v64 >> 10) & 0x3FF;
  v68 = -1;
  v17 = !_BitScanForward((unsigned int *)&v69, v67);
  v137 = v69;
  if ( !v17 )
    v68 = v69;
  v17 = !_BitScanForward((unsigned int *)&v70, v65);
  v71 = v68;
  v72 = -1;
  v138 = v70;
  if ( !v17 )
    v72 = v70;
  v73 = v72;
  v130 = v72;
  while ( v67 || v65 )
  {
    if ( v71 >= v73 )
    {
      v108 = -1;
      v65 &= ~(1 << v73);
      v17 = !_BitScanForward((unsigned int *)&v109, v65);
      v140 = v109;
      if ( !v17 )
        v108 = v109;
      v73 = v108;
      v130 = v108;
    }
    else
    {
      v91 = 1;
      v123 = 0;
      v92 = 0;
      v93 = 0;
      while ( v92 <= v125 )
      {
        if ( (v91 & *((_DWORD *)v26 + 300)) != 0 )
        {
          v94 = *((_QWORD *)v26 + 164);
          v95 = *(_DWORD *)(v94 + 4);
          v96 = v95 * ((8 * *(_DWORD *)(v94 + 8) + 231) & 0xFFFFFFF8);
          v97 = (unsigned __int64)(unsigned int)(v66 + v95 * v93) << 6;
          v98 = *(_QWORD *)(v97 + v94 + v96 + 48);
          if ( ((*(_DWORD *)(v98 + 32) >> 2) & 0x3F) == v125 )
          {
            v99 = v97 + v94 + v96;
            v100 = *(_QWORD *)(v98 + 96);
            v101 = *(_QWORD *)(v100 + 32);
            if ( v101 )
            {
              ++*(_QWORD *)(v101 + 16);
              v10 = 0LL;
              *(_QWORD *)(v99 + 64) = *(_QWORD *)(v101 + 16);
              v105 = *(_QWORD *)(*(_QWORD *)(v98 + 96) + 32LL);
              *(_QWORD *)(v99 + 72) = ++*(_QWORD *)(v105 + 24);
              v106 = *(_QWORD *)(*(_QWORD *)(v98 + 96) + 32LL);
              v107 = 2LL * *(unsigned int *)(v106 + 32);
              *(_OWORD *)(v106 + 8 * v107 + 40) = 0LL;
              *(_DWORD *)(v106 + 32) = ((unsigned __int8)*(_DWORD *)(v106 + 32) + 1) & 7;
              *(_DWORD *)(v106 + 8 * v107 + 40) = 0;
              *(_QWORD *)(v106 + 8 * v107 + 48) = *(_QWORD *)(v99 + 72);
            }
            else
            {
              v102 = *(_QWORD *)(v100 + 24);
              if ( v102 )
                _InterlockedIncrement((volatile signed __int32 *)(v102 + 8));
            }
            break;
          }
          v93 = ++v123;
        }
        ++v92;
        v91 *= 2;
      }
      v73 = v130;
      v8 = 1;
      v103 = -1;
      v67 &= ~(1 << v71);
      v17 = !_BitScanForward((unsigned int *)&v104, v67);
      v139 = v104;
      if ( !v17 )
        v103 = v104;
      v71 = v103;
    }
    ++v66;
  }
  v9 = v132;
  if ( *((_DWORD *)v26 + 302) > *((_DWORD *)v26 + 303) )
  {
    *((_DWORD *)v26 + 293) = 8;
    goto LABEL_110;
  }
  if ( v131 )
  {
    *((_DWORD *)v26 + 293) = 7;
LABEL_110:
    VidSchiUpdateFlipQueueHistory(0, v6, v120, (__int64)v9, v121);
LABEL_91:
    *((_DWORD *)v2 + 16) |= 2u;
    if ( v148 )
      VidSchiCompletePendingFlipOnPlane((unsigned int)&v126, v6, v120, (_DWORD)v9, 9);
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v126, 0LL);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    do
      v2 = VidSchiProcessCompletedQueuePacketInternal(v2);
    while ( v2 );
    KeLowerIrql(v151);
    goto LABEL_96;
  }
  v1 = v149;
  v74 = (__int64)(v26 + 120);
  while ( 1 )
  {
    *((_DWORD *)v9 + 14) = ((_BYTE)v121 + 1) & 0x3F;
    ++*v144;
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 864));
    _InterlockedIncrement((volatile signed __int32 *)v1 + 810);
    if ( *(_DWORD *)(v74 + 1052) == 7 )
      *(_QWORD *)(v74 + 1064) = ++*((_QWORD *)v9 + 11);
    if ( !(unsigned int)VidSchiIsHardwareCompletedDependingCommandForFlip(v74) || !*((_BYTE *)v1 + 78948) )
    {
      v75 = v143;
      *(_DWORD *)(v74 + 1052) = 1;
      v76 = *v75;
      v77 = *((unsigned int *)*v75 + 36);
      v78 = *((_QWORD *)*v75 + 17) + 112 * v77;
      *((_DWORD *)*v75 + 36) = (v77 + 1) & (*((_DWORD *)*v75 + 32) - 1);
      v79 = *(void **)(v78 + 72);
      if ( v79 )
        memset(v79, 0, 8LL * *(unsigned int *)(v6 + 152));
      *(_DWORD *)v78 = 0;
      *(_DWORD *)(v78 + 16) = **((_DWORD **)v26 + 164) & 0x3FF;
      *(_DWORD *)(v78 + 20) = (**((_DWORD **)v26 + 164) >> 10) & 0x3FF;
      *(_BYTE *)(v78 + 24) = *((_BYTE *)v9 + 80);
      *(_DWORD *)(v78 + 28) = v121;
      *(LARGE_INTEGER *)(v78 + 8) = KeQueryPerformanceCounter(0LL);
      *(_BYTE *)(v78 + 36) = (*((_DWORD *)v26 + 318) & 0x20) != 0;
      *(_DWORD *)(v78 + 40) = *((_DWORD *)v26 + 293);
      *(_DWORD *)(v78 + 32) = *((_DWORD *)v26 + 294);
      *(_DWORD *)(v78 + 44) = *((_DWORD *)v26 + 319);
      *(_DWORD *)(v78 + 48) = *((_DWORD *)v76 + 798);
      *(_QWORD *)(v78 + 56) = *((_QWORD *)v26 + 179);
      *(_QWORD *)(v78 + 64) = *((_QWORD *)v26 + 180);
      *(_DWORD *)(v78 + 84) = *((_DWORD *)v76 + 813);
      v80 = *((_DWORD *)v76 + 812);
      v8 = 1;
      *(_DWORD *)(v78 + 80) = v80;
      *(_DWORD *)(v78 + 88) = *((_DWORD *)v9 + 14);
      *(_DWORD *)(v78 + 92) = *((_DWORD *)v9 + 15);
      *(_DWORD *)(v78 + 96) = *((_DWORD *)v9 + 16);
      *(_DWORD *)(v78 + 100) = *((_DWORD *)v9 + 17);
      *(_DWORD *)(v78 + 104) = *((_DWORD *)v9 + 18);
      *(_DWORD *)(v78 + 108) = *((_DWORD *)v9 + 19);
      goto LABEL_90;
    }
    v17 = v142 == 0;
    *(_DWORD *)(v74 + 1052) = 2;
    v84 = 1;
    v85 = *((_DWORD *)v9 + 16);
    if ( v17 )
      break;
    if ( v121 == v85 )
    {
      if ( *(_BYTE *)(v6 + 156)
        && VidSchiCheckPendingFlipsForThisEntry((struct _VIDSCH_GLOBAL *)v6, v1, (unsigned int **)v124, v9) )
      {
        if ( !*(_BYTE *)(v6 + 59) )
          *((_QWORD *)v124 + 138) = MEMORY[0xFFFFF78000000320];
        goto LABEL_123;
      }
      LOBYTE(v149) = 0;
      v84 = 0;
      *((_DWORD *)v124 + 263) = 4;
      VidSchiUpdateFlipQueueHistory(0, v6, v120, (__int64)v9, v121);
      VidSchiExecuteMmIoFlip((struct HwQueueStagingList *)&v126, v6, v120, v9, v121, &v148, &v149);
      if ( (_BYTE)v149 )
      {
        v111 = &v149;
LABEL_197:
        VidSchiExecuteMmIoFlip((struct HwQueueStagingList *)&v126, v6, v120, v9, v121, &v148, v111);
      }
    }
LABEL_123:
    if ( *((_DWORD *)v9 + 350 * *((unsigned int *)v9 + 15) + 293) != 1 )
      *((_DWORD *)v9 + 15) = *((_DWORD *)v9 + 14);
    if ( v84 )
      VidSchiUpdateFlipQueueHistory(0, v6, v120, (__int64)v9, v121);
LABEL_90:
    v121 = *((_DWORD *)v9 + 14);
    v26 = (char *)v9 + 1400 * v121;
    v74 = (__int64)(v26 + 120);
    v124 = (struct _VIDSCH_FLIP_QUEUE_ENTRY *)(v26 + 120);
    if ( *((_DWORD *)v26 + 293) != 7 )
      goto LABEL_91;
  }
  if ( v121 == v85 || *((_BYTE *)v124 + 1076) )
  {
    if ( !*(_BYTE *)(v6 + 59) )
      *((_QWORD *)v124 + 138) = MEMORY[0xFFFFF78000000320];
    if ( VidSchiCheckPendingFlipsForThisEntry((struct _VIDSCH_GLOBAL *)v6, v1, (unsigned int **)v124, v9) )
      goto LABEL_123;
    v86 = v124;
    if ( *((_BYTE *)v124 + 1076) )
    {
      VidSchiRestartQueuedFlip(&v126, v141, v120, v9, v121);
      v86 = v124;
    }
    if ( *((_DWORD *)v9 + 28) )
    {
      *((_DWORD *)v86 + 263) = 3;
      goto LABEL_123;
    }
    *((_DWORD *)v86 + 263) = 4;
    v150 = 0;
    v84 = 0;
    VidSchiUpdateFlipQueueHistory(0, v6, v120, (__int64)v9, v121);
    VidSchiExecuteMmIoFlip((struct HwQueueStagingList *)&v126, v6, v120, v9, v121, &v148, &v150);
    if ( v150 )
    {
      v111 = (struct _VIDSCH_PRESENT_INFO **)&v150;
      goto LABEL_197;
    }
    goto LABEL_123;
  }
  v113 = ((_BYTE)v121 - 1) & 0x3F;
  if ( (*((_DWORD *)v9 + 350 * v113 + 318) & 0x20) == 0 )
    goto LABEL_123;
  g_DxgMmsBugcheckExportIndex = 1;
  WdLogSingleEntry5(0LL, 281LL, 0x100000LL, v113, v9, v6);
  WdLogGlobalForLineNumber = 906;
LABEL_178:
  v114 = *((_QWORD *)v2 + 11);
  v115 = *(_QWORD *)(*(_QWORD *)(v114 + 96) + 24LL);
  v147 = 0LL;
  v146 = v10;
  if ( (*(_DWORD *)(v114 + 184) & 4) == 0 )
  {
    WdLogSingleEntry3(4LL, v115, v114, *((unsigned int *)v2 + 28));
    WdLogGlobalForLineNumber = 16118;
    v116 = *(_DWORD *)(v114 + 184) | 4;
    *(_QWORD *)(v114 + 656) = v2;
    *(_DWORD *)(v114 + 184) = v116;
  }
  VidSchiCompleteRewindPacket(v114, 1LL);
  VidSchiUpdateContextStatus(v1, 3LL, 3366LL);
  HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v126, 0LL);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  KeLowerIrql((KIRQL)v9);
  if ( v8 != -1 )
  {
    v110 = *(void (__fastcall **)(_QWORD, _QWORD))(v6 + 3304);
    if ( v110 )
LABEL_161:
      v110(*(_QWORD *)(v6 + 3352), v8);
  }
LABEL_96:
  if ( !v128 )
  {
    if ( v129 )
      HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v126, 0LL);
  }
}
