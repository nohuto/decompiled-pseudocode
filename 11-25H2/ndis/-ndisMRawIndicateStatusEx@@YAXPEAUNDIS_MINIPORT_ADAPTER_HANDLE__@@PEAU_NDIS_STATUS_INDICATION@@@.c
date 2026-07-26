/*
 * XREFs of ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x140072EB0
 * Callers:
 *     ?ndisMpHookDefaultIndicateStatus@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x140072E70 (-ndisMpHookDefaultIndicateStatus@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAUNDIS_MINIP.c)
 *     ?ndisMpHookRawIndicateStatus@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x140072E90 (-ndisMpHookRawIndicateStatus@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION.c)
 *     ?ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z @ 0x14015CF30 (-ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z.c)
 * Callees:
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000E960 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000F080 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1400105A0 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     ?FILTER_SET_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x140022000 (-FILTER_SET_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?FILTER_CLEAR_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x1400241B0 (-FILTER_CLEAR_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140025750 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_d @ 0x140026510 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140036F70 (WPP_RECORDER_SF_.c)
 *     ?ndisMValidatePMWakeReason@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x140054610 (-ndisMValidatePMWakeReason@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisSwapFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@1@Z @ 0x1400547B0 (-ndisSwapFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@.c)
 *     ?ndisGetHigherFilterWithPnpRef@@YAPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@W4_NDIS_FPNP_REFTAG@@@Z @ 0x140056F30 (-ndisGetHigherFilterWithPnpRef@@YAPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@W4_NDI.c)
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK_DPC@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140058B60 (-NDIS_ACQUIRE_FILTER_SPIN_LOCK_DPC@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140059BB0 (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x140059F50 (-ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x14005A010 (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisFIndicateStatusToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x140069810 (-ndisFIndicateStatusToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisMIndicateOffloadChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KPEAXK@Z @ 0x14007BF70 (-ndisMIndicateOffloadChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KPEAXK@Z.c)
 *     ?ndisMIndicateHwTimestampCapabilitiesChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKEPEAE@Z @ 0x14007E5A0 (-ndisMIndicateHwTimestampCapabilitiesChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKEPEAE@Z.c)
 *     ?ndisMUpdateHiddenFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_N@Z @ 0x14007F010 (-ndisMUpdateHiddenFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_N@Z.c)
 *     WPP_RECORDER_SF_dq @ 0x14007F640 (WPP_RECORDER_SF_dq_ea_14007F640.c)
 *     ?ndisFIndicateOffloadChange@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAXK@Z @ 0x1400826A0 (-ndisFIndicateOffloadChange@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAXK@Z.c)
 *     ?ndisGetCombinedPMConfig@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_PARAMETERS@@@Z @ 0x140088540 (-ndisGetCombinedPMConfig@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_PARAMETERS@@@Z.c)
 *     ?ndisCheckMiniportWakeUpCapable@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14008B560 (-ndisCheckMiniportWakeUpCapable@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRestoreFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@1@Z @ 0x140093210 (-ndisRestoreFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOC.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x140093540 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     Feature_NDPQualityWinter25__private_IsEnabledDeviceUsageNoInline @ 0x14009F4E0 (Feature_NDPQualityWinter25__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ndisMIndicateNicSwitchCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z @ 0x1400A5ABC (-ndisMIndicateNicSwitchCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z.c)
 *     ?ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z @ 0x1400A5B84 (-ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z.c)
 *     ?ndisMIndicateReceiveFilterCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z @ 0x1400A5F28 (-ndisMIndicateReceiveFilterCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z.c)
 *     ?ndisMIndicatePDConfigChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEBXKE@Z @ 0x1400AC1F8 (-ndisMIndicatePDConfigChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEBXKE@Z.c)
 *     ?ndisUpdateRcvFilterQueueParameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_QUEUE_PARAMETERS@@@Z @ 0x1400B3818 (-ndisUpdateRcvFilterQueueParameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_QUEUE_PARAME.c)
 *     ?ndisFilterIndicatePMCapabilities@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1400BA7A0 (-ndisFilterIndicatePMCapabilities@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisFilterIndicatePMOffloadReject@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1400BA834 (-ndisFilterIndicatePMOffloadReject@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisFilterIndicateWoLPatternReject@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1400BA888 (-ndisFilterIndicateWoLPatternReject@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisFIndicateTimestampChange@@YAEPEAU_NDIS_FILTER_BLOCK@@HPEAXK@Z @ 0x1400CBDA0 (-ndisFIndicateTimestampChange@@YAEPEAU_NDIS_FILTER_BLOCK@@HPEAXK@Z.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 *     ?ndisIfUpdateInterfaceHiddenFlag@@YAXPEAU_NDIS_IF_BLOCK@@_N@Z @ 0x140172C30 (-ndisIfUpdateInterfaceHiddenFlag@@YAXPEAU_NDIS_IF_BLOCK@@_N@Z.c)
 */

