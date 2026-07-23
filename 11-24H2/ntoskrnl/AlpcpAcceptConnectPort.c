/*
 * XREFs of AlpcpAcceptConnectPort @ 0x140A1ED20
 * Callers:
 *     NtAcceptConnectPort @ 0x140A1EC10 (NtAcceptConnectPort.c)
 *     NtAlpcAcceptConnectPort @ 0x140A1EC90 (NtAlpcAcceptConnectPort.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     Feature_2866505016__private_IsEnabledDeviceUsageNoInline @ 0x1405C9A08 (Feature_2866505016__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406B6C90 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     NtClose @ 0x140846CC0 (NtClose.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ObInsertObjectEx @ 0x140853900 (ObInsertObjectEx.c)
 *     AlpcpCreatePort @ 0x1408669C4 (AlpcpCreatePort.c)
 *     AlpcpSetOwnerProcessPort @ 0x140867A08 (AlpcpSetOwnerProcessPort.c)
 *     AlpcpValidateAndSetPortAttributes @ 0x140867A60 (AlpcpValidateAndSetPortAttributes.c)
 *     AlpcpInitializePort @ 0x140867D10 (AlpcpInitializePort.c)
 *     AlpcpFlushResourcesPort @ 0x14088ECFC (AlpcpFlushResourcesPort.c)
 *     AlpcpSetupMessageDataForDeferredCopy @ 0x140892140 (AlpcpSetupMessageDataForDeferredCopy.c)
 *     AlpcpLookupMessage @ 0x140892E20 (AlpcpLookupMessage.c)
 *     PsReleaseProcessWakeCounter @ 0x140898050 (PsReleaseProcessWakeCounter.c)
 *     AlpcpCaptureAttributes @ 0x140899420 (AlpcpCaptureAttributes.c)
 *     AlpcpReleaseAttributes @ 0x140899E50 (AlpcpReleaseAttributes.c)
 *     AlpcpDispatchMessage @ 0x14089BE90 (AlpcpDispatchMessage.c)
 *     AlpcpCancelMessage @ 0x14089C73C (AlpcpCancelMessage.c)
 *     AlpcpUnlockBlobUncachedExclusive @ 0x14089E840 (AlpcpUnlockBlobUncachedExclusive.c)
 *     AlpcpLockBlobExclusive @ 0x14089EB0C (AlpcpLockBlobExclusive.c)
 *     AlpcpReferenceBlob @ 0x14089EB60 (AlpcpReferenceBlob.c)
 *     AlpcpUnlockMessage @ 0x1408A1410 (AlpcpUnlockMessage.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x1409A96B0 (AlpcpProbeAndCaptureMessageHeader.c)
 *     AlpcpMapLegacyPortView @ 0x1409E98D0 (AlpcpMapLegacyPortView.c)
 *     AlpcpValidateConnectionMessage @ 0x140A1FFE0 (AlpcpValidateConnectionMessage.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x140A839EC (AlpcpMapLegacyPortRemoteView.c)
 */

