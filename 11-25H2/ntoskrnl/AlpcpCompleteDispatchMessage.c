/*
 * XREFs of AlpcpCompleteDispatchMessage @ 0x1408A9370
 * Callers:
 *     AlpcpDispatchNewMessage @ 0x1408A8F50 (AlpcpDispatchNewMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x1408ACCE0 (AlpcpDispatchReplyToPort.c)
 *     AlpcpDispatchCloseMessage @ 0x14098CC44 (AlpcpDispatchCloseMessage.c)
 *     AlpcpDispatchConnectionRequest @ 0x14098D0EC (AlpcpDispatchConnectionRequest.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     AlpcpQueueIoCompletionPort @ 0x140280A30 (AlpcpQueueIoCompletionPort.c)
 *     KeReleaseSemaphoreEx @ 0x1402838B8 (KeReleaseSemaphoreEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExNotifyCallback @ 0x1402EACD0 (ExNotifyCallback.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     PsGetProcessInheritedFromUniqueProcessId @ 0x140456260 (PsGetProcessInheritedFromUniqueProcessId.c)
 *     AlpcpReleaseDirectAttribute @ 0x14046BB78 (AlpcpReleaseDirectAttribute.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     AlpcpLogWaitForReply @ 0x140736A90 (AlpcpLogWaitForReply.c)
 *     AlpcpExposeAttributes @ 0x1408A7C40 (AlpcpExposeAttributes.c)
 *     AlpcpCaptureMessageDataSafe @ 0x1408AA5A0 (AlpcpCaptureMessageDataSafe.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1408AA7F0 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpUnlockMessage @ 0x1408AA9C0 (AlpcpUnlockMessage.c)
 *     AlpcpAllocateFromBitmap @ 0x1408AADB0 (AlpcpAllocateFromBitmap.c)
 *     AlpcpLogReceiveMessage @ 0x1408AAF48 (AlpcpLogReceiveMessage.c)
 *     PspChargeProcessWakeCounter @ 0x1408B2120 (PspChargeProcessWakeCounter.c)
 *     AlpcpInsertMessagePendingQueue @ 0x14098E690 (AlpcpInsertMessagePendingQueue.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x14098E8E8 (AlpcpGetDataFromUserVaSafe.c)
 *     AlpcpGetDataFromMessage @ 0x14098E938 (AlpcpGetDataFromMessage.c)
 *     AlpcpLogSendMessage @ 0x140AA48A4 (AlpcpLogSendMessage.c)
 */

