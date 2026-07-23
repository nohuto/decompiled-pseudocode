/*
 * XREFs of AlpcpProcessSynchronousRequest @ 0x1409CE020
 * Callers:
 *     NtReplyWaitReplyPort @ 0x1407356B0 (NtReplyWaitReplyPort.c)
 *     NtAlpcSendWaitReceivePort @ 0x14084E310 (NtAlpcSendWaitReceivePort.c)
 *     NtRequestWaitReplyPort @ 0x1409CDE90 (NtRequestWaitReplyPort.c)
 *     LpcSendWaitReceivePort @ 0x1409CDFA0 (LpcSendWaitReceivePort.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ObReferenceObjectSafe @ 0x140420490 (ObReferenceObjectSafe.c)
 *     AlpcpProbeMessageAttributes @ 0x140858E60 (AlpcpProbeMessageAttributes.c)
 *     AlpcpExposeAttributes @ 0x1408A7C40 (AlpcpExposeAttributes.c)
 *     AlpcpUnlockMessage @ 0x1408AA9C0 (AlpcpUnlockMessage.c)
 *     AlpcpReceiveSynchronousReply @ 0x1408AB350 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpCancelMessage @ 0x1408AC700 (AlpcpCancelMessage.c)
 *     AlpcpSendMessage @ 0x1408B0BA0 (AlpcpSendMessage.c)
 *     PspChargeProcessWakeCounter @ 0x1408B2120 (PspChargeProcessWakeCounter.c)
 *     AlpcpReleaseAttributes @ 0x1408B25D0 (AlpcpReleaseAttributes.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x14098D31C (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpGetDataFromMessage @ 0x14098E938 (AlpcpGetDataFromMessage.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x1409CD560 (AlpcpReturnMessageOnInsufficientBuffer.c)
 *     AlpcpProbeForWriteMessageHeader @ 0x1409CE6C0 (AlpcpProbeForWriteMessageHeader.c)
 *     AlpcpExposeCapturedContextAttribute @ 0x140A372A4 (AlpcpExposeCapturedContextAttribute.c)
 *     AlpcpEnterFreeEventMessageLog @ 0x140AAF420 (AlpcpEnterFreeEventMessageLog.c)
 */

