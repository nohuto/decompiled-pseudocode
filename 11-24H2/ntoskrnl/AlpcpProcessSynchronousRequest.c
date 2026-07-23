/*
 * XREFs of AlpcpProcessSynchronousRequest @ 0x140A24FBC
 * Callers:
 *     NtReplyWaitReplyPort @ 0x14073F600 (NtReplyWaitReplyPort.c)
 *     NtAlpcSendWaitReceivePort @ 0x140846380 (NtAlpcSendWaitReceivePort.c)
 *     NtRequestWaitReplyPort @ 0x140A24E30 (NtRequestWaitReplyPort.c)
 *     LpcSendWaitReceivePort @ 0x140A24F40 (LpcSendWaitReceivePort.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ObReferenceObjectSafe @ 0x140411C00 (ObReferenceObjectSafe.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x14089055C (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcMessageCleanupProcedure @ 0x1408982A0 (AlpcMessageCleanupProcedure.c)
 *     AlpcpSendMessage @ 0x140898440 (AlpcpSendMessage.c)
 *     AlpcpCancelMessage @ 0x14089C73C (AlpcpCancelMessage.c)
 *     AlpcpExposeAttributes @ 0x1408A0770 (AlpcpExposeAttributes.c)
 *     AlpcpUnlockMessage @ 0x1408A1410 (AlpcpUnlockMessage.c)
 *     AlpcpProbeForWriteMessageHeader @ 0x1408A1E50 (AlpcpProbeForWriteMessageHeader.c)
 *     AlpcpProbeMessageAttributes @ 0x1408A2ED0 (AlpcpProbeMessageAttributes.c)
 *     AlpcpGetDataFromMessage @ 0x140990904 (AlpcpGetDataFromMessage.c)
 *     AlpcpReceiveSynchronousReply @ 0x140993FB0 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x140A1850C (AlpcpReturnMessageOnInsufficientBuffer.c)
 *     AlpcpExposeCapturedContextAttribute @ 0x140A32BAC (AlpcpExposeCapturedContextAttribute.c)
 *     AlpcpEnterFreeEventMessageLog @ 0x140AAF380 (AlpcpEnterFreeEventMessageLog.c)
 */