LONG_PTR __fastcall AlpcpCompleteDispatchMessage(__int64 a1)
{
  int v1; // r8d
  __int64 v2; // rbp
  int v3; // r15d
  ULONG_PTR v4; // r14
  BOOL v6; // eax
  __int64 v7; // r8
  unsigned int v8; // ecx
  unsigned __int64 v9; // rdx
  BOOL v10; // r12d
  __int64 v11; // rbx
  __int64 v12; // rax
  volatile signed __int32 **v13; // rsi
  volatile signed __int64 *v14; // r12
  __int64 *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 *v18; // r15
  volatile signed __int32 *v19; // r15
  unsigned int v20; // edx
  int v21; // ecx
  bool v22; // zf
  __int64 v23; // rcx
  volatile signed __int32 **v24; // rax
  char v25; // r12
  __int64 v26; // r15
  __int64 *v27; // rax
  __int64 *v28; // r15
  int v29; // eax
  char v30; // si
  LONG_PTR result; // rax
  __int64 v32; // r8
  __int64 *v33; // rax
  __int64 *v34; // rbx
  int v35; // eax
  unsigned __int64 v36; // rcx
  int v37; // ecx
  int v38; // r9d
  unsigned int v39; // r8d
  BOOL v40; // eax
  __int64 v41; // r9
  unsigned int v42; // esi
  __int64 v43; // r9
  unsigned int v44; // r12d
  unsigned __int64 v45; // rcx
  __int64 v46; // r10
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rax
  unsigned int v49; // eax
  int v50; // eax
  unsigned int v51; // r12d
  __int64 v52; // r8
  void *v53; // r9
  __int64 v54; // rcx
  size_t v55; // rcx
  const void *v56; // rdx
  size_t v57; // r8
  void *v58; // rcx
  int v59; // r8d
  unsigned __int64 v60; // rsi
  unsigned __int64 v61; // rax
  unsigned __int64 *v62; // rsi
  __int64 *v63; // rax
  unsigned __int64 v64; // r8
  unsigned __int64 v65; // rsi
  signed __int64 v66; // rax
  volatile signed __int64 *v67; // rcx
  int v68; // edx
  __int64 *v69; // rax
  __int64 *v70; // r15
  int v71; // eax
  __int64 v72; // rax
  __int64 v73; // r9
  unsigned __int64 v74; // rcx
  unsigned __int64 v75; // rdx
  unsigned __int64 v76; // r10
  __int64 v77; // rsi
  unsigned int v78; // r12d
  volatile signed __int32 *v79; // r9
  int v80; // r12d
  void *v81; // rsi
  signed __int64 v82; // rax
  __int64 v83; // r9
  int v84; // eax
  __int16 v85; // dx
  __int16 v86; // ax
  __int16 v87; // ax
  __int16 v88; // r8
  unsigned int v89; // edx
  int v90; // ecx
  unsigned __int64 v91; // rax
  _DWORD *v92; // [rsp+20h] [rbp-C8h]
  int v93; // [rsp+40h] [rbp-A8h]
  unsigned int v94; // [rsp+40h] [rbp-A8h]
  volatile signed __int64 *v95; // [rsp+40h] [rbp-A8h]
  volatile signed __int64 *v96; // [rsp+40h] [rbp-A8h]
  int v97; // [rsp+48h] [rbp-A0h]
  size_t v98; // [rsp+48h] [rbp-A0h]
  unsigned __int64 v99; // [rsp+48h] [rbp-A0h]
  int v100; // [rsp+50h] [rbp-98h]
  __int64 v101; // [rsp+58h] [rbp-90h]
  __int64 v102; // [rsp+58h] [rbp-90h]
  __int64 v103; // [rsp+60h] [rbp-88h]
  __int64 v104; // [rsp+60h] [rbp-88h]
  __int64 v105; // [rsp+60h] [rbp-88h]
  int v106; // [rsp+68h] [rbp-80h]
  int v107; // [rsp+6Ch] [rbp-7Ch]
  __int64 v108; // [rsp+70h] [rbp-78h]
  size_t v109; // [rsp+70h] [rbp-78h]
  __int64 *v110; // [rsp+70h] [rbp-78h]
  int v111; // [rsp+78h] [rbp-70h]
  __int64 v112; // [rsp+80h] [rbp-68h]
  unsigned __int64 v113; // [rsp+88h] [rbp-60h]
  __int64 v114; // [rsp+88h] [rbp-60h]
  unsigned int v115; // [rsp+F0h] [rbp+8h]
  char v116; // [rsp+F8h] [rbp+10h]
  int v117; // [rsp+100h] [rbp+18h]
  int v118; // [rsp+108h] [rbp+20h]
  int v119; // [rsp+108h] [rbp+20h]

  v1 = *(_DWORD *)(a1 + 48);
  v2 = *(_QWORD *)(a1 + 32);
  v3 = v1 & 0x20000;
  v4 = *(_QWORD *)(a1 + 8);
  v112 = *(_QWORD *)(a1 + 16);
  v100 = v1 & 0x20000;
  v117 = v1 & 4;
  v107 = v1 & 0x400000;
  v6 = (v1 & 0x400000) != 0;
  v7 = v1 & 0x800000;
  v111 = v6;
  v8 = *(_DWORD *)(*(_QWORD *)a1 + 256LL);
  v9 = (v8 >> 21) & 1;
  if ( (v8 & 0x400000) != 0 )
    v9 = 2LL;
  v10 = v3 || (_DWORD)v7;
  if ( (*(_DWORD *)(v4 + 40) & 0x200) == 0 )
  {
    v11 = *(_QWORD *)(v2 + 24);
    if ( (v11 & 1) == 0 )
    {
      if ( v11 )
      {
        if ( v10 || (_DWORD)v9 || (AlpcpWakePolicyDefault & 1) == 0 )
        {
          if ( PsGetProcessInheritedFromUniqueProcessId(*(_QWORD *)(v2 + 24)) )
            v12 = PspChargeProcessWakeCounter((PVOID)v11, 1, 1, 0LL);
          else
            v12 = 0LL;
          v3 = v100;
          *(_QWORD *)(v4 + 208) = v12;
        }
        if ( KeHeteroSystem
          && v10
          && (!KeGetCurrentThread()->BamQosLevel
           || (*(_DWORD *)&KeGetCurrentThread()->Process->0 & 0x780) == 0x180
           || KeGetCurrentThread()->PpmPolicy == 3) )
        {
          if ( PsGetProcessInheritedFromUniqueProcessId(v11) )
            v72 = PspChargeProcessWakeCounter((PVOID)v11, 1, 1, 0LL);
          else
            v72 = 0LL;
          *(_QWORD *)(v4 + 216) = v72;
        }
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 48) & 8) == 0 )
  {
    v13 = (volatile signed __int32 **)(v2 + 232);
    if ( *v13 != (volatile signed __int32 *)v13 )
    {
      v14 = (volatile signed __int64 *)(v2 + 224);
      v15 = KeAbPreAcquire(v2 + 224, 0LL);
      v18 = v15;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 224), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v2 + 224), v15, v2 + 224);
      if ( v18 )
        *((_BYTE *)v18 + 10) = 1;
      v19 = *v13;
      if ( *v13 != (volatile signed __int32 *)v13 )
      {
        if ( *(_QWORD *)(v4 + 176) )
        {
          AlpcpCaptureMessageDataSafe(v4, v16, v17);
          *(_QWORD *)(v4 + 176) = 0LL;
        }
        if ( *(_QWORD *)(v4 + 144) )
          AlpcpExposeViewAttributeInSenderContext(v2, v4, v17);
        if ( (*(_DWORD *)(v4 + 40) & 0x200) == 0 )
          goto LABEL_184;
        v20 = (*(_QWORD *)(v4 + 136) != 0LL ? 0x80000000 : 0) | 0x40000000;
        if ( !*(_QWORD *)(v4 + 144) )
          v20 = *(_QWORD *)(v4 + 136) != 0LL ? 0x80000000 : 0;
        v21 = v20 | 0x10000000;
        if ( !*(_QWORD *)(v4 + 152) )
          v21 = v20;
        if ( (v21 & *(v19 - 2)) != 0 )
        {
LABEL_184:
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
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v112 - 16), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v112 - 16));
        KeAbPostRelease(v112 - 16);
        if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v2 + 224));
        KeAbPostRelease(v2 + 224);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 352), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v2 + 352));
        KeAbPostRelease(v2 + 352);
        result = ObfDereferenceObject((PVOID)v2);
        *(_QWORD *)(a1 + 32) = 0LL;
        if ( !v100 && !v117 )
          return KeReleaseSemaphoreEx(v19 - 44, 1, 1, v83, v107 != 0 ? 2 : 0, 0LL);
        *(_QWORD *)(a1 + 24) = v19 - 370;
        return result;
      }
      if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v2 + 224));
      KeAbPostRelease(v2 + 224);
    }
    if ( *(_QWORD *)(v2 + 32) )
    {
      v25 = 1;
      v106 = 0;
    }
    else
    {
      v25 = 0;
      v106 = (*(_DWORD *)(v2 + 416) >> 9) & 1;
    }
    v26 = *(_QWORD *)(v2 + 360);
    v116 = v25;
    if ( !v26 )
      goto LABEL_46;
    v7 = *(unsigned int *)(v2 + 416);
    if ( (v7 & 0x10000) == 0 )
      goto LABEL_46;
    v9 = *(_QWORD *)(v4 + 136) != 0LL ? 0x80000000 : 0;
    LODWORD(v9) = v9 | 0x40000000;
    if ( !*(_QWORD *)(v4 + 144) )
      v9 = *(_QWORD *)(v4 + 136) != 0LL ? 0x80000000 : 0;
    v37 = v9 | 0x10000000;
    if ( !*(_QWORD *)(v4 + 152) )
      v37 = v9;
    if ( *(_QWORD *)(v4 + 168) )
      v37 |= 0x2000000u;
    v38 = *(_DWORD *)(v26 + 148);
    if ( (~v38 & v37) != 0 || (*(unsigned __int16 *)(v4 + 244) & 0xFFFF00FF) == 5 && (v38 & 0x20000000) == 0 )
      goto LABEL_46;
    v9 = *(unsigned __int16 *)(v4 + 242);
    v39 = (unsigned int)v7 >> 11;
    if ( v38 )
    {
      v40 = (v39 & 1) == 0;
      v41 = (unsigned int)(4 * v40 + 3) & (v4 + 240 + *(unsigned __int16 *)(v4 + 242));
      if ( v41 )
        v42 = 4 * v40 + 4 - v41;
      else
        v42 = 0;
      v9 = v42 + *(_DWORD *)(v26 + 152) + (unsigned int)v9;
    }
    else
    {
      v42 = 0;
    }
    v118 = 0;
    if ( (v39 & 1) != 0 )
    {
      v9 = (unsigned int)(v9 - 16);
      v118 = 0x80000000;
    }
    v43 = *(_QWORD *)(v26 + 104);
    v44 = -1;
    v7 = (unsigned int)(v9 + 63) >> 6;
    v45 = *(_QWORD *)(v26 + 96) >> 2;
    v115 = (unsigned int)(v9 + 63) >> 6;
    v46 = v43 + 4 * ((unsigned __int64)*(unsigned int *)(v26 + 136) >> 5);
    v101 = v43;
    v108 = v46;
    v47 = 0LL;
    v113 = v45;
    while ( 1 )
    {
      v93 = v47;
      if ( v47 >= v45 )
        goto LABEL_112;
      v48 = *(_DWORD *)(v26 + 140) & 0xFFFFFFE0;
      if ( *(_DWORD *)(v26 + 140) >= *(_DWORD *)(v26 + 136) )
        v48 = 0LL;
      v97 = v48;
      v103 = v43 + 4 * (v48 >> 5);
      v49 = AlpcpAllocateFromBitmap(v103, v46);
      v44 = v49;
      if ( v49 != -2 )
      {
        if ( v49 != -1 )
        {
          v44 = v97 + v49;
LABEL_111:
          v7 = v115;
LABEL_112:
          if ( v44 <= 0xFFFFFFFD )
          {
            v50 = v44 + v7;
            v51 = v44 << 6;
            *(_DWORD *)(v26 + 140) = v50;
            v52 = *(_QWORD *)(v26 + 120) + v51;
            v104 = v52;
            if ( v118 == 0x80000000 )
            {
              *(_WORD *)v52 = *(_WORD *)(v4 + 240);
              v84 = *(unsigned __int16 *)(v4 + 240) + 24;
              *(_WORD *)(v52 + 2) = v84;
              v85 = *(_WORD *)(v4 + 246);
              v94 = v84;
              v86 = 0;
              if ( v85 )
                v86 = v85 - 16;
              *(_WORD *)(v52 + 6) = v86;
              v87 = *(_WORD *)(v4 + 244) | 0x1000;
              *(_WORD *)(v52 + 4) = v87;
              *(_DWORD *)(v52 + 8) = *(_DWORD *)(v4 + 248);
              *(_DWORD *)(v52 + 12) = *(_DWORD *)(v4 + 256);
              *(_DWORD *)(v52 + 16) = *(_DWORD *)(v4 + 264);
              *(_DWORD *)(v52 + 20) = *(_DWORD *)(v4 + 272);
              *(_DWORD *)(v52 + 20) = *(_DWORD *)(v4 + 272);
              if ( (*(_DWORD *)(v2 + 256) & 0x1000) != 0 )
                *(_WORD *)(v52 + 4) = v87 & 0xC00F;
              AlpcpGetDataFromMessage(v4, v52 + 24);
            }
            else
            {
              *(_OWORD *)v52 = *(_OWORD *)(v4 + 240);
              *(_OWORD *)(v52 + 16) = *(_OWORD *)(v4 + 256);
              *(_QWORD *)(v52 + 32) = *(_QWORD *)(v4 + 272);
              if ( (*(_DWORD *)(v2 + 256) & 0x1000) != 0 )
                *(_WORD *)(v52 + 4) = *(_WORD *)(v4 + 244) & 0xC00F;
              v53 = (void *)(v52 + 40);
              v94 = *(unsigned __int16 *)(v4 + 242);
              v114 = v52 + 40;
              if ( *(_QWORD *)(v4 + 176) )
              {
                AlpcpGetDataFromUserVaSafe(v4, v52 + 40);
              }
              else
              {
                v54 = *(_QWORD *)(v4 + 96);
                if ( v54 )
                  v55 = *(_QWORD *)(v54 + 32) - 40LL;
                else
                  v55 = 512LL;
                v56 = (const void *)(v4 + 280);
                v98 = v55;
                v109 = *(unsigned __int16 *)(v4 + 240);
                if ( v109 > v55 )
                {
                  memmove(v53, v56, v55);
                  v57 = v109 - v98;
                  v58 = (void *)(v98 + v114);
                  v56 = *(const void **)(v4 + 224);
                }
                else
                {
                  v57 = *(unsigned __int16 *)(v4 + 240);
                  v58 = v53;
                }
                memmove(v58, v56, v57);
              }
            }
            v59 = *(_DWORD *)(v26 + 148);
            if ( v59 )
            {
              v92 = (_DWORD *)(v104 + v94 + v42);
              *v92 = v59;
              v92[1] = 0;
              AlpcpExposeAttributes(v2, v118, v4, *(_DWORD *)(v26 + 148), (__int64)v92);
            }
            v105 = *(_QWORD *)(v2 + 360);
            v60 = *(_QWORD *)(v105 + 96) >> 2;
            v102 = *(_QWORD *)(v105 + 80);
            v61 = 0LL;
            v99 = v60;
            while ( 1 )
            {
              v119 = v61;
              if ( v61 >= v60 )
                goto LABEL_171;
              v62 = (unsigned __int64 *)(*(_QWORD *)(v2 + 360) + 24LL);
              v63 = KeAbPreAcquire((__int64)v62, 0LL);
              v110 = v63;
              if ( _interlockedbittestandset64((volatile signed __int32 *)v62, 0LL) )
              {
                ExfAcquirePushLockExclusiveEx(v62, v63, (__int64)v62);
                v63 = v110;
              }
              if ( v63 )
                *((_BYTE *)v63 + 10) = 1;
              v64 = *(_QWORD *)(v102 + 64);
              if ( ((unsigned int)v64 & (unsigned int)(v64 >> 24) & 0xFFFFFF) == 0xFFFFFFLL )
              {
                **(_DWORD **)(v105 + 88) = v51;
                v65 = v64 & 0xFFFF000000000000uLL;
                v66 = _InterlockedCompareExchange64(
                        (volatile signed __int64 *)(v102 + 64),
                        v64 & 0xFFFF000000000000uLL,
                        v64);
                v67 = (volatile signed __int64 *)(*(_QWORD *)(v2 + 360) + 24LL);
                v95 = v67;
                if ( v66 == v64 )
                {
                  if ( (_InterlockedExchangeAdd64(v67, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  {
                    ExfTryToWakePushLock(v67);
                    v67 = v95;
                  }
                  KeAbPostRelease((ULONG_PTR)v67);
                  _InterlockedIncrement((volatile signed __int32 *)(v102 + 128));
                  v68 = v65 < 0x1000000000000LL ? 2 : 0;
LABEL_135:
                  v30 = 1;
                  v25 = v116;
                  *(_DWORD *)(*(_QWORD *)(v26 + 80) + 72LL) = *(_DWORD *)(v4 + 264);
                  *(_DWORD *)(*(_QWORD *)(v26 + 80) + 76LL) = *(_DWORD *)(v4 + 272);
                  if ( v116
                    && !v68
                    && HIWORD(*(_QWORD *)(*(_QWORD *)(v26 + 80) + 64LL))
                     + (unsigned __int64)*(unsigned int *)(*(_QWORD *)(v2 + 48) + 12LL) >= *(unsigned int *)(v26 + 144) )
                  {
                    v25 = 0;
                  }
                  if ( (*(_DWORD *)(v4 + 40) & 0x200) != 0 )
                  {
                    v88 = *(_WORD *)(v4 + 244);
                    v89 = (*(_QWORD *)(v4 + 136) != 0LL ? 0x80000000 : 0) | 0x40000000;
                    if ( !*(_QWORD *)(v4 + 144) )
                      v89 = *(_QWORD *)(v4 + 136) != 0LL ? 0x80000000 : 0;
                    v90 = v89 | 0x10000000;
                    if ( !*(_QWORD *)(v4 + 152) )
                      v90 = v89;
                    if ( v90 )
                    {
                      *(_WORD *)(v4 + 244) = v88 | 0x2000;
                      ++*(_WORD *)(v4 - 30);
                      AlpcpInsertMessagePendingQueue(v2, v4);
                      v30 = 1;
                    }
                    else
                    {
                      *(_WORD *)(v4 + 244) = v88 & 0xDFFF;
                    }
                  }
                  else
                  {
                    *(_WORD *)(v4 + 244) |= 0x2000u;
                    ++*(_WORD *)(v4 - 30);
                    v69 = KeAbPreAcquire(v2 + 176, 0LL);
                    v70 = v69;
                    if ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 176), 0LL) )
                      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v2 + 176), v69, v2 + 176);
                    if ( v70 )
                      *((_BYTE *)v70 + 10) = 1;
                    v71 = *(_DWORD *)(v4 + 40);
                    *(_QWORD *)(v4 + 16) = v2;
                    *(_DWORD *)(v4 + 40) = v71 & 0xFFFFFF83 | (4 * (*(_BYTE *)(v2 + 416) & 6)) & 0xFB | 3;
                    *(_QWORD *)(v4 + 8) = *(_QWORD *)(v2 + 192);
                    *(_QWORD *)v4 = v2 + 184;
                    **(_QWORD **)(v2 + 192) = v4;
                    *(_QWORD *)(v2 + 192) = v4;
                    ++*(_DWORD *)(v2 + 456);
                    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                      ExfTryToWakePushLock((volatile signed __int64 *)(v2 + 176));
                    KeAbPostRelease(v2 + 176);
                    v30 = 1;
                  }
                  goto LABEL_57;
                }
                if ( (_InterlockedExchangeAdd64(v67, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                {
                  ExfTryToWakePushLock(v67);
                  v67 = v95;
                }
                v60 = v99;
              }
              else
              {
                v60 = v99;
                if ( (v64 & 0xFFFFFF) >= v99 || (v74 = (v64 >> 24) & 0xFFFFFF, v74 >= v99) )
                {
                  v77 = *(_QWORD *)(v2 + 360);
                  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v77 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
LABEL_226:
                    ExfTryToWakePushLock((volatile signed __int64 *)(v77 + 24));
LABEL_170:
                  KeAbPostRelease(v77 + 24);
LABEL_171:
                  v7 = v115;
                  v78 = v51 >> 6;
                  v9 = (unsigned __int64)v78 >> 5;
                  v79 = (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v2 + 360) + 104LL) + 4 * v9);
                  v80 = v78 & 0x1F;
                  if ( v80 )
                  {
                    v9 = (unsigned int)(32 - v80);
                    if ( v115 < (unsigned int)v9 )
                      v9 = v115;
                    _InterlockedAnd(v79, ~(((1 << v9) - 1) << v80));
                    v7 = v115 - (unsigned int)v9;
                    ++v79;
                  }
                  if ( (unsigned int)v7 >= 0x20 )
                  {
                    v91 = (unsigned __int64)(unsigned int)v7 >> 5;
                    do
                    {
                      _InterlockedAnd(v79, 0);
                      v7 = (unsigned int)(v7 - 32);
                      ++v79;
                      --v91;
                    }
                    while ( v91 );
                  }
                  v25 = v116;
                  if ( (_DWORD)v7 )
                    _InterlockedAnd(v79, -1 << v7);
LABEL_46:
                  if ( *(_QWORD *)(v4 + 176) )
                  {
                    AlpcpCaptureMessageDataSafe(v4, v9, v7);
                    *(_QWORD *)(v4 + 176) = 0LL;
                  }
                  if ( *(_QWORD *)(v4 + 144) )
                    AlpcpExposeViewAttributeInSenderContext(v2, v4, v7);
                  ++*(_WORD *)(v4 - 30);
                  v27 = KeAbPreAcquire(v2 + 136, 0LL);
                  v28 = v27;
                  if ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 136), 0LL) )
                    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v2 + 136), v27, v2 + 136);
                  if ( v28 )
                    *((_BYTE *)v28 + 10) = 1;
                  v29 = *(_DWORD *)(v4 + 40);
                  *(_QWORD *)(v4 + 16) = v2;
                  *(_DWORD *)(v4 + 40) = v29 & 0xFFFFFF81 | (4 * (*(_BYTE *)(v2 + 416) & 6)) & 0xF9 | 1;
                  *(_QWORD *)(v4 + 8) = *(_QWORD *)(v2 + 152);
                  *(_QWORD *)v4 = v2 + 144;
                  **(_QWORD **)(v2 + 152) = v4;
                  *(_QWORD *)(v2 + 152) = v4;
                  ++*(_DWORD *)(v2 + 448);
                  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 136), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                    ExfTryToWakePushLock((volatile signed __int64 *)(v2 + 136));
                  KeAbPostRelease(v2 + 136);
                  v30 = 0;