void __fastcall ndisMRawIndicateStatusEx(
        struct NDIS_MINIPORT_ADAPTER_HANDLE__ *a1,
        struct _NDIS_STATUS_INDICATION *a2,
        int a3)
{
  __int64 *StatusBuffer; // r12
  unsigned __int8 updated; // r14
  unsigned int StatusBufferSize; // esi
  struct _NDIS_STATUS_INDICATION *v6; // r15
  int StatusCode; // r13d
  int v9; // r9d
  int v10; // r9d
  KIRQL v11; // r8
  __int64 v12; // rdx
  unsigned __int8 v13; // al
  KIRQL v14; // dl
  unsigned __int8 v15; // al
  KIRQL v16; // dl
  unsigned __int8 v17; // al
  KIRQL v18; // dl
  __int64 v19; // rdx
  unsigned int v20; // eax
  KIRQL v21; // dl
  KIRQL v22; // dl
  bool v23; // bl
  unsigned __int8 v24; // al
  KIRQL v25; // dl
  KIRQL v26; // dl
  __int64 v27; // rcx
  bool v28; // al
  _DWORD *v29; // rbx
  KIRQL v30; // dl
  int v31; // ecx
  unsigned int v32; // ecx
  unsigned __int16 *v33; // rbx
  KIRQL v34; // r14
  char v35; // si
  struct NDIS_MINIPORT_ADAPTER_HANDLE__ *v36; // rcx
  struct NDIS_MINIPORT_ADAPTER_HANDLE__ *v37; // rbx
  struct NDIS_MINIPORT_ADAPTER_HANDLE__ *v38; // rax
  _QWORD *v39; // rbx
  _QWORD *v40; // rcx
  void **v41; // rcx
  __int64 *v42; // r9
  int i; // edx
  __int64 **v44; // r8
  char v45; // si
  struct NDIS_MINIPORT_ADAPTER_HANDLE__ *v46; // rcx
  struct NDIS_MINIPORT_ADAPTER_HANDLE__ *v47; // rbx
  struct NDIS_MINIPORT_ADAPTER_HANDLE__ *v48; // rax
  _QWORD *v49; // rbx
  _QWORD *v50; // rcx
  void **v51; // rcx
  __int64 *v52; // r9
  int j; // edx
  __int64 **v54; // r8
  int v55; // r9d
  struct NDIS_MINIPORT_ADAPTER_HANDLE__ *SourceHandle; // rcx
  KIRQL v57; // dl
  int v58; // r13d
  _OWORD *v59; // rax
  KIRQL v60; // dl
  struct _NDIS_FILTER_BLOCK *HigherFilterWithPnpRef; // rbx
  bool v62; // zf
  KIRQL v63; // dl
  unsigned int v64; // eax
  _NET_IF_MEDIA_CONNECT_STATE MediaConnectState; // ecx
  _NET_IF_MEDIA_CONNECT_STATE v66; // eax
  char v67; // si
  int v68; // ecx
  unsigned __int8 v69; // al
  KIRQL v70; // dl
  int v71; // eax
  int v72; // eax
  bool v73; // dl
  int v74; // eax
  int v75; // ecx
  char v76; // al
  unsigned __int8 Timeout; // [rsp+20h] [rbp-99h]
  unsigned __int8 *v78; // [rsp+28h] [rbp-91h]
  unsigned __int8 v79; // [rsp+40h] [rbp-79h]
  unsigned __int8 v80[3]; // [rsp+41h] [rbp-78h] BYREF
  unsigned int v81; // [rsp+44h] [rbp-75h]
  BOOL v82; // [rsp+48h] [rbp-71h]
  int v83; // [rsp+4Ch] [rbp-6Dh]
  __int128 v84; // [rsp+51h] [rbp-68h]
  __int64 *v85; // [rsp+68h] [rbp-51h]
  struct _KTIMER Timer; // [rsp+70h] [rbp-49h] BYREF
  __int64 v87; // [rsp+B0h] [rbp-9h] BYREF
  int v88; // [rsp+B8h] [rbp-1h]
  int v89; // [rsp+BCh] [rbp+3h]
  __int64 v90; // [rsp+C0h] [rbp+7h]
  __int64 v91; // [rsp+C8h] [rbp+Fh]
  int v92; // [rsp+D0h] [rbp+17h]
  int v93; // [rsp+D4h] [rbp+1Bh]

  StatusBuffer = (__int64 *)a2->StatusBuffer;
  updated = 1;
  StatusBufferSize = a2->StatusBufferSize;
  v6 = a2;
  StatusCode = a2->StatusCode;
  v85 = StatusBuffer;
  v79 = 1;
  v81 = StatusBufferSize;
  LOBYTE(v82) = 0;
  LOBYTE(v83) = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x18u,
      0xB8u,
      (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
      (char)a1);
  v87 = 2621824LL;
  v62 = v6->Header.Type == 0x98;
  v89 = 0;
  v88 = *((_DWORD *)a1 + 87);
  v90 = *((_QWORD *)a1 + 345);
  v91 = *((_QWORD *)a1 + 346);
  v92 = *((_DWORD *)a1 + 203);
  v93 = *((_DWORD *)a1 + 204);
  if ( !v62 || v6->Header.Size < 0x70u )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return;
    v9 = 185;
    goto LABEL_286;
  }
  if ( ((StatusCode - 1073872978) & 0xFFFFFFFD) != 0 )
  {
    LODWORD(a2) = 1;
    if ( StatusCode == 1073807384 )
    {
      if ( StatusBufferSize < 4 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return;
        v9 = 187;
LABEL_286:
        LOBYTE(a2) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)a2,
          24,
          v9,
          (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
          (char)a1);
        return;
      }
LABEL_214:
      v28 = StatusCode == 1073807372;
      if ( StatusCode == 1073807371 )
      {
        HIDWORD(v87) = 1;
        goto LABEL_81;
      }
LABEL_80:
      if ( v28 )
      {
LABEL_81:
        updated = v79;
        StatusBufferSize = 40;
        v6->StatusBuffer = &v87;
        v81 = 40;
        StatusBuffer = &v87;
        v6->StatusCode = 1073807383;
        StatusCode = 1073807383;
        v6->StatusBufferSize = 40;
        goto LABEL_107;
      }
      goto LABEL_106;
    }
    if ( (unsigned int)(StatusCode - 1073872902) <= 1 )
    {
      v79 = ndisMIndicateOffloadChange((struct _NDIS_MINIPORT_BLOCK *)a1, StatusCode, StatusBuffer, StatusBufferSize);
      updated = v79;
      if ( !v79 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return;
        v10 = 188;
LABEL_14:
        LOBYTE(a2) = 4;
        goto LABEL_15;
      }
    }
    if ( StatusCode == 1073872908 )
    {
      updated = 0;
      v79 = 0;
      v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 12);
      v12 = *((_QWORD *)a1 + 533);
      *((_QWORD *)a1 + 65) = KeGetCurrentThread();
      if ( v12
        && StatusBufferSize >= 0x1C
        && *(_BYTE *)StatusBuffer == 0x80
        && *((_WORD *)StatusBuffer + 1) >= 0x1Cu
        && *((_BYTE *)StatusBuffer + 1) )
      {
        updated = 1;
        v79 = 1;
        *(_OWORD *)v12 = *(_OWORD *)StatusBuffer;
        *(_QWORD *)(v12 + 16) = StatusBuffer[2];
        *(_DWORD *)(v12 + 24) = *((_DWORD *)StatusBuffer + 6);
      }
      *((_QWORD *)a1 + 65) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v11);
      if ( updated )
        goto LABEL_214;
      if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return;
      v10 = 189;
      goto LABEL_14;
    }
    if ( ((StatusCode - 1073872912) & 0xFFFFFFEF) == 0 )
    {
      v80[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 12);
      *((_QWORD *)a1 + 65) = KeGetCurrentThread();
      v13 = ndisMIndicateReceiveFilterCapsChange(
              (struct _NDIS_MINIPORT_BLOCK *)a1,
              StatusCode,
              StatusBuffer,
              StatusBufferSize,
              0);
      v14 = v80[0];
      updated = v13;
      v79 = v13;
      *((_QWORD *)a1 + 65) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v14);
      if ( !updated )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return;
        v10 = 190;
        goto LABEL_14;
      }
    }
    if ( (unsigned int)(StatusCode - 1074073600) <= 1 )
    {
      v80[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 12);
      *((_QWORD *)a1 + 65) = KeGetCurrentThread();
      v15 = ndisMIndicateHwTimestampCapabilitiesChange(
              (struct _NDIS_MINIPORT_BLOCK *)a1,
              StatusCode,
              StatusBuffer,
              StatusBufferSize,
              0,
              0LL);
      v16 = v80[0];
      updated = v15;
      v79 = v15;
      *((_QWORD *)a1 + 65) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v16);
      if ( !updated )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return;
        v10 = 191;
        goto LABEL_14;
      }
    }
    if ( ((StatusCode - 1073872960) & 0xFFFFFFEF) == 0 )
    {
      v80[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 12);
      *((_QWORD *)a1 + 65) = KeGetCurrentThread();
      v17 = ndisMIndicateNicSwitchCapsChange(
              (struct _NDIS_MINIPORT_BLOCK *)a1,
              StatusCode,
              StatusBuffer,
              StatusBufferSize,
              0);
      v18 = v80[0];
      updated = v17;
      v79 = v17;
      *((_QWORD *)a1 + 65) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v18);
      if ( !updated )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return;
        v10 = 192;
        goto LABEL_14;
      }
    }
    switch ( StatusCode )
    {
      case 1073873408:
        v79 = ndisMIndicatePDConfigChange(
                (struct _NDIS_MINIPORT_BLOCK *)a1,
                (int)a2,
                StatusBuffer,
                StatusBufferSize,
                Timeout);
        updated = v79;
        if ( v79 )
          goto LABEL_214;
        if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return;
        v10 = 193;
        goto LABEL_14;
      case 1076105216:
        v80[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 12);
        v19 = *((_QWORD *)a1 + 69);
        *((_QWORD *)a1 + 65) = KeGetCurrentThread();
        if ( ((_DWORD)a1[674] & 0x40000000) != 0 && v19 )
        {
          if ( (*(_BYTE *)(v19 + 4) & 0x10) == 0 && *(_BYTE *)(v19 + 8) )
            goto LABEL_47;
        }
        else if ( v19 )
        {
LABEL_47:
          v20 = *(unsigned __int16 *)(v19 + 12);
          if ( StatusBufferSize < v20 )
            v20 = StatusBufferSize;
          memmove((void *)(v19 + *(unsigned int *)(v19 + 16)), StatusBuffer, v20);
          v21 = v80[0];
          *((_QWORD *)a1 + 65) = 0LL;
          KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v21);
          updated = 0;
LABEL_107:
          v80[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 12);
          *((_QWORD *)a1 + 65) = KeGetCurrentThread();
          if ( StatusCode == 1073807383 )
          {
            *((_BYTE *)a1 + 88) |= 0x18u;
            if ( *((_DWORD *)StatusBuffer + 1) == 1 && *((_DWORD *)a1 + 86) != 1 )
              *((_QWORD *)a1 + 199) = MEMORY[0xFFFFF78000000320];
            a1[86] = *(_DWORD *)(struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)((int)StatusBuffer + 4);
            a1[87] = (struct NDIS_MINIPORT_ADAPTER_HANDLE__)StatusBuffer[1];
            *((_QWORD *)a1 + 345) = StatusBuffer[2];
            *((_QWORD *)a1 + 346) = StatusBuffer[3];
            a1[203] = (struct NDIS_MINIPORT_ADAPTER_HANDLE__)StatusBuffer[4];
            a1[204] = *(_DWORD *)(struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)((int)StatusBuffer + 36);
          }
          else if ( StatusCode == 1073938437 )
          {
            *((_QWORD *)a1 + 199) = MEMORY[0xFFFFF78000000320];
          }
          v60 = v80[0];
          *((_QWORD *)a1 + 65) = 0LL;
          KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v60);
          HigherFilterWithPnpRef = ndisGetHigherFilterWithPnpRef((struct _NDIS_MINIPORT_BLOCK *)a1, 0LL, 9u);
          if ( HigherFilterWithPnpRef )
          {
            while ( 1 )
            {
              v80[0] = KeAcquireSpinLockRaiseToDpc(&HigherFilterWithPnpRef->Lock);
              HigherFilterWithPnpRef->LockThread = KeGetCurrentThread();
              v62 = (unsigned int)Feature_NDPQualityWinter25__private_IsEnabledDeviceUsageNoInline()
                  ? (HigherFilterWithPnpRef->Flags & 0x2000) == 0
                  : (HigherFilterWithPnpRef->Flags & 0x2000) == 0;
              if ( v62 )
                break;
              v63 = v80[0];
              HigherFilterWithPnpRef->LockThread = 0LL;
              KeReleaseSpinLock(&HigherFilterWithPnpRef->Lock, v63);
              if ( KeGetCurrentIrql() == 2 )
              {
                KeStallExecutionProcessor(1u);
              }
              else
              {
                memset(&Timer, 0, sizeof(Timer));
                KeInitializeTimerEx(&Timer, SynchronizationTimer);
                KeSetTimer(&Timer, (LARGE_INTEGER)-500LL, 0LL);
                KeWaitForSingleObject(&Timer, Executive, 0, 0, 0LL);
              }
            }
            FILTER_SET_FLAG(HigherFilterWithPnpRef, 0x2000);
            HigherFilterWithPnpRef->LockThread = 0LL;
            KeReleaseSpinLockFromDpcLevel(&HigherFilterWithPnpRef->Lock);
            if ( StatusCode == 1073807383 )
            {
              if ( v6->SourceHandle == &ndisIntReqGeneric )
                *(_DWORD *)((struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)StatusBuffer + 1) = a1[86];
              v64 = v81;
              if ( v81 == -2 )
              {
                v64 = 40;
                v6->StatusBufferSize = 40;
              }
              if ( StatusBuffer && v64 >= 0x28 )
              {
                MediaConnectState = HigherFilterWithPnpRef->MediaConnectState;
                v66 = *((_DWORD *)StatusBuffer + 1);
                if ( MediaConnectState != v66 )
                {
                  if ( MediaConnectState == MediaConnectStateConnected )
                  {
                    v67 = 1;
LABEL_240:
                    HigherFilterWithPnpRef->MediaConnectState = v66;
                    HigherFilterWithPnpRef->MediaDuplexState = *((_DWORD *)StatusBuffer + 2);
                    HigherFilterWithPnpRef->RcvLinkSpeed = StatusBuffer[3];
                    HigherFilterWithPnpRef->XmitLinkSpeed = StatusBuffer[2];
                    HigherFilterWithPnpRef->PauseFunctions = *((_DWORD *)StatusBuffer + 8);
                    HigherFilterWithPnpRef->AutoNegotiationFlags = *((_DWORD *)StatusBuffer + 9);
LABEL_253:
                    if ( updated )
                    {
                      ndisFIndicateStatusToFilter(HigherFilterWithPnpRef, v6);
                      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC((struct _NDIS_MINIPORT_BLOCK *)a1);
                      if ( v67 )
                        ndisSwapFilterHandlersForMediaDisconnect(
                          (struct _NDIS_MINIPORT_BLOCK *)a1,
                          0LL,
                          HigherFilterWithPnpRef);
                      if ( (_BYTE)v83 )
                        ndisRestoreFilterHandlersForMediaDisconnect(
                          (struct _NDIS_MINIPORT_BLOCK *)a1,
                          0LL,
                          HigherFilterWithPnpRef);
                      *((_QWORD *)a1 + 65) = 0LL;
                      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)a1 + 12);
                    }
                    NDIS_ACQUIRE_FILTER_SPIN_LOCK_DPC(HigherFilterWithPnpRef);
                    FILTER_CLEAR_FLAG(HigherFilterWithPnpRef, 0x2000);
                    v70 = v80[0];
                    HigherFilterWithPnpRef->LockThread = 0LL;
                    KeReleaseSpinLock(&HigherFilterWithPnpRef->Lock, v70);
                    ndisDereferenceRef(&HigherFilterWithPnpRef->PnPRef.SpinLock, 9u);
LABEL_280:
                    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                      WPP_RECORDER_SF_qD(
                        *((_QWORD *)WPP_GLOBAL_Control + 8),
                        4u,
                        0x18u,
                        0xCAu,
                        (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
                        (char)a1,
                        v6->StatusCode);
                    return;
                  }
                  v68 = (unsigned __int8)v83;
                  if ( v66 == MediaConnectStateConnected )
                    v68 = 1;
                  v83 = v68;
                }
                v67 = v82;
                goto LABEL_240;
              }
            }
            else
            {
              if ( StatusCode != 1073938515 )
              {
                switch ( StatusCode )
                {
                  case 1073938513:
                    v69 = ndisFilterIndicateWoLPatternReject(HigherFilterWithPnpRef, v6);
                    break;
                  case 1073938514:
                    v69 = ndisFilterIndicatePMOffloadReject(HigherFilterWithPnpRef, v6);
                    break;
                  case 1073872902:
                    v69 = ndisFIndicateOffloadChange(HigherFilterWithPnpRef, StatusBuffer, v81);
                    break;
                  default:
                    if ( (unsigned int)(StatusCode - 1074073600) > 1 )
                      goto LABEL_252;
                    v69 = ndisFIndicateTimestampChange(HigherFilterWithPnpRef, StatusCode, StatusBuffer, v81);
                    break;
                }
                updated = v69;
                goto LABEL_252;
              }
              ndisFilterIndicatePMCapabilities(HigherFilterWithPnpRef, v6);
            }
