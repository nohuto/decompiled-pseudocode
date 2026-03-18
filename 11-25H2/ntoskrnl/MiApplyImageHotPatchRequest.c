/*
 * XREFs of MiApplyImageHotPatchRequest @ 0x1407E1A7C
 * Callers:
 *     NtManageHotPatch @ 0x140A1D5D0 (NtManageHotPatch.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     MiInsertVadEvent @ 0x1402A33D8 (MiInsertVadEvent.c)
 *     MiSetVadFlags @ 0x1402A3618 (MiSetVadFlags.c)
 *     MiLocateLockedVadEvent @ 0x1402A57D4 (MiLocateLockedVadEvent.c)
 *     MiUnlockVad @ 0x1402A6928 (MiUnlockVad.c)
 *     MiLockVad @ 0x1402A6CB4 (MiLockVad.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     MiUnlockAndDereferenceVad @ 0x1403205C0 (MiUnlockAndDereferenceVad.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     MiSectionControlArea @ 0x1403B4FE0 (MiSectionControlArea.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     MiDereferenceControlAreaBySection @ 0x14044FC78 (MiDereferenceControlAreaBySection.c)
 *     MiReferenceMappedControlArea @ 0x14066759C (MiReferenceMappedControlArea.c)
 *     Feature_Servicing_HotpatchLoaderFixes__private_IsEnabledDeviceUsageNoInline @ 0x14067162C (Feature_Servicing_HotpatchLoaderFixes__private_IsEnabledDeviceUsageNoInline.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     MiApplyImageHotPatch @ 0x1407E1800 (MiApplyImageHotPatch.c)
 *     MiCaptureHotPatchInfo @ 0x1407E2468 (MiCaptureHotPatchInfo.c)
 *     MiDeleteHotPatchEntry @ 0x1407E26B0 (MiDeleteHotPatchEntry.c)
 *     MiGetAllRegisteredPatches @ 0x1407E296C (MiGetAllRegisteredPatches.c)
 *     MiGetProcessHotPatchContext @ 0x1407E2C38 (MiGetProcessHotPatchContext.c)
 *     MiGetVadForHotPatchInProgress @ 0x1407E2CB4 (MiGetVadForHotPatchInProgress.c)
 *     MiLogHotPatchOperation @ 0x1407E399C (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x1407E3E1C (MiLogHotPatchOperationStatus.c)
 *     MiPrepareToHotPatchVad @ 0x1407E5D00 (MiPrepareToHotPatchVad.c)
 *     MiProcessPatchImageCfg @ 0x1407E5E2C (MiProcessPatchImageCfg.c)
 *     PsWow64GetProcessNtdllType @ 0x14083CB84 (PsWow64GetProcessNtdllType.c)
 *     ObCloseHandle @ 0x1408EFEC0 (ObCloseHandle.c)
 *     RtlFreeAnsiString @ 0x1408F1D50 (RtlFreeAnsiString.c)
 *     SeCompareSigningLevels @ 0x14091E260 (SeCompareSigningLevels.c)
 *     MiUnmapImageInSystemSpace @ 0x140944164 (MiUnmapImageInSystemSpace.c)
 *     MiOpenHotPatchFile @ 0x140A992CC (MiOpenHotPatchFile.c)
 *     MiReleaseHotPatchResources @ 0x140AAF5C8 (MiReleaseHotPatchResources.c)
 *     MiInitializeImageHotPatchContext @ 0x140ABC8AC (MiInitializeImageHotPatchContext.c)
 *     RtlApplyHotPatch @ 0x140B53980 (RtlApplyHotPatch.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  char *v32; // r15
  PVOID v33; // rbx
  PVOID v34; // rdi
  UNICODE_STRING *v35; // rcx
  bool v37; // zf
  int v38; // r13d
  __int16 v39; // r15
  __int64 ProcessHotPatchContext; // rax
  int v41; // r9d
  __int64 v42; // r13
  PVOID v43; // r15
  int v44; // r9d
  __int64 v45; // r15
  __int64 *v46; // rax
  UNICODE_STRING v47; // xmm1
  __int64 *v48; // rax
  int v49; // [rsp+20h] [rbp-150h]
  int v50; // [rsp+20h] [rbp-150h]
  __int16 v51; // [rsp+28h] [rbp-148h]
  char v52; // [rsp+28h] [rbp-148h]
  int v53; // [rsp+48h] [rbp-128h]
  int v54; // [rsp+78h] [rbp-F8h]
  int v55; // [rsp+C8h] [rbp-A8h]
  __int64 v56; // [rsp+D0h] [rbp-A0h]
  __int64 v57; // [rsp+D8h] [rbp-98h]
  int v58; // [rsp+E0h] [rbp-90h]
  struct _KTHREAD *v59; // [rsp+F0h] [rbp-80h]
  int v60; // [rsp+F8h] [rbp-78h] BYREF
  PVOID v61; // [rsp+100h] [rbp-70h] BYREF
  PVOID P; // [rsp+108h] [rbp-68h] BYREF
  int v63; // [rsp+110h] [rbp-60h] BYREF
  __int64 v64; // [rsp+118h] [rbp-58h]
  PVOID v65; // [rsp+120h] [rbp-50h] BYREF
  __int64 v66; // [rsp+128h] [rbp-48h]
  PVOID v67; // [rsp+130h] [rbp-40h] BYREF
  __int64 v68; // [rsp+138h] [rbp-38h] BYREF
  PVOID Object; // [rsp+140h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+148h] [rbp-28h] BYREF
  __int64 v71; // [rsp+150h] [rbp-20h] BYREF
  __int64 v72; // [rsp+158h] [rbp-18h] BYREF
  struct _EX_RUNDOWN_REF *v73; // [rsp+160h] [rbp-10h]
  UNICODE_STRING DestinationString; // [rsp+170h] [rbp+0h] BYREF
  signed __int64 v75; // [rsp+180h] [rbp+10h]
  signed __int64 v76; // [rsp+188h] [rbp+18h]
  _QWORD v77[10]; // [rsp+190h] [rbp+20h] BYREF
  _BYTE v78[8]; // [rsp+1E0h] [rbp+70h] BYREF
  __int64 v79; // [rsp+1E8h] [rbp+78h]
  int v80; // [rsp+204h] [rbp+94h]
  __int64 v81; // [rsp+228h] [rbp+B8h]
  __int64 v82; // [rsp+230h] [rbp+C0h]
  __int64 v83; // [rsp+270h] [rbp+100h]
  int v84; // [rsp+278h] [rbp+108h]
  _BYTE v85[8]; // [rsp+280h] [rbp+110h] BYREF
  int v86[16]; // [rsp+288h] [rbp+118h]
  int v87[38]; // [rsp+2C8h] [rbp+158h]
  unsigned int v89; // [rsp+370h] [rbp+200h]
  char v90; // [rsp+378h] [rbp+208h]
  char v91; // [rsp+378h] [rbp+208h]
  __int64 *v92; // [rsp+378h] [rbp+208h]
  __int16 v93; // [rsp+380h] [rbp+210h]
  __int64 v94; // [rsp+388h] [rbp+218h]
  __int16 v95; // [rsp+388h] [rbp+218h]

  memset_0(v85, 0, 0xA0uLL);
  memset_0(v78, 0, 0xA0uLL);
  memset_0(v77, 0, sizeof(v77));
  v68 = 0LL;
  v61 = 0LL;
  v2 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  P = 0LL;
  Object = 0LL;
  Handle = 0LL;
  v67 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  LOBYTE(v3) = 0;
  MiInitializeImageHotPatchContext(v85, 0LL, 0LL);
  MiInitializeImageHotPatchContext(v78, 0LL, 0LL);
  CurrentThread = KeGetCurrentThread();
  v64 = 0LL;
  v63 = 0;
  v60 = 0;
  v37 = *(_DWORD *)a1 == 2;
  Process = CurrentThread->ApcState.Process;
  v59 = CurrentThread;
  v73 = (struct _EX_RUNDOWN_REF *)Process;
  v93 = WORD2(Process[3].PerProcessorCycleTimes);
  if ( !v37
    || *(_QWORD *)(a1 + 8) != -1LL
    || (v6 = *(_DWORD *)(a1 + 4), (v6 & 0x7FFFFFFC) != 0)
    || (v6 & 3) == 0
    || !*(_QWORD *)(a1 + 24)
    || !*(_QWORD *)(a1 + 16) )
  {
    VadForHotPatchInProgress = -1073741811;
LABEL_48:
    MiLogHotPatchOperationStatus(v64, HIDWORD(v64), (unsigned int)&DestinationString, VadForHotPatchInProgress, 0);
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
  VadForHotPatchInProgress = MiGetVadForHotPatchInProgress(*(_QWORD *)(a1 + 16), 0LL, &v61, &v63);
  if ( VadForHotPatchInProgress >= 0 )
  {
    v8 = v61;
    v94 = ***((_QWORD ***)v61 + 9);
    v9 = *(_QWORD *)(v94 + 56);
    LODWORD(v64) = *(_DWORD *)(v9 + 60);
    HIDWORD(v64) = *(_DWORD *)(v9 + 72);
    v90 = *(_BYTE *)(v94 + 15) & 0xF;
    LockedVadEvent = MiLocateLockedVadEvent((__int64)v61, 512);
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
      MiInsertVadEvent((__int64)v61, v13, 1);
      v2 = v13[1];
      v11 = v94;
      v63 = 2;
      *(_QWORD *)(v2 + 32) = v64;
    }
    *(_DWORD *)(v2 + 68) |= 1u;
    v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 24), -1LL, -1LL);
    v16 = *(_QWORD *)(v11 + 56);
    v75 = v15;
    v17 = *(_WORD *)(v16 + 48);
    v95 = v17;
    if ( v17 != -31132 && v17 != 332 && v17 != -21916 )
    {
      VadForHotPatchInProgress = -1073741701;
      goto LABEL_28;
    }
    MiUnlockVad((__int64)CurrentThread, (__int64)v61);
    VadForHotPatchInProgress = MiGetVadForHotPatchInProgress(*(_QWORD *)(a1 + 24), 1LL, &v65, &v60);
    if ( VadForHotPatchInProgress < 0 )
      goto LABEL_45;
    v8 = v65;
    v18 = ***((_QWORD ***)v65 + 9);
    v19 = *(_QWORD *)(v18 + 56);
    if ( v95 != *(_WORD *)(v19 + 48) )
    {
      VadForHotPatchInProgress = -1073741621;
LABEL_28:
      if ( v8 )
        MiUnlockVad((__int64)CurrentThread, (__int64)v8);
      goto LABEL_45;
    }
    LODWORD(v72) = *(_DWORD *)(v19 + 60);
    HIDWORD(v72) = *(_DWORD *)(v19 + 72);
    v20 = _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 24), -1LL, -1LL);
    v21 = (__int64 *)*((_QWORD *)v8 + 9);
    v76 = v20;
    v66 = *v21;
    MiReferenceMappedControlArea(v66);
    MiUnlockVad((__int64)CurrentThread, (__int64)v65);
    LOBYTE(v22) = 8;
    LOBYTE(v23) = v90;
    v24 = 8;
    if ( (unsigned int)SeCompareSigningLevels(v23, v22) )
      v24 = v90;
    v91 = v24;
    VadForHotPatchInProgress = MiGetAllRegisteredPatches(v73, (unsigned int)v64, HIDWORD(v64), &v67);
    if ( VadForHotPatchInProgress >= 0 )
    {
      v26 = (char *)v67;
      VadForHotPatchInProgress = 0;
      if ( !v67 )
      {
LABEL_43:
        VadForHotPatchInProgress = -1073740588;
        goto LABEL_44;
      }
      v27 = v66;
      do
      {
        LOBYTE(v25) = v24;
        v28 = MiOpenHotPatchFile((int)v26 + 40, 0, v25, (unsigned int)&Handle, (__int64)&Object, (__int64)v77, 0LL, 0LL);
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
          MiUnmapImageInSystemSpace(v77);
          v77[0] = 0LL;
          ObfDereferenceObjectWithTag(v29, 0x70486D4Du);
          Object = 0LL;
          ObCloseHandle(Handle, 0);
          Handle = 0LL;
          v24 = v91;
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
        CurrentThread = v59;
        goto LABEL_45;
      }
      MiDereferenceControlAreaBySection(v66, 1u);
      v66 = 0LL;
      DestinationString = *(UNICODE_STRING *)(v26 + 40);
      RtlInitUnicodeString((PUNICODE_STRING)(v26 + 40), 0LL);
      if ( (*(_DWORD *)(a1 + 4) & 1) != 0 )
        v37 = v60 == 0;
      else
        v37 = v60 == 3;
      if ( !v37 )
      {
        VadForHotPatchInProgress = -1073700861;
        goto LABEL_44;
      }
      v38 = v75;
      v39 = v93;
      VadForHotPatchInProgress = MiCaptureHotPatchInfo(
                                   (unsigned int)v77,
                                   v75,
                                   *(_DWORD *)(v2 + 32),
                                   *(_DWORD *)(v2 + 36),
                                   v93,
                                   (__int64)&P,
                                   (__int64)&v68);
      if ( VadForHotPatchInProgress < 0 )
        goto LABEL_44;
      v89 = *((_DWORD *)P + 2);
      if ( *(_DWORD *)(v2 + 64) >= v89 )
      {
        VadForHotPatchInProgress = -1073740758;
        goto LABEL_44;
      }
      if ( v95 == 332 )
      {
        if ( (((*((unsigned int *)v61 + 7) | ((unsigned __int64)*((unsigned __int8 *)v61 + 33) << 32)) << 12) | 0xFFF) > 0x100000000LL
          || (((*((unsigned int *)v65 + 7) | ((unsigned __int64)*((unsigned __int8 *)v65 + 33) << 32)) << 12) | 0xFFF) > 0x100000000LL )
        {
          VadForHotPatchInProgress = -1073741799;
          goto LABEL_44;
        }
        v39 = v93;
      }
      if ( v38 == -1 || (_DWORD)v76 == -1 )
      {
        VadForHotPatchInProgress = -1073739516;
        goto LABEL_44;
      }
      ProcessHotPatchContext = MiGetProcessHotPatchContext(v73, 1LL);
      v42 = ProcessHotPatchContext;
      if ( !ProcessHotPatchContext )
      {
        VadForHotPatchInProgress = -1073741670;
        goto LABEL_44;
      }
      v51 = v39;
      v43 = v65;
      VadForHotPatchInProgress = MiPrepareToHotPatchVad(
                                   ProcessHotPatchContext,
                                   (_DWORD)v65,
                                   (unsigned int)v78,
                                   v41,
                                   v49,
                                   v51,
                                   (__int64)P,
                                   0LL,
                                   *(_DWORD *)(v30 + 4) & 1);
      if ( VadForHotPatchInProgress < 0 )
        goto LABEL_44;
      VadForHotPatchInProgress = MiPrepareToHotPatchVad(
                                   v42,
                                   (_DWORD)v61,
                                   (unsigned int)v85,
                                   v44,
                                   v50,
                                   v93,
                                   (__int64)P,
                                   v2,
                                   1);
      if ( VadForHotPatchInProgress < 0 )
        goto LABEL_44;
      if ( (*(_DWORD *)(v30 + 4) & 1) != 0 )
      {
        VadForHotPatchInProgress = MiProcessPatchImageCfg(v43, P, v68);
        if ( VadForHotPatchInProgress < 0 )
          goto LABEL_44;
        v45 = v68;
        LODWORD(v71) = 0;
        VadForHotPatchInProgress = RtlApplyHotPatch(
                                     v87[0],
                                     v86[0],
                                     0,
                                     0,
                                     0LL,
                                     v52,
                                     0LL,
                                     0,
                                     0LL,
                                     v53,
                                     v81,
                                     v79,
                                     v82,
                                     v80,
                                     (__int64)&v71,
                                     v54,
                                     v83,
                                     v84,
                                     (__int64)P,
                                     v68,
                                     2,
                                     v93,
                                     0LL,
                                     0LL,
                                     0LL,
                                     v55,
                                     v56,
                                     v57,
                                     v58);
        if ( VadForHotPatchInProgress < 0 )
          goto LABEL_44;
        v60 = 3;
      }
      else
      {
        v45 = v68;
      }
      if ( (*(_DWORD *)(v30 + 4) & 2) != 0 )
      {
        VadForHotPatchInProgress = MiApplyImageHotPatch((__int64)v85, (__int64)v78, v2, (__int64)P, v45);
        if ( VadForHotPatchInProgress < 0 )
          goto LABEL_44;
      }
      --v59->SpecialApcDisable;
      v46 = KeAbPreAcquire(v42 + 16, 0LL);
      v92 = v46;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v42 + 16), 0LL) )
      {
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v42 + 16), v46, v42 + 16);
        v46 = v92;
      }
      if ( v46 )
        *((_BYTE *)v46 + 10) = 1;
      MiLogHotPatchOperation(
        v2,
        *(_DWORD *)(v2 + 32),
        *(_DWORD *)(v2 + 36),
        v89,
        (__int64)&v72,
        (__int64)&DestinationString,
        VadForHotPatchInProgress,
        ((*(_DWORD *)(v30 + 4) >> 1) & 1) == 0);
      if ( (*(_DWORD *)(v30 + 4) & 2) != 0 )
      {
        v47 = *(UNICODE_STRING *)(v2 + 40);
        *(_QWORD *)(v2 + 56) = v72;
        *(_DWORD *)(v2 + 64) = v89;
        *(UNICODE_STRING *)(v2 + 40) = DestinationString;
        DestinationString = v47;
        if ( !*(_QWORD *)v2 )
        {
          v48 = *(__int64 **)(v42 + 8);
          if ( *v48 != v42 )
            __fastfail(3u);
          *(_QWORD *)v2 = v42;
          *(_QWORD *)(v2 + 8) = v48;
          *v48 = v2;
          *(_QWORD *)(v42 + 8) = v2;
        }
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v42 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v42 + 16));
      KeAbPostRelease(v42 + 16);
      CurrentThread = v59;
      v37 = v59->SpecialApcDisable++ == -1;
      if ( v37 && ($727077A9B6E167EAE1398C74674DC5A5 *)v59->ApcState.ApcListHead[0].Flink != &v59->152 )
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
  v31 = v61;
  if ( v61 )
  {
    MiLockVad((__int64)CurrentThread, (__int64)v61);
    MiSetVadFlags((__int64)v31, 4LL, v63);
    if ( v2 )
    {
      *(_DWORD *)(v2 + 68) &= ~1u;
      v2 &= -(__int64)((*(_DWORD *)(v2 + 68) & 2) != 0);
    }
    MiUnlockAndDereferenceVad((char *)v61);
  }
  v32 = (char *)v65;
  if ( v65 )
  {
    MiLockVad((__int64)CurrentThread, (__int64)v65);
    MiSetVadFlags((__int64)v32, 4LL, v60);
    MiUnlockAndDereferenceVad(v32);
  }
  if ( v2 )
    MiDeleteHotPatchEntry((PVOID)v2);
  MiReleaseHotPatchResources(v85);
  MiReleaseHotPatchResources(v78);
  if ( (v3 & 1) != 0 )
    ExReleaseRundownProtection_0(v73 + 61);
  if ( v77[0] )
    MiUnmapImageInSystemSpace(v77);
  if ( v66 )
    MiDereferenceControlAreaBySection(v66, 1u);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x70486D4Du);
  if ( Handle )
    ObCloseHandle(Handle, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v67 )
  {
    do
    {
      v33 = v67;
      v35 = (UNICODE_STRING *)((char *)v67 + 40);
      v67 = *(PVOID *)v67;
      v34 = v67;
      RtlFreeAnsiString(v35);
      ExFreePoolWithTag(v33, 0);
    }
    while ( v34 );
  }
  RtlFreeAnsiString(&DestinationString);
  return (unsigned int)VadForHotPatchInProgress;
}
