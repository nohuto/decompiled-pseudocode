/*
 * XREFs of AlpcpAcceptConnectPort @ 0x1409F4F00
 * Callers:
 *     NtAcceptConnectPort @ 0x1409F4DF0 (NtAcceptConnectPort.c)
 *     NtAlpcAcceptConnectPort @ 0x1409F4E70 (NtAlpcAcceptConnectPort.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406B5CF0 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     NtClose @ 0x14084AA00 (NtClose.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     ObInsertObjectEx @ 0x140857620 (ObInsertObjectEx.c)
 *     AlpcpSetOwnerProcessPort @ 0x1408633F8 (AlpcpSetOwnerProcessPort.c)
 *     AlpcpValidateAndSetPortAttributes @ 0x140863450 (AlpcpValidateAndSetPortAttributes.c)
 *     AlpcpInitializePort @ 0x140863700 (AlpcpInitializePort.c)
 *     AlpcpFlushResourcesPort @ 0x14088BD0C (AlpcpFlushResourcesPort.c)
 *     AlpcpSetupMessageDataForDeferredCopy @ 0x14088DB20 (AlpcpSetupMessageDataForDeferredCopy.c)
 *     PsReleaseProcessWakeCounter @ 0x14088E750 (PsReleaseProcessWakeCounter.c)
 *     AlpcpCaptureAttributes @ 0x14088F7F0 (AlpcpCaptureAttributes.c)
 *     AlpcpReleaseAttributes @ 0x140890220 (AlpcpReleaseAttributes.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x140890950 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpDispatchNewMessage @ 0x140890E80 (AlpcpDispatchNewMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x140892910 (AlpcpDispatchReplyToPort.c)
 *     AlpcpCancelMessage @ 0x140894410 (AlpcpCancelMessage.c)
 *     AlpcpUnlockBlobUncachedExclusive @ 0x1408963A0 (AlpcpUnlockBlobUncachedExclusive.c)
 *     AlpcpLockBlobExclusive @ 0x14089666C (AlpcpLockBlobExclusive.c)
 *     AlpcpReferenceBlob @ 0x1408966C0 (AlpcpReferenceBlob.c)
 *     AlpcpUnlockMessage @ 0x140898D70 (AlpcpUnlockMessage.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     ObCreateObjectEx @ 0x14089C4F0 (ObCreateObjectEx.c)
 *     AlpcpMapLegacyPortView @ 0x14093C1C0 (AlpcpMapLegacyPortView.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x14093C880 (AlpcpProbeAndCaptureMessageHeader.c)
 *     AlpcpLookupMessage @ 0x14093E7E0 (AlpcpLookupMessage.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x140A874FC (AlpcpMapLegacyPortRemoteView.c)
 */