LABEL_252:
            v67 = v82;
            goto LABEL_253;
          }
          ndisMAcquireStInLockWithSpinLock((struct _NDIS_MINIPORT_BLOCK *)a1, v80);
          if ( StatusCode == 1073807383 )
          {
            if ( v6->SourceHandle == &ndisIntReqGeneric )
              *(_DWORD *)((struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)StatusBuffer + 1) = a1[86];
            if ( StatusBuffer && StatusBufferSize >= 0x28 )
            {
              if ( *((_DWORD *)StatusBuffer + 1) == 1
                || (v71 = *((_DWORD *)a1 + 30),
                    *((_DWORD *)a1 + 30) = v71 & 0xDFFFFFFF,
                    v62 = *((_DWORD *)StatusBuffer + 1) == 1,
                    v82 = (v71 & 0x20000000) != 0,
                    v62) )
              {
                v72 = *((_DWORD *)a1 + 30);
                *((_DWORD *)a1 + 30) = v72 | 0x20000000;
                v73 = (v72 & 0x20000000) == 0;
                v83 = v73;
              }
              else
              {
                v73 = v83;
              }
              v74 = *((_DWORD *)a1 + 120);
              v75 = *((_DWORD *)StatusBuffer + 1);
              if ( v74 != v75 )
              {
                if ( v74 == 1 )
                {
                  v6->Flags |= 2u;
                  ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)a1, v6, 2u);
                  goto LABEL_276;
                }
                v76 = v73;
                if ( v75 == 1 )
                  v76 = 1;
                LOBYTE(v83) = v76;
              }
            }
          }
          v6->Flags |= 2u;
          ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)a1, v6, 2u);
          if ( !v82 )
          {
LABEL_277:
            if ( (_BYTE)v83 )
              ndisRestoreFilterHandlersForMediaDisconnect((struct _NDIS_MINIPORT_BLOCK *)a1, 0LL, 0LL);
            ndisMReleaseStInLockAndSpinLock((struct _NDIS_MINIPORT_BLOCK *)a1, v80[0]);
            goto LABEL_280;
          }
