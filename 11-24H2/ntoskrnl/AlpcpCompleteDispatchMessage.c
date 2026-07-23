/*
 * XREFs of AlpcpCompleteDispatchMessage @ 0x14089A890
 * Callers:
 *     AlpcpDispatchCloseMessage @ 0x14089016C (AlpcpDispatchCloseMessage.c)
 *     AlpcpDispatchConnectionRequest @ 0x14089032C (AlpcpDispatchConnectionRequest.c)
 *     AlpcpDispatchNewMessage @ 0x14089A470 (AlpcpDispatchNewMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x14089BF40 (AlpcpDispatchReplyToPort.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     ExNotifyCallback @ 0x14027DB30 (ExNotifyCallback.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeReleaseSemaphoreEx @ 0x1403AB4BC (KeReleaseSemaphoreEx.c)
 *     AlpcpQueueIoCompletionPort @ 0x1403ABBA0 (AlpcpQueueIoCompletionPort.c)
 *     PsGetProcessInheritedFromUniqueProcessId @ 0x14044B370 (PsGetProcessInheritedFromUniqueProcessId.c)
 *     AlpcpReleaseDirectAttribute @ 0x140463550 (AlpcpReleaseDirectAttribute.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     AlpcpLogWaitForReply @ 0x1407409E0 (AlpcpLogWaitForReply.c)
 *     PspChargeProcessWakeCounter @ 0x1408999A0 (PspChargeProcessWakeCounter.c)
 *     AlpcpCaptureMessageDataSafe @ 0x14089BA70 (AlpcpCaptureMessageDataSafe.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14089BCC0 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpLogReceiveMessage @ 0x14089BECC (AlpcpLogReceiveMessage.c)
 *     AlpcpExposeAttributes @ 0x1408A0770 (AlpcpExposeAttributes.c)
 *     AlpcpUnlockMessage @ 0x1408A1410 (AlpcpUnlockMessage.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x1409908B4 (AlpcpGetDataFromUserVaSafe.c)
 *     AlpcpGetDataFromMessage @ 0x140990904 (AlpcpGetDataFromMessage.c)
 *     AlpcpInsertMessagePendingQueue @ 0x1409942F0 (AlpcpInsertMessagePendingQueue.c)
 *     AlpcpAllocateFromBitmap @ 0x1409A97F0 (AlpcpAllocateFromBitmap.c)
 *     AlpcpLogSendMessage @ 0x140AA49B4 (AlpcpLogSendMessage.c)
 */