__int64 __fastcall AlpcpProcessSynchronousRequest(
        __int64 a1,
        __int64 a2,
        __m256i *a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        unsigned int *a7,
        LARGE_INTEGER *a8,
        char a9)
{
  int v9; // esi
  char v11; // r13
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // r14
  _QWORD *v15; // r12
  __int64 v16; // rax
  void **v17; // r13
  __int64 *v18; // rsi
  __int64 *v19; // rsi
  int v21; // eax
  unsigned int v22; // r13d
  unsigned __int8 v23; // dl
  ULONG_PTR v24; // rbx
  ULONG_PTR v25; // rax
  int v26; // r9d
  __int64 v27; // r8
  int v28; // edx
  unsigned int v29; // edx
  __int16 v30; // ax
  __int16 v31; // dx
  _DWORD *v32; // r12
  signed __int64 v33; // rax
  void *v34; // rcx
  __int64 v35; // rcx
  int v36; // r14d
  int v37; // eax
  unsigned int v38; // r8d
  int v39; // edx
  __int64 v40; // rcx
  unsigned int v41; // r8d
  __int64 v42; // rax
  unsigned int v43; // [rsp+40h] [rbp-D8h]
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-D0h] BYREF
  unsigned int v45; // [rsp+50h] [rbp-C8h]
  __int64 *v46; // [rsp+58h] [rbp-C0h]
  _WORD *v47; // [rsp+60h] [rbp-B8h]
  unsigned __int64 v48; // [rsp+68h] [rbp-B0h]
  __int64 v49; // [rsp+70h] [rbp-A8h] BYREF
  _DWORD *v50; // [rsp+78h] [rbp-A0h]
  __int64 v51[2]; // [rsp+80h] [rbp-98h] BYREF
  __int128 v52; // [rsp+90h] [rbp-88h]
  __int128 v53; // [rsp+A0h] [rbp-78h]
  unsigned int v54; // [rsp+B0h] [rbp-68h]
  __int64 v55; // [rsp+B4h] [rbp-64h]
  int v56; // [rsp+BCh] [rbp-5Ch]
  _OWORD v57[5]; // [rsp+C0h] [rbp-58h] BYREF
  unsigned int v58; // [rsp+128h] [rbp+10h]

  v58 = a2;
  v9 = a2;
  v51[1] = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v55 = 0LL;
  v56 = 0;
  v49 = 0LL;
  v43 = 0;
  v48 = -1LL;
  v11 = a9;
  if ( a9 )
  {
    v12 = 0x7FFFFFFF0000LL;
    if ( a8 )
    {
      v13 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a8 < 0x7FFFFFFF0000LL )
        v13 = (__int64)a8;
      v49 = *(_QWORD *)v13;
      a8 = (LARGE_INTEGER *)&v49;
    }
    v14 = a5;
    AlpcpProbeForWriteMessageHeader(a5, a2);
    v15 = a6;
    if ( a6 )
    {
      v16 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a6 < 0x7FFFFFFF0000LL )
        v16 = (__int64)a6;
      v48 = *(_QWORD *)v16;
      if ( (unsigned __int64)a6 < 0x7FFFFFFF0000LL )
        v12 = (__int64)a6;
      *(_QWORD *)v12 = *(_QWORD *)v12;
    }
    if ( a7 )
      v43 = AlpcpProbeMessageAttributes(v9, a7, 1);
  }
  else
  {
    v15 = a6;
    if ( a6 )
      v48 = *a6;
    v14 = a5;
    if ( a7 )
      v43 = *a7;
  }
  v50 = (_DWORD *)(a1 + 416);
  if ( (*(_BYTE *)(a1 + 416) & 6) != 6 )
  {
    v19 = (__int64 *)a1;
    v46 = (__int64 *)a1;
    goto LABEL_33;
  }
  v17 = *(void ***)(a1 + 16);
  v18 = KeAbPreAcquire((__int64)(v17 - 2), 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v17 - 2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)v17 - 2, 0, v18, (unsigned __int64)(v17 - 2));
  if ( v18 )
    *((_BYTE *)v18 + 10) = 1;
  v19 = (__int64 *)*v17;
  v46 = v19;
  if ( v19 && ObReferenceObjectSafe((__int64)v19) )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v17 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v17 - 2);
    KeAbPostRelease((ULONG_PTR)(v17 - 2));
    v11 = a9;
