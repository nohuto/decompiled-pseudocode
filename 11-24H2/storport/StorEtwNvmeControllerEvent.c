/*
 * XREFs of StorEtwNvmeControllerEvent @ 0x1400A9028
 * Callers:
 *     NvmeGetProtocolCommandEffects @ 0x1400881D0 (NvmeGetProtocolCommandEffects.c)
 *     NvmeValidateProtocolCommandIoctl @ 0x140088828 (NvmeValidateProtocolCommandIoctl.c)
 *     NvmeControllerIdentifyChangedNamespaces @ 0x1400BEE0C (NvmeControllerIdentifyChangedNamespaces.c)
 *     WaitForNVMeCommandCompleteWithCustomTimeout @ 0x1400BFF70 (WaitForNVMeCommandCompleteWithCustomTimeout.c)
 *     NvmeAdapterFirmwareActivateAfterResetCallback @ 0x1400D00F0 (NvmeAdapterFirmwareActivateAfterResetCallback.c)
 *     NvmeAdapterFirmwareActivateIoctlCompletion @ 0x1400D0B30 (NvmeAdapterFirmwareActivateIoctlCompletion.c)
 *     NvmeAdapterFirmwareDownloadIoctlCompletion @ 0x1400D1E00 (NvmeAdapterFirmwareDownloadIoctlCompletion.c)
 *     NvmeAdapterFirmwareGetInfoIoctlCompletion @ 0x1400D2AE0 (NvmeAdapterFirmwareGetInfoIoctlCompletion.c)
 *     NvmeAdapterStorageProtocolCommandIoctlCompletion @ 0x1400D9FA0 (NvmeAdapterStorageProtocolCommandIoctlCompletion.c)
 *     NvmeAdapterAssignControllerIoQueue @ 0x1400DE9A0 (NvmeAdapterAssignControllerIoQueue.c)
 *     NvmeAdapterAssignControllerQueueSlot @ 0x1400DEB5C (NvmeAdapterAssignControllerQueueSlot.c)
 *     NvmeAdapterCompleteFabricControllerAsyncEventCommand @ 0x1400DF310 (NvmeAdapterCompleteFabricControllerAsyncEventCommand.c)
 *     NvmeAdapterCompleteFabricControllerKeepAlive @ 0x1400DF620 (NvmeAdapterCompleteFabricControllerKeepAlive.c)
 *     NvmeAdapterCompleteGetControllerLogPageRequestAsyncEvent @ 0x1400DF820 (NvmeAdapterCompleteGetControllerLogPageRequestAsyncEvent.c)
 *     NvmeAdapterConnectFabricNvmeController @ 0x1400DFBF4 (NvmeAdapterConnectFabricNvmeController.c)
 *     NvmeAdapterCreateFabricControllerIoQueues @ 0x1400E090C (NvmeAdapterCreateFabricControllerIoQueues.c)
 *     NvmeAdapterDisableFabricController @ 0x1400E18E4 (NvmeAdapterDisableFabricController.c)
 *     NvmeAdapterDisableFabricControllerAsyncEvent @ 0x1400E1B6C (NvmeAdapterDisableFabricControllerAsyncEvent.c)
 *     NvmeAdapterDrainFabricControllerQueue @ 0x1400E1D28 (NvmeAdapterDrainFabricControllerQueue.c)
 *     NvmeAdapterEnableFabricController @ 0x1400E20B4 (NvmeAdapterEnableFabricController.c)
 *     NvmeAdapterEnableFabricControllerAsyncEvent @ 0x1400E225C (NvmeAdapterEnableFabricControllerAsyncEvent.c)
 *     NvmeAdapterFabricControllerUpdateNamespace @ 0x1400E2530 (NvmeAdapterFabricControllerUpdateNamespace.c)
 *     NvmeAdapterFabricRegisterDeregisterHost @ 0x1400E2A38 (NvmeAdapterFabricRegisterDeregisterHost.c)
 *     NvmeAdapterGetControllerLogPageAsync @ 0x1400E33A0 (NvmeAdapterGetControllerLogPageAsync.c)
 *     NvmeAdapterNvmeControllerKeepAliveWork @ 0x1400E4AA0 (NvmeAdapterNvmeControllerKeepAliveWork.c)
 *     NvmeAdapterNvmeControllerRebuildAssociationWork @ 0x1400E4E20 (NvmeAdapterNvmeControllerRebuildAssociationWork.c)
 *     NvmeAdapterNvmeControllerTransportErrorWork @ 0x1400E5430 (NvmeAdapterNvmeControllerTransportErrorWork.c)
 *     NvmeAdapterPerformFabricControllerDiscovery @ 0x1400E5B08 (NvmeAdapterPerformFabricControllerDiscovery.c)
 *     NvmeAdapterReconnectFabricControllerAssociation @ 0x1400E69F4 (NvmeAdapterReconnectFabricControllerAssociation.c)
 *     NvmeAdapterSendFabricControllerKeepAlive @ 0x1400E7564 (NvmeAdapterSendFabricControllerKeepAlive.c)
 *     NvmeAdapterSetFabricControllerIoQueueCount @ 0x1400E7998 (NvmeAdapterSetFabricControllerIoQueueCount.c)
 *     NvmeAdapterStartFabricControllerNamespaces @ 0x1400E7E14 (NvmeAdapterStartFabricControllerNamespaces.c)
 *     NvmeAdapterStartFabricNvmeControllerOperations @ 0x1400E8424 (NvmeAdapterStartFabricNvmeControllerOperations.c)
 *     NvmeAdapterStopFabricNvmeControllerOperations @ 0x1400E884C (NvmeAdapterStopFabricNvmeControllerOperations.c)
 *     NvmeAdapterTerminateFabricControllerAssociation @ 0x1400E8BC0 (NvmeAdapterTerminateFabricControllerAssociation.c)
 *     NvmeControllerAsyncEventCommandCompletion @ 0x1400EA850 (NvmeControllerAsyncEventCommandCompletion.c)
 *     NvmeControllerGetLogPageCompletionForAER @ 0x1400EE2B0 (NvmeControllerGetLogPageCompletionForAER.c)
 *     NvmeControllerInitPhase2 @ 0x1400EFCD4 (NvmeControllerInitPhase2.c)
 *     NvmeControllerPowerInitialize @ 0x1400F2558 (NvmeControllerPowerInitialize.c)
 *     NvmeControllerProcessHealthInfoLogForAen @ 0x1400F3098 (NvmeControllerProcessHealthInfoLogForAen.c)
 *     NvmeControllerReset @ 0x1400F488C (NvmeControllerReset.c)
 *     NvmeControllerSubmissionQueueCompletionQuiesce @ 0x1400F56D0 (NvmeControllerSubmissionQueueCompletionQuiesce.c)
 *     NvmeControllerSubmissionQueueQuiesce @ 0x1400F5990 (NvmeControllerSubmissionQueueQuiesce.c)
 *     NvmeFabricControllerQueueComputeCtrlAugmentedChallenge @ 0x1400F63E0 (NvmeFabricControllerQueueComputeCtrlAugmentedChallenge.c)
 *     NvmeFabricControllerQueueComputeCtrlResponse @ 0x1400F65D0 (NvmeFabricControllerQueueComputeCtrlResponse.c)
 *     NvmeFabricControllerQueueComputeHostAugmentedChallenge @ 0x1400F69D8 (NvmeFabricControllerQueueComputeHostAugmentedChallenge.c)
 *     NvmeFabricControllerQueueComputeHostResponse @ 0x1400F6BC8 (NvmeFabricControllerQueueComputeHostResponse.c)
 *     NvmeFabricControllerQueueComputeSharedDHValue @ 0x1400F6FD0 (NvmeFabricControllerQueueComputeSharedDHValue.c)
 *     NvmeFabricControllerQueueGenerateHostDHKey @ 0x1400F7308 (NvmeFabricControllerQueueGenerateHostDHKey.c)
 *     NvmeFabricControllerQueueProcessCtrlResponse @ 0x1400F77A8 (NvmeFabricControllerQueueProcessCtrlResponse.c)
 *     NvmeFabricControllerQueueReceiveAuthChallenge @ 0x1400F794C (NvmeFabricControllerQueueReceiveAuthChallenge.c)
 *     NvmeFabricControllerQueueReceiveAuthResult1 @ 0x1400F7DF8 (NvmeFabricControllerQueueReceiveAuthResult1.c)
 *     NvmeFabricControllerQueueSendAuthFailure @ 0x1400F8248 (NvmeFabricControllerQueueSendAuthFailure.c)
 *     NvmeFabricControllerQueueSendAuthNegogiate @ 0x1400F847C (NvmeFabricControllerQueueSendAuthNegogiate.c)
 *     NvmeFabricControllerQueueSendAuthReply @ 0x1400F86D8 (NvmeFabricControllerQueueSendAuthReply.c)
 *     NvmeFabricControllerQueueSendAuthSuccess @ 0x1400F8960 (NvmeFabricControllerQueueSendAuthSuccess.c)
 *     NvmeNamespaceQueryDeviceEndurancePropertyCompletion @ 0x140108160 (NvmeNamespaceQueryDeviceEndurancePropertyCompletion.c)
 *     NvmeNamespaceReinitializeMediaCompletion @ 0x14010AF50 (NvmeNamespaceReinitializeMediaCompletion.c)
 *     NvmeNamespaceReinitializeMediaRecoverWorker @ 0x14010B7C0 (NvmeNamespaceReinitializeMediaRecoverWorker.c)
 *     NvmeNamespaceSanitizeRecoverCompletionRoutine @ 0x14010D700 (NvmeNamespaceSanitizeRecoverCompletionRoutine.c)
 *     NvmeNamespaceStorMQFirmwareGetInfoIoctlCompletion @ 0x140112E20 (NvmeNamespaceStorMQFirmwareGetInfoIoctlCompletion.c)
 *     NvmeQueryProtocolInfoLogPageData @ 0x14012C13C (NvmeQueryProtocolInfoLogPageData.c)
 *     NvmeControllerDetectCommandTimeout @ 0x140136F70 (NvmeControllerDetectCommandTimeout.c)
 *     NvmeControllerRecordCommandTimeout @ 0x140137698 (NvmeControllerRecordCommandTimeout.c)
 *     NvmeControllerResetRecovery @ 0x140137858 (NvmeControllerResetRecovery.c)
 *     NvmeAdapterStorageProtocolCommandIoctl @ 0x14019CCFC (NvmeAdapterStorageProtocolCommandIoctl.c)
 * Callees:
 *     RaidDriverGetName @ 0x14003E03C (RaidDriverGetName.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

int __fastcall StorEtwNvmeControllerEvent(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        void *a5,
        char a6,
        _WORD *a7,
        char a8,
        _WORD *a9,
        char a10,
        _WORD *a11,
        char a12,
        void *a13,
        char a14,
        void *a15,
        char a16,
        void *a17,
        char a18,
        void *a19,
        char a20)
{
  _UNKNOWN **v20; // rax
  _WORD *v21; // r13
  _WORD *v22; // r12
  _WORD *v23; // r15
  void *v25; // rsi
  __int64 v27; // r11
  int v28; // ebx
  __int128 v29; // xmm0
  __int64 v30; // r11
  __int64 v31; // rcx
  __int64 v32; // rax
  int v33; // edx
  const wchar_t *v34; // rdx
  const wchar_t *v35; // rax
  const wchar_t *v36; // r8
  __int64 v37; // rax
  int v38; // eax
  const wchar_t *v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  int v45; // eax
  __int64 v46; // rax
  int v47; // eax
  __int64 v48; // rax
  int v49; // eax
  __int64 v50; // rax
  int v51; // eax
  void *v52; // rdx
  __int64 v53; // rax
  int v54; // eax
  void *v55; // rdx
  __int64 v56; // rax
  int v57; // eax
  void *v58; // rdx
  __int64 v59; // rax
  int v60; // eax
  void *v61; // rax
  bool v62; // zf
  PEVENT_DATA_DESCRIPTOR UserData_8[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int128 EventDescriptor_8; // [rsp+58h] [rbp-B0h] BYREF
  GUID ActivityId; // [rsp+68h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-90h] BYREF
  __int64 v68; // [rsp+88h] [rbp-80h]
  __int64 v69; // [rsp+90h] [rbp-78h]
  const wchar_t *v70; // [rsp+98h] [rbp-70h]
  int v71; // [rsp+A0h] [rbp-68h]
  int v72; // [rsp+A4h] [rbp-64h]
  const wchar_t *v73; // [rsp+A8h] [rbp-60h]
  int v74; // [rsp+B0h] [rbp-58h]
  int v75; // [rsp+B4h] [rbp-54h]
  __int64 v76; // [rsp+B8h] [rbp-50h]
  __int64 v77; // [rsp+C0h] [rbp-48h]
  __int64 v78; // [rsp+C8h] [rbp-40h]
  __int64 v79; // [rsp+D0h] [rbp-38h]
  const wchar_t *v80; // [rsp+D8h] [rbp-30h]
  int v81; // [rsp+E0h] [rbp-28h]
  int v82; // [rsp+E4h] [rbp-24h]
  __int64 v83; // [rsp+E8h] [rbp-20h]
  int v84; // [rsp+F0h] [rbp-18h]
  int v85; // [rsp+F4h] [rbp-14h]
  __int64 v86; // [rsp+F8h] [rbp-10h]
  int v87; // [rsp+100h] [rbp-8h]
  int v88; // [rsp+104h] [rbp-4h]
  __int64 v89; // [rsp+108h] [rbp+0h]
  int v90; // [rsp+110h] [rbp+8h]
  int v91; // [rsp+114h] [rbp+Ch]
  void *v92; // [rsp+118h] [rbp+10h]
  int v93; // [rsp+120h] [rbp+18h]
  int v94; // [rsp+124h] [rbp+1Ch]
  char *v95; // [rsp+128h] [rbp+20h]
  __int64 v96; // [rsp+130h] [rbp+28h]
  _WORD *v97; // [rsp+138h] [rbp+30h]
  int v98; // [rsp+140h] [rbp+38h]
  int v99; // [rsp+144h] [rbp+3Ch]
  char *v100; // [rsp+148h] [rbp+40h]
  __int64 v101; // [rsp+150h] [rbp+48h]
  _WORD *v102; // [rsp+158h] [rbp+50h]
  int v103; // [rsp+160h] [rbp+58h]
  int v104; // [rsp+164h] [rbp+5Ch]
  char *v105; // [rsp+168h] [rbp+60h]
  __int64 v106; // [rsp+170h] [rbp+68h]
  _WORD *v107; // [rsp+178h] [rbp+70h]
  int v108; // [rsp+180h] [rbp+78h]
  int v109; // [rsp+184h] [rbp+7Ch]
  char *v110; // [rsp+188h] [rbp+80h]
  __int64 v111; // [rsp+190h] [rbp+88h]
  void *v112; // [rsp+198h] [rbp+90h]
  int v113; // [rsp+1A0h] [rbp+98h]
  int v114; // [rsp+1A4h] [rbp+9Ch]
  char *v115; // [rsp+1A8h] [rbp+A0h]
  __int64 v116; // [rsp+1B0h] [rbp+A8h]
  void *v117; // [rsp+1B8h] [rbp+B0h]
  int v118; // [rsp+1C0h] [rbp+B8h]
  int v119; // [rsp+1C4h] [rbp+BCh]
  char *v120; // [rsp+1C8h] [rbp+C0h]
  __int64 v121; // [rsp+1D0h] [rbp+C8h]
  void *v122; // [rsp+1D8h] [rbp+D0h]
  int v123; // [rsp+1E0h] [rbp+D8h]
  int v124; // [rsp+1E4h] [rbp+DCh]
  char *v125; // [rsp+1E8h] [rbp+E0h]
  __int64 v126; // [rsp+1F0h] [rbp+E8h]
  void *v127; // [rsp+1F8h] [rbp+F0h]
  int v128; // [rsp+200h] [rbp+F8h]
  int v129; // [rsp+204h] [rbp+FCh]
  char *v130; // [rsp+208h] [rbp+100h]
  __int64 v131; // [rsp+210h] [rbp+108h]
  _UNKNOWN *retaddr; // [rsp+2A0h] [rbp+198h] BYREF

  v20 = &retaddr;
  v21 = a11;
  v22 = a9;
  v23 = a7;
  v25 = a5;
  v27 = *(_QWORD *)(a1 + 128);
  v28 = 2;
  ActivityId = 0LL;
  *(_OWORD *)UserData_8 = 0LL;
  if ( a2 )
  {
    if ( a2 == 2 )
    {
      if ( (unsigned int)(a3 - 1) <= 1 )
      {
        v29 = EventNVMeControllerHealthError;
      }
      else if ( a3 == 3 )
      {
        v29 = EventNVMeControllerHealthWarning;
      }
      else
      {
        v29 = EventNVMeControllerHealthInformational;
      }
    }
    else
    {
      if ( a2 != 1 )
        return (int)v20;
      if ( (unsigned int)(a3 - 1) <= 1 )
      {
        v29 = EventNVMeControllerError;
      }
      else if ( a3 == 3 )
      {
        v29 = EventNVMeControllerWarning;
      }
      else
      {
        v29 = EventNVMeControllerInformational;
      }
    }
  }
  else if ( (unsigned int)(a3 - 1) <= 1 )
  {
    v29 = EventNVMeControllerDiagnosticError;
  }
  else if ( a3 == 3 )
  {
    v29 = EventNVMeControllerDiagnosticWarning;
  }
  else
  {
    v29 = EventNVMeControllerDiagnosticInformational;
  }
  EventDescriptor_8 = v29;
  if ( (*(_BYTE *)(a1 + 136) & 2) != 0 )
    *((_QWORD *)&EventDescriptor_8 + 1) |= 0x8000uLL;
  RaidDriverGetName(*(_QWORD *)(v27 + 16), (__int64)UserData_8);
  UserData.Ptr = v30 + 56;
  v31 = -1LL;
  *(_QWORD *)&UserData.Size = 4LL;
  v68 = v30 + 1032;
  v69 = 16LL;
  if ( UserData_8[1] )
  {
    v32 = -1LL;
    do
      ++v32;
    while ( *((_WORD *)&UserData_8[1]->Ptr + v32) );
    v33 = 2 * v32 + 2;
  }
  else
  {
    v33 = 10;
  }
  v71 = v33;
  v34 = *(const wchar_t **)(a1 + 792);
  v35 = L"NULL";
  if ( UserData_8[1] )
    v35 = (const wchar_t *)UserData_8[1];
  v72 = 0;
  v70 = v35;
  v36 = &word_140150F48;
  if ( v34 )
  {
    v37 = -1LL;
    do
      ++v37;
    while ( *((_BYTE *)v34 + v37) );
    v38 = v37 + 1;
  }
  else
  {
    v38 = 1;
    v34 = &word_140150F48;
  }
  v74 = v38;
  v73 = v34;
  v39 = *(const wchar_t **)(a1 + 752);
  v76 = a1 + 4;
  v78 = a1 + 744;
  v75 = 0;
  v77 = 2LL;
  v79 = 1LL;
  if ( v39 )
    v36 = v39;
  else
    v39 = &word_140150F48;
  v40 = -1LL;
  do
    ++v40;
  while ( *((_BYTE *)v36 + v40) );
  v80 = v39;
  v81 = v40 + 1;
  v83 = a1 + 800;
  v41 = -1LL;
  v82 = 0;
  do
    ++v41;
  while ( *(_BYTE *)(a1 + 800 + v41) );
  v85 = 0;
  v84 = v41 + 1;
  v42 = -1LL;
  v86 = a1 + 841;
  do
    ++v42;
  while ( *(_BYTE *)(a1 + 841 + v42) );
  v88 = 0;
  v87 = v42 + 1;
  v43 = -1LL;
  v89 = a4;
  do
    ++v43;
  while ( *(_WORD *)(a4 + 2 * v43) );
  v91 = 0;
  v90 = 2 * v43 + 2;
  if ( a5 )
  {
    v44 = -1LL;
    do
      ++v44;
    while ( *((_WORD *)a5 + v44) );
    v45 = 2 * v44 + 2;
  }
  else
  {
    v45 = 2;
  }
  v93 = v45;
  v94 = 0;
  if ( !a5 )
    v25 = &unk_140151214;
  v96 = 8LL;
  v92 = v25;
  v95 = &a6;
  if ( v23 )
  {
    v46 = -1LL;
    do
      ++v46;
    while ( v23[v46] );
    v47 = 2 * v46 + 2;
  }
  else
  {
    v47 = 2;
  }
  v98 = v47;
  v99 = 0;
  if ( !v23 )
    v23 = &unk_140151214;
  v100 = &a8;
  v97 = v23;
  v101 = 8LL;
  if ( v22 )
  {
    v48 = -1LL;
    do
      ++v48;
    while ( v22[v48] );
    v49 = 2 * v48 + 2;
  }
  else
  {
    v49 = 2;
  }
  v103 = v49;
  v104 = 0;
  if ( !v22 )
    v22 = &unk_140151214;
  v105 = &a10;
  v102 = v22;
  v106 = 8LL;
  if ( v21 )
  {
    v50 = -1LL;
    do
      ++v50;
    while ( v21[v50] );
    v51 = 2 * v50 + 2;
  }
  else
  {
    v51 = 2;
  }
  v52 = a13;
  v108 = v51;
  if ( !v21 )
    v21 = &unk_140151214;
  v109 = 0;
  v107 = v21;
  v110 = &a12;
  v111 = 8LL;
  if ( a13 )
  {
    v53 = -1LL;
    do
      ++v53;
    while ( *((_WORD *)a13 + v53) );
    v54 = 2 * v53 + 2;
  }
  else
  {
    v54 = 2;
  }
  v113 = v54;
  v114 = 0;
  if ( !a13 )
    v52 = &unk_140151214;
  v115 = &a14;
  v112 = v52;
  v55 = a15;
  v116 = 8LL;
  if ( a15 )
  {
    v56 = -1LL;
    do
      ++v56;
    while ( *((_WORD *)a15 + v56) );
    v57 = 2 * v56 + 2;
  }
  else
  {
    v57 = 2;
  }
  v118 = v57;
  v119 = 0;
  if ( !a15 )
    v55 = &unk_140151214;
  v120 = &a16;
  v117 = v55;
  v58 = a17;
  v121 = 8LL;
  if ( a17 )
  {
    v59 = -1LL;
    do
      ++v59;
    while ( *((_WORD *)a17 + v59) );
    v60 = 2 * v59 + 2;
  }
  else
  {
    v60 = 2;
  }
  v123 = v60;
  v124 = 0;
  if ( !a17 )
    v58 = &unk_140151214;
  v125 = &a18;
  v61 = a19;
  v122 = v58;
  v126 = 8LL;
  v62 = a19 == 0LL;
  if ( a19 )
  {
    do
      ++v31;
    while ( *((_WORD *)a19 + v31) );
    v28 = 2 * v31 + 2;
    v62 = a19 == 0LL;
  }
  if ( v62 )
    v61 = &unk_140151214;
  v129 = 0;
  v127 = v61;
  v128 = v28;
  v130 = &a20;
  v131 = 8LL;
  LODWORD(v20) = EtwWriteEx(
                   StorPortEventProvider_Context,
                   (PCEVENT_DESCRIPTOR)&EventDescriptor_8,
                   0LL,
                   1u,
                   &ActivityId,
                   0LL,
                   0x1Au,
                   &UserData);
  return (int)v20;
}