LONG_PTR __fastcall AlpcpCompleteDispatchMessage(__int64 a1)
{
  int v1; // r8d
  __int64 v2; // rbp
  int v3; // r12d
  ULONG_PTR v4; // r14
  BOOL v6; // eax
  int v7; // r8d
  unsigned int v8; // ecx
  int v9; // edx
  BOOL v10; // r15d
  __int64 v11; // rbx
  int v12; // edi
  unsigned int v13; // r12d
  unsigned __int64 v14; // rax
  volatile signed __int32 **v15; // rdi
  volatile signed __int64 *v16; // r12
  char *v17; // rax
  char *v18; // r15
  volatile signed __int32 *v19; // r15
  unsigned int v20; // edx
  int v21; // ecx
  bool v22; // zf
  __int64 v23; // rcx
  volatile signed __int32 **v24; // rax
  char *v25; // rax
  char *v26; // rbx
  int v27; // eax
  char v28; // r12
  __int64 v29; // r15
  char *v30; // rax
  char *v31; // r15
  int v32; // eax
  char v33; // di
  LONG_PTR result; // rax
  unsigned int v35; // r8d
  unsigned int v36; // edx
  int v37; // ecx
  int v38; // edx
  int v39; // r9d
  unsigned int v40; // r8d
  BOOL v41; // eax
  __int64 v42; // rdx
  unsigned int v43; // edi
  int v44; // r10d
  int v45; // r8d
  unsigned int v46; // r12d
  __int64 v47; // r8
  unsigned int v48; // r10d
  unsigned __int64 v49; // rcx
  __int64 v50; // r9
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rax
  unsigned int v53; // eax
  unsigned int v54; // eax
  unsigned int v55; // r12d
  __int64 v56; // r8
  void *v57; // r9
  __int64 v58; // rcx
  size_t v59; // rcx
  const void *v60; // rdx
  size_t v61; // r8
  void *v62; // rcx
  int v63; // r8d
  unsigned __int64 v64; // rdi
  unsigned __int64 v65; // rax
  unsigned __int64 *v66; // rdi
  char *v67; // rax
  unsigned __int64 v68; // r8
  unsigned __int64 v69; // rdi
  signed __int64 v70; // rax
  volatile signed __int64 *v71; // rcx
  int v72; // edx
  char *v73; // rax
  char *v74; // r15
  int v75; // eax
  unsigned int v76; // edi
  unsigned __int64 v77; // rax
  unsigned __int64 v78; // rcx
  unsigned __int64 v79; // rdx
  unsigned __int64 v80; // r10
  __int64 v81; // rdi
  unsigned int v82; // r8d
  unsigned int v83; // r12d
  volatile signed __int32 *v84; // r9
  int v85; // r12d
  signed __int64 v86; // rax
  int v87; // eax
  __int16 v88; // dx
  __int16 v89; // ax
  __int16 v90; // ax
  __int16 v91; // r8
  unsigned int v92; // edx
  int v93; // ecx
  __int64 v94; // r9
  unsigned __int64 v95; // rcx
  __int64 v96; // r9
  unsigned int v97; // edx
  unsigned __int64 v98; // rax
  void *v99; // rbx
  _DWORD *v100; // [rsp+20h] [rbp-C8h]
  int v101; // [rsp+40h] [rbp-A8h]
  unsigned int v102; // [rsp+40h] [rbp-A8h]
  volatile signed __int64 *v103; // [rsp+40h] [rbp-A8h]
  volatile signed __int64 *v104; // [rsp+40h] [rbp-A8h]
  int v105; // [rsp+48h] [rbp-A0h]
  int v106; // [rsp+48h] [rbp-A0h]
  int v107; // [rsp+50h] [rbp-98h]
  size_t v108; // [rsp+50h] [rbp-98h]
  unsigned __int64 v109; // [rsp+50h] [rbp-98h]
  __int64 v110; // [rsp+58h] [rbp-90h]
  __int64 v111; // [rsp+58h] [rbp-90h]
  __int64 v112; // [rsp+60h] [rbp-88h]
  __int64 v113; // [rsp+60h] [rbp-88h]
  __int64 v114; // [rsp+60h] [rbp-88h]
  int v115; // [rsp+68h] [rbp-80h]
  int v116; // [rsp+6Ch] [rbp-7Ch]
  __int64 v117; // [rsp+70h] [rbp-78h]
  size_t v118; // [rsp+70h] [rbp-78h]
  char *v119; // [rsp+70h] [rbp-78h]
  int v120; // [rsp+78h] [rbp-70h]
  __int64 v121; // [rsp+80h] [rbp-68h]
  unsigned __int64 v122; // [rsp+88h] [rbp-60h]
  __int64 v123; // [rsp+88h] [rbp-60h]
  unsigned int v124; // [rsp+F0h] [rbp+8h]
  char v125; // [rsp+F8h] [rbp+10h]
  int v126; // [rsp+100h] [rbp+18h]
  int v127; // [rsp+108h] [rbp+20h]

  v1 = *(_DWORD *)(a1 + 48);
  v2 = *(_QWORD *)(a1 + 32);
  v3 = v1 & 0x20000;
  v4 = *(_QWORD *)(a1 + 8);
  v121 = *(_QWORD *)(a1 + 16);
  v127 = v1 & 0x20000;
  v126 = v1 & 4;
  v116 = v1 & 0x400000;
  v6 = (v1 & 0x400000) != 0;
  v7 = v1 & 0x800000;
  v120 = v6;
  v8 = *(_DWORD *)(*(_QWORD *)a1 + 256LL);
  v9 = (v8 >> 21) & 1;
  if ( (v8 & 0x400000) != 0 )
    v9 = 2;
  v10 = v3 || v7;
  if ( (*(_DWORD *)(v4 + 40) & 0x200) == 0 )
  {
    v11 = *(_QWORD *)(v2 + 24);
    if ( (v11 & 1) == 0 )
    {
      if ( v11 )
      {
        if ( v10 || v9 || (AlpcpWakePolicyDefault & 1) == 0 )
        {
          v12 = 1;
          if ( v9 )
          {
            if ( v9 == 1 )
              v12 = 3;
          }
          else if ( (AlpcpWakePolicyDefault & 1) != 0 )
          {
            v12 = 3;
            if ( (AlpcpWakePolicyDefault & 2) != 0 )
              v12 = -2147483645;
          }
          v13 = *(_DWORD *)(v4 + 264);
          if ( PsGetProcessInheritedFromUniqueProcessId(*(_QWORD *)(v2 + 24)) )
            v14 = PspChargeProcessWakeCounter(v11, v12, 2u, v13, 1, 1, 0LL);
          else
            v14 = 0LL;
          v3 = v127;
          *(_QWORD *)(v4 + 208) = v14;
        }
        if ( KeHeteroSystem
          && v10
          && (!KeGetCurrentThread()->BamQosLevel
           || (*(_DWORD *)&KeGetCurrentThread()->Process->0 & 0x780) == 0x180
           || KeGetCurrentThread()->PpmPolicy == 3) )
        {
          v76 = *(_DWORD *)(v4 + 264);
          if ( PsGetProcessInheritedFromUniqueProcessId(v11) )
            v77 = PspChargeProcessWakeCounter(v11, 0, 6u, v76, 1, 1, 0LL);
          else
            v77 = 0LL;
          *(_QWORD *)(v4 + 216) = v77;
        }
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 48) & 8) == 0 )
  {
    v15 = (volatile signed __int32 **)(v2 + 232);
    if ( *v15 != (volatile signed __int32 *)v15 )
    {
      v16 = (volatile signed __int64 *)(v2 + 224);
      v17 = (char *)KeAbPreAcquire(v2 + 224, 0LL);
      v18 = v17;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 224), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v2 + 224), v17, v2 + 224);
      if ( v18 )
        v18[10] = 1;
      v19 = *v15;
      if ( *v15 != (volatile signed __int32 *)v15 )
      {
        if ( *(_QWORD *)(v4 + 176) )
        {
          AlpcpCaptureMessageDataSafe(v4);
          *(_QWORD *)(v4 + 176) = 0LL;
        }
        if ( *(_QWORD *)(v4 + 144) )
          AlpcpExposeViewAttributeInSenderContext(v2, v4);
        if ( (*(_DWORD *)(v4 + 40) & 0x200) == 0 )
          goto LABEL_168;
        v20 = (*(_QWORD *)(v4 + 136) != 0LL ? 0x80000000 : 0) | 0x40000000;
        if ( !*(_QWORD *)(v4 + 144) )
          v20 = *(_QWORD *)(v4 + 136) != 0LL ? 0x80000000 : 0;
        v21 = v20 | 0x10000000;
        if ( !*(_QWORD *)(v4 + 152) )
          v21 = v20;
        if ( (v21 & *(v19 - 2)) != 0 )
        {
LABEL_168:
          *(_WORD *)(v4 + 244) |= 0x2000u;
          ++*(_WORD *)(v4 - 30);
          AlpcpInsertMessagePendingQueue(v2, v4);
        }
        else
        {
          *(_WORD *)(v4 + 244) &= ~0x2000u;
        }
        ++*(_WORD *)(v4 - 30);
        *(_DWORD *)(v4 + 40) |= 0x2000u;
        v22 = AlpcpLogEnabled == 0;
        *((_QWORD *)v19 - 1) = v4;
        if ( !v22 )
          AlpcpLogSendMessage(v4);
        v23 = *(_QWORD *)v19;
        if ( *(volatile signed __int32 **)(*(_QWORD *)v19 + 8LL) != v19
          || (v24 = (volatile signed __int32 **)*((_QWORD *)v19 + 1), *v24 != v19) )
        {
          __fastfail(3u);
        }
        *v24 = (volatile signed __int32 *)v23;
        *(_QWORD *)(v23 + 8) = v24;
        *(_QWORD *)v19 = 0LL;
        *(_DWORD *)(v4 + 40) &= ~0x10000u;
        AlpcpUnlockMessage(v4);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v121 - 16), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v121 - 16));
        KeAbPostRelease(v121 - 16);
        if ( (_InterlockedExchangeAdd64(v16, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v2 + 224));
        KeAbPostRelease(v2 + 224);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 352), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v2 + 352));
        KeAbPostRelease(v2 + 352);
        result = ObfDereferenceObject((PVOID)v2);
        *(_QWORD *)(a1 + 32) = 0LL;
        if ( !v127 && !v126 )
          return KeReleaseSemaphoreEx(v19 - 44, 1LL, 1, v96, v116 != 0 ? 2 : 0, 0LL);
        *(_QWORD *)(a1 + 24) = v19 - 370;
        return result;
      }
      if ( (_InterlockedExchangeAdd64(v16, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v2 + 224));
      KeAbPostRelease(v2 + 224);
    }
    if ( *(_QWORD *)(v2 + 32) )
    {
      v28 = 1;
      v115 = 0;
    }
    else
    {
      v28 = 0;
      v115 = (*(_DWORD *)(v2 + 416) >> 9) & 1;
    }
    v29 = *(_QWORD *)(v2 + 360);
    v125 = v28;
    if ( !v29 )
      goto LABEL_60;
    v35 = *(_DWORD *)(v2 + 416);
    if ( (v35 & 0x10000) == 0 )
      goto LABEL_60;
    v36 = (*(_QWORD *)(v4 + 136) != 0LL ? 0x80000000 : 0) | 0x40000000;
    if ( !*(_QWORD *)(v4 + 144) )
      v36 = *(_QWORD *)(v4 + 136) != 0LL ? 0x80000000 : 0;
    v37 = v36 | 0x10000000;
    if ( !*(_QWORD *)(v4 + 152) )
      v37 = v36;
    if ( *(_QWORD *)(v4 + 168) )
      v37 |= 0x2000000u;
    v38 = *(_DWORD *)(v29 + 148);
    if ( (~v38 & v37) != 0 || (*(unsigned __int16 *)(v4 + 244) & 0xFFFF00FF) == 5 && (v38 & 0x20000000) == 0 )
      goto LABEL_60;
    v39 = *(unsigned __int16 *)(v4 + 242);
    v40 = v35 >> 11;
    if ( v38 )
    {
      v41 = (v40 & 1) == 0;
      v42 = (unsigned int)(4 * v41 + 3) & (v4 + 240 + *(unsigned __int16 *)(v4 + 242));
      if ( v42 )
        v43 = 4 * v41 + 4 - v42;
      else
        v43 = 0;
      v39 += v43 + *(_DWORD *)(v29 + 152);
    }
    else
    {
      v43 = 0;
    }
    v44 = v39 - 16;
    v45 = v40 & 1;
    v46 = -1;
    v22 = v45 == 0;
    v105 = v45 << 31;
    v47 = *(_QWORD *)(v29 + 104);
    if ( v22 )
      v44 = v39;
    v110 = *(_QWORD *)(v29 + 104);
    v48 = (unsigned int)(v44 + 63) >> 6;
    v49 = *(_QWORD *)(v29 + 96) >> 2;
    v122 = v49;
    v50 = v47 + 4 * ((unsigned __int64)*(unsigned int *)(v29 + 136) >> 5);
    v124 = v48;
    v117 = v50;
    v51 = 0LL;
    while ( 1 )
    {
      v101 = v51;
      if ( v51 >= v49 )
        goto LABEL_107;
      v52 = *(_DWORD *)(v29 + 140) & 0xFFFFFFE0;
      if ( *(_DWORD *)(v29 + 140) >= *(_DWORD *)(v29 + 136) )
        v52 = 0LL;
      v107 = v52;
      v112 = v47 + 4 * (v52 >> 5);
      v53 = AlpcpAllocateFromBitmap(v112, v50, v48);
      v46 = v53;
      if ( v53 != -2 )
      {
        if ( v53 != -1 )
        {
          v46 = v107 + v53;
LABEL_106:
          v48 = v124;
LABEL_107:
          if ( v46 <= 0xFFFFFFFD )
          {
            v54 = v46 + v48;
            v55 = v46 << 6;
            *(_DWORD *)(v29 + 140) = v54;
            v56 = *(_QWORD *)(v29 + 120) + v55;
            v113 = v56;
            if ( v105 == 0x80000000 )
            {
              *(_WORD *)v56 = *(_WORD *)(v4 + 240);
              v87 = *(unsigned __int16 *)(v4 + 240) + 24;
              *(_WORD *)(v56 + 2) = v87;
              v88 = *(_WORD *)(v4 + 246);
              v102 = v87;
              v89 = 0;
              if ( v88 )
                v89 = v88 - 16;
              *(_WORD *)(v56 + 6) = v89;
              v90 = *(_WORD *)(v4 + 244) | 0x1000;
              *(_WORD *)(v56 + 4) = v90;
              *(_DWORD *)(v56 + 8) = *(_DWORD *)(v4 + 248);
              *(_DWORD *)(v56 + 12) = *(_DWORD *)(v4 + 256);
              *(_DWORD *)(v56 + 16) = *(_DWORD *)(v4 + 264);
              *(_DWORD *)(v56 + 20) = *(_DWORD *)(v4 + 272);
              *(_DWORD *)(v56 + 20) = *(_DWORD *)(v4 + 272);
              if ( (*(_DWORD *)(v2 + 256) & 0x1000) != 0 )
                *(_WORD *)(v56 + 4) = v90 & 0xC00F;
              AlpcpGetDataFromMessage(v4, v56 + 24);
            }
            else
            {
              *(_OWORD *)v56 = *(_OWORD *)(v4 + 240);
              *(_OWORD *)(v56 + 16) = *(_OWORD *)(v4 + 256);
              *(_QWORD *)(v56 + 32) = *(_QWORD *)(v4 + 272);
              if ( (*(_DWORD *)(v2 + 256) & 0x1000) != 0 )
                *(_WORD *)(v56 + 4) = *(_WORD *)(v4 + 244) & 0xC00F;
              v57 = (void *)(v56 + 40);
              v102 = *(unsigned __int16 *)(v4 + 242);
              v123 = v56 + 40;
              if ( *(_QWORD *)(v4 + 176) )
              {
                AlpcpGetDataFromUserVaSafe(v4, v56 + 40);
              }
              else
              {
                v58 = *(_QWORD *)(v4 + 96);
                if ( v58 )
                  v59 = *(_QWORD *)(v58 + 32) - 40LL;
                else
                  v59 = 512LL;
                v60 = (const void *)(v4 + 280);
                v108 = v59;
                v118 = *(unsigned __int16 *)(v4 + 240);
                if ( v118 > v59 )
                {
                  memmove(v57, v60, v59);
                  v61 = v118 - v108;
                  v62 = (void *)(v108 + v123);
                  v60 = *(const void **)(v4 + 224);
                }
                else
                {
                  v61 = *(unsigned __int16 *)(v4 + 240);
                  v62 = v57;
                }
                memmove(v62, v60, v61);
              }
            }
            v63 = *(_DWORD *)(v29 + 148);
            if ( v63 )
            {
              v100 = (_DWORD *)(v113 + v102 + v43);
              *v100 = v63;
              v100[1] = 0;
              AlpcpExposeAttributes(v2, v105, v4, *(_DWORD *)(v29 + 148), (__int64)v100);
            }
            v114 = *(_QWORD *)(v2 + 360);
            v64 = *(_QWORD *)(v114 + 96) >> 2;
            v111 = *(_QWORD *)(v114 + 80);
            v65 = 0LL;
            v109 = v64;
            while ( 1 )
            {
              v106 = v65;
              if ( v65 >= v64 )
                goto LABEL_159;
              v66 = (unsigned __int64 *)(*(_QWORD *)(v2 + 360) + 24LL);
              v67 = (char *)KeAbPreAcquire((__int64)v66, 0LL);
              v119 = v67;
              if ( _interlockedbittestandset64((volatile signed __int32 *)v66, 0LL) )
              {
                ExfAcquirePushLockExclusiveEx(v66, v67, (__int64)v66);
                v67 = v119;
              }
              if ( v67 )
                v67[10] = 1;
              v68 = *(_QWORD *)(v111 + 64);
              if ( ((unsigned int)v68 & (unsigned int)(v68 >> 24) & 0xFFFFFF) == 0xFFFFFFLL )
              {
                **(_DWORD **)(v114 + 88) = v55;
                v69 = v68 & 0xFFFF000000000000uLL;
                v70 = _InterlockedCompareExchange64(
                        (volatile signed __int64 *)(v111 + 64),
                        v68 & 0xFFFF000000000000uLL,
                        v68);
                v71 = (volatile signed __int64 *)(*(_QWORD *)(v2 + 360) + 24LL);
                v103 = v71;
                if ( v70 == v68 )
                {
                  if ( (_InterlockedExchangeAdd64(v71, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  {
                    ExfTryToWakePushLock(v71);
                    v71 = v103;
                  }
                  KeAbPostRelease((ULONG_PTR)v71);
                  _InterlockedIncrement((volatile signed __int32 *)(v111 + 128));
                  v72 = v69 < 0x1000000000000LL ? 2 : 0;
LABEL_130:
                  v33 = 1;
                  v28 = v125;
                  *(_DWORD *)(*(_QWORD *)(v29 + 80) + 72LL) = *(_DWORD *)(v4 + 264);
                  *(_DWORD *)(*(_QWORD *)(v29 + 80) + 76LL) = *(_DWORD *)(v4 + 272);
                  if ( v125
                    && !v72
                    && HIWORD(*(_QWORD *)(*(_QWORD *)(v29 + 80) + 64LL))
                     + (unsigned __int64)*(unsigned int *)(*(_QWORD *)(v2 + 48) + 12LL) >= *(unsigned int *)(v29 + 144) )
                  {
                    v28 = 0;
                  }
                  if ( (*(_DWORD *)(v4 + 40) & 0x200) != 0 )
                  {
                    v91 = *(_WORD *)(v4 + 244);
                    v92 = (*(_QWORD *)(v4 + 136) != 0LL ? 0x80000000 : 0) | 0x40000000;
                    if ( !*(_QWORD *)(v4 + 144) )
                      v92 = *(_QWORD *)(v4 + 136) != 0LL ? 0x80000000 : 0;
                    v93 = v92 | 0x10000000;
                    if ( !*(_QWORD *)(v4 + 152) )
                      v93 = v92;
                    if ( v93 )
                    {
                      *(_WORD *)(v4 + 244) = v91 | 0x2000;
                      ++*(_WORD *)(v4 - 30);
                      AlpcpInsertMessagePendingQueue(v2, v4);
                      v33 = 1;
                    }
                    else
                    {
                      *(_WORD *)(v4 + 244) = v91 & 0xDFFF;
                    }
                  }
                  else
                  {
                    *(_WORD *)(v4 + 244) |= 0x2000u;
                    ++*(_WORD *)(v4 - 30);
                    v73 = (char *)KeAbPreAcquire(v2 + 176, 0LL);
                    v74 = v73;
                    if ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 176), 0LL) )
                      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v2 + 176), v73, v2 + 176);
                    if ( v74 )
                      v74[10] = 1;
                    v75 = *(_DWORD *)(v4 + 40);
                    *(_QWORD *)(v4 + 16) = v2;
                    *(_DWORD *)(v4 + 40) = v75 & 0xFFFFFF83 | (4 * (*(_BYTE *)(v2 + 416) & 6)) & 0xFB | 3;
                    *(_QWORD *)(v4 + 8) = *(_QWORD *)(v2 + 192);
                    *(_QWORD *)v4 = v2 + 184;
                    **(_QWORD **)(v2 + 192) = v4;
                    *(_QWORD *)(v2 + 192) = v4;
                    ++*(_DWORD *)(v2 + 456);
                    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                      ExfTryToWakePushLock((volatile signed __int64 *)(v2 + 176));
                    KeAbPostRelease(v2 + 176);
                    v33 = 1;
                  }
                  goto LABEL_71;
                }
                if ( (_InterlockedExchangeAdd64(v71, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                {
                  ExfTryToWakePushLock(v71);
                  v71 = v103;
                }
                v64 = v109;
              }
              else
              {
                v64 = v109;
                if ( (v68 & 0xFFFFFF) >= v109 || (v78 = (v68 >> 24) & 0xFFFFFF, v78 >= v109) )
                {
                  v81 = *(_QWORD *)(v2 + 360);
                  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v81 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
LABEL_202:
                    ExfTryToWakePushLock((volatile signed __int64 *)(v81 + 24));
LABEL_158:
                  KeAbPostRelease(v81 + 24);
LABEL_159:
                  v82 = v124;
                  v83 = v55 >> 6;
                  v84 = (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v2 + 360) + 104LL)
                                                  + 4 * ((unsigned __int64)v83 >> 5));
                  v85 = v83 & 0x1F;
                  if ( v85 )
                  {
                    v97 = 32 - v85;
                    if ( v124 < 32 - v85 )
                      v97 = v124;
                    _InterlockedAnd(v84, ~(((1 << v97) - 1) << v85));
                    v82 = v124 - v97;
                    ++v84;
                  }
                  if ( v82 >= 0x20 )
                  {
                    v98 = (unsigned __int64)v82 >> 5;
                    do
                    {
                      _InterlockedAnd(v84, 0);
                      v82 -= 32;
                      ++v84;
                      --v98;
                    }
                    while ( v98 );
                  }
                  v28 = v125;
                  if ( v82 )
                    _InterlockedAnd(v84, -1 << v82);
LABEL_60:
                  if ( *(_QWORD *)(v4 + 176) )
                  {
                    AlpcpCaptureMessageDataSafe(v4);
                    *(_QWORD *)(v4 + 176) = 0LL;
                  }
                  if ( *(_QWORD *)(v4 + 144) )
                    AlpcpExposeViewAttributeInSenderContext(v2, v4);
                  ++*(_WORD *)(v4 - 30);
                  v30 = (char *)KeAbPreAcquire(v2 + 136, 0LL);
                  v31 = v30;
                  if ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 136), 0LL) )
                    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v2 + 136), v30, v2 + 136);
                  if ( v31 )
                    v31[10] = 1;
                  v32 = *(_DWORD *)(v4 + 40);
                  *(_QWORD *)(v4 + 16) = v2;
                  *(_DWORD *)(v4 + 40) = v32 & 0xFFFFFF81 | (4 * (*(_BYTE *)(v2 + 416) & 6)) & 0xF9 | 1;
                  *(_QWORD *)(v4 + 8) = *(_QWORD *)(v2 + 152);
                  *(_QWORD *)v4 = v2 + 144;
                  **(_QWORD **)(v2 + 152) = v4;
                  *(_QWORD *)(v2 + 152) = v4;
                  ++*(_DWORD *)(v2 + 448);
                  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 136), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                    ExfTryToWakePushLock((volatile signed __int64 *)(v2 + 136));
                  KeAbPostRelease(v2 + 136);
                  v33 = 0;
