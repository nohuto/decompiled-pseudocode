/*
 * XREFs of MiApplyImageHotPatchRequest @ 0x1407F1EEC
 * Callers:
 *     NtManageHotPatch @ 0x140AE9BD0 (NtManageHotPatch.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     MiLocateLockedVadEvent @ 0x14026757C (MiLocateLockedVadEvent.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     MiLockVad @ 0x1402926F0 (MiLockVad.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     MiSectionControlArea @ 0x140355A80 (MiSectionControlArea.c)
 *     MiSetVadFlags @ 0x14036049C (MiSetVadFlags.c)
 *     MiUnlockAndDereferenceVad @ 0x1403626E0 (MiUnlockAndDereferenceVad.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     MiUnlockVad @ 0x1403C870C (MiUnlockVad.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     MiDereferenceControlAreaBySection @ 0x1404468F8 (MiDereferenceControlAreaBySection.c)
 *     MiInsertVadEvent @ 0x1404EF5E8 (MiInsertVadEvent.c)
 *     MiReferenceMappedControlArea @ 0x14067421C (MiReferenceMappedControlArea.c)
 *     Feature_Servicing_HotpatchLoaderFixes__private_IsEnabledDeviceUsageNoInline @ 0x14067DFCC (Feature_Servicing_HotpatchLoaderFixes__private_IsEnabledDeviceUsageNoInline.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiApplyImageHotPatch @ 0x1407F1C70 (MiApplyImageHotPatch.c)
 *     MiCaptureHotPatchInfo @ 0x1407F28D8 (MiCaptureHotPatchInfo.c)
 *     MiDeleteHotPatchEntry @ 0x1407F2B20 (MiDeleteHotPatchEntry.c)
 *     MiGetAllRegisteredPatches @ 0x1407F2DDC (MiGetAllRegisteredPatches.c)
 *     MiGetProcessHotPatchContext @ 0x1407F30A8 (MiGetProcessHotPatchContext.c)
 *     MiGetVadForHotPatchInProgress @ 0x1407F3124 (MiGetVadForHotPatchInProgress.c)
 *     MiLogHotPatchOperation @ 0x1407F3E18 (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x1407F4298 (MiLogHotPatchOperationStatus.c)
 *     MiPrepareToHotPatchVad @ 0x1407F6280 (MiPrepareToHotPatchVad.c)
 *     MiProcessPatchImageCfg @ 0x1407F63AC (MiProcessPatchImageCfg.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     PsWow64GetProcessNtdllType @ 0x1408DFF44 (PsWow64GetProcessNtdllType.c)
 *     MiUnmapImageInSystemSpace @ 0x14093E4B4 (MiUnmapImageInSystemSpace.c)
 *     SeCompareSigningLevels @ 0x1409FA8D0 (SeCompareSigningLevels.c)
 *     MiOpenHotPatchFile @ 0x140A9B20C (MiOpenHotPatchFile.c)
 *     MiReleaseHotPatchResources @ 0x140AAF528 (MiReleaseHotPatchResources.c)
 *     MiInitializeImageHotPatchContext @ 0x140ABBDDC (MiInitializeImageHotPatchContext.c)
 *     RtlApplyHotPatch @ 0x140B65BA0 (RtlApplyHotPatch.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiApplyImageHotPatchRequest(__int64 a1)
{
  __int64 v2; // r14
  int v3; // edi
  struct _KTHREAD *CurrentThread; // r13
  _KPROCESS *Process; // rsi
  int v6; // eax
  int VadForHotPatchInProgress; // esi
  PVOID v8; // r15
  __int64 v9; // rcx
  unsigned __int64 LockedVadEvent; // rax
  __int64 v11; // r8
  __int64 Pool; // rax
  _QWORD *v13; // rsi
  __int64 v14; // rax
  signed __int64 v15; // rax
  __int64 v16; // rcx
  __int16 v17; // ax
  __int64 v18; // rdx
  __int64 v19; // rcx
  signed __int64 v20; // rax
  __int64 *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  char v24; // r15
  int v25; // r8d
  char *v26; // r13
  __int64 v27; // r12
  int v28; // eax
  PVOID v29; // r15
  __int64 v30; // r12
  PVOID v31; // r15
  __int64 v32; // r9
  PVOID v33; // r15
  __int64 v34; // r9
  PVOID v35; // rbx
  PVOID v36; // rdi
  UNICODE_STRING *v37; // rcx
  bool v39; // zf
  int v40; // r13d
  __int16 v41; // r15
  __int64 ProcessHotPatchContext; // rax
  int v43; // r9d
  __int64 v44; // r13
  PVOID v45; // r15
  int v46; // r9d
  __int64 v47; // r15
  char *v48; // rax
  UNICODE_STRING v49; // xmm1
  __int64 *v50; // rax
  int v51; // [rsp+20h] [rbp-150h]
  int v52; // [rsp+20h] [rbp-150h]
  __int16 v53; // [rsp+28h] [rbp-148h]
  char v54; // [rsp+28h] [rbp-148h]
  int v55; // [rsp+48h] [rbp-128h]
  int v56; // [rsp+78h] [rbp-F8h]
  int v57; // [rsp+C8h] [rbp-A8h]
  __int64 v58; // [rsp+D0h] [rbp-A0h]
  __int64 v59; // [rsp+D8h] [rbp-98h]
  int v60; // [rsp+E0h] [rbp-90h]
  struct _KTHREAD *v61; // [rsp+F0h] [rbp-80h]
  unsigned int v62; // [rsp+F8h] [rbp-78h] BYREF
  PVOID v63; // [rsp+100h] [rbp-70h] BYREF
  PVOID P; // [rsp+108h] [rbp-68h] BYREF
  unsigned int v65; // [rsp+110h] [rbp-60h] BYREF
  __int64 v66; // [rsp+118h] [rbp-58h]
  PVOID v67; // [rsp+120h] [rbp-50h] BYREF
  __int64 v68; // [rsp+128h] [rbp-48h]
  PVOID v69; // [rsp+130h] [rbp-40h] BYREF
  __int64 v70; // [rsp+138h] [rbp-38h] BYREF
  PVOID Object; // [rsp+140h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+148h] [rbp-28h] BYREF
  __int64 v73; // [rsp+150h] [rbp-20h] BYREF
  __int64 v74; // [rsp+158h] [rbp-18h] BYREF
  struct _EX_RUNDOWN_REF *v75; // [rsp+160h] [rbp-10h]
  UNICODE_STRING DestinationString; // [rsp+170h] [rbp+0h] BYREF
  signed __int64 v77; // [rsp+180h] [rbp+10h]
  signed __int64 v78; // [rsp+188h] [rbp+18h]
  _QWORD v79[10]; // [rsp+190h] [rbp+20h] BYREF
  _BYTE v80[8]; // [rsp+1E0h] [rbp+70h] BYREF
  __int64 v81; // [rsp+1E8h] [rbp+78h]
  int v82; // [rsp+204h] [rbp+94h]
  __int64 v83; // [rsp+228h] [rbp+B8h]
  __int64 v84; // [rsp+230h] [rbp+C0h]
  __int64 v85; // [rsp+270h] [rbp+100h]
  int v86; // [rsp+278h] [rbp+108h]
  _BYTE v87[8]; // [rsp+280h] [rbp+110h] BYREF
  int v88[16]; // [rsp+288h] [rbp+118h]
  int v89[38]; // [rsp+2C8h] [rbp+158h]
  unsigned int v91; // [rsp+370h] [rbp+200h]
  char v92; // [rsp+378h] [rbp+208h]
  char v93; // [rsp+378h] [rbp+208h]
  char *v94; // [rsp+378h] [rbp+208h]
  __int16 v95; // [rsp+380h] [rbp+210h]
  __int64 v96; // [rsp+388h] [rbp+218h]
  __int16 v97; // [rsp+388h] [rbp+218h]

  memset_0(v87, 0, 0xA0uLL);
  memset_0(v80, 0, 0xA0uLL);
  memset_0(v79, 0, sizeof(v79));
  v70 = 0LL;
  v63 = 0LL;
  v2 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  P = 0LL;
  Object = 0LL;
  Handle = 0LL;
  v69 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  LOBYTE(v3) = 0;
  MiInitializeImageHotPatchContext(v87, 0LL, 0LL);
  MiInitializeImageHotPatchContext(v80, 0LL, 0LL);
  CurrentThread = KeGetCurrentThread();
  v66 = 0LL;
  v65 = 0;
  v62 = 0;
  v39 = *(_DWORD *)a1 == 2;
  Process = CurrentThread->ApcState.Process;
  v61 = CurrentThread;
  v75 = (struct _EX_RUNDOWN_REF *)Process;
  v95 = WORD2(Process[3].PerProcessorCycleTimes);
  if ( !v39
    || *(_QWORD *)(a1 + 8) != -1LL
    || (v6 = *(_DWORD *)(a1 + 4), (v6 & 0x7FFFFFFC) != 0)
    || (v6 & 3) == 0
    || !*(_QWORD *)(a1 + 24)
    || !*(_QWORD *)(a1 + 16) )
  {
    VadForHotPatchInProgress = -1073741811;
LABEL_48:
    MiLogHotPatchOperationStatus(v66, HIDWORD(v66), (unsigned int)&DestinationString, VadForHotPatchInProgress, 0);
    goto LABEL_49;
  }
  if ( (unsigned int)Feature_Servicing_HotpatchLoaderFixes__private_IsEnabledDeviceUsageNoInline()
    && (unsigned int)PsWow64GetProcessNtdllType(Process) == 2 )
  {
    VadForHotPatchInProgress = -1073741637;
    goto LABEL_48;
  }
  v3 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink) & 1;
  if ( !v3 )
  {
    VadForHotPatchInProgress = -1073741558;
    goto LABEL_45;
  }
  VadForHotPatchInProgress = MiGetVadForHotPatchInProgress(*(_QWORD *)(a1 + 16), 0LL, &v63, &v65);
  if ( VadForHotPatchInProgress >= 0 )
  {
    v8 = v63;
    v96 = ***((_QWORD ***)v63 + 9);
    v9 = *(_QWORD *)(v96 + 56);
    LODWORD(v66) = *(_DWORD *)(v9 + 60);
    HIDWORD(v66) = *(_DWORD *)(v9 + 72);
    v92 = *(_BYTE *)(v96 + 15) & 0xF;
    LockedVadEvent = MiLocateLockedVadEvent((__int64)v63, 512);
    if ( LockedVadEvent )
    {
      v2 = *(_QWORD *)(LockedVadEvent + 8);
    }
    else
    {
      Pool = MiAllocatePool(0x40uLL, 0x58uLL, 1648912717);
      v13 = (_QWORD *)Pool;
      if ( !Pool )
      {
LABEL_16:
        VadForHotPatchInProgress = -1073741670;
        goto LABEL_28;
      }
      *(_DWORD *)(Pool + 80) = 512;
      v14 = MiAllocatePool(0x100uLL, 0x48uLL, 1313165384);
      v13[1] = v14;
      if ( !v14 )
      {
        ExFreePoolWithTag(v13, 0);
        goto LABEL_16;
      }
      MiInsertVadEvent((__int64)v63, v13, 1);
      v2 = v13[1];
      v11 = v96;
      v65 = 2;
      *(_QWORD *)(v2 + 32) = v66;
    }
    *(_DWORD *)(v2 + 68) |= 1u;
    v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 24), -1LL, -1LL);
    v16 = *(_QWORD *)(v11 + 56);
    v77 = v15;
    v17 = *(_WORD *)(v16 + 48);
    v97 = v17;
    if ( v17 != -31132 && v17 != 332 && v17 != -21916 )
    {
      VadForHotPatchInProgress = -1073741701;
      goto LABEL_28;
    }
    MiUnlockVad((__int64)CurrentThread, (__int64)v63);
    VadForHotPatchInProgress = MiGetVadForHotPatchInProgress(*(_QWORD *)(a1 + 24), 1LL, &v67, &v62);
    if ( VadForHotPatchInProgress < 0 )
      goto LABEL_45;
    v8 = v67;
    v18 = ***((_QWORD ***)v67 + 9);
    v19 = *(_QWORD *)(v18 + 56);
    if ( v97 != *(_WORD *)(v19 + 48) )
    {
      VadForHotPatchInProgress = -1073741621;
LABEL_28:
      if ( v8 )
        MiUnlockVad((__int64)CurrentThread, (__int64)v8);
      goto LABEL_45;
    }
    LODWORD(v74) = *(_DWORD *)(v19 + 60);
    HIDWORD(v74) = *(_DWORD *)(v19 + 72);
    v20 = _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 24), -1LL, -1LL);
    v21 = (__int64 *)*((_QWORD *)v8 + 9);
    v78 = v20;
    v68 = *v21;
    MiReferenceMappedControlArea(v68);
    MiUnlockVad((__int64)CurrentThread, (__int64)v67);
    LOBYTE(v22) = 8;
    LOBYTE(v23) = v92;
    v24 = 8;
    if ( (unsigned int)SeCompareSigningLevels(v23, v22) )
      v24 = v92;
    v93 = v24;
    VadForHotPatchInProgress = MiGetAllRegisteredPatches(v75, (unsigned int)v66, HIDWORD(v66), &v69);
    if ( VadForHotPatchInProgress >= 0 )
    {
      v26 = (char *)v69;
      VadForHotPatchInProgress = 0;
      if ( !v69 )
      {
LABEL_43:
        VadForHotPatchInProgress = -1073740588;
        goto LABEL_44;
      }
      v27 = v68;
      do
      {
        LOBYTE(v25) = v24;
        v28 = MiOpenHotPatchFile((int)v26 + 40, 0, v25, (unsigned int)&Handle, (__int64)&Object, (__int64)v79, 0LL, 0LL);
        if ( v28 < 0 )
        {
          if ( VadForHotPatchInProgress >= 0 )
            VadForHotPatchInProgress = v28;
        }
        else
        {
          v29 = Object;
          if ( MiSectionControlArea((__int64)Object) == v27 )
            break;
          MiUnmapImageInSystemSpace(v79);
          v79[0] = 0LL;
          ObfDereferenceObjectWithTag(v29, 0x70486D4Du);
          Object = 0LL;
          ObCloseHandle(Handle, 0);
          Handle = 0LL;
          v24 = v93;
        }
        v26 = *(char **)v26;
      }
      while ( v26 );
      v30 = a1;
      if ( !v26 )
      {
        if ( VadForHotPatchInProgress >= 0 )
          goto LABEL_43;
LABEL_44:
        CurrentThread = v61;
        goto LABEL_45;
      }
      MiDereferenceControlAreaBySection(v68, 1u);
      v68 = 0LL;
      DestinationString = *(UNICODE_STRING *)(v26 + 40);
      RtlInitUnicodeString((PUNICODE_STRING)(v26 + 40), 0LL);
      if ( (*(_DWORD *)(a1 + 4) & 1) != 0 )
        v39 = v62 == 0;
      else
        v39 = v62 == 3;
      if ( !v39 )
      {
        VadForHotPatchInProgress = -1073700861;
        goto LABEL_44;
      }
      v40 = v77;
      v41 = v95;
      VadForHotPatchInProgress = MiCaptureHotPatchInfo(
                                   (unsigned int)v79,
                                   v77,
                                   *(_DWORD *)(v2 + 32),
                                   *(_DWORD *)(v2 + 36),
                                   v95,
                                   (__int64)&P,
                                   (__int64)&v70);
      if ( VadForHotPatchInProgress < 0 )
        goto LABEL_44;
      v91 = *((_DWORD *)P + 2);
      if ( *(_DWORD *)(v2 + 64) >= v91 )
      {
        VadForHotPatchInProgress = -1073740758;
        goto LABEL_44;
      }
      if ( v97 == 332 )
      {
        if ( (((*((unsigned int *)v63 + 7) | ((unsigned __int64)*((unsigned __int8 *)v63 + 33) << 32)) << 12) | 0xFFF) > 0x100000000LL
          || (((*((unsigned int *)v67 + 7) | ((unsigned __int64)*((unsigned __int8 *)v67 + 33) << 32)) << 12) | 0xFFF) > 0x100000000LL )
        {
          VadForHotPatchInProgress = -1073741799;
          goto LABEL_44;
        }
        v41 = v95;
      }
      if ( v40 == -1 || (_DWORD)v78 == -1 )
      {
        VadForHotPatchInProgress = -1073739516;
        goto LABEL_44;
      }
      ProcessHotPatchContext = MiGetProcessHotPatchContext(v75, 1LL);
      v44 = ProcessHotPatchContext;
      if ( !ProcessHotPatchContext )
      {
        VadForHotPatchInProgress = -1073741670;
        goto LABEL_44;
      }
      v53 = v41;
      v45 = v67;
      VadForHotPatchInProgress = MiPrepareToHotPatchVad(
                                   ProcessHotPatchContext,
                                   (_DWORD)v67,
                                   (unsigned int)v80,
                                   v43,
                                   v51,
                                   v53,
                                   (__int64)P,
                                   0LL,
                                   *(_DWORD *)(v30 + 4) & 1);
      if ( VadForHotPatchInProgress < 0 )
        goto LABEL_44;
      VadForHotPatchInProgress = MiPrepareToHotPatchVad(
                                   v44,
                                   (_DWORD)v63,
                                   (unsigned int)v87,
                                   v46,
                                   v52,
                                   v95,
                                   (__int64)P,
                                   v2,
                                   1);
      if ( VadForHotPatchInProgress < 0 )
        goto LABEL_44;
      if ( (*(_DWORD *)(v30 + 4) & 1) != 0 )
      {
        VadForHotPatchInProgress = MiProcessPatchImageCfg(v45, P, v70);
        if ( VadForHotPatchInProgress < 0 )
          goto LABEL_44;
        v47 = v70;
        LODWORD(v73) = 0;
        VadForHotPatchInProgress = RtlApplyHotPatch(
                                     v89[0],
                                     v88[0],
                                     0,
                                     0,
                                     0LL,
                                     v54,
                                     0LL,
                                     0,
                                     0LL,
                                     v55,
                                     v83,
                                     v81,
                                     v84,
                                     v82,
                                     (__int64)&v73,
                                     v56,
                                     v85,
                                     v86,
                                     (__int64)P,
                                     v70,
                                     2,
                                     v95,
                                     0LL,
                                     0LL,
                                     0LL,
                                     v57,
                                     v58,
                                     v59,
                                     v60);
        if ( VadForHotPatchInProgress < 0 )
          goto LABEL_44;
        v62 = 3;
      }
      else
      {
        v47 = v70;
      }
      if ( (*(_DWORD *)(v30 + 4) & 2) != 0 )
      {
        VadForHotPatchInProgress = MiApplyImageHotPatch((__int64)v87, (__int64)v80, v2, (__int64)P, v47);
        if ( VadForHotPatchInProgress < 0 )
          goto LABEL_44;
      }
      --v61->SpecialApcDisable;
      v48 = (char *)KeAbPreAcquire(v44 + 16, 0LL);
      v94 = v48;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v44 + 16), 0LL) )
      {
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v44 + 16), v48, v44 + 16);
        v48 = v94;
      }
      if ( v48 )
        v48[10] = 1;
      MiLogHotPatchOperation(
        v2,
        *(_DWORD *)(v2 + 32),
        *(_DWORD *)(v2 + 36),
        v91,
        (__int64)&v74,
        (__int64)&DestinationString,
        VadForHotPatchInProgress,
        ((*(_DWORD *)(v30 + 4) >> 1) & 1) == 0);
      if ( (*(_DWORD *)(v30 + 4) & 2) != 0 )
      {
        v49 = *(UNICODE_STRING *)(v2 + 40);
        *(_QWORD *)(v2 + 56) = v74;
        *(_DWORD *)(v2 + 64) = v91;
        *(UNICODE_STRING *)(v2 + 40) = DestinationString;
        DestinationString = v49;
        if ( !*(_QWORD *)v2 )
        {
          v50 = *(__int64 **)(v44 + 8);
          if ( *v50 != v44 )
            __fastfail(3u);
          *(_QWORD *)v2 = v44;
          *(_QWORD *)(v2 + 8) = v50;
          *v50 = v2;
          *(_QWORD *)(v44 + 8) = v2;
        }
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v44 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v44 + 16));
      KeAbPostRelease(v44 + 16);
      CurrentThread = v61;
      v39 = v61->SpecialApcDisable++ == -1;
      if ( v39 && ($727077A9B6E167EAE1398C74674DC5A5 *)v61->ApcState.ApcListHead[0].Flink != &v61->152 )
        KiCheckForKernelApcDelivery();
      VadForHotPatchInProgress = 0;
    }
  }
LABEL_45:
  if ( (v3 & 2) != 0 )
    KeLeaveCriticalRegion();
  if ( VadForHotPatchInProgress < 0 )
    goto LABEL_48;
LABEL_49:
  v31 = v63;
  if ( v63 )
  {
    MiLockVad((__int64)CurrentThread, (__int64)v63);
    MiSetVadFlags((__int64)v31, 4LL, v65, v32);
    if ( v2 )
    {
      *(_DWORD *)(v2 + 68) &= ~1u;
      v2 &= -(__int64)((*(_DWORD *)(v2 + 68) & 2) != 0);
    }
    MiUnlockAndDereferenceVad(v63);
  }
  v33 = v67;
  if ( v67 )
  {
    MiLockVad((__int64)CurrentThread, (__int64)v67);
    MiSetVadFlags((__int64)v33, 4LL, v62, v34);
    MiUnlockAndDereferenceVad(v33);
  }
  if ( v2 )
    MiDeleteHotPatchEntry((PVOID)v2);
  MiReleaseHotPatchResources(v87);
  MiReleaseHotPatchResources(v80);
  if ( (v3 & 1) != 0 )
    ExReleaseRundownProtection_0(v75 + 61);
  if ( v79[0] )
    MiUnmapImageInSystemSpace(v79);
  if ( v68 )
    MiDereferenceControlAreaBySection(v68, 1u);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x70486D4Du);
  if ( Handle )
    ObCloseHandle(Handle, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v69 )
  {
    do
    {
      v35 = v69;
      v37 = (UNICODE_STRING *)((char *)v69 + 40);
      v69 = *(PVOID *)v69;
      v36 = v69;
      RtlFreeAnsiString(v37);
      ExFreePoolWithTag(v35, 0);
    }
    while ( v36 );
  }
  RtlFreeAnsiString(&DestinationString);
  return (unsigned int)VadForHotPatchInProgress;
}