__int64 __fastcall AlpcpProcessSynchronousRequest(
        __int64 a1,
        unsigned int a2,
        __m256i *a3,
        __int64 a4,
        unsigned __int64 a5,
        _QWORD *a6,
        unsigned int *a7,
        LARGE_INTEGER *a8,
        char a9)
{
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rax
  unsigned __int64 v14; // r14
  _QWORD *v15; // r13
  __int64 v16; // rax
  signed __int64 *v17; // rbx
  char *v18; // rsi
  void *v19; // rsi
  int v21; // eax
  unsigned int v22; // r12d
  KPROCESSOR_MODE v23; // dl
  ULONG_PTR v24; // rbx
  int v25; // edx
  __int64 v26; // r8
  int v27; // eax
  unsigned __int64 v28; // rax
  __int16 v29; // ax
  __int16 v30; // dx
  signed __int64 v31; // rax
  unsigned int v32; // [rsp+30h] [rbp-D8h]
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-D0h] BYREF
  void **v34; // [rsp+40h] [rbp-C8h]
  unsigned int v35; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v36; // [rsp+50h] [rbp-B8h]
  __int64 v37; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD *v38; // [rsp+60h] [rbp-A8h]
  _OWORD v39[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v40[6]; // [rsp+90h] [rbp-78h] BYREF
  unsigned int v41; // [rsp+C0h] [rbp-48h]

  memset_0(v40, 0, 0x40uLL);
  v37 = 0LL;
  v32 = 0;
  v36 = -1LL;
  if ( a9 )
  {
    v12 = 0x7FFFFFFF0000LL;
    if ( a8 )
    {
      v13 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a8 < 0x7FFFFFFF0000LL )
        v13 = (__int64)a8;
      v37 = *(_QWORD *)v13;
      a8 = (LARGE_INTEGER *)&v37;
    }
    v14 = a5;
    AlpcpProbeForWriteMessageHeader(a5, a2);
    v15 = a6;
    if ( a6 )
    {
      v16 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a6 < 0x7FFFFFFF0000LL )
        v16 = (__int64)a6;
      v36 = *(_QWORD *)v16;
      if ( (unsigned __int64)a6 < 0x7FFFFFFF0000LL )
        v12 = (__int64)a6;
      *(_QWORD *)v12 = *(_QWORD *)v12;
    }
    if ( a7 )
      v32 = AlpcpProbeMessageAttributes(a2, a7, 1);
  }
  else
  {
    v15 = a6;
    if ( a6 )
      v36 = *a6;
    v14 = a5;
    if ( a7 )
      v32 = *a7;
  }
  v38 = (_DWORD *)(a1 + 416);
  if ( (*(_BYTE *)(a1 + 416) & 6) != 6 )
  {
    v19 = (void *)a1;
    v34 = (void **)a1;
LABEL_33:
    v40[0] = a1;
    v41 = a2;
    LOBYTE(v11) = a9;
    if ( (*(_DWORD *)(a1 + 416) & 0x1000) != 0 )
      v21 = AlpcpSendLegacySynchronousRequest(a1, (char *)v40, (unsigned __int64)a3, v11);
    else
      v21 = AlpcpSendMessage(v40, a3, a4, a9);
    v22 = v21;
    if ( v21 >= 0 )
    {
      if ( (a2 & 0x100000) != 0 )
        v23 = 1;
      else
        v23 = (a2 & 0x2000000) != 0 && (a2 & 2) != 0 ? 0 : KeGetCurrentThread()->PreviousMode;
      BugCheckParameter2 = 0LL;
      v40[0] = (__int64)v19;
      v22 = AlpcpReceiveSynchronousReply(v40, v23, (__int64 *)&BugCheckParameter2, v32, a8);
      if ( !v22 )
      {
        v24 = BugCheckParameter2;
        v25 = *(unsigned __int16 *)(BugCheckParameter2 + 240);
        v26 = 24LL;
        v27 = 24;
        if ( (a2 & 0xC0000000) != 0x80000000 )
          v27 = 40;
        v28 = (unsigned int)(v25 + v27);
        v35 = v28;
        if ( v15 && v28 > v36 )
        {
          memset(v39, 0, sizeof(v39));
          v22 = AlpcpReturnMessageOnInsufficientBuffer((__int64)v19, (_QWORD *)BugCheckParameter2, v39);
          if ( v22 == -1073741789 )
          {
            AlpcpUnlockMessage(v24);
            *v15 = v35;
            AlpcpExposeCapturedContextAttribute(a2, v39, v32, a7);
          }
          else
          {
            AlpcpCancelMessage((__int64)v19, v24, 0x10000);
          }
        }
        else
        {
          if ( (a2 & 0xC0000000) == 0x80000000 )
          {
            *(_WORD *)v14 = v25;
            *(_WORD *)(v14 + 2) = *(_WORD *)(v24 + 240) + 24;
            v29 = *(_WORD *)(v24 + 246);
            if ( v29 )
              *(_WORD *)(v14 + 6) = v29 - 16;
            else
              *(_WORD *)(v14 + 6) = 0;
            v30 = *(_WORD *)(v24 + 244) | 0x1000;
            *(_WORD *)(v14 + 4) = v30;
            *(_DWORD *)(v14 + 8) = *(_DWORD *)(v24 + 248);
            *(_DWORD *)(v14 + 12) = *(_DWORD *)(v24 + 256);
            *(_DWORD *)(v14 + 16) = *(_DWORD *)(v24 + 264);
            *(_DWORD *)(v14 + 20) = *(_DWORD *)(v24 + 272);
            *(_DWORD *)(v14 + 20) = *(_DWORD *)(v24 + 272);
            if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
              *(_WORD *)(v14 + 4) = v30 & 0xC00F;
          }
          else
          {
            *(_OWORD *)v14 = *(_OWORD *)(BugCheckParameter2 + 240);
            *(_OWORD *)(v14 + 16) = *(_OWORD *)(v24 + 256);
            *(_QWORD *)(v14 + 32) = *(_QWORD *)(v24 + 272);
            if ( _bittest((const signed __int32 *)(a1 + 256), 0xCu) )
              *(_WORD *)(v14 + 4) = *(_WORD *)(v24 + 244) & 0xC00F;
            v26 = v22 + 40;
          }
          AlpcpGetDataFromMessage(v24, (char *)(v26 + v14));
          if ( v15 )
            *v15 = v35;
          if ( a7 )
            AlpcpExposeAttributes(a1, a2, v24, v32, (__int64)a7);
          if ( (*(_DWORD *)(v24 + 40) & 0x200) != 0 && !*(_QWORD *)(v24 + 96) && (*v38 & 0x2000) != 0 )
          {
            v31 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 440), v24, 0LL);
            v24 = BugCheckParameter2;
            if ( !v31 )
            {
              ++*(_WORD *)(BugCheckParameter2 - 30);
              AlpcMessageCleanupProcedure(v24);
              if ( AlpcpMessageLogEnabled )
                AlpcpEnterFreeEventMessageLog(v24);
            }
          }
          AlpcpUnlockMessage(v24);
        }
      }
    }
    if ( v19 != (void *)a1 )
      ObfDereferenceObject(v19);
    return v22;
  }
  v34 = *(void ***)(a1 + 16);
  v17 = (signed __int64 *)(v34 - 2);
  v18 = (char *)KeAbPreAcquire((__int64)(v34 - 2), 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v34 - 2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v17, 0, v18, (__int64)v17);
  if ( v18 )
    v18[10] = 1;
  v19 = *v34;
  v34 = (void **)v19;
  if ( v19 && ObReferenceObjectSafe((__int64)v19) )
  {
    if ( _InterlockedCompareExchange64(v17, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v17);
    KeAbPostRelease((ULONG_PTR)v17);
    goto LABEL_33;
  }
  if ( _InterlockedCompareExchange64(v17, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v17);
  KeAbPostRelease((ULONG_PTR)v17);
  return 3221225527LL;
}