LABEL_71:
                  if ( AlpcpLogEnabled )
                    AlpcpLogSendMessage(v4);
                  if ( v33 && AlpcpLogEnabled )
                    AlpcpLogReceiveMessage(v4);
                  if ( v127 && AlpcpLogEnabled )
                    AlpcpLogWaitForReply(v4);
                  *(_DWORD *)(v4 + 40) &= ~0x10000u;
                  AlpcpUnlockMessage(v4);
                  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v121 - 16), 0LL, 17LL) != 17 )
                    ExfReleasePushLockShared((signed __int64 *)(v121 - 16));
                  result = KeAbPostRelease(v121 - 16);
                  if ( v115 )
                  {
                    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 352), 0LL, 17LL) != 17 )
                      ExfReleasePushLockShared((signed __int64 *)(v2 + 352));
                    result = KeAbPostRelease(v2 + 352);
                    if ( v127 || v126 )
                    {
                      *(_BYTE *)(a1 + 58) = 0;
                      return result;
                    }
                    KeReleaseSemaphoreEx(*(volatile signed __int32 **)(v2 + 248), 1LL, 1, v94, v116 != 0 ? 2 : 0, 0LL);
                  }
                  else
                  {
                    if ( v28 )
                    {
                      if ( v127 || v126 )
                      {
                        *(_BYTE *)(a1 + 58) = 1;
                        *(_BYTE *)(a1 + 59) = v33;
                      }
                      else
                      {
                        AlpcpQueueIoCompletionPort((_QWORD *)v2, v33, 1, 0, v120);
                        result = ObfDereferenceObject((PVOID)v2);
                        *(_QWORD *)(a1 + 32) = 0LL;
                      }
                      return result;
                    }
                    v99 = *(void **)(v2 + 368);
                    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 352), 0LL, 17LL) != 17 )
                      ExfReleasePushLockShared((signed __int64 *)(v2 + 352));
                    KeAbPostRelease(v2 + 352);
                    if ( v99 )
                      ExNotifyCallback(v99, *(PVOID *)(v2 + 376), (PVOID)*(unsigned int *)(a1 + 48));
                  }
                  result = ObfDereferenceObject((PVOID)v2);
                  *(_QWORD *)(a1 + 32) = 0LL;
                  return result;
                }
                v79 = ((v78 + 1) % v109) << 24;
                v80 = ((v78 + 1) % v109) & 0xFFFFFF;
                if ( v80 == (((unsigned int)v79 ^ ((unsigned int)v68 ^ ((unsigned int)((v78 + 1) % v109) << 24)) & 0xFFFFFF) & 0xFFFFFF) )
                {
                  v81 = *(_QWORD *)(v2 + 360);
                  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v81 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                    goto LABEL_202;
                  goto LABEL_158;
                }
                *(_DWORD *)(*(_QWORD *)(v114 + 88) + 4 * v80) = v55;
                v86 = _InterlockedCompareExchange64(
                        (volatile signed __int64 *)(v111 + 64),
                        v79 ^ (v68 ^ v79) & 0xFFFF000000FFFFFFuLL,
                        v68);
                v71 = (volatile signed __int64 *)(*(_QWORD *)(v2 + 360) + 24LL);
                v104 = v71;
                if ( v86 == v68 )
                {
                  if ( (_InterlockedExchangeAdd64(v71, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  {
                    ExfTryToWakePushLock(v71);
                    v71 = v104;
                  }
                  KeAbPostRelease((ULONG_PTR)v71);
                  _InterlockedIncrement((volatile signed __int32 *)(v111 + 128));
                  v72 = 0;
                  goto LABEL_130;
                }
                if ( (_InterlockedExchangeAdd64(v71, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                {
                  ExfTryToWakePushLock(v71);
                  v71 = v104;
                }
              }
              KeAbPostRelease((ULONG_PTR)v71);
              v65 = (unsigned int)(v106 + 1);
            }
          }
LABEL_175:
          v28 = v125;
          goto LABEL_60;
        }
        if ( !v107 )
          goto LABEL_175;
        v46 = AlpcpAllocateFromBitmap(v110, v112, v124);
        if ( v46 != -2 )
          goto LABEL_106;
      }
      v48 = v124;
      v51 = (unsigned int)(v101 + 1);
      v49 = v122;
      v47 = v110;
      v50 = v117;
    }
  }
  if ( *(_QWORD *)(v4 + 176) )
  {
    AlpcpCaptureMessageDataSafe(v4);
    *(_QWORD *)(v4 + 176) = 0LL;
  }
  if ( *(_QWORD *)(v4 + 144) )
    AlpcpExposeViewAttributeInSenderContext(v2, v4);
  ++*(_WORD *)(v4 - 30);
  v25 = (char *)KeAbPreAcquire(v2 + 200, 0LL);
  v26 = v25;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 200), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v2 + 200), v25, v2 + 200);
  if ( v26 )
    v26[10] = 1;
  v27 = *(_DWORD *)(v4 + 40);
  *(_QWORD *)(v4 + 16) = v2;
  *(_DWORD *)(v4 + 40) = v27 & 0xFFFFFF84 | (4 * (*(_DWORD *)(v2 + 416) & 6)) | 4;
  *(_QWORD *)(v4 + 8) = *(_QWORD *)(v2 + 216);
  *(_QWORD *)v4 = v2 + 208;
  **(_QWORD **)(v2 + 216) = v4;
  *(_QWORD *)(v2 + 216) = v4;
  ++*(_DWORD *)(v2 + 460);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 200), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v2 + 200));
  KeAbPostRelease(v2 + 200);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(v4 + 160);
  *(_DWORD *)(v4 + 40) &= ~0x10000u;
  *(_QWORD *)(v4 + 160) = 0LL;
  AlpcpUnlockMessage(v4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v121 - 16), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v121 - 16));
  KeAbPostRelease(v121 - 16);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 352), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v2 + 352));
  KeAbPostRelease(v2 + 352);
  result = ObfDereferenceObject((PVOID)v2);
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( !v3 && !v126 )
  {
    v95 = *(_QWORD *)(a1 + 40);
    if ( v95 >= 4 )
    {
      KeSetEvent((PRKEVENT)(v95 & 0xFFFFFFFFFFFFFFFCuLL), 0, 0);
      result = AlpcpReleaseDirectAttribute(*(_QWORD *)(a1 + 40));
    }
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  return result;
}