LABEL_57:
                  if ( AlpcpLogEnabled )
                    AlpcpLogSendMessage(v4);
                  if ( v30 && AlpcpLogEnabled )
                    AlpcpLogReceiveMessage(v4);
                  if ( v100 && AlpcpLogEnabled )
                    AlpcpLogWaitForReply(v4);
                  *(_DWORD *)(v4 + 40) &= ~0x10000u;
                  AlpcpUnlockMessage(v4);
                  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v112 - 16), 0LL, 17LL) != 17 )
                    ExfReleasePushLockShared((signed __int64 *)(v112 - 16));
                  result = KeAbPostRelease(v112 - 16);
                  if ( v106 )
                  {
                    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 352), 0LL, 17LL) != 17 )
                      ExfReleasePushLockShared((signed __int64 *)(v2 + 352));
                    result = KeAbPostRelease(v2 + 352);
                    if ( v100 || v117 )
                    {
                      *(_BYTE *)(a1 + 58) = 0;
                      return result;
                    }
                    KeReleaseSemaphoreEx(*(volatile signed __int32 **)(v2 + 248), 1, 1, v73, v107 != 0 ? 2 : 0, 0LL);
                  }
                  else
                  {
                    if ( v25 )
                    {
                      if ( v100 || v117 )
                      {
                        *(_BYTE *)(a1 + 58) = 1;
                        *(_BYTE *)(a1 + 59) = v30;
                      }
                      else
                      {
                        LOBYTE(v32) = 1;
                        AlpcpQueueIoCompletionPort(v2, v30, v32, 0LL, v111);
                        result = ObfDereferenceObject((PVOID)v2);
                        *(_QWORD *)(a1 + 32) = 0LL;
                      }
                      return result;
                    }
                    v81 = *(void **)(v2 + 368);
                    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 352), 0LL, 17LL) != 17 )
                      ExfReleasePushLockShared((signed __int64 *)(v2 + 352));
                    KeAbPostRelease(v2 + 352);
                    if ( v81 )
                      ExNotifyCallback(v81, *(PVOID *)(v2 + 376), (PVOID)*(unsigned int *)(a1 + 48));
                  }
                  result = ObfDereferenceObject((PVOID)v2);
                  *(_QWORD *)(a1 + 32) = 0LL;
                  return result;
                }
                v75 = ((v74 + 1) % v99) << 24;
                v76 = ((v74 + 1) % v99) & 0xFFFFFF;
                if ( v76 == (((unsigned int)v75 ^ ((unsigned int)v64 ^ ((unsigned int)((v74 + 1) % v99) << 24)) & 0xFFFFFF) & 0xFFFFFF) )
                {
                  v77 = *(_QWORD *)(v2 + 360);
                  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v77 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                    goto LABEL_226;
                  goto LABEL_170;
                }
                *(_DWORD *)(*(_QWORD *)(v105 + 88) + 4 * v76) = v51;
                v82 = _InterlockedCompareExchange64(
                        (volatile signed __int64 *)(v102 + 64),
                        v75 ^ (v64 ^ v75) & 0xFFFF000000FFFFFFuLL,
                        v64);
                v67 = (volatile signed __int64 *)(*(_QWORD *)(v2 + 360) + 24LL);
                v96 = v67;
                if ( v82 == v64 )
                {
                  if ( (_InterlockedExchangeAdd64(v67, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  {
                    ExfTryToWakePushLock(v67);
                    v67 = v96;
                  }
                  KeAbPostRelease((ULONG_PTR)v67);
                  _InterlockedIncrement((volatile signed __int32 *)(v102 + 128));
                  v68 = 0;
                  goto LABEL_135;
                }
                if ( (_InterlockedExchangeAdd64(v67, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                {
                  ExfTryToWakePushLock(v67);
                  v67 = v96;
                }
              }
              KeAbPostRelease((ULONG_PTR)v67);
              v61 = (unsigned int)(v119 + 1);
            }
          }
LABEL_190:
          v25 = v116;
          goto LABEL_46;
        }
        if ( !v97 )
          goto LABEL_190;
        v44 = AlpcpAllocateFromBitmap(v101, v103);
        if ( v44 != -2 )
          goto LABEL_111;
      }
      v45 = v113;
      v47 = (unsigned int)(v93 + 1);
      v7 = v115;
      v43 = v101;
      v46 = v108;
    }
  }
  if ( *(_QWORD *)(v4 + 176) )
  {
    AlpcpCaptureMessageDataSafe(v4, v9, v7);
    *(_QWORD *)(v4 + 176) = 0LL;
  }
  if ( *(_QWORD *)(v4 + 144) )
    AlpcpExposeViewAttributeInSenderContext(v2, v4, v7);
  ++*(_WORD *)(v4 - 30);
  v33 = KeAbPreAcquire(v2 + 200, 0LL);
  v34 = v33;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 200), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v2 + 200), v33, v2 + 200);
  if ( v34 )
    *((_BYTE *)v34 + 10) = 1;
  v35 = *(_DWORD *)(v4 + 40);
  *(_QWORD *)(v4 + 16) = v2;
  *(_DWORD *)(v4 + 40) = v35 & 0xFFFFFF84 | (4 * (*(_DWORD *)(v2 + 416) & 6)) | 4;
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
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v112 - 16), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v112 - 16));
  KeAbPostRelease(v112 - 16);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 352), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v2 + 352));
  KeAbPostRelease(v2 + 352);
  result = ObfDereferenceObject((PVOID)v2);
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( !v3 && !v117 )
  {
    v36 = *(_QWORD *)(a1 + 40);
    if ( v36 >= 4 )
    {
      KeSetEvent((PRKEVENT)(v36 & 0xFFFFFFFFFFFFFFFCuLL), 0, 0);
      result = AlpcpReleaseDirectAttribute(*(_QWORD *)(a1 + 40));
    }
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  return result;
}