LABEL_276:
          ndisSwapFilterHandlersForMediaDisconnect((struct _NDIS_MINIPORT_BLOCK *)a1, 0LL, 0LL);
          goto LABEL_277;
        }
        v22 = v80[0];
        *((_QWORD *)a1 + 65) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v22);
        if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return;
        v10 = 194;
        LOBYTE(a2) = 3;
LABEL_15:
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)a2,
          24,
          v10,
          (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids);
        return;
      case 1073872995:
        v23 = *(_BYTE *)StatusBuffer != 0;
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v78) = v23;
          WPP_RECORDER_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0x18u,
            0xC3u,
            (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
            v78);
        }
        ndisMUpdateHiddenFlag((struct _NDIS_MINIPORT_BLOCK *)a1, v23);
        ndisIfUpdateInterfaceHiddenFlag(*((struct _NDIS_IF_BLOCK **)a1 + 505), v23);
        return;
    }
    if ( (unsigned int)(StatusCode - 1073873056) <= 1 )
    {
      v80[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 12);
      *((_QWORD *)a1 + 65) = KeGetCurrentThread();
      v24 = ndisMIndicateQosParametersChange(
              (struct _NDIS_MINIPORT_BLOCK *)a1,
              StatusCode,
              (struct _NDIS_QOS_PARAMETERS *)StatusBuffer,
              StatusBufferSize);
      v25 = v80[0];
      updated = v24;
      v79 = v24;
      *((_QWORD *)a1 + 65) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v25);
      if ( !updated )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return;
        v10 = 196;
        LOBYTE(a2) = 3;
        goto LABEL_15;
      }
    }
    if ( StatusCode == 1073872944 )
    {
      updated = 0;
      v79 = 0;
      if ( StatusBufferSize >= 0x444
        && *(_BYTE *)StatusBuffer == 0x80
        && *((_WORD *)StatusBuffer + 1) >= 0x444u
        && *((_BYTE *)StatusBuffer + 1) >= 2u
        && (*((_DWORD *)StatusBuffer + 1) & 0xFFFF0000) == 0x100000 )
      {
        updated = ndisUpdateRcvFilterQueueParameters(
                    (struct _NDIS_MINIPORT_BLOCK *)a1,
                    (struct _NDIS_RECEIVE_QUEUE_PARAMETERS *)StatusBuffer);
        v79 = updated;
      }
      if ( updated )
        goto LABEL_214;
      if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return;
      v10 = 197;
      LOBYTE(a2) = 3;
      goto LABEL_15;
    }
    if ( ((StatusCode - 1073872899) & 0xFFFFFFF7) == 0 )
    {
      v26 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 12);
      *((_QWORD *)a1 + 65) = KeGetCurrentThread();
      v27 = *((_QWORD *)a1 + 512);
      if ( v27 )
      {
        if ( StatusCode == 1073872899 )
        {
          if ( StatusBufferSize >= 0x14
            && *(_BYTE *)StatusBuffer == 0x80
            && *((_WORD *)StatusBuffer + 1) >= 0x14u
            && *((_BYTE *)StatusBuffer + 1) )
          {
            *(_OWORD *)(v27 + 1020) = *(_OWORD *)StatusBuffer;
            *(_DWORD *)(v27 + 1036) = *((_DWORD *)StatusBuffer + 4);
LABEL_79:
            updated = 1;
            *((_QWORD *)a1 + 65) = 0LL;
            v79 = 1;
            KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v26);
            v28 = StatusCode == 1073807372;
            goto LABEL_80;
          }
        }
        else if ( StatusCode == 1073872907
               && StatusBufferSize >= 0x14
               && *(_BYTE *)StatusBuffer == 0x80
               && *((_WORD *)StatusBuffer + 1) >= 0x14u
               && *((_BYTE *)StatusBuffer + 1) )
        {
          *(_OWORD *)(v27 + 1040) = *(_OWORD *)StatusBuffer;
          *(_DWORD *)(v27 + 1056) = *((_DWORD *)StatusBuffer + 4);
          goto LABEL_79;
        }
      }
      *((_QWORD *)a1 + 65) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v26);
      if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return;
      v10 = 198;
      LOBYTE(a2) = 3;
      goto LABEL_15;
    }
    switch ( StatusCode )
    {
      case 1073938515:
        v29 = v6->StatusBuffer;
        v30 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 12);
        *((_QWORD *)a1 + 65) = KeGetCurrentThread();
        if ( (unsigned int)(v29[12] - 2) <= 2 )
          *((_DWORD *)a1 + 283) = 1;
        else
          *((_DWORD *)a1 + 283) &= ~1u;
        v31 = (_DWORD)a1[281] & v29[2];
        *((_DWORD *)a1 + 281) = v31;
        if ( (unsigned int)(v29[10] - 2) <= 2 )
          *((_DWORD *)a1 + 281) = v31 | 2;
        *((_DWORD *)a1 + 282) &= v29[7];
        *((_QWORD *)a1 + 65) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v30);
        goto LABEL_106;
      case 1073938516:
        v32 = v6->StatusBufferSize;
        v33 = (unsigned __int16 *)v6->StatusBuffer;
        if ( v32 < 0x34 || v32 < v33[1] )
          goto LABEL_214;
        v34 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 12);
        *((_QWORD *)a1 + 65) = KeGetCurrentThread();
        if ( v33[1] >= 0x3Cu )
        {
          *(_OWORD *)(a1 + 250) = *(_OWORD *)v33;
          *(_OWORD *)(a1 + 254) = *((_OWORD *)v33 + 1);
          *(_OWORD *)(a1 + 258) = *((_OWORD *)v33 + 2);
          *((_QWORD *)a1 + 131) = *((_QWORD *)v33 + 6);
          a1[264] = *(_DWORD *)(struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)(v33 + 28);
        }
        else
        {
          *(_OWORD *)(a1 + 250) = 0LL;
          *(_OWORD *)(a1 + 254) = 0LL;
          *(_OWORD *)(a1 + 258) = 0LL;
          *((_QWORD *)a1 + 131) = 0LL;
          *((_DWORD *)a1 + 264) = 0;
          *(_OWORD *)(a1 + 250) = *(_OWORD *)v33;
          *(_OWORD *)(a1 + 254) = *((_OWORD *)v33 + 1);
          *(_OWORD *)(a1 + 258) = *((_OWORD *)v33 + 2);
          a1[262] = *(_DWORD *)(struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)(v33 + 24);
        }
        ndisCheckMiniportWakeUpCapable((struct _NDIS_MINIPORT_BLOCK *)a1);
        *((_QWORD *)a1 + 65) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v34);
        goto LABEL_105;
      case 1073938513:
        v35 = 0;
        if ( v6->StatusBufferSize < 4 )
          goto LABEL_214;
        v36 = *((_BYTE *)a1 + 32) > 6u || *((_BYTE *)a1 + 32) == 6 && *((_BYTE *)a1 + 33) >= 0x14u ? a1 + 242 : a1 + 240;
        v37 = *(struct NDIS_MINIPORT_ADAPTER_HANDLE__ **)v36;
        if ( !*(_QWORD *)v36 )
          goto LABEL_214;
        while ( 1 )
        {
          v38 = *(struct NDIS_MINIPORT_ADAPTER_HANDLE__ **)v37;
          if ( *((_DWORD *)v37 + 10) == *(_DWORD *)v6->StatusBuffer )
            break;
          v36 = v37;
          v37 = *(struct NDIS_MINIPORT_ADAPTER_HANDLE__ **)v37;
          if ( !v38 )
            goto LABEL_106;
        }
        *(_QWORD *)v36 = v38;
        LODWORD(v6->NdisReserved[2]) = 0;
        v39 = v37 + 2;
        if ( !v39 )
          goto LABEL_214;
        do
        {
          v40 = v39;
          v39 = (_QWORD *)*v39;
          v41 = (void **)(v40 - 1);
          if ( v41[3] == &ndisIntReqWmi )
            v35 = 1;
          ExFreePoolWithTag(v41, 0);
          ++LODWORD(v6->NdisReserved[2]);
        }
        while ( v39 );
        StatusBuffer = v85;
        if ( v35 )
        {
          v42 = (__int64 *)*((_QWORD *)a1 + 121);
          v84 = 0LL;
          for ( i = 0; v42; v42 = (__int64 *)*v42 )
          {
            v44 = (__int64 **)(v42 + 1);
            if ( v42 != (__int64 *)-8LL )
            {
              do
              {
                if ( v44[2] == (__int64 *)&ndisIntReqWmi )
                {
                  switch ( *((_DWORD *)v42 + 15) )
                  {
                    case 1:
                      i |= 1u;
                      break;
                    case 2:
                      i |= 2u;
                      break;
                    case 3:
                      i |= 4u;
                      break;
                    case 4:
                      i |= 8u;
                      break;
                    case 5:
                      i |= 0x10000u;
                      break;
                  }
                }
                v44 = (__int64 **)*v44;
              }
              while ( v44 );
            }
          }
          *((_DWORD *)a1 + 286) = i;
          ndisGetCombinedPMConfig((struct _NDIS_MINIPORT_BLOCK *)a1, (struct _NDIS_PM_PARAMETERS *)a1 + 56);
LABEL_105:
          updated = v79;
LABEL_106:
          StatusBufferSize = v81;
          goto LABEL_107;
        }
        goto LABEL_213;
      case 1073938514:
        v45 = 0;
        if ( v6->StatusBufferSize < 4 )
          goto LABEL_214;
        v46 = a1 + 244;
        v47 = (struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)*((_QWORD *)a1 + 122);
        if ( !v47 )
          goto LABEL_214;
        while ( 1 )
        {
          v48 = *(struct NDIS_MINIPORT_ADAPTER_HANDLE__ **)v47;
          if ( *((_DWORD *)v47 + 49) == *(_DWORD *)v6->StatusBuffer )
            break;
          v46 = v47;
          v47 = *(struct NDIS_MINIPORT_ADAPTER_HANDLE__ **)v47;
          if ( !v48 )
            goto LABEL_106;
        }
        *(_QWORD *)v46 = v48;
        LODWORD(v6->NdisReserved[2]) = 0;
        v49 = v47 + 2;
        if ( !v49 )
          goto LABEL_214;
        do
        {
          v50 = v49;
          v49 = (_QWORD *)*v49;
          v51 = (void **)(v50 - 1);
          if ( v51[3] == &ndisIntReqWmi )
            v45 = 1;
          ExFreePoolWithTag(v51, 0);
          ++LODWORD(v6->NdisReserved[2]);
        }
        while ( v49 );
        StatusBuffer = v85;
        if ( v45 )
        {
          v52 = (__int64 *)*((_QWORD *)a1 + 122);
          v84 = 0LL;
          for ( j = 0; v52; v52 = (__int64 *)*v52 )
          {
            v54 = (__int64 **)(v52 + 1);
            if ( v52 != (__int64 *)-8LL )
            {
              do
              {
                if ( v54[2] == (__int64 *)&ndisIntReqWmi )
                {
                  if ( *((_DWORD *)v52 + 15) == 1 )
                  {
                    j |= 1u;
                  }
                  else if ( *((_DWORD *)v52 + 15) == 2 )
                  {
                    j |= 2u;
                  }
                  else if ( (unsigned int)(*((_DWORD *)v52 + 15) - 3) <= 1 )
                  {
                    j |= 0x80u;
                  }
                }
                v54 = (__int64 **)*v54;
              }
              while ( v54 );
            }
          }
          *((_DWORD *)a1 + 287) = j;
          ndisGetCombinedPMConfig((struct _NDIS_MINIPORT_BLOCK *)a1, (struct _NDIS_PM_PARAMETERS *)a1 + 56);
          goto LABEL_105;
        }