NTSTATUS __fastcall AlpcpAcceptConnectPort(
        HANDLE *a1,
        int a2,
        void *a3,
        __int64 a4,
        _OWORD *Src,
        void *a6,
        __int128 *a7,
        int *a8,
        char a9,
        unsigned __int64 a10,
        unsigned __int64 a11,
        char a12)
{
  __int64 v13; // r9
  KPROCESSOR_MODE PreviousMode; // al
  char v15; // r12
  __int64 v16; // rbx
  int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rdx
  NTSTATUS result; // eax
  __int64 v22; // rcx
  __int64 v23; // rax
  PVOID v24; // r15
  __int64 v25; // rdx
  signed int inserted; // esi
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r14
  int v30; // ecx
  int v31; // ebx
  int v32; // r13d
  __int64 v33; // r13
  PVOID *v34; // rsi
  signed __int64 *v35; // rbx
  _QWORD *v36; // r14
  bool v37; // si
  _QWORD *v38; // rax
  __int64 v39; // r13
  _QWORD *v40; // rax
  _QWORD *v41; // rsi
  int v42; // eax
  _DWORD *v43; // rbx
  bool v44; // cf
  _QWORD *v45; // rbx
  ULONG_PTR v46; // rcx
  int v47; // edx
  unsigned int v48; // ebx
  __int64 v49; // rcx
  __int64 v50; // rcx
  HANDLE v51; // rax
  HANDLE v52; // rcx
  _OWORD *v53; // rax
  _OWORD *v54; // rax
  int v55; // eax
  PVOID *Object; // [rsp+20h] [rbp-268h]
  KPROCESSOR_MODE AccessMode; // [rsp+50h] [rbp-238h]
  PVOID v58; // [rsp+60h] [rbp-228h] BYREF
  int v59; // [rsp+68h] [rbp-220h]
  int v60; // [rsp+6Ch] [rbp-21Ch]
  ULONG_PTR v61; // [rsp+70h] [rbp-218h] BYREF
  __int64 v62; // [rsp+78h] [rbp-210h]
  HANDLE Handle; // [rsp+80h] [rbp-208h] BYREF
  HANDLE *v64; // [rsp+88h] [rbp-200h]
  ULONG_PTR BugCheckParameter2; // [rsp+90h] [rbp-1F8h]
  PVOID v66; // [rsp+98h] [rbp-1F0h]
  __int128 v67; // [rsp+A0h] [rbp-1E8h] BYREF
  __int128 v68; // [rsp+B0h] [rbp-1D8h]
  __int64 v69; // [rsp+C0h] [rbp-1C8h]
  PVOID v70; // [rsp+C8h] [rbp-1C0h] BYREF
  void *v71; // [rsp+D0h] [rbp-1B8h]
  _OWORD *v72; // [rsp+D8h] [rbp-1B0h]
  __int64 v73; // [rsp+E0h] [rbp-1A8h]
  int *v74; // [rsp+E8h] [rbp-1A0h]
  _OWORD *v75; // [rsp+F0h] [rbp-198h]
  PVOID v76; // [rsp+F8h] [rbp-190h]
  __int128 v77; // [rsp+100h] [rbp-188h] BYREF
  __int64 v78; // [rsp+110h] [rbp-178h]
  __int128 v79; // [rsp+118h] [rbp-170h] BYREF
  __int64 v80; // [rsp+128h] [rbp-160h]
  __int128 v81; // [rsp+130h] [rbp-158h] BYREF
  __int128 v82; // [rsp+140h] [rbp-148h]
  __int128 v83; // [rsp+150h] [rbp-138h]
  __int64 v84[6]; // [rsp+160h] [rbp-128h] BYREF
  int v85; // [rsp+190h] [rbp-F8h]
  __int16 v86; // [rsp+194h] [rbp-F4h]
  int v87; // [rsp+196h] [rbp-F2h]
  _OWORD v88[4]; // [rsp+1A0h] [rbp-E8h] BYREF
  __int64 v89; // [rsp+1E0h] [rbp-A8h]
  _OWORD v90[4]; // [rsp+1F0h] [rbp-98h] BYREF
  __int64 v91; // [rsp+230h] [rbp-58h]

  v73 = a4;
  v59 = a2;
  v64 = a1;
  v75 = (_OWORD *)a11;
  v72 = (_OWORD *)a10;
  v62 = (__int64)Src;
  v71 = a7;
  v74 = a8;
  memset_0(v84, 0, 0x40uLL);
  v67 = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  memset_0(v90, 0, 0x48uLL);
  memset_0(v88, 0, 0x48uLL);
  v81 = 0LL;
  v82 = 0LL;
  v83 = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  v58 = 0LL;
  v60 = 0;
  v61 = 0LL;
  Handle = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  AccessMode = PreviousMode;
  if ( PreviousMode )
  {
    v15 = a12;
    if ( a12 || a9 )
    {
      v17 = v59;
      v16 = 0x7FFFFFFF0000LL;
      v18 = 0x7FFFFFFF0000LL;
      if ( v59 >= 0 )
      {
        if ( (unsigned __int64)v64 < 0x7FFFFFFF0000LL )
          v18 = (__int64)v64;
        *(_QWORD *)v18 = *(_QWORD *)v18;
      }
      else
      {
        if ( (unsigned __int64)v64 < 0x7FFFFFFF0000LL )
          v18 = (__int64)v64;
        *(_DWORD *)v18 = *(_DWORD *)v18;
      }
    }
    else
    {
      v16 = 0x7FFFFFFF0000LL;
      v17 = v59;
    }
    AlpcpProbeAndCaptureMessageHeader((unsigned __int64)v71, &v67, v17);
    if ( Src )
    {
      v19 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)Src < 0x7FFFFFFF0000LL )
        v19 = (__int64)Src;
      RtlCopyVolatileMemory(v90, (const void *)v19, 0x48uLL);
    }
    if ( a10 )
    {
      v20 = 0x7FFFFFFF0000LL;
      if ( a10 < 0x7FFFFFFF0000LL )
        v20 = a10;
      RtlCopyVolatileMemory(&v81, (const void *)v20, 0x30uLL);
      if ( (_DWORD)v81 != 48 )
        return -1073741811;
      if ( (a10 & 3) != 0 )
        goto LABEL_156;
      v22 = 0x7FFFFFFF0000LL;
      if ( a10 < 0x7FFFFFFF0000LL )
        v22 = a10;
      *(_BYTE *)v22 = *(_BYTE *)v22;
      *(_BYTE *)(v22 + 47) = *(_BYTE *)(v22 + 47);
    }
    if ( !a11 )
    {
LABEL_34:
      PreviousMode = AccessMode;
      goto LABEL_38;
    }
    v23 = 0x7FFFFFFF0000LL;
    if ( a11 < 0x7FFFFFFF0000LL )
      v23 = a11;
    if ( *(_DWORD *)v23 != 24 )
      return -1073741811;
    if ( (a11 & 3) == 0 )
    {
      if ( a11 < 0x7FFFFFFF0000LL )
        v16 = a11;
      *(_BYTE *)v16 = *(_BYTE *)v16;
      *(_BYTE *)(v16 + 23) = *(_BYTE *)(v16 + 23);
      goto LABEL_34;
    }