NTSTATUS __fastcall AlpcpAcceptConnectPort(
        HANDLE *a1,
        int a2,
        void *a3,
        __int64 a4,
        _OWORD *Src,
        __int64 a6,
        _OWORD *a7,
        int *a8,
        char a9,
        _OWORD *a10,
        unsigned __int64 a11,
        char a12)
{
  HANDLE v12; // rbx
  __int64 v13; // r9
  KPROCESSOR_MODE PreviousMode; // al
  char v15; // r12
  __int64 v16; // rbx
  int v17; // r8d
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rdx
  NTSTATUS result; // eax
  __int64 v22; // rcx
  __int64 v23; // rax
  void ***v24; // r13
  int inserted; // esi
  __int64 v26; // r8
  __int64 v27; // r15
  int v28; // ecx
  int v29; // ebx
  _DWORD *v30; // r14
  void ***v31; // rdx
  ULONG_PTR v32; // rax
  PVOID *v33; // rsi
  signed __int64 *v34; // rbx
  char *v35; // r14
  bool v36; // si
  void **v37; // rax
  _KPROCESS *Process; // rcx
  __int64 v39; // rbx
  char *v40; // rax
  char *v41; // r14
  int v42; // eax
  bool v43; // cf
  ULONG_PTR v44; // rcx
  int v45; // edx
  __int64 v46; // rcx
  __int64 v47; // rcx
  HANDLE v48; // rcx
  __int64 v49; // rax
  _OWORD *v50; // rax
  _OWORD *v51; // rax
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-258h]
  PVOID v54; // [rsp+50h] [rbp-248h] BYREF
  int v55; // [rsp+58h] [rbp-240h]
  ULONG_PTR v56; // [rsp+60h] [rbp-238h] BYREF
  int v57; // [rsp+68h] [rbp-230h]
  __int64 v58; // [rsp+70h] [rbp-228h]
  HANDLE v59; // [rsp+78h] [rbp-220h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-218h]
  HANDLE Handle; // [rsp+88h] [rbp-210h]
  HANDLE *v62; // [rsp+90h] [rbp-208h]
  PVOID Object; // [rsp+A0h] [rbp-1F8h] BYREF
  _OWORD *v64; // [rsp+A8h] [rbp-1F0h]
  __int128 v65; // [rsp+B0h] [rbp-1E8h] BYREF
  __int128 v66; // [rsp+C0h] [rbp-1D8h]
  __int64 v67; // [rsp+D0h] [rbp-1C8h]
  __int64 v68; // [rsp+D8h] [rbp-1C0h]
  __int64 v69; // [rsp+E0h] [rbp-1B8h]
  int *v70; // [rsp+E8h] [rbp-1B0h]
  _OWORD *v71; // [rsp+F0h] [rbp-1A8h]
  PVOID v72; // [rsp+F8h] [rbp-1A0h]
  __int128 v73; // [rsp+108h] [rbp-190h] BYREF
  __int64 v74; // [rsp+118h] [rbp-180h]
  __int128 v75; // [rsp+120h] [rbp-178h] BYREF
  __int64 v76; // [rsp+130h] [rbp-168h]
  __int128 v77; // [rsp+138h] [rbp-160h] BYREF
  __int128 v78; // [rsp+148h] [rbp-150h]
  __int128 v79; // [rsp+158h] [rbp-140h]
  _OWORD v80[4]; // [rsp+170h] [rbp-128h] BYREF
  __int64 v81; // [rsp+1B0h] [rbp-E8h]
  __int64 v82[6]; // [rsp+1C0h] [rbp-D8h] BYREF
  int v83; // [rsp+1F0h] [rbp-A8h]
  __int16 v84; // [rsp+1F4h] [rbp-A4h]
  int v85; // [rsp+1F6h] [rbp-A2h]
  _OWORD v86[4]; // [rsp+200h] [rbp-98h] BYREF
  __int64 v87; // [rsp+240h] [rbp-58h]

  v68 = a4;
  v12 = a3;
  Handle = a3;
  v62 = a1;
  v71 = (_OWORD *)a11;
  v64 = a10;
  v58 = (__int64)Src;
  v69 = (__int64)a7;
  v70 = a8;
  memset_0(v82, 0, 0x40uLL);
  v65 = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  memset_0(v86, 0, 0x48uLL);
  memset_0(v80, 0, 0x48uLL);
  v77 = 0LL;
  v78 = 0LL;
  v79 = 0LL;
  v75 = 0LL;
  v76 = 0LL;
  v54 = 0LL;
  v55 = 0;
  v57 = 0;
  v56 = 0LL;
  v59 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  AccessMode = PreviousMode;
  if ( PreviousMode )
  {
    v15 = a12;
    if ( a12 || a9 )
    {
      v17 = a2;
      v16 = 0x7FFFFFFF0000LL;
      v18 = 0x7FFFFFFF0000LL;
      if ( a2 >= 0 )
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
      v17 = a2;
    }
    AlpcpProbeAndCaptureMessageHeader((unsigned __int64)a7, &v65, v17);
    if ( Src )
    {
      v19 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)Src < 0x7FFFFFFF0000LL )
        v19 = (__int64)Src;
      RtlCopyVolatileMemory(v86, (const void *)v19, 0x48uLL);
    }
    if ( a10 )
    {
      v20 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a10 < 0x7FFFFFFF0000LL )
        v20 = (__int64)a10;
      RtlCopyVolatileMemory(&v77, (const void *)v20, 0x30uLL);
      if ( (_DWORD)v77 != 48 )
        return -1073741811;
      if ( ((unsigned __int8)a10 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v22 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a10 < 0x7FFFFFFF0000LL )
        v22 = (__int64)a10;
      *(_BYTE *)v22 = *(_BYTE *)v22;
      *(_BYTE *)(v22 + 47) = *(_BYTE *)(v22 + 47);
    }
    if ( a11 )
    {
      v23 = 0x7FFFFFFF0000LL;
      if ( a11 < 0x7FFFFFFF0000LL )
        v23 = a11;
      if ( *(_DWORD *)v23 != 24 )
        return -1073741811;
      if ( (a11 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a11 < 0x7FFFFFFF0000LL )
        v16 = a11;
      *(_BYTE *)v16 = *(_BYTE *)v16;
      *(_BYTE *)(v16 + 23) = *(_BYTE *)(v16 + 23);
    }
    v12 = Handle;
    PreviousMode = AccessMode;
  }
  else
  {
    if ( Src )
    {
      v86[0] = *Src;
      v86[1] = Src[1];
      v86[2] = Src[2];
      v86[3] = Src[3];
      v87 = *((_QWORD *)Src + 8);
    }
    v65 = *a7;
    v66 = a7[1];
    v67 = *((_QWORD *)a7 + 4);
    v15 = a12;
  }
  if ( !DWORD2(v66) )
    return -1073741281;
  v24 = 0LL;
  Handle = 0LL;
  if ( v12 )
  {
    Object = 0LL;
    result = ObReferenceObjectByHandle(v12, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
    v24 = (void ***)Object;
    Handle = Object;
    if ( result < 0 )
      return result;
  }
  else
  {
    if ( !v15 )
      return -1073741504;
    LODWORD(v67) = 0;
  }
  v72 = v24;
  inserted = AlpcpLookupMessage((__int64)v24, DWORD2(v66), v67, v13, &v56);
  v27 = v56;
  if ( inserted < 0 )
    goto LABEL_52;
  if ( !v24 )
  {
    v24 = *(void ****)(v56 + 16);
    Handle = v24;
  }
  v28 = *(_DWORD *)(v56 + 40);
  if ( (v28 & 0x80u) == 0 )
  {
    if ( (*(unsigned __int16 *)(v56 + 244) & 0xFFFF00FF) != 0xA )
      goto LABEL_51;
    v31 = *(void ****)(v56 + 16);
    if ( v31 != *(void ****)(v56 + 192) )
      goto LABEL_135;
    if ( v31 != v24 )
    {
      if ( (v28 & 7) == 0 )
      {
        v32 = *(_QWORD *)(v56 + 24);
        BugCheckParameter2 = v32;
        if ( !v32 )
          goto LABEL_135;
        v33 = *(PVOID **)(v32 + 16);
        v34 = (signed __int64 *)(v33 - 2);
        v35 = (char *)KeAbPreAcquire((__int64)(v33 - 2), 0LL);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v33 - 2, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx((signed __int64 *)v33 - 2, 0, v35, (__int64)(v33 - 2));
        if ( v35 )
          v35[10] = 1;
        if ( ((*(_DWORD *)(BugCheckParameter2 + 416) >> 1) & 3) == 2 )
          v36 = *v33 == v24 || v33[1] == v24;
        else
          v36 = v33[2] == v24;
        if ( _InterlockedCompareExchange64(v34, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v34);
        KeAbPostRelease((ULONG_PTR)v34);
        v27 = v56;
LABEL_82:
        if ( v36 )
        {
          LOBYTE(v26) = a12;
          inserted = AlpcpValidateConnectionMessage(v24, &v65, v26);
          if ( inserted < 0 )
            goto LABEL_52;
          v39 = *(_QWORD *)(v27 + 24);
          BugCheckParameter2 = *(_QWORD *)(v39 + 16);
          if ( (*(_DWORD *)(v39 + 416) & 0x20) != 0 )
          {
            v29 = 1;
            inserted = -1073741769;
            goto LABEL_53;
          }
          if ( ((_DWORD)v24[32] & 0x100000) == 0 )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            v27 = v56;
            if ( Process != (_KPROCESS *)v24[3] )
            {
LABEL_51:
              inserted = -1073741281;
LABEL_52:
              v29 = 0;
              goto LABEL_53;
            }
          }
          if ( !a9 )
          {
            v40 = (char *)KeAbPreAcquire(v39 + 352, 0LL);
            v41 = v40;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v39 + 352), 0LL) )
              ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v39 + 352), v40, v39 + 352);
            if ( v41 )
              v41[10] = 1;
            v42 = *(_DWORD *)(v39 + 416) | 0x10;
            *(_DWORD *)(v39 + 416) = v42;
            if ( (v42 & 0x100) != 0 )
              *(_QWORD *)(v39 + 56) = a6;
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v39 + 352), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v39 + 352));
            KeAbPostRelease(v39 + 352);
            v29 = 1;
            inserted = 0;
            v27 = v56;
            goto LABEL_53;
          }
          LOBYTE(Process) = AccessMode;
          inserted = AlpcpCreatePort((int)Process, v68, &v54);
          if ( inserted < 0 )
            goto LABEL_52;
          v30 = v54;
          inserted = AlpcpInitializePort((__int64)v54, 3, 0);
          if ( inserted >= 0 )
          {
            inserted = AlpcpValidateAndSetPortAttributes(
                         (__int64)v30,
                         (int *)((unsigned __int64)v86 & ((unsigned __int128)-(__int128)(unsigned __int64)v58 >> 64)),
                         (__int64)v24,
                         0LL,
                         0,
                         0,
                         a12);
            if ( inserted >= 0 )
            {
              v43 = v58 != 0;
              v58 = -v58;
              AlpcpSetOwnerProcessPort((__int64)v30, (_DWORD *)((unsigned __int64)v86 & -(__int64)v43));
              if ( a12 )
                v30[104] |= 0x1000u;
              AlpcpReferenceBlob(BugCheckParameter2);
              AlpcpLockBlobExclusive(BugCheckParameter2);
              v44 = BugCheckParameter2;
              *((_QWORD *)v30 + 2) = BugCheckParameter2;
              *(_QWORD *)(v44 + 8) = v30;
              *(_QWORD *)(v39 + 424) = v24;
              *(_QWORD *)(v39 + 432) = v30;
              *((_QWORD *)v30 + 53) = v39;
              *((_QWORD *)v30 + 54) = v39;
              v45 = *(_DWORD *)(v39 + 416);
              if ( (v45 & 0x1000) != 0 && (v30[104] & 0x1000) != 0 )
              {
                *(_DWORD *)(v39 + 416) = v45 | 0x2000;
                v30[104] |= 0x2000u;
              }
              AlpcpUnlockBlobUncachedExclusive(v44);
              v84 = v65 + 40;
              v85 = 11;
              inserted = AlpcpSetupMessageDataForDeferredCopy(v27, v69, a2, v65, 0, AccessMode);
              if ( inserted >= 0 )
              {
                if ( !a12 || !*(_QWORD *)(v27 + 144) )
                  goto LABEL_112;
                inserted = AlpcpMapLegacyPortRemoteView(v30, v27 + 104, &v75);
                if ( inserted >= 0 )
                {
                  if ( (unsigned int)Feature_2866505016__private_IsEnabledDeviceUsageNoInline() )
                    *(_DWORD *)(v27 + 40) |= 0x4000u;
LABEL_112:
                  v55 = 1;
                  if ( v64 )
                  {
                    v73 = 0LL;
                    LODWORD(v74) = 0;
                    inserted = AlpcpMapLegacyPortView((__int64)v30, (__int64)&v77, (__int64)v80);
                    if ( inserted >= 0 )
                    {
                      inserted = AlpcpMapLegacyPortRemoteView(v39, v80, &v73);
                      if ( inserted >= 0 )
                        *((_QWORD *)&v79 + 1) = v74;
                    }
                  }
                  else
                  {
                    inserted = AlpcpCaptureAttributes((__int64)v24, (unsigned int)a2, v70, v27, (__int64)v80);
                  }
                  if ( inserted >= 0 )
                  {
                    PsReferenceSiloContext(v30);
                    inserted = ObInsertObjectEx((struct _FILE_OBJECT *)v30, 0LL, 2031617, 0, 0, 0LL, (__int64)&v59);
                    if ( inserted >= 0 )
                    {
                      AlpcpReleaseAttributes(v27, (_QWORD *)(v27 + 104));
                      *(_OWORD *)(v27 + 104) = v80[0];
                      *(_OWORD *)(v27 + 120) = v80[1];
                      *(_OWORD *)(v27 + 136) = v80[2];
                      *(_OWORD *)(v27 + 152) = v80[3];
                      *(_QWORD *)(v27 + 168) = v81;
                      v55 = 0;
                      v46 = *(_QWORD *)(v27 + 208);
                      if ( v46 )
                      {
                        PsReleaseProcessWakeCounter(v46);
                        *(_QWORD *)(v27 + 208) = 0LL;
                      }
                      v47 = *(_QWORD *)(v27 + 216);
                      if ( v47 )
                      {
                        PsReleaseProcessWakeCounter(v47);
                        *(_QWORD *)(v27 + 216) = 0LL;
                      }
                      v48 = v59;
                      if ( a2 >= 0 )
                        *v62 = v59;
                      else
                        *(_DWORD *)v62 = (_DWORD)v59;
                      v49 = a6;
                      if ( !a6 )
                        v49 = (__int64)v48;
                      *((_QWORD *)v30 + 7) = v49;
                      v50 = v64;
                      if ( v64 )
                      {
                        *v64 = v77;
                        v50[1] = v78;
                        v50[2] = v79;
                      }
                      v51 = v71;
                      if ( v71 )
                      {
                        *v71 = v75;
                        *((_QWORD *)v51 + 2) = v76;
                      }
                      v29 = 0;
                      v82[0] = (__int64)v30;
                      v82[1] = v27;
                      v83 = 0x10000;
                      inserted = AlpcpDispatchMessage(v82);
                      if ( inserted >= 0 )
                        v59 = 0LL;
                      v27 = 0LL;
                      goto LABEL_54;
                    }
                  }
                }
              }
            }
          }
LABEL_136:
          v29 = 0;
          goto LABEL_54;
        }
LABEL_135:
        inserted = -1073740030;
        v30 = v54;
        goto LABEL_136;
      }
      if ( ((_BYTE)v24[52] & 6) != 6 )
        goto LABEL_135;
      v37 = v24[2];
      if ( !v37 || *v37 != v31 )
        goto LABEL_135;
    }
    if ( (v28 & 7) != 3 || (v28 & 0x2000) != 0 )
      goto LABEL_135;
    v36 = 1;
    goto LABEL_82;
  }
  v29 = 1;
  inserted = -1073740029;
LABEL_53:
  v30 = v54;
LABEL_54:
  if ( v27 )
  {
    if ( v55 )
    {
      AlpcpReleaseAttributes(0LL, v80);
      v57 = 1;
    }
    if ( v29 )
      AlpcpCancelMessage((__int64)v24, v27, 0x10000);
    else
      AlpcpUnlockMessage(v27);
  }
  if ( v72 )
    ObfDereferenceObject(v72);
  if ( v30 )
  {
    if ( v57 )
      AlpcpFlushResourcesPort((__int64)v30);
    ObfDereferenceObject(v30);
  }
  if ( v59 )
    NtClose(v59);
  return inserted;
}