LABEL_33:
    v51[0] = a1;
    v54 = v58;
    if ( (*v50 & 0x1000) != 0 )
      v21 = AlpcpSendLegacySynchronousRequest(a1, v51, (unsigned __int64)a3, v11);
    else
      v21 = AlpcpSendMessage((__int64)v51, a3, a4, v11);
    v22 = v21;
    if ( v21 < 0 )
      goto LABEL_88;
    if ( (v58 & 0x100000) != 0 )
      v23 = 1;
    else
      v23 = (v58 & 0x2000000) != 0 && (v58 & 2) != 0 ? 0 : KeGetCurrentThread()->PreviousMode;
    BugCheckParameter2 = 0LL;
    v51[0] = (__int64)v19;
    v22 = AlpcpReceiveSynchronousReply(v51, v23, (__int64 *)&BugCheckParameter2, v43, a8);
    if ( v22 )
      goto LABEL_88;
    v24 = BugCheckParameter2;
    v25 = BugCheckParameter2 + 240;
    v47 = (_WORD *)(BugCheckParameter2 + 240);
    v26 = *(unsigned __int16 *)(BugCheckParameter2 + 240);
    v27 = 24LL;
    v28 = 24;
    if ( (v58 & 0xC0000000) != 0x80000000 )
      v28 = 40;
    v29 = v26 + v28;
    v45 = v29;
    if ( v15 )
    {
      if ( v29 > v48 )
      {
        memset(v57, 0, 32);
        v22 = AlpcpReturnMessageOnInsufficientBuffer((__int64)v19, (_QWORD *)BugCheckParameter2, v57);
        if ( v22 == -1073741789 )
        {
          AlpcpUnlockMessage(v24);
          *v15 = v45;
          AlpcpExposeCapturedContextAttribute(v58, v57, v43, a7);
        }
        else
        {
          AlpcpCancelMessage((__int64)v19, v24, 0x10000);
        }
LABEL_88:
        if ( v19 != (__int64 *)a1 )
          ObfDereferenceObject(v19);
        return v22;
      }
      v25 = (ULONG_PTR)v47;
    }
    if ( (v58 & 0xC0000000) == 0x80000000 )
    {
      *(_WORD *)v14 = v26;
      *(_WORD *)(v14 + 2) = *(_WORD *)v25 + 24;
      v30 = *(_WORD *)(v24 + 246);
      if ( v30 )
        *(_WORD *)(v14 + 6) = v30 - 16;
      else
        *(_WORD *)(v14 + 6) = 0;
      v31 = *(_WORD *)(v24 + 244) | 0x1000;
      *(_WORD *)(v14 + 4) = v31;
      *(_DWORD *)(v14 + 8) = *(_DWORD *)(v24 + 248);
      *(_DWORD *)(v14 + 12) = *(_DWORD *)(v24 + 256);
      *(_DWORD *)(v14 + 16) = *(_DWORD *)(v24 + 264);
      *(_DWORD *)(v14 + 20) = *(_DWORD *)(v24 + 272);
      *(_DWORD *)(v14 + 20) = *(_DWORD *)(v24 + 272);
      if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
        *(_WORD *)(v14 + 4) = v31 & 0xC00F;
    }
    else
    {
      *(_OWORD *)v14 = *(_OWORD *)v25;
      *(_OWORD *)(v14 + 16) = *(_OWORD *)(v25 + 16);
      *(_QWORD *)(v14 + 32) = *(_QWORD *)(v25 + 32);
      if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
        *(_WORD *)(v14 + 4) = *(_WORD *)(v24 + 244) & 0xC00F;
      v27 = 40LL;
    }
    AlpcpGetDataFromMessage(v24, (char *)(v27 + v14));
    if ( v15 )
      *v15 = v45;
    if ( a7 )
      AlpcpExposeAttributes(a1, v58, v24, v43, (__int64)a7);
    v32 = (_DWORD *)(v24 + 40);
    if ( (*(_DWORD *)(v24 + 40) & 0x200) != 0 )
    {
      v46 = (__int64 *)(v24 + 96);
      if ( !*(_QWORD *)(v24 + 96) && (*v50 & 0x2000) != 0 )
      {
        v33 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 440), v24, 0LL);
        v24 = BugCheckParameter2;
        if ( !v33 )
        {
          ++*(_WORD *)(BugCheckParameter2 - 30);
          *(_DWORD *)(v24 + 264) |= 0x80000000;
          v34 = *(void **)(v24 + 24);
          if ( v34 )
          {
            if ( (*v32 & 0x1000) != 0 )
              ObfDereferenceObject(v34);
            *(_QWORD *)(v24 + 24) = 0LL;
          }
          AlpcpReleaseAttributes((_QWORD *)(v24 + 104));
          v35 = *(_QWORD *)(v24 + 208);
          v36 = 2;
          if ( v35 )
          {
            v37 = v35 & 7;
            v38 = 0;
            if ( v37 != 7 )
              v38 = v35 & 7;
            v39 = 2;
            if ( v37 != 7 )
              v39 = 0;
            PspChargeProcessWakeCounter(v35 & 0xFFFFFFFFFFFFFFF8uLL, v39, v38, *(unsigned int *)(v24 + 264), -1, 1, 0LL);
            *(_QWORD *)(v24 + 208) = 0LL;
          }
          v40 = *(_QWORD *)(v24 + 216);
          if ( v40 )
          {
            v41 = 0;
            if ( (v40 & 7) != 7 )
            {
              v41 = v40 & 7;
              v36 = 0;
            }
            PspChargeProcessWakeCounter(v40 & 0xFFFFFFFFFFFFFFF8uLL, v36, v41, *(unsigned int *)(v24 + 264), -1, 1, 0LL);
            *(_QWORD *)(v24 + 216) = 0LL;
          }
          v42 = *v46;
          if ( *v46 )
          {
            *v47 = 0;
            *(_WORD *)(v24 + 242) = 40;
            *(_QWORD *)(v24 + 184) = 0LL;
            *(_QWORD *)(v24 + 192) = 0LL;
            *v32 = 0;
            _InterlockedExchange((volatile __int32 *)(v42 + 40), 0);
            v24 = BugCheckParameter2;
          }
          if ( AlpcpMessageLogEnabled )
            AlpcpEnterFreeEventMessageLog(v24);
        }
      }
    }
    AlpcpUnlockMessage(v24);
    goto LABEL_88;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v17 - 2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v17 - 2);
  KeAbPostRelease((ULONG_PTR)(v17 - 2));
  return 3221225527LL;
}