LABEL_213:
        updated = v79;
        goto LABEL_214;
      case 1073938517:
        v79 = ndisMValidatePMWakeReason((struct _NDIS_MINIPORT_BLOCK *)a1, v6, a3);
        updated = v79;
        if ( v79 )
          goto LABEL_214;
        if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return;
        v55 = 199;
LABEL_171:
        LOBYTE(a2) = 3;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)a2,
          24,
          v55,
          (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
          (char)a1);
        return;
    }
    if ( (unsigned int)(StatusCode - 1073873072) > 1
      || (SourceHandle = (struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)v6->SourceHandle,
          SourceHandle == (struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)0x140000000LL) )
    {
      if ( StatusCode == 1073807372 )
      {
        HIDWORD(v87) = 2;
        goto LABEL_81;
      }
      goto LABEL_214;
    }
    if ( StatusCode == 1073873072 )
    {
      if ( *((_BYTE *)a1 + 32) <= 6u && (*((_BYTE *)a1 + 32) != 6 || *((_BYTE *)a1 + 33) < 0x32u)
        || v6->Header.Type != 0x98
        || !v6->Header.Revision
        || v6->Header.Size < 0x70u
        || v6->DestinationHandle
        || SourceHandle != a1
        || v6->PortNumber
        || v6->StatusBufferSize != 34
        || *(_WORD *)v6->StatusBuffer > 0x20u )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return;
        v55 = 200;
        goto LABEL_171;
      }
    }
    else if ( StatusCode == 1073873073
           && (*((_BYTE *)a1 + 32) <= 6u && (*((_BYTE *)a1 + 32) != 6 || *((_BYTE *)a1 + 33) < 0x32u)
            || v6->Header.Type != 0x98
            || !v6->Header.Revision
            || v6->Header.Size < 0x70u
            || v6->DestinationHandle
            || SourceHandle != a1
            || v6->PortNumber
            || v6->StatusBufferSize != 4) )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return;
      v55 = 201;
      goto LABEL_171;
    }
    v80[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 12);
    v62 = *((_BYTE *)a1 + 5328) == 0;
    *((_QWORD *)a1 + 65) = KeGetCurrentThread();
    if ( v62 )
    {
      if ( !(unsigned __int8)ndisReferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)a1, 0x3Au) )
      {
LABEL_205:
        v57 = v80[0];
        *((_QWORD *)a1 + 65) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v57);
        return;
      }
      if ( !ndisMReferenceIfBlock((struct _NDIS_MINIPORT_BLOCK *)a1, 0x1Du) )
      {
        ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)a1, 0x3Au);
        goto LABEL_205;
      }
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 1324), (WORK_QUEUE_TYPE)40);
      *((_BYTE *)a1 + 5328) = 1;
    }
    v58 = StatusCode - 1073873072;
    if ( v58 )
    {
      if ( v58 == 1 )
      {
        a1[1342] = *(_DWORD *)(struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)v6->StatusBuffer;
        *((_BYTE *)a1 + 5330) = 1;
      }
    }
    else
    {
      v59 = v6->StatusBuffer;
      *(_OWORD *)(a1 + 1333) = *v59;
      *(_OWORD *)(a1 + 1337) = v59[1];
      *((_WORD *)a1 + 2682) = *((_WORD *)v59 + 16);
      *((_BYTE *)a1 + 5329) = 1;
    }
    goto LABEL_205;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 2;
    WPP_RECORDER_SF_dq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      26,
      186,
      (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
      StatusCode,
      (char)a1);
  }
}