LABEL_156:
    ExRaiseDatatypeMisalignment();
  }
  if ( Src )
  {
    v90[0] = *Src;
    v90[1] = Src[1];
    v90[2] = Src[2];
    v90[3] = Src[3];
    v91 = *((_QWORD *)Src + 8);
  }
  v67 = *a7;
  v68 = a7[1];
  v69 = *((_QWORD *)a7 + 4);
  v15 = a12;
LABEL_38:
  if ( !DWORD2(v68) )
    return -1073741281;
  v24 = 0LL;
  v66 = 0LL;
  if ( a3 )
  {
    v70 = 0LL;
    result = ObReferenceObjectByHandle(a3, 1u, AlpcPortObjectType, PreviousMode, &v70, 0LL);
    v24 = v70;
    v66 = v70;
    if ( result < 0 )
      return result;
  }
  else
  {
    if ( !v15 )
      return -1073741504;
    LODWORD(v69) = 0;
  }
  v76 = v24;
  inserted = AlpcpLookupMessage((__int64)v24, SDWORD2(v68), v69, v13, &v61);
  v29 = v61;
  if ( inserted < 0 )
    goto LABEL_139;
  if ( !v24 )
  {
    v24 = *(PVOID *)(v61 + 16);
    v66 = v24;
  }
  v30 = *(_DWORD *)(v61 + 40);
  if ( (v30 & 0x80u) == 0 )
  {
    if ( (*(unsigned __int16 *)(v61 + 244) & 0xFFFF00FF) != 0xA )
    {
LABEL_52:
      inserted = -1073741281;
LABEL_139:
      v31 = 0;
      v32 = 0;
      goto LABEL_140;
    }
    v25 = *(_QWORD *)(v61 + 16);
    if ( v25 != *(_QWORD *)(v61 + 192) )
    {
LABEL_138:
      inserted = -1073740030;
      goto LABEL_139;
    }
    if ( (PVOID)v25 != v24 )
    {
      if ( (v30 & 7) == 0 )
      {
        v33 = *(_QWORD *)(v61 + 24);
        if ( !v33 )
          goto LABEL_138;
        v34 = *(PVOID **)(v33 + 16);
        v35 = (signed __int64 *)(v34 - 2);
        v36 = KeAbPreAcquire((__int64)(v34 - 2), 0LL);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v34 - 2, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx((signed __int64 *)v34 - 2, 0, v36, (__int64)(v34 - 2));
        if ( v36 )
          *((_BYTE *)v36 + 10) = 1;
        if ( ((*(_DWORD *)(v33 + 416) >> 1) & 3) == 2 )
          v37 = *v34 == v24 || v34[1] == v24;
        else
          v37 = v34[2] == v24;
        if ( _InterlockedCompareExchange64(v35, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v35);
        KeAbPostRelease((ULONG_PTR)v35);
        v29 = v61;
        goto LABEL_76;
      }
      if ( (*((_BYTE *)v24 + 416) & 6) != 6 )
        goto LABEL_138;
      v38 = (_QWORD *)*((_QWORD *)v24 + 2);
      if ( !v38 || *v38 != v25 )
        goto LABEL_138;
    }
    if ( (v30 & 7) != 3 || (v30 & 0x2000) != 0 )
      goto LABEL_138;
    v37 = 1;
LABEL_76:
    if ( v37 )
    {
      v25 = 40LL;
      if ( a12 )
      {
        if ( (unsigned __int16)v67 > (unsigned __int64)(*((_QWORD *)v24 + 34) - 40LL) )
          LOWORD(v67) = *((_WORD *)v24 + 136) - 40;
        inserted = 0;
      }
      else
      {
        inserted = -1073741811;
        if ( (unsigned __int16)v67 < (unsigned __int16)(v67 + 40) )
          inserted = WORD1(v67) != (unsigned __int16)v67 + 40LL ? 0xC000000D : 0;
      }
      if ( inserted < 0 )
        goto LABEL_139;
      v39 = *(_QWORD *)(v29 + 24);
      BugCheckParameter2 = *(_QWORD *)(v39 + 16);
      if ( (*(_DWORD *)(v39 + 416) & 0x20) != 0 )
      {
        inserted = -1073741769;
        goto LABEL_50;
      }
      if ( (*((_DWORD *)v24 + 64) & 0x100000) != 0
        || (v29 = v61, KeGetCurrentThread()->ApcState.Process == (_KPROCESS *)*((_QWORD *)v24 + 3)) )
      {
        if ( !a9 )
        {
          v40 = KeAbPreAcquire(v39 + 352, 0LL);
          v41 = v40;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v39 + 352), 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v39 + 352), (__int64)v40, v39 + 352);
          if ( v41 )
            *((_BYTE *)v41 + 10) = 1;
          v42 = *(_DWORD *)(v39 + 416) | 0x10;
          *(_DWORD *)(v39 + 416) = v42;
          if ( (v42 & 0x100) != 0 )
            *(_QWORD *)(v39 + 56) = a6;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v39 + 352), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v39 + 352));
          KeAbPostRelease(v39 + 352);
          v31 = 1;
          inserted = 0;
          v29 = v61;
          v32 = 0;
          goto LABEL_140;
        }
        inserted = ObCreateObjectEx(
                     AccessMode,
                     AlpcPortObjectType,
                     v73,
                     AccessMode,
                     (__int64)Object,
                     472,
                     0,
                     0,
                     &v58,
                     0LL);
        if ( inserted >= 0 )
        {
          memset_0(v58, 0, 0x1D8uLL);
          v43 = v58;
          inserted = AlpcpInitializePort((__int64)v58, 3, 0);
          if ( inserted >= 0 )
          {
            inserted = AlpcpValidateAndSetPortAttributes(
                         (__int64)v43,
                         (int *)((unsigned __int64)v90 & ((unsigned __int128)-(__int128)(unsigned __int64)v62 >> 64)),
                         (__int64)v24,
                         0LL,
                         0,
                         0,
                         a12);
            if ( inserted >= 0 )
            {
              v44 = v62 != 0;
              v62 = -v62;
              AlpcpSetOwnerProcessPort((__int64)v43, (_DWORD *)((unsigned __int64)v90 & -(__int64)v44));
              if ( a12 )
                v43[104] |= 0x1000u;
              AlpcpReferenceBlob(BugCheckParameter2);
              AlpcpLockBlobExclusive(BugCheckParameter2);
              v45 = v58;
              v46 = BugCheckParameter2;
              *((_QWORD *)v58 + 2) = BugCheckParameter2;
              *(_QWORD *)(v46 + 8) = v45;
              *(_QWORD *)(v39 + 424) = v24;
              *(_QWORD *)(v39 + 432) = v45;
              v45[53] = v39;
              v45[54] = v39;
              v47 = *(_DWORD *)(v39 + 416);
              if ( (v47 & 0x1000) != 0 && (v45[52] & 0x1000) != 0 )
              {
                *(_DWORD *)(v39 + 416) = v47 | 0x2000;
                *((_DWORD *)v45 + 104) |= 0x2000u;
              }
              AlpcpUnlockBlobUncachedExclusive(v46);
              v86 = v67 + 40;
              v87 = 11;
              v48 = v59;
              inserted = AlpcpSetupMessageDataForDeferredCopy(v29, (__int64)v71, v59, v67, 0, AccessMode);
              if ( inserted >= 0 )
              {
                if ( !a12
                  || !*(_QWORD *)(v29 + 144)
                  || (inserted = AlpcpMapLegacyPortRemoteView(v58, v29 + 104, &v79), inserted >= 0) )
                {
                  v60 = 1;
                  if ( v72 )
                  {
                    v77 = 0LL;
                    LODWORD(v78) = 0;
                    inserted = AlpcpMapLegacyPortView((__int64)v58, (__int64)&v81, (__int64)v88);
                    if ( inserted >= 0 )
                    {
                      inserted = AlpcpMapLegacyPortRemoteView(v39, v88, &v77);
                      if ( inserted >= 0 )
                        *((_QWORD *)&v83 + 1) = v78;
                    }
                  }
                  else
                  {
                    inserted = AlpcpCaptureAttributes((__int64)v24, v48, v74, v29, (__int64)v88);
                  }
                  if ( inserted >= 0 )
                  {
                    PsReferenceSiloContext(v58);
                    inserted = ObInsertObjectEx((struct _FILE_OBJECT *)v58, 0LL, 2031617, 0, 0, 0LL, (__int64)&Handle);
                    if ( inserted >= 0 )
                    {
                      AlpcpReleaseAttributes((_QWORD *)(v29 + 104), v25, v27, v28);
                      *(_OWORD *)(v29 + 104) = v88[0];
                      *(_OWORD *)(v29 + 120) = v88[1];
                      *(_OWORD *)(v29 + 136) = v88[2];
                      *(_OWORD *)(v29 + 152) = v88[3];
                      *(_QWORD *)(v29 + 168) = v89;
                      v60 = 0;
                      v49 = *(_QWORD *)(v29 + 208);
                      if ( v49 )
                      {
                        PsReleaseProcessWakeCounter(v49);
                        *(_QWORD *)(v29 + 208) = 0LL;
                      }
                      v50 = *(_QWORD *)(v29 + 216);
                      if ( v50 )
                      {
                        PsReleaseProcessWakeCounter(v50);
                        *(_QWORD *)(v29 + 216) = 0LL;
                      }
                      v51 = Handle;
                      if ( v59 >= 0 )
                        *v64 = Handle;
                      else
                        *(_DWORD *)v64 = (_DWORD)Handle;
                      v52 = a6;
                      if ( !a6 )
                        v52 = v51;
                      *((_QWORD *)v58 + 7) = v52;
                      v53 = v72;
                      if ( v72 )
                      {
                        *v72 = v81;
                        v53[1] = v82;
                        v53[2] = v83;
                      }
                      v54 = v75;
                      if ( v75 )
                      {
                        *v75 = v79;
                        *((_QWORD *)v54 + 2) = v80;
                      }
                      v31 = 0;
                      v32 = 0;
                      v84[0] = (__int64)v58;
                      v84[1] = v29;
                      v85 = 0x10000;
                      if ( *(_QWORD *)(v29 + 24) )
                      {
                        if ( *(_QWORD *)(v29 + 32) )
                          v55 = AlpcpDispatchReplyToWaitingThread((__int64)v84);
                        else
                          v55 = AlpcpDispatchReplyToPort((__int64)v84);
                      }
                      else
                      {
                        v55 = AlpcpDispatchNewMessage(v84);
                      }
                      inserted = v55;
                      if ( v55 >= 0 )
                        Handle = 0LL;
                      v29 = 0LL;
                      goto LABEL_140;
                    }
                  }
                }
              }
            }
          }
        }
        goto LABEL_139;
      }
      goto LABEL_52;
    }
    goto LABEL_138;
  }
  inserted = -1073740029;
LABEL_50:
  v31 = 1;
  v32 = 0;
LABEL_140:
  if ( v29 )
  {
    if ( v60 )
    {
      AlpcpReleaseAttributes(v88, v25, v27, v28);
      v32 = 1;
    }
    if ( v31 )
      AlpcpCancelMessage((__int64)v24, v29, 0x10000);
    else
      AlpcpUnlockMessage(v29, v25, v27, v28);
  }
  if ( v76 )
    ObfDereferenceObject(v76);
  if ( v58 )
  {
    if ( v32 )
      AlpcpFlushResourcesPort((__int64)v58);
    ObfDereferenceObject(v58);
  }
  if ( Handle )
    NtClose(Handle);
  return inserted;
}
