/*
 * XREFs of AlpcpAcceptConnectPort @ 0x1409F5B30
 * Callers:
 *     NtAcceptConnectPort @ 0x1409F5A20 (NtAcceptConnectPort.c)
 *     NtAlpcAcceptConnectPort @ 0x1409F5AA0 (NtAlpcAcceptConnectPort.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406AAA20 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     NtClose @ 0x14084EC50 (NtClose.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     ObCreateObjectEx @ 0x14085BE20 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1408A05E0 (ObInsertObjectEx.c)
 *     AlpcpDispatchNewMessage @ 0x1408A8F50 (AlpcpDispatchNewMessage.c)
 *     AlpcpUnlockMessage @ 0x1408AA9C0 (AlpcpUnlockMessage.c)
 *     AlpcpLookupMessage @ 0x1408AAFC0 (AlpcpLookupMessage.c)
 *     AlpcpCancelMessage @ 0x1408AC700 (AlpcpCancelMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x1408ACCE0 (AlpcpDispatchReplyToPort.c)
 *     PsReleaseProcessWakeCounter @ 0x1408B0AE0 (PsReleaseProcessWakeCounter.c)
 *     AlpcpCaptureAttributes @ 0x1408B1B80 (AlpcpCaptureAttributes.c)
 *     AlpcpReleaseAttributes @ 0x1408B25D0 (AlpcpReleaseAttributes.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x1408B2D00 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpReferenceBlob @ 0x1408B4930 (AlpcpReferenceBlob.c)
 *     AlpcpMapLegacyPortView @ 0x1408B62D4 (AlpcpMapLegacyPortView.c)
 *     AlpcpUnlockBlobUncachedExclusive @ 0x14098BD4C (AlpcpUnlockBlobUncachedExclusive.c)
 *     AlpcpLockBlobExclusive @ 0x14098BD84 (AlpcpLockBlobExclusive.c)
 *     AlpcpFlushResourcesPort @ 0x14098BDD4 (AlpcpFlushResourcesPort.c)
 *     AlpcpSetupMessageDataForDeferredCopy @ 0x14098E380 (AlpcpSetupMessageDataForDeferredCopy.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x1409CD120 (AlpcpProbeAndCaptureMessageHeader.c)
 *     AlpcpInitializePort @ 0x1409E024C (AlpcpInitializePort.c)
 *     AlpcpValidateAndSetPortAttributes @ 0x1409E0414 (AlpcpValidateAndSetPortAttributes.c)
 *     AlpcpSetOwnerProcessPort @ 0x1409E066C (AlpcpSetOwnerProcessPort.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x140A82DE8 (AlpcpMapLegacyPortRemoteView.c)
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
  void ***v24; // r15
  signed int inserted; // esi
  __int64 v26; // r14
  int v27; // ecx
  int v28; // ebx
  int v29; // r13d
  void ***v30; // rdx
  __int64 v31; // r13
  PVOID *v32; // rsi
  signed __int64 *v33; // rbx
  __int64 *v34; // r14
  bool v35; // si
  void **v36; // rax
  __int64 v37; // r13
  __int64 *v38; // rax
  __int64 *v39; // rsi
  int v40; // eax
  _DWORD *v41; // rbx
  bool v42; // cf
  _QWORD *v43; // rbx
  ULONG_PTR v44; // rcx
  int v45; // edx
  unsigned int v46; // ebx
  __int64 v47; // rcx
  __int64 v48; // rcx
  HANDLE v49; // rax
  HANDLE v50; // rcx
  _OWORD *v51; // rax
  _OWORD *v52; // rax
  int v53; // eax
  PVOID *Object; // [rsp+20h] [rbp-268h]
  KPROCESSOR_MODE AccessMode; // [rsp+50h] [rbp-238h]
  PVOID v56; // [rsp+60h] [rbp-228h] BYREF
  int v57; // [rsp+68h] [rbp-220h]
  int v58; // [rsp+6Ch] [rbp-21Ch]
  ULONG_PTR v59; // [rsp+70h] [rbp-218h] BYREF
  __int64 v60; // [rsp+78h] [rbp-210h]
  HANDLE Handle; // [rsp+80h] [rbp-208h] BYREF
  HANDLE *v62; // [rsp+88h] [rbp-200h]
  ULONG_PTR BugCheckParameter2; // [rsp+90h] [rbp-1F8h]
  PVOID v64; // [rsp+98h] [rbp-1F0h]
  __int128 v65; // [rsp+A0h] [rbp-1E8h] BYREF
  __int128 v66; // [rsp+B0h] [rbp-1D8h]
  __int64 v67; // [rsp+C0h] [rbp-1C8h]
  PVOID v68; // [rsp+C8h] [rbp-1C0h] BYREF
  void *v69; // [rsp+D0h] [rbp-1B8h]
  _OWORD *v70; // [rsp+D8h] [rbp-1B0h]
  __int64 v71; // [rsp+E0h] [rbp-1A8h]
  int *v72; // [rsp+E8h] [rbp-1A0h]
  _OWORD *v73; // [rsp+F0h] [rbp-198h]
  PVOID v74; // [rsp+F8h] [rbp-190h]
  __int128 v75; // [rsp+100h] [rbp-188h] BYREF
  __int64 v76; // [rsp+110h] [rbp-178h]
  __int128 v77; // [rsp+118h] [rbp-170h] BYREF
  __int64 v78; // [rsp+128h] [rbp-160h]
  __int128 v79; // [rsp+130h] [rbp-158h] BYREF
  __int128 v80; // [rsp+140h] [rbp-148h]
  __int128 v81; // [rsp+150h] [rbp-138h]
  __int64 v82[6]; // [rsp+160h] [rbp-128h] BYREF
  int v83; // [rsp+190h] [rbp-F8h]
  __int16 v84; // [rsp+194h] [rbp-F4h]
  int v85; // [rsp+196h] [rbp-F2h]
  _OWORD v86[4]; // [rsp+1A0h] [rbp-E8h] BYREF
  __int64 v87; // [rsp+1E0h] [rbp-A8h]
  _OWORD v88[4]; // [rsp+1F0h] [rbp-98h] BYREF
  __int64 v89; // [rsp+230h] [rbp-58h]

  v71 = a4;
  v57 = a2;
  v62 = a1;
  v73 = (_OWORD *)a11;
  v70 = (_OWORD *)a10;
  v60 = (__int64)Src;
  v69 = a7;
  v72 = a8;
  memset_0(v82, 0, 0x40uLL);
  v65 = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  memset_0(v88, 0, 0x48uLL);
  memset_0(v86, 0, 0x48uLL);
  v79 = 0LL;
  v80 = 0LL;
  v81 = 0LL;
  v77 = 0LL;
  v78 = 0LL;
  v56 = 0LL;
  v58 = 0;
  v59 = 0LL;
  Handle = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  AccessMode = PreviousMode;
  if ( PreviousMode )
  {
    v15 = a12;
    if ( a12 || a9 )
    {
      v17 = v57;
      v16 = 0x7FFFFFFF0000LL;
      v18 = 0x7FFFFFFF0000LL;
      if ( v57 >= 0 )
      {
        if ( (unsigned __int64)v62 < 0x7FFFFFFF0000LL )
          v18 = (__int64)v62;
        *(_QWORD *)v18 = *(_QWORD *)v18;
      }
      else
      {
        if ( (unsigned __int64)v62 < 0x7FFFFFFF0000LL )
          v18 = (__int64)v62;
        *(_DWORD *)v18 = *(_DWORD *)v18;
      }
    }
    else
    {
      v16 = 0x7FFFFFFF0000LL;
      v17 = v57;
    }
    AlpcpProbeAndCaptureMessageHeader((unsigned __int64)v69, &v65, v17);
    if ( Src )
    {
      v19 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)Src < 0x7FFFFFFF0000LL )
        v19 = (__int64)Src;
      RtlCopyVolatileMemory(v88, (const void *)v19, 0x48uLL);
    }
    if ( a10 )
    {
      v20 = 0x7FFFFFFF0000LL;
      if ( a10 < 0x7FFFFFFF0000LL )
        v20 = a10;
      RtlCopyVolatileMemory(&v79, (const void *)v20, 0x30uLL);
      if ( (_DWORD)v79 != 48 )
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
    v88[0] = *Src;
    v88[1] = Src[1];
    v88[2] = Src[2];
    v88[3] = Src[3];
    v89 = *((_QWORD *)Src + 8);
  }
  v65 = *a7;
  v66 = a7[1];
  v67 = *((_QWORD *)a7 + 4);
  v15 = a12;
LABEL_38:
  if ( !DWORD2(v66) )
    return -1073741281;
  v24 = 0LL;
  v64 = 0LL;
  if ( a3 )
  {
    v68 = 0LL;
    result = ObReferenceObjectByHandle(a3, 1u, AlpcPortObjectType, PreviousMode, &v68, 0LL);
    v24 = (void ***)v68;
    v64 = v68;
    if ( result < 0 )
      return result;
  }
  else
  {
    if ( !v15 )
      return -1073741504;
    LODWORD(v67) = 0;
  }
  v74 = v24;
  inserted = AlpcpLookupMessage((__int64)v24, DWORD2(v66), v67, v13, &v59);
  v26 = v59;
  if ( inserted < 0 )
    goto LABEL_139;
  if ( !v24 )
  {
    v24 = *(void ****)(v59 + 16);
    v64 = v24;
  }
  v27 = *(_DWORD *)(v59 + 40);
  if ( (v27 & 0x80u) == 0 )
  {
    if ( (*(unsigned __int16 *)(v59 + 244) & 0xFFFF00FF) != 0xA )
    {
LABEL_52:
      inserted = -1073741281;
LABEL_139:
      v28 = 0;
      v29 = 0;
      goto LABEL_140;
    }
    v30 = *(void ****)(v59 + 16);
    if ( v30 != *(void ****)(v59 + 192) )
    {
LABEL_138:
      inserted = -1073740030;
      goto LABEL_139;
    }
    if ( v30 != v24 )
    {
      if ( (v27 & 7) == 0 )
      {
        v31 = *(_QWORD *)(v59 + 24);
        if ( !v31 )
          goto LABEL_138;
        v32 = *(PVOID **)(v31 + 16);
        v33 = (signed __int64 *)(v32 - 2);
        v34 = KeAbPreAcquire((__int64)(v32 - 2), 0LL);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v32 - 2, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx((signed __int64 *)v32 - 2, 0, v34, (unsigned __int64)(v32 - 2));
        if ( v34 )
          *((_BYTE *)v34 + 10) = 1;
        if ( ((*(_DWORD *)(v31 + 416) >> 1) & 3) == 2 )
          v35 = *v32 == v24 || v32[1] == v24;
        else
          v35 = v32[2] == v24;
        if ( _InterlockedCompareExchange64(v33, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v33);
        KeAbPostRelease((ULONG_PTR)v33);
        v26 = v59;
        goto LABEL_76;
      }
      if ( ((_BYTE)v24[52] & 6) != 6 )
        goto LABEL_138;
      v36 = v24[2];
      if ( !v36 || *v36 != v30 )
        goto LABEL_138;
    }
    if ( (v27 & 7) != 3 || (v27 & 0x2000) != 0 )
      goto LABEL_138;
    v35 = 1;
LABEL_76:
    if ( v35 )
    {
      if ( a12 )
      {
        if ( (unsigned __int16)v65 > (unsigned __int64)(v24[34] - 5) )
          LOWORD(v65) = *((_WORD *)v24 + 136) - 40;
        inserted = 0;
      }
      else
      {
        inserted = -1073741811;
        if ( (unsigned __int16)v65 < (unsigned __int16)(v65 + 40) )
          inserted = WORD1(v65) != (unsigned __int16)v65 + 40LL ? 0xC000000D : 0;
      }
      if ( inserted < 0 )
        goto LABEL_139;
      v37 = *(_QWORD *)(v26 + 24);
      BugCheckParameter2 = *(_QWORD *)(v37 + 16);
      if ( (*(_DWORD *)(v37 + 416) & 0x20) != 0 )
      {
        inserted = -1073741769;
        goto LABEL_50;
      }
      if ( ((_DWORD)v24[32] & 0x100000) != 0 || (v26 = v59, (void **)KeGetCurrentThread()->ApcState.Process == v24[3]) )
      {
        if ( !a9 )
        {
          v38 = KeAbPreAcquire(v37 + 352, 0LL);
          v39 = v38;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v37 + 352), 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v37 + 352), v38, v37 + 352);
          if ( v39 )
            *((_BYTE *)v39 + 10) = 1;
          v40 = *(_DWORD *)(v37 + 416) | 0x10;
          *(_DWORD *)(v37 + 416) = v40;
          if ( (v40 & 0x100) != 0 )
            *(_QWORD *)(v37 + 56) = a6;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v37 + 352), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v37 + 352));
          KeAbPostRelease(v37 + 352);
          v28 = 1;
          inserted = 0;
          v26 = v59;
          v29 = 0;
          goto LABEL_140;
        }
        inserted = ObCreateObjectEx(
                     AccessMode,
                     AlpcPortObjectType,
                     v71,
                     AccessMode,
                     (__int64)Object,
                     472,
                     0,
                     0,
                     &v56,
                     0LL);
        if ( inserted >= 0 )
        {
          memset_0(v56, 0, 0x1D8uLL);
          v41 = v56;
          inserted = AlpcpInitializePort((__int64)v56, 3, 0);
          if ( inserted >= 0 )
          {
            inserted = AlpcpValidateAndSetPortAttributes(
                         (__int64)v41,
                         (int *)((unsigned __int64)v88 & ((unsigned __int128)-(__int128)(unsigned __int64)v60 >> 64)),
                         (__int64)v24,
                         0LL,
                         0,
                         0,
                         a12);
            if ( inserted >= 0 )
            {
              v42 = v60 != 0;
              v60 = -v60;
              AlpcpSetOwnerProcessPort((__int64)v41, (_DWORD *)((unsigned __int64)v88 & -(__int64)v42));
              if ( a12 )
                v41[104] |= 0x1000u;
              AlpcpReferenceBlob(BugCheckParameter2);
              AlpcpLockBlobExclusive(BugCheckParameter2);
              v43 = v56;
              v44 = BugCheckParameter2;
              *((_QWORD *)v56 + 2) = BugCheckParameter2;
              *(_QWORD *)(v44 + 8) = v43;
              *(_QWORD *)(v37 + 424) = v24;
              *(_QWORD *)(v37 + 432) = v43;
              v43[53] = v37;
              v43[54] = v37;
              v45 = *(_DWORD *)(v37 + 416);
              if ( (v45 & 0x1000) != 0 && (v43[52] & 0x1000) != 0 )
              {
                *(_DWORD *)(v37 + 416) = v45 | 0x2000;
                *((_DWORD *)v43 + 104) |= 0x2000u;
              }
              AlpcpUnlockBlobUncachedExclusive(v44);
              v84 = v65 + 40;
              v85 = 11;
              v46 = v57;
              inserted = AlpcpSetupMessageDataForDeferredCopy(v26, (__int64)v69, v57, v65, 0, AccessMode);
              if ( inserted >= 0 )
              {
                if ( !a12
                  || !*(_QWORD *)(v26 + 144)
                  || (inserted = AlpcpMapLegacyPortRemoteView(v56, v26 + 104, &v77), inserted >= 0) )
                {
                  v58 = 1;
                  if ( v70 )
                  {
                    v75 = 0LL;
                    LODWORD(v76) = 0;
                    inserted = AlpcpMapLegacyPortView((__int64)v56, (__int64)&v79, (__int64)v86);
                    if ( inserted >= 0 )
                    {
                      inserted = AlpcpMapLegacyPortRemoteView(v37, v86, &v75);
                      if ( inserted >= 0 )
                        *((_QWORD *)&v81 + 1) = v76;
                    }
                  }
                  else
                  {
                    inserted = AlpcpCaptureAttributes((signed __int64 *)v24, v46, v72, v26, (__int64)v86);
                  }
                  if ( inserted >= 0 )
                  {
                    PsReferenceSiloContext(v56);
                    inserted = ObInsertObjectEx((char *)v56, 0LL, 2031617, 0, 0, 0LL, (__int64)&Handle);
                    if ( inserted >= 0 )
                    {
                      AlpcpReleaseAttributes((_QWORD *)(v26 + 104));
                      *(_OWORD *)(v26 + 104) = v86[0];
                      *(_OWORD *)(v26 + 120) = v86[1];
                      *(_OWORD *)(v26 + 136) = v86[2];
                      *(_OWORD *)(v26 + 152) = v86[3];
                      *(_QWORD *)(v26 + 168) = v87;
                      v58 = 0;
                      v47 = *(_QWORD *)(v26 + 208);
                      if ( v47 )
                      {
                        PsReleaseProcessWakeCounter(v47);
                        *(_QWORD *)(v26 + 208) = 0LL;
                      }
                      v48 = *(_QWORD *)(v26 + 216);
                      if ( v48 )
                      {
                        PsReleaseProcessWakeCounter(v48);
                        *(_QWORD *)(v26 + 216) = 0LL;
                      }
                      v49 = Handle;
                      if ( v57 >= 0 )
                        *v62 = Handle;
                      else
                        *(_DWORD *)v62 = (_DWORD)Handle;
                      v50 = a6;
                      if ( !a6 )
                        v50 = v49;
                      *((_QWORD *)v56 + 7) = v50;
                      v51 = v70;
                      if ( v70 )
                      {
                        *v70 = v79;
                        v51[1] = v80;
                        v51[2] = v81;
                      }
                      v52 = v73;
                      if ( v73 )
                      {
                        *v73 = v77;
                        *((_QWORD *)v52 + 2) = v78;
                      }
                      v28 = 0;
                      v29 = 0;
                      v82[0] = (__int64)v56;
                      v82[1] = v26;
                      v83 = 0x10000;
                      if ( *(_QWORD *)(v26 + 24) )
                      {
                        if ( *(_QWORD *)(v26 + 32) )
                          v53 = AlpcpDispatchReplyToWaitingThread((__int64)v82);
                        else
                          v53 = AlpcpDispatchReplyToPort((__int64)v82);
                      }
                      else
                      {
                        v53 = AlpcpDispatchNewMessage(v82);
                      }
                      inserted = v53;
                      if ( v53 >= 0 )
                        Handle = 0LL;
                      v26 = 0LL;
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
  v28 = 1;
  v29 = 0;
LABEL_140:
  if ( v26 )
  {
    if ( v58 )
    {
      AlpcpReleaseAttributes(v86);
      v29 = 1;
    }
    if ( v28 )
      AlpcpCancelMessage((__int64)v24, v26, 0x10000);
    else
      AlpcpUnlockMessage(v26);
  }
  if ( v74 )
    ObfDereferenceObject(v74);
  if ( v56 )
  {
    if ( v29 )
      AlpcpFlushResourcesPort((__int64)v56);
    ObfDereferenceObject(v56);
  }
  if ( Handle )
    NtClose(Handle);
  return inserted;
}
