/*
 * XREFs of AlpcpSendMessage @ 0x140898440
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x1402D2740 (NtWaitForWorkViaWorkerFactory.c)
 *     NtAlpcSendWaitReceivePort @ 0x140846380 (NtAlpcSendWaitReceivePort.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x14089055C (AlpcpSendLegacySynchronousRequest.c)
 *     LpcRequestPort @ 0x1408971D0 (LpcRequestPort.c)
 *     NtReplyWaitReceivePortEx @ 0x14089D590 (NtReplyWaitReceivePortEx.c)
 *     NtReplyPort @ 0x1409E5BD0 (NtReplyPort.c)
 *     AlpcpProcessSynchronousRequest @ 0x140A24FBC (AlpcpProcessSynchronousRequest.c)
 *     NtRequestPort @ 0x140A7CA70 (NtRequestPort.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ExfUnblockPushLock @ 0x1402BC1A0 (ExfUnblockPushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     PsReturnProcessPagedPoolQuota @ 0x1403C8EA0 (PsReturnProcessPagedPoolQuota.c)
 *     ExAllocateFromPagedLookasideList @ 0x1403EFFF0 (ExAllocateFromPagedLookasideList.c)
 *     ExGetHandlePointer @ 0x14041B770 (ExGetHandlePointer.c)
 *     ExHandleLogBadReference @ 0x14042D470 (ExHandleLogBadReference.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406B6C90 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExpLookupHandleTableEntry @ 0x1408481F0 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x140849D30 (ExpBlockOnLockedHandleEntry.c)
 *     ExUnlockHandleTableEntry @ 0x140891F80 (ExUnlockHandleTableEntry.c)
 *     AlpcpChargePagedPoolQuota @ 0x140892384 (AlpcpChargePagedPoolQuota.c)
 *     AlpcpReleasePagedPoolQuota @ 0x1408923C8 (AlpcpReleasePagedPoolQuota.c)
 *     AlpcReferenceBlobByHandle @ 0x140896580 (AlpcReferenceBlobByHandle.c)
 *     AlpcpEnterAllocationEventMessageLog @ 0x140897F4C (AlpcpEnterAllocationEventMessageLog.c)
 *     AlpcpCaptureAttributes @ 0x140899420 (AlpcpCaptureAttributes.c)
 *     PspChargeProcessWakeCounter @ 0x1408999A0 (PspChargeProcessWakeCounter.c)
 *     AlpcpReleaseAttributes @ 0x140899E50 (AlpcpReleaseAttributes.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x140899F40 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpDispatchNewMessage @ 0x14089A470 (AlpcpDispatchNewMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x14089BF40 (AlpcpDispatchReplyToPort.c)
 *     AlpcpCancelMessage @ 0x14089C73C (AlpcpCancelMessage.c)
 *     AlpcpDereferenceBlobEx @ 0x14089EBC0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14089ED30 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockMessage @ 0x1408A1410 (AlpcpUnlockMessage.c)
 *     AlpcpValidateDataInformation @ 0x140ABBFF8 (AlpcpValidateDataInformation.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AlpcpSendMessage(__int64 *a1, __m256i *a2, __int64 a3, char a4)
{
  char v4; // r10
  __int64 v6; // rsi
  int v7; // ebx
  int v8; // eax
  __int64 v9; // rdx
  unsigned __int16 v10; // r8
  unsigned __int16 v11; // dx
  bool v12; // cl
  __int64 v13; // rdx
  __int64 result; // rax
  bool v15; // al
  __int16 v16; // dx
  __int16 v17; // cx
  int v18; // r12d
  struct _KTHREAD *CurrentThread; // r9
  int v20; // r15d
  int v21; // r15d
  ULONG_PTR v22; // r14
  char PreviousMode; // si
  ULONG_PTR v24; // rdi
  signed __int64 *v25; // rbx
  signed __int64 v26; // r8
  unsigned __int64 HandlePointer; // rax
  ULONG_PTR v28; // r13
  __int64 v29; // rax
  __int64 v30; // rdx
  char *v31; // rax
  char *v32; // rsi
  signed __int64 BugCheckParameter4; // rax
  int v34; // ebx
  int v35; // ecx
  __int64 v36; // rdi
  __int64 v37; // r14
  unsigned int v38; // esi
  unsigned __int64 v39; // rdx
  char *v40; // rax
  char *v41; // rbx
  char *v42; // rax
  char *v43; // r14
  signed __int64 v44; // rax
  int v45; // ebx
  signed __int32 v46; // eax
  _OWORD *v47; // rdi
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rbx
  unsigned __int64 v52; // rdx
  __int64 *v53; // rcx
  __int64 v54; // rax
  unsigned __int64 v55; // rdi
  unsigned __int64 v56; // rcx
  unsigned __int64 v57; // rbx
  void *v58; // rcx
  __int64 *v59; // rcx
  int v60; // eax
  unsigned int v61; // ebx
  bool v62; // al
  ULONG_PTR v63; // rsi
  void *v64; // rcx
  ULONG_PTR v65; // rbx
  __int64 Pool2; // rax
  ULONG_PTR v67; // rcx
  int v68; // ebx
  __int64 v69; // rdx
  ULONG_PTR v70; // rcx
  ULONG_PTR v71; // rdx
  ULONG_PTR v72; // rbx
  __int64 v73; // rcx
  signed __int32 v74; // eax
  _QWORD *v75; // rax
  _QWORD *v76; // rbx
  char *v77; // rsi
  bool v78; // di
  signed __int32 v79[8]; // [rsp+0h] [rbp-148h] BYREF
  char v80; // [rsp+40h] [rbp-108h]
  bool v81; // [rsp+41h] [rbp-107h]
  int v82; // [rsp+44h] [rbp-104h]
  int v83; // [rsp+48h] [rbp-100h]
  __m256i v84; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v85; // [rsp+70h] [rbp-D8h]
  __int64 v86; // [rsp+78h] [rbp-D0h]
  __int64 v87; // [rsp+80h] [rbp-C8h]
  __m256i *v88; // [rsp+88h] [rbp-C0h]
  __int64 *v89; // [rsp+90h] [rbp-B8h]
  _OWORD v90[4]; // [rsp+A0h] [rbp-A8h] BYREF
  __int64 v91; // [rsp+E0h] [rbp-68h]
  __int128 v92; // [rsp+F0h] [rbp-58h] BYREF
  __int64 v93; // [rsp+100h] [rbp-48h]

  v4 = a4;
  v80 = a4;
  v87 = a3;
  v88 = a2;
  v89 = a1;
  memset(&v84, 0, sizeof(v84));
  v85 = 0LL;
  memset(v90, 0, sizeof(v90));
  v91 = 0LL;
  v6 = *a1;
  v86 = v6;
  v7 = *((_DWORD *)a1 + 12);
  v83 = v7;
  v8 = *(_DWORD *)(v6 + 416);
  if ( (v8 & 0x10) != 0 )
    return 3221225537LL;
  if ( (v8 & 8) != 0 )
    return 3221227271LL;
  if ( (v8 & 0x20) != 0 && (*(_DWORD *)(v6 + 256) & 0x1000) == 0 )
    return 3221225527LL;
  if ( !a4 )
  {
    v84 = *a2;
    v85 = a2[1].m256i_i64[0];
    v62 = (*(_DWORD *)(v6 + 256) & 0x1000) != 0 || (v7 & 2) != 0;
    if ( (unsigned int)v84.m256i_i16[0] < (unsigned __int16)(v84.m256i_i16[0] + 40) )
    {
      if ( v62 )
      {
        if ( (unsigned __int64)v84.m256i_u16[0] + 40 <= v84.m256i_u16[1] )
        {
          v84.m256i_i16[1] = v84.m256i_i16[0] + 40;
          goto LABEL_26;
        }
      }
      else if ( v84.m256i_u16[0] + 40LL == v84.m256i_u16[1] )
      {
        goto LABEL_26;
      }
    }
    return 3221225485LL;
  }
  v92 = 0LL;
  v93 = 0LL;
  if ( (v7 & 0xC0000000) == 0x80000000 )
  {
    v13 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v13 = (__int64)a2;
    RtlCopyVolatileMemory(&v92, (const void *)v13, 0x18uLL);
    v11 = v92;
    v84.m256i_i16[0] = v92;
    v10 = v92 + 40;
    v84.m256i_i16[1] = v92 + 40;
    v84.m256i_i32[1] = DWORD1(v92);
    v84.m256i_i64[1] = DWORD2(v92);
    v84.m256i_i64[2] = HIDWORD(v92);
    v84.m256i_i32[6] = v93;
    v85 = HIDWORD(v93);
  }
  else
  {
    v9 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v9 = (__int64)a2;
    RtlCopyVolatileMemory(&v84, (const void *)v9, 0x28uLL);
    v10 = v84.m256i_u16[1];
    v11 = v84.m256i_i16[0];
  }
  v12 = (*(_DWORD *)(v6 + 256) & 0x1000) != 0 || (v7 & 2) != 0;
  v81 = v12;
  if ( v11 >= (unsigned __int16)(v11 + 40) )
    return 3221225485LL;
  if ( !v12 )
  {
    if ( v11 + 40LL == v10 )
      goto LABEL_15;
    return 3221225485LL;
  }
  if ( (unsigned __int64)v11 + 40 > v10 )
    return 3221225485LL;
  v84.m256i_i16[1] = v11 + 40;
LABEL_15:
  v84.m256i_i16[2] &= ~0x8000u;
  if ( v84.m256i_i16[3] )
  {
    result = AlpcpValidateDataInformation(a2, &v84);
    v82 = result;
    if ( (int)result < 0 )
      return result;
  }
  v4 = v80;
LABEL_26:
  v15 = (*(_DWORD *)(v6 + 256) & 0x1000) != 0 || (v7 & 2) != 0;
  v16 = v84.m256i_u8[4];
  v17 = v84.m256i_i16[2] & 0xFF00;
  v18 = v84.m256i_i32[6];
  CurrentThread = KeGetCurrentThread();
  if ( v15 )
  {
    if ( (v7 & 1) != 0 )
    {
      if ( v84.m256i_i32[6] )
      {
        v20 = 0;
        v17 = 0;
        v16 = 2;
LABEL_170:
        v84.m256i_i32[6] = v18;
        if ( !v4 )
          LODWORD(v85) = 0;
        goto LABEL_37;
      }
    }
    else if ( (v7 & 0x10000) != 0 )
    {
      if ( !v84.m256i_i8[4] )
      {
        v16 = 3;
LABEL_168:
        v20 = 0;
        v18 = 0;
LABEL_169:
        *(_OWORD *)&v84.m256i_u64[1] = *(_OWORD *)&CurrentThread[1].CycleTime;
        goto LABEL_170;
      }
      if ( (v84.m256i_u8[4] == 3
         || v84.m256i_u8[4] == 4
         || v84.m256i_u8[4] == 5
         || v84.m256i_u8[4] == 6
         || v84.m256i_u8[4] == 13)
        && (v7 & 2) != 0 )
      {
        goto LABEL_168;
      }
    }
    else
    {
      if ( !v84.m256i_i8[4] )
      {
        v16 = 1;
        goto LABEL_168;
      }
      if ( v84.m256i_u8[4] == 1 )
      {
        if ( v84.m256i_i32[6] )
        {
          v20 = 0;
          goto LABEL_169;
        }
      }
      else if ( (v84.m256i_u8[4] == 7 || (unsigned int)v84.m256i_u8[4] - 8 <= 1) && (v7 & 2) != 0 )
      {
        goto LABEL_168;
      }
    }
    return 3221225485LL;
  }
  if ( v84.m256i_u8[4] == 7 && !v4 )
    goto LABEL_34;
  if ( v84.m256i_i32[6] <= 0 )
  {
    if ( (v7 & 0x10000) != 0 )
      v16 = 3;
    else
      v16 = 1;
LABEL_34:
    v20 = 0;
    goto LABEL_35;
  }
  v20 = 0;
  v16 = ((v7 & 0x10000) != 0) + 1;
LABEL_35:
  v18 = v84.m256i_i32[6];
  if ( !v84.m256i_i32[6] && *(_OWORD *)&v84.m256i_u64[1] != 0LL )
    return (unsigned int)-1073740030;
  *(_OWORD *)&v84.m256i_u64[1] = *(_OWORD *)&CurrentThread[1].CycleTime;
LABEL_37:
  v84.m256i_i16[2] = v16 | v17 & 0xEFFF;
  if ( (unsigned __int64)v84.m256i_u16[1] > *(_QWORD *)(v6 + 272) )
    return 3221225519LL;
  if ( (v7 & 0x20000) != 0 )
  {
    if ( (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 0x20) != 0 )
      return 3221225473LL;
    v18 = v84.m256i_i32[6];
  }
  if ( !v18 )
  {
    v40 = (char *)ExAllocateFromPagedLookasideList(&AlpcpLookasides);
    v41 = v40;
    if ( !v40 )
      return 3221225626LL;
    *((_WORD *)v40 + 8) = 512;
    *(_DWORD *)(v40 + 18) = 0;
    *((_WORD *)v40 + 11) = 0;
    *((_QWORD *)v40 + 5) = 0LL;
    *((_QWORD *)v40 + 4) = 0LL;
    *((_QWORD *)v40 + 1) = v40;
    *(_QWORD *)v40 = v40;
    v40[16] |= 2u;
    *((_QWORD *)v40 + 3) = 1LL;
    v28 = (ULONG_PTR)(v40 + 48);
    if ( v40 == (char *)-48LL )
      return 3221225626LL;
    v42 = (char *)KeAbPreAcquire((__int64)(v40 + 32), 0LL);
    v43 = v42;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v41 + 8, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v41 + 4, v42, (__int64)(v41 + 32));
    if ( v43 )
      v43[10] = 1;
    v41[16] |= 1u;
    v44 = _InterlockedExchangeAdd64((volatile signed __int64 *)v41 + 3, 0x10000uLL) + 0x10000;
    if ( v44 <= 0 )
      KeBugCheckEx(0x18u, 0LL, v28, 0x26uLL, v44);
    v45 = *(_DWORD *)(v28 + 264);
    memset_0((void *)v28, 0, 0x118uLL);
    *(_WORD *)(v28 + 242) = 40;
    --*(_WORD *)(v28 - 30);
    *(_DWORD *)(v28 + 264) = v45 & 0x7FFFFFFF;
    do
      v46 = _InterlockedIncrement(&AlpcpNextCallbackId);
    while ( !v46 );
    *(_DWORD *)(v28 + 272) = v46;
    if ( AlpcpMessageLogEnabled )
      AlpcpEnterAllocationEventMessageLog(v28);
    *(_WORD *)(v28 + 242) = 40;
    v34 = 0;
    v82 = 0;
    goto LABEL_93;
  }
  v83 = v7 | 0x10;
  v21 = v85;
  if ( v18 < 0 )
  {
    v20 = 0;
    v72 = 0LL;
    v73 = *(_QWORD *)(v6 + 16);
    if ( v73 )
      v72 = AlpcReferenceBlobByHandle((_QWORD *)(v73 + 40), v18 & 0x7FFFFFFF, AlpcReserveType);
    if ( !v72 )
      return 3221226224LL;
    v28 = *(_QWORD *)(v72 + 24);
    AlpcpLockForCachedReferenceBlob(v28);
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v72 + 40), 1, 0) )
    {
      AlpcpUnlockMessage(v28);
      AlpcpDereferenceBlobEx(v72);
      return 3221227272LL;
    }
    *(_DWORD *)(v28 + 264) &= ~0x80000000;
    do
      v74 = _InterlockedIncrement(&AlpcpNextCallbackId);
    while ( !v74 );
    *(_DWORD *)(v28 + 272) = v74;
LABEL_70:
    v34 = 0;
    v82 = 0;
    v35 = *(_DWORD *)(v28 + 40);
    if ( (v35 & 0x80u) == 0 )
    {
      v36 = *(_QWORD *)(v28 + 24);
      if ( !v36 )
      {
LABEL_72:
        v37 = v86;
        goto LABEL_73;
      }
      v69 = *(_QWORD *)(v28 + 16);
      if ( v69 != v6 )
      {
        if ( (v35 & 7) == 0 )
        {
          v76 = *(_QWORD **)(v36 + 16);
          v77 = (char *)KeAbPreAcquire((__int64)(v76 - 2), 0LL);
          if ( _InterlockedCompareExchange64(v76 - 2, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx(v76 - 2, 0, v77, (__int64)(v76 - 2));
          if ( v77 )
            v77[10] = 1;
          v37 = v86;
          if ( ((*(_DWORD *)(v36 + 416) >> 1) & 3) == 2 )
            v78 = *v76 == v86 || v76[1] == v86;
          else
            v78 = v76[2] == v86;
          if ( _InterlockedCompareExchange64(v76 - 2, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v76 - 2);
          KeAbPostRelease((ULONG_PTR)(v76 - 2));
          if ( v78 )
          {
            v34 = v82;
LABEL_73:
            if ( *(_QWORD *)(v28 + 32) )
            {
              v38 = v83;
              if ( !*(_QWORD *)(v28 + 48) && (v83 & 0x30000) == 0 )
              {
                v39 = 792LL;
                if ( *(_QWORD *)(v28 + 224) )
                  v39 = *(_QWORD *)(v28 + 232) + 792LL;
                v34 = AlpcpChargePagedPoolQuota((__int64)KeGetCurrentThread()->ApcState.Process, v39);
                v82 = v34;
                if ( v34 < 0 )
                  goto LABEL_79;
                *(_QWORD *)(v28 + 48) = KeGetCurrentThread()->ApcState.Process;
                ObfReferenceObjectWithTag(KeGetCurrentThread()->ApcState.Process, 0x63706C41u);
                v34 = v82;
              }
LABEL_95:
              if ( v34 < 0 )
                return (unsigned int)v34;
              v47 = 0LL;
              v48 = v87;
              if ( v87 )
              {
                v47 = v90;
                v34 = AlpcpCaptureAttributes(v37, v38, v87, v28, v90);
                v82 = v34;
                v48 = v87;
              }
              if ( v18 )
              {
                v60 = *(_DWORD *)(v28 + 40);
                if ( (v60 & 0x280) != 0 )
                {
                  v61 = (v60 & 0x80u) != 0 ? 0xC0000703 : 0;
                  if ( v48 )
                    AlpcpReleaseAttributes(0LL, v47);
                  AlpcpCancelMessage(v37, v28, 0x10000LL);
                  return v61;
                }
              }
              if ( v34 >= 0 )
              {
                if ( v18 )
                {
                  v49 = *(_QWORD *)(v28 + 208);
                  if ( v49 )
                  {
                    PspChargeProcessWakeCounter((PVOID)(v49 & 0xFFFFFFFFFFFFFFF8uLL), -1, 1, 0LL);
                    *(_QWORD *)(v28 + 208) = 0LL;
                  }
                  v50 = *(_QWORD *)(v28 + 216);
                  if ( v50 )
                  {
                    PspChargeProcessWakeCounter((PVOID)(v50 & 0xFFFFFFFFFFFFFFF8uLL), -1, 1, 0LL);
                    *(_QWORD *)(v28 + 216) = 0LL;
                  }
                }
                v51 = 0LL;
                if ( v18 > 0 )
                {
                  v51 = *(_QWORD *)(v28 + 160);
                  *(_QWORD *)(v28 + 160) = 0LL;
                  AlpcpReleaseAttributes(v28, v28 + 104);
                }
                if ( v47 )
                {
                  *(_OWORD *)(v28 + 104) = *v47;
                  *(_OWORD *)(v28 + 120) = v47[1];
                  *(_OWORD *)(v28 + 136) = v47[2];
                  *(_OWORD *)(v28 + 152) = v47[3];
                  *(_QWORD *)(v28 + 168) = *((_QWORD *)v47 + 8);
                }
                if ( v51 )
                  *(_QWORD *)(v28 + 160) = v51;
                v52 = v84.m256i_u16[0];
                if ( (v38 & 0xC0000000) == 0x80000000 )
                  v53 = &v88->m256i_i64[3];
                else
                  v53 = &v88[1].m256i_i64[1];
                if ( v80 && (unsigned __int64)v53 + v84.m256i_u16[0] > 0x7FFFFFFF0000LL )
                {
                  v20 = -1073741819;
                }
                else
                {
                  *(_QWORD *)(v28 + 176) = v53;
                  v54 = *(_QWORD *)(v28 + 96);
                  v55 = 512LL;
                  if ( v54 )
                    v56 = *(_QWORD *)(v54 + 32) - 40LL;
                  else
                    v56 = 512LL;
                  v57 = v52;
                  if ( v52 > v56 )
                  {
                    if ( v54 )
                      v55 = *(_QWORD *)(v54 + 32) - 40LL;
                    if ( v52 > v55 )
                    {
                      if ( v52 > 0xFFD7 )
                      {
                        v20 = -2147483643;
                      }
                      else
                      {
                        v63 = *(_QWORD *)(v28 + 232);
                        if ( v52 > v55 + v63 )
                        {
                          v64 = *(void **)(v28 + 224);
                          if ( v64 )
                          {
                            ExFreePoolWithTag(v64, 0x42456C41u);
                            *(_QWORD *)(v28 + 232) = 0LL;
                          }
                          v65 = v57 - v55;
                          Pool2 = ExAllocatePool2(0x100uLL, v65, 0x42456C41u);
                          *(_QWORD *)(v28 + 224) = Pool2;
                          v67 = *(_QWORD *)(v28 + 48);
                          if ( Pool2 )
                          {
                            *(_QWORD *)(v28 + 232) = v65;
                            if ( v67 )
                            {
                              v68 = AlpcpChargePagedPoolQuota(v67, v65 - v63);
                              if ( v68 < 0 )
                              {
                                ExFreePoolWithTag(*(PVOID *)(v28 + 224), 0x42456C41u);
                                *(_QWORD *)(v28 + 224) = 0LL;
                                *(_QWORD *)(v28 + 232) = 0LL;
                                AlpcpReleasePagedPoolQuota(*(_QWORD *)(v28 + 48), v63);
                                v20 = v68;
                              }
                            }
                          }
                          else
                          {
                            if ( v67 )
                              AlpcpReleasePagedPoolQuota(v67, v63);
                            v20 = -1073741670;
                          }
                        }
                      }
                    }
                    else
                    {
                      v58 = *(void **)(v28 + 224);
                      if ( v58 )
                      {
                        ExFreePoolWithTag(v58, 0x42456C41u);
                        *(_QWORD *)(v28 + 224) = 0LL;
                        v70 = *(_QWORD *)(v28 + 48);
                        if ( v70 )
                        {
                          v71 = *(_QWORD *)(v28 + 232);
                          if ( v71 + *(_QWORD *)(v70 + 1432) >= 0x1000 )
                            PsReturnProcessPagedPoolQuota(v70, v71);
                          else
                            _InterlockedAdd64((volatile signed __int64 *)(v70 + 1432), v71);
                        }
                        *(_QWORD *)(v28 + 232) = 0LL;
                      }
                    }
                  }
                  if ( v20 >= 0 )
                  {
                    v59 = v89;
                    v89[1] = v28;
                    *((_DWORD *)v59 + 13) = *(__int32 *)((char *)v84.m256i_i32 + 2);
                    *((_WORD *)v59 + 28) = v84.m256i_i16[3];
                    if ( !*(_QWORD *)(v28 + 24) )
                      return AlpcpDispatchNewMessage();
                    if ( *(_QWORD *)(v28 + 32) )
                      return AlpcpDispatchReplyToWaitingThread();
                    return AlpcpDispatchReplyToPort();
                  }
                }
                AlpcpUnlockMessage(v28);
                return (unsigned int)v20;
              }
LABEL_79:
              AlpcpUnlockMessage(v28);
              return (unsigned int)v34;
            }
LABEL_94:
            v38 = v83;
            goto LABEL_95;
          }
          goto LABEL_163;
        }
        if ( (*(_BYTE *)(v6 + 416) & 6) != 6 )
          goto LABEL_163;
        v75 = *(_QWORD **)(v6 + 16);
        if ( !v75 || *v75 != v69 )
          goto LABEL_163;
      }
      if ( (v35 & 7) == 3 && (v35 & 0x2000) == 0 )
        goto LABEL_72;
LABEL_163:
      AlpcpUnlockMessage(v28);
      return 3221225506LL;
    }
LABEL_93:
    v37 = v86;
    goto LABEL_94;
  }
  if ( (v18 & 0xFC000000) != 0 )
  {
    if ( AlpcpSecondaryMessageTables )
      v22 = *(_QWORD *)(AlpcpSecondaryMessageTables + 8LL * ((unsigned int)v18 >> 26));
    else
      v22 = 0LL;
  }
  else
  {
    v22 = AlpcMessageTable;
  }
  if ( !v22 )
    return (unsigned int)-1073740030;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v24 = v84.m256i_i32[6] & 0x3FFFFFF;
  if ( (v84.m256i_i16[12] & 0x3FC) != 0 )
  {
    v25 = (signed __int64 *)ExpLookupHandleTableEntry((unsigned int *)v22, (unsigned int)v24);
    if ( v25 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          _m_prefetchw(v25);
          v26 = *v25;
          if ( (*v25 & 1) == 0 )
            break;
          if ( v26 == _InterlockedCompareExchange64(v25, v26 - 1, v26) )
            goto LABEL_48;
        }
        if ( !v26 )
          break;
        ExpBlockOnLockedHandleEntry(v22, v25, v26);
      }
    }
  }
  v25 = 0LL;
  ExHandleLogBadReference(v22, v24, PreviousMode);
LABEL_48:
  if ( !v25 )
    return (unsigned int)-1073740030;
  HandlePointer = ExGetHandlePointer(v25);
  v28 = HandlePointer;
  if ( *(_DWORD *)(HandlePointer + 264) != v18 || v21 && *(_DWORD *)(HandlePointer + 272) != v21 )
  {
    _InterlockedIncrement64(v25);
    _InterlockedOr(v79, 0);
    if ( *(_QWORD *)(v22 + 48) )
      ExfUnblockPushLock(v22 + 48, 0LL);
    return (unsigned int)-1073740030;
  }
  _m_prefetchw((const void *)(HandlePointer - 24));
  v29 = *(_QWORD *)(HandlePointer - 24);
  do
  {
    if ( v29 <= 0 )
    {
      if ( v29 )
        KeBugCheckEx(0x18u, 0LL, v28, 0x20uLL, v29);
      goto LABEL_254;
    }
    v30 = v29;
    v29 = _InterlockedCompareExchange64((volatile signed __int64 *)(v28 - 24), v29 + 1, v29);
  }
  while ( v29 != v30 );
  if ( v29 == -1 )
  {
LABEL_254:
    ExUnlockHandleTableEntry(v22, v25);
    return (unsigned int)-1073740030;
  }
  v31 = (char *)KeAbPreAcquire(v28 - 16, 0LL);
  v32 = v31;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v28 - 16), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v28 - 16), v31, v28 - 16);
  if ( v32 )
    v32[10] = 1;
  *(_BYTE *)(v28 - 32) |= 1u;
  BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v28 - 24), 0x10000uLL) + 0x10000;
  if ( BugCheckParameter4 <= 0 )
    KeBugCheckEx(0x18u, 0LL, v28, 0x26uLL, BugCheckParameter4);
  --*(_WORD *)(v28 - 30);
  _InterlockedIncrement64(v25);
  _InterlockedOr(v79, 0);
  if ( *(_QWORD *)(v22 + 48) )
    ExfUnblockPushLock(v22 + 48, 0LL);
  if ( *(_DWORD *)(v28 + 264) != v18
    || v21 && *(_DWORD *)(v28 + 272) != v21
    || !*(_QWORD *)(v28 + 24) && !*(_QWORD *)(v28 + 16) )
  {
    AlpcpUnlockMessage(v28);
    return (unsigned int)-1073740030;
  }
  v6 = v86;
  if ( *(_QWORD *)(v28 + 184) == *(_QWORD *)(v86 + 16) || *(_QWORD *)(v28 + 192) == v86 )
  {
    v20 = 0;
    goto LABEL_70;
  }
  AlpcpUnlockMessage(v28);
  return (unsigned int)-1073741790;
}
