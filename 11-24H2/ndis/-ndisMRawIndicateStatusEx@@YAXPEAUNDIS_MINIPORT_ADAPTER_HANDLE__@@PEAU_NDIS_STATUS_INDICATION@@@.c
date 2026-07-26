/*
 * XREFs of ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x140058210
 * Callers:
 *     ?ndisMpHookDefaultIndicateStatus@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1400581D0 (-ndisMpHookDefaultIndicateStatus@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAUNDIS_MINIP.c)
 *     ?ndisMpHookRawIndicateStatus@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1400581F0 (-ndisMpHookRawIndicateStatus@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION.c)
 *     ?ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1401610C0 (-ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400075C0 (WPP_RECORDER_SF_d.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140011280 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400129C0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1400132F0 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_ @ 0x14001DD50 (WPP_RECORDER_SF_.c)
 *     ?ndisFIndicateOffloadChange@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAXK@Z @ 0x140032910 (-ndisFIndicateOffloadChange@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAXK@Z.c)
 *     ?ndisFIndicateStatusToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x140032A20 (-ndisFIndicateStatusToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK_DPC@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140034790 (-NDIS_ACQUIRE_FILTER_SPIN_LOCK_DPC@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140035060 (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x140035250 (-ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140035310 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140035350 (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisGetHigherFilterWithPnpRef@@YAPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@W4_NDIS_FPNP_REFTAG@@@Z @ 0x140036100 (-ndisGetHigherFilterWithPnpRef@@YAPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@W4_NDI.c)
 *     ?ndisMValidatePMWakeReason@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1400547E0 (-ndisMValidatePMWakeReason@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     WPP_RECORDER_SF_dq @ 0x140063790 (WPP_RECORDER_SF_dq_ea_140063790.c)
 *     ?ndisGetCombinedPMConfig@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_PARAMETERS@@@Z @ 0x14006C3E0 (-ndisGetCombinedPMConfig@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_PARAMETERS@@@Z.c)
 *     ?ndisCheckMiniportWakeUpCapable@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14006F060 (-ndisCheckMiniportWakeUpCapable@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRestoreFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@1@Z @ 0x14007AC50 (-ndisRestoreFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOC.c)
 *     ?ndisSwapFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@1@Z @ 0x14007B190 (-ndisSwapFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x14007BF40 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     ?ndisMIndicateHwTimestampCapabilitiesChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKEPEAE@Z @ 0x14007E200 (-ndisMIndicateHwTimestampCapabilitiesChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKEPEAE@Z.c)
 *     ?ndisMIndicateOffloadChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KPEAXK@Z @ 0x140083A80 (-ndisMIndicateOffloadChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KPEAXK@Z.c)
 *     ?ndisMUpdateHiddenFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_N@Z @ 0x1400885F0 (-ndisMUpdateHiddenFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_N@Z.c)
 *     ?ndisMIndicateNicSwitchCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z @ 0x14009CCDC (-ndisMIndicateNicSwitchCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z.c)
 *     ?ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z @ 0x14009CDA4 (-ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z.c)
 *     ?ndisMIndicateReceiveFilterCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z @ 0x14009D148 (-ndisMIndicateReceiveFilterCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z.c)
 *     Feature_NDPSfiSpring2026__private_IsEnabledDeviceUsageNoInline @ 0x14009F348 (Feature_NDPSfiSpring2026__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ndisMIndicatePDConfigChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEBXKE@Z @ 0x1400A4048 (-ndisMIndicatePDConfigChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEBXKE@Z.c)
 *     ?ndisUpdateRcvFilterQueueParameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_QUEUE_PARAMETERS@@@Z @ 0x1400AB6A8 (-ndisUpdateRcvFilterQueueParameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_QUEUE_PARAME.c)
 *     ?ndisFilterIndicatePMCapabilities@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1400B2970 (-ndisFilterIndicatePMCapabilities@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisFilterIndicatePMOffloadReject@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1400B2A04 (-ndisFilterIndicatePMOffloadReject@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisFilterIndicateWoLPatternReject@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1400B2A58 (-ndisFilterIndicateWoLPatternReject@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisMIndicatePMCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1400B2CB4 (-ndisMIndicatePMCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisFIndicateTimestampChange@@YAEPEAU_NDIS_FILTER_BLOCK@@HPEAXK@Z @ 0x1400C4C70 (-ndisFIndicateTimestampChange@@YAEPEAU_NDIS_FILTER_BLOCK@@HPEAXK@Z.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 *     ?ndisIfUpdateInterfaceHiddenFlag@@YAXPEAU_NDIS_IF_BLOCK@@_N@Z @ 0x1401663A0 (-ndisIfUpdateInterfaceHiddenFlag@@YAXPEAU_NDIS_IF_BLOCK@@_N@Z.c)
 */

void __fastcall ndisMRawIndicateStatusEx(struct NDIS_MINIPORT_ADAPTER_HANDLE__ *a1, __int64 a2, int a3)
{
  __int64 *v3; // r12
  unsigned __int8 updated; // r14
  unsigned int v5; // esi
  struct _NDIS_STATUS_INDICATION *v6; // r15
  int v7; // r13d
  const struct _GUID *v9; // rcx
  bool v10; // zf
  int v11; // r9d
  int v12; // r9d
  KIRQL v13; // r8
  __int64 v14; // rdx
  unsigned __int8 v15; // al
  KIRQL v16; // dl
  unsigned __int8 v17; // al
  KIRQL v18; // dl
  unsigned __int8 v19; // al
  KIRQL v20; // dl
  __int64 v21; // rdx
  unsigned int v22; // eax
  KIRQL v23; // dl
  KIRQL v24; // dl
  bool v25; // bl
  unsigned __int8 v26; // al
  KIRQL v27; // dl
  KIRQL v28; // dl
  __int64 v29; // rcx
  bool v30; // al
  int v31; // edx
  unsigned int StatusBufferSize; // ecx
  unsigned __int16 *StatusBuffer; // rbx
  KIRQL v34; // r14
  char v35; // si
  struct NDIS_MINIPORT_ADAPTER_HANDLE__ *v36; // rcx
  struct NDIS_MINIPORT_ADAPTER_HANDLE__ *v37; // rbx
  struct NDIS_MINIPORT_ADAPTER_HANDLE__ *v38; // rax
  _QWORD *v39; // rbx
  _QWORD *v40; // rcx
  void **v41; // rcx
  __int64 *v42; // r9
  int v43; // ecx
  __int64 **v44; // r8
  char v45; // si
  struct NDIS_MINIPORT_ADAPTER_HANDLE__ *v46; // rcx
  struct NDIS_MINIPORT_ADAPTER_HANDLE__ *v47; // rbx
  struct NDIS_MINIPORT_ADAPTER_HANDLE__ *v48; // rax
  _QWORD *v49; // rbx
  _QWORD *v50; // rcx
  void **v51; // rcx
  __int64 *v52; // r9
  int v53; // edx
  __int64 **v54; // r8
  int v55; // r9d
  struct NDIS_MINIPORT_ADAPTER_HANDLE__ *SourceHandle; // rcx
  KIRQL v57; // dl
  int v58; // r13d
  _OWORD *v59; // rax
  KIRQL v60; // dl
  struct _NDIS_FILTER_BLOCK *HigherFilterWithPnpRef; // rbx
  KSPIN_LOCK *p_Lock; // rcx
  unsigned int Flags; // eax
  unsigned int v64; // ecx
  unsigned __int8 v65; // al
  _NET_IF_MEDIA_CONNECT_STATE MediaConnectState; // ecx
  _NET_IF_MEDIA_CONNECT_STATE v67; // eax
  char v68; // si
  int v69; // ecx
  KIRQL v70; // dl
  int v71; // edx
  int v72; // eax
  int v73; // eax
  int v74; // ecx
  char v75; // al
  unsigned __int8 Timeout; // [rsp+20h] [rbp-B9h]
  unsigned __int8 v77; // [rsp+40h] [rbp-99h]
  unsigned __int8 v78[3]; // [rsp+41h] [rbp-98h] BYREF
  unsigned int v79; // [rsp+44h] [rbp-95h]
  BOOL v80; // [rsp+48h] [rbp-91h]
  int v81; // [rsp+4Ch] [rbp-8Dh]
  char v82; // [rsp+50h] [rbp-89h]
  __int128 v83; // [rsp+51h] [rbp-88h]
  __int16 v84; // [rsp+61h] [rbp-78h]
  char v85; // [rsp+63h] [rbp-76h]
  char v86; // [rsp+68h] [rbp-71h]
  __int128 v87; // [rsp+69h] [rbp-70h]
  __int16 v88; // [rsp+79h] [rbp-60h]
  char v89; // [rsp+7Bh] [rbp-5Eh]
  __int64 *v90; // [rsp+80h] [rbp-59h]
  struct _NDIS_STATUS_INDICATION *v91; // [rsp+88h] [rbp-51h]
  struct _KTIMER Timer; // [rsp+90h] [rbp-49h] BYREF
  __int64 v93; // [rsp+D0h] [rbp-9h] BYREF
  int v94; // [rsp+D8h] [rbp-1h]
  int v95; // [rsp+DCh] [rbp+3h]
  __int64 v96; // [rsp+E0h] [rbp+7h]
  __int64 v97; // [rsp+E8h] [rbp+Fh]
  int v98; // [rsp+F0h] [rbp+17h]
  int v99; // [rsp+F4h] [rbp+1Bh]

  v3 = *(__int64 **)(a2 + 48);
  updated = 1;
  v5 = *(_DWORD *)(a2 + 56);
  v6 = (struct _NDIS_STATUS_INDICATION *)a2;
  v7 = *(_DWORD *)(a2 + 20);
  v90 = v3;
  v77 = 1;
  v91 = (struct _NDIS_STATUS_INDICATION *)a2;
  v79 = v5;
  LOBYTE(v80) = 0;
  LOBYTE(v81) = 0;
  v9 = &WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x18u,
      0xB8u,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)a1);
    v9 = &WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids;
  }
  v93 = 2621824LL;
  v10 = v6->Header.Type == 0x98;
  v95 = 0;
  v94 = *((_DWORD *)a1 + 87);
  v96 = *((_QWORD *)a1 + 345);
  v97 = *((_QWORD *)a1 + 346);
  v98 = *((_DWORD *)a1 + 203);
  v99 = *((_DWORD *)a1 + 204);
  if ( !v10 || v6->Header.Size < 0x70u )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return;
    v11 = 185;
    goto LABEL_283;
  }
  if ( ((v7 - 1073872978) & 0xFFFFFFFD) != 0 )
  {
    a2 = 1LL;
    if ( v7 == 1073807384 )
    {
      if ( v5 < 4 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return;
        v11 = 187;
LABEL_283:
        LOBYTE(a2) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          a2,
          24,
          v11,
          (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
          (char)a1);
        return;
      }
LABEL_214:
      v30 = v7 == 1073807372;
      if ( v7 == 1073807371 )
      {
        HIDWORD(v93) = 1;
        goto LABEL_81;
      }
LABEL_80:
      if ( v30 )
      {
LABEL_81:
        updated = v77;
        v5 = 40;
        v6->StatusBuffer = &v93;
        v79 = 40;
        v3 = &v93;
        v6->StatusCode = 1073807383;
        v7 = 1073807383;
        v6->StatusBufferSize = 40;
        goto LABEL_115;
      }
      goto LABEL_114;
    }
    if ( (unsigned int)(v7 - 1073872902) <= 1 )
    {
      v77 = ndisMIndicateOffloadChange((struct _NDIS_MINIPORT_BLOCK *)a1, v7, v3, v5);
      updated = v77;
      if ( !v77 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return;
        v12 = 188;
LABEL_14:
        LOBYTE(a2) = 4;
        goto LABEL_15;
      }
    }
    if ( v7 == 1073872908 )
    {
      updated = 0;
      v77 = 0;
      v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 12);
      v14 = *((_QWORD *)a1 + 533);
      *((_QWORD *)a1 + 65) = KeGetCurrentThread();
      if ( v14 && v5 >= 0x1C && *(_BYTE *)v3 == 0x80 && *((_WORD *)v3 + 1) >= 0x1Cu && *((_BYTE *)v3 + 1) )
      {
        updated = 1;
        v77 = 1;
        *(_OWORD *)v14 = *(_OWORD *)v3;
        *(_QWORD *)(v14 + 16) = v3[2];
        *(_DWORD *)(v14 + 24) = *((_DWORD *)v3 + 6);
      }
      *((_QWORD *)a1 + 65) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v13);
      if ( updated )
        goto LABEL_214;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return;
      v12 = 189;
      goto LABEL_14;
    }
    if ( ((v7 - 1073872912) & 0xFFFFFFEF) == 0 )
    {
      v78[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 12);
      *((_QWORD *)a1 + 65) = KeGetCurrentThread();
      v15 = ndisMIndicateReceiveFilterCapsChange((struct _NDIS_MINIPORT_BLOCK *)a1, v7, v3, v5, 0);
      v16 = v78[0];
      updated = v15;
      v77 = v15;
      *((_QWORD *)a1 + 65) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v16);
      if ( !updated )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return;
        v12 = 190;
        goto LABEL_14;
      }
    }
    if ( (unsigned int)(v7 - 1074073600) <= 1 )
    {
      v78[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 12);
      *((_QWORD *)a1 + 65) = KeGetCurrentThread();
      v17 = ndisMIndicateHwTimestampCapabilitiesChange((struct _NDIS_MINIPORT_BLOCK *)a1, v7, v3, v5, 0, 0LL);
      v18 = v78[0];
      updated = v17;
      v77 = v17;
      *((_QWORD *)a1 + 65) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v18);
      if ( !updated )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return;
        v12 = 191;
        goto LABEL_14;
      }
    }
    if ( ((v7 - 1073872960) & 0xFFFFFFEF) == 0 )
    {
      v78[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 12);
      *((_QWORD *)a1 + 65) = KeGetCurrentThread();
      v19 = ndisMIndicateNicSwitchCapsChange((struct _NDIS_MINIPORT_BLOCK *)a1, v7, v3, v5, 0);
      v20 = v78[0];
      updated = v19;
      v77 = v19;
      *((_QWORD *)a1 + 65) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v20);
      if ( !updated )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return;
        v12 = 192;
        goto LABEL_14;
      }
    }
    switch ( v7 )
    {
      case 1073873408:
        v77 = ndisMIndicatePDConfigChange((struct _NDIS_MINIPORT_BLOCK *)a1, a2, v3, v5, Timeout);
        updated = v77;
        if ( v77 )
          goto LABEL_214;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return;
        v12 = 193;
        goto LABEL_14;
      case 1076105216:
        v78[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 12);
        *((_QWORD *)a1 + 65) = KeGetCurrentThread();
        v21 = *((_QWORD *)a1 + 69);
        if ( ((_DWORD)a1[674] & 0x40000000) != 0 && v21 )
        {
          if ( (*(_BYTE *)(v21 + 4) & 0x10) == 0 && *(_BYTE *)(v21 + 8) )
            goto LABEL_47;
        }
        else if ( v21 )
        {
LABEL_47:
          v22 = *(unsigned __int16 *)(v21 + 12);
          if ( v5 < v22 )
            v22 = v5;
          memmove((void *)(v21 + *(unsigned int *)(v21 + 16)), v3, v22);
          v23 = v78[0];
          *((_QWORD *)a1 + 65) = 0LL;
          KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v23);
          updated = 0;
          goto LABEL_115;
        }
        v24 = v78[0];
        *((_QWORD *)a1 + 65) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v24);
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return;
        v12 = 194;
        LOBYTE(a2) = 3;
LABEL_15:
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          a2,
          24,
          v12,
          (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids);
        return;
      case 1073872995:
        v25 = *(_BYTE *)v3 != 0;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(a2) = 4;
          WPP_RECORDER_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            a2,
            24,
            195,
            (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
            v25);
        }
        ndisMUpdateHiddenFlag((struct _NDIS_MINIPORT_BLOCK *)a1, v25);
        ndisIfUpdateInterfaceHiddenFlag(*((struct _NDIS_IF_BLOCK **)a1 + 505), v25);
        return;
    }
    if ( (unsigned int)(v7 - 1073873056) <= 1 )
    {
      v78[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 12);
      *((_QWORD *)a1 + 65) = KeGetCurrentThread();
      v26 = ndisMIndicateQosParametersChange(
              (struct _NDIS_MINIPORT_BLOCK *)a1,
              v7,
              (struct _NDIS_QOS_PARAMETERS *)v3,
              v5);
      v27 = v78[0];
      updated = v26;
      v77 = v26;
      *((_QWORD *)a1 + 65) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v27);
      if ( !updated )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return;
        v12 = 196;
        LOBYTE(a2) = 3;
        goto LABEL_15;
      }
    }
    if ( v7 == 1073872944 )
    {
      updated = 0;
      v77 = 0;
      if ( v5 >= 0x444
        && *(_BYTE *)v3 == 0x80
        && *((_WORD *)v3 + 1) >= 0x444u
        && *((_BYTE *)v3 + 1) >= 2u
        && (*((_DWORD *)v3 + 1) & 0xFFFF0000) == 0x100000 )
      {
        updated = ndisUpdateRcvFilterQueueParameters(
                    (struct _NDIS_MINIPORT_BLOCK *)a1,
                    (struct _NDIS_RECEIVE_QUEUE_PARAMETERS *)v3);
        v77 = updated;
      }
      if ( updated )
        goto LABEL_214;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return;
      v12 = 197;
      LOBYTE(a2) = 3;
      goto LABEL_15;
    }
    if ( ((v7 - 1073872899) & 0xFFFFFFF7) == 0 )
    {
      v28 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 12);
      *((_QWORD *)a1 + 65) = KeGetCurrentThread();
      v29 = *((_QWORD *)a1 + 512);
      if ( v29 )
      {
        if ( v7 == 1073872899 )
        {
          if ( v5 >= 0x14 && *(_BYTE *)v3 == 0x80 && *((_WORD *)v3 + 1) >= 0x14u && *((_BYTE *)v3 + 1) )
          {
            *(_OWORD *)(v29 + 1020) = *(_OWORD *)v3;
            *(_DWORD *)(v29 + 1036) = *((_DWORD *)v3 + 4);
LABEL_79:
            updated = 1;
            *((_QWORD *)a1 + 65) = 0LL;
            v77 = 1;
            KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v28);
            v30 = v7 == 1073807372;
            goto LABEL_80;
          }
        }
        else if ( v7 == 1073872907
               && v5 >= 0x14
               && *(_BYTE *)v3 == 0x80
               && *((_WORD *)v3 + 1) >= 0x14u
               && *((_BYTE *)v3 + 1) )
        {
          *(_OWORD *)(v29 + 1040) = *(_OWORD *)v3;
          *(_DWORD *)(v29 + 1056) = *((_DWORD *)v3 + 4);
          goto LABEL_79;
        }
      }
      *((_QWORD *)a1 + 65) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v28);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return;
      v12 = 198;
      LOBYTE(a2) = 3;
      goto LABEL_15;
    }
    switch ( v7 )
    {
      case 1073938515:
        if ( !(unsigned int)Feature_NDPSfiSpring2026__private_IsEnabledDeviceUsageNoInline(v9, a2) || v5 >= 0x34 )
        {
          ndisMIndicatePMCapabilities((struct _NDIS_MINIPORT_BLOCK *)a1, v6);
          goto LABEL_115;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v31) = 3;
          WPP_RECORDER_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v31,
            24,
            199,
            (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids);
          goto LABEL_115;
        }
        goto LABEL_214;
      case 1073938516:
        StatusBufferSize = v6->StatusBufferSize;
        StatusBuffer = (unsigned __int16 *)v6->StatusBuffer;
        if ( StatusBufferSize < 0x34 || StatusBufferSize < StatusBuffer[1] )
          goto LABEL_214;
        v34 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 12);
        *((_QWORD *)a1 + 65) = KeGetCurrentThread();
        if ( StatusBuffer[1] >= 0x3Cu )
        {
          *(_OWORD *)(a1 + 250) = *(_OWORD *)StatusBuffer;
          *(_OWORD *)(a1 + 254) = *((_OWORD *)StatusBuffer + 1);
          *(_OWORD *)(a1 + 258) = *((_OWORD *)StatusBuffer + 2);
          *((_QWORD *)a1 + 131) = *((_QWORD *)StatusBuffer + 6);
          a1[264] = *(_DWORD *)(struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)(StatusBuffer + 28);
        }
        else
        {
          *(_OWORD *)(a1 + 250) = 0LL;
          *(_OWORD *)(a1 + 254) = 0LL;
          *(_OWORD *)(a1 + 258) = 0LL;
          *((_QWORD *)a1 + 131) = 0LL;
          *((_DWORD *)a1 + 264) = 0;
          *(_OWORD *)(a1 + 250) = *(_OWORD *)StatusBuffer;
          *(_OWORD *)(a1 + 254) = *((_OWORD *)StatusBuffer + 1);
          *(_OWORD *)(a1 + 258) = *((_OWORD *)StatusBuffer + 2);
          a1[262] = *(_DWORD *)(struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)(StatusBuffer + 24);
        }
        ndisCheckMiniportWakeUpCapable((struct _NDIS_MINIPORT_BLOCK *)a1);
        *((_QWORD *)a1 + 65) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v34);
        updated = v77;
LABEL_115:
        v78[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 12);
        *((_QWORD *)a1 + 65) = KeGetCurrentThread();
        if ( v7 == 1073807383 )
        {
          *((_BYTE *)a1 + 88) |= 0x18u;
          if ( *((_DWORD *)v3 + 1) == 1 && *((_DWORD *)a1 + 86) != 1 )
            *((_QWORD *)a1 + 199) = MEMORY[0xFFFFF78000000320];
          a1[86] = *(_DWORD *)(struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)((int)v3 + 4);
          a1[87] = (struct NDIS_MINIPORT_ADAPTER_HANDLE__)v3[1];
          *((_QWORD *)a1 + 345) = v3[2];
          *((_QWORD *)a1 + 346) = v3[3];
          a1[203] = (struct NDIS_MINIPORT_ADAPTER_HANDLE__)v3[4];
          a1[204] = *(_DWORD *)(struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)((int)v3 + 36);
        }
        else if ( v7 == 1073938437 )
        {
          *((_QWORD *)a1 + 199) = MEMORY[0xFFFFF78000000320];
        }
        v60 = v78[0];
        *((_QWORD *)a1 + 65) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v60);
        HigherFilterWithPnpRef = ndisGetHigherFilterWithPnpRef((struct _NDIS_MINIPORT_BLOCK *)a1, 0LL, 9u);
        if ( HigherFilterWithPnpRef )
        {
          while ( 1 )
          {
            v78[0] = KeAcquireSpinLockRaiseToDpc(&HigherFilterWithPnpRef->Lock);
            p_Lock = &HigherFilterWithPnpRef->Lock;
            HigherFilterWithPnpRef->LockThread = KeGetCurrentThread();
            Flags = HigherFilterWithPnpRef->Flags;
            HigherFilterWithPnpRef->LockThread = 0LL;
            if ( (Flags & 0x2000) == 0 )
              break;
            KeReleaseSpinLock(p_Lock, v78[0]);
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
          HigherFilterWithPnpRef->Flags |= 0x2000u;
          KeReleaseSpinLockFromDpcLevel(p_Lock);
          v6 = v91;
          switch ( v7 )
          {
            case 1073807383:
              if ( v91->SourceHandle == &ndisIntReqGeneric )
                *(_DWORD *)((struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)v3 + 1) = a1[86];
              v64 = v79;
              if ( v79 == -2 )
              {
                v64 = 40;
                v6->StatusBufferSize = 40;
              }
              v65 = updated;
              if ( v3 && v64 >= 0x28 )
              {
                MediaConnectState = HigherFilterWithPnpRef->MediaConnectState;
                v67 = *((_DWORD *)v3 + 1);
                if ( MediaConnectState != v67 )
                {
                  if ( MediaConnectState == MediaConnectStateConnected )
                  {
                    v68 = 1;
LABEL_237:
                    HigherFilterWithPnpRef->MediaConnectState = v67;
                    HigherFilterWithPnpRef->MediaDuplexState = *((_DWORD *)v3 + 2);
                    HigherFilterWithPnpRef->RcvLinkSpeed = v3[3];
                    HigherFilterWithPnpRef->XmitLinkSpeed = v3[2];
                    HigherFilterWithPnpRef->PauseFunctions = *((_DWORD *)v3 + 8);
                    HigherFilterWithPnpRef->AutoNegotiationFlags = *((_DWORD *)v3 + 9);
                    v65 = updated;
LABEL_250:
                    if ( v65 )
                    {
                      ndisFIndicateStatusToFilter(HigherFilterWithPnpRef, v6);
                      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC((struct _NDIS_MINIPORT_BLOCK *)a1);
                      if ( v68 )
                        ndisSwapFilterHandlersForMediaDisconnect(
                          (struct _NDIS_MINIPORT_BLOCK *)a1,
                          0LL,
                          HigherFilterWithPnpRef);
                      if ( (_BYTE)v81 )
                        ndisRestoreFilterHandlersForMediaDisconnect(
                          (struct _NDIS_MINIPORT_BLOCK *)a1,
                          0LL,
                          HigherFilterWithPnpRef);
                      *((_QWORD *)a1 + 65) = 0LL;
                      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)a1 + 12);
                    }
                    NDIS_ACQUIRE_FILTER_SPIN_LOCK_DPC(HigherFilterWithPnpRef);
                    v70 = v78[0];
                    HigherFilterWithPnpRef->Flags &= ~0x2000u;
                    HigherFilterWithPnpRef->LockThread = 0LL;
                    KeReleaseSpinLock(&HigherFilterWithPnpRef->Lock, v70);
                    ndisDereferenceRef(&HigherFilterWithPnpRef->PnPRef.SpinLock, 9u);
LABEL_277:
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                      WPP_RECORDER_SF_qD(
                        *((_QWORD *)WPP_GLOBAL_Control + 8),
                        4u,
                        0x18u,
                        0xCBu,
                        (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
                        (char)a1,
                        v6->StatusCode);
                    return;
                  }
                  v69 = (unsigned __int8)v81;
                  if ( v67 == MediaConnectStateConnected )
                    v69 = 1;
                  v81 = v69;
                }
                v68 = v80;
                goto LABEL_237;
              }
              break;
            case 1073938515:
              ndisFilterIndicatePMCapabilities(HigherFilterWithPnpRef, v91);
              v65 = updated;
              break;
            case 1073938513:
              v65 = ndisFilterIndicateWoLPatternReject(HigherFilterWithPnpRef, v91);
              break;
            case 1073938514:
              v65 = ndisFilterIndicatePMOffloadReject(HigherFilterWithPnpRef, v91);
              break;
            case 1073872902:
              v65 = ndisFIndicateOffloadChange(HigherFilterWithPnpRef, (unsigned __int16 *)v3, v79);
              break;
            default:
              if ( v7 == 1074073600 || (v65 = updated, v7 == 1074073601) )
                v65 = ndisFIndicateTimestampChange(HigherFilterWithPnpRef, v7, v3, v79);
              break;
          }
          v68 = v80;
          goto LABEL_250;
        }
        ndisMAcquireStInLockWithSpinLock((struct _NDIS_MINIPORT_BLOCK *)a1, v78);
        if ( v7 == 1073807383 )
        {
          if ( v6->SourceHandle == &ndisIntReqGeneric )
            *(_DWORD *)((struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)v3 + 1) = a1[86];
          if ( v3 && v5 >= 0x28 )
          {
            if ( *((_DWORD *)v3 + 1) == 1
              || (v80 = ((_DWORD)a1[30] & 0x20000000) != 0,
                  _InterlockedAnd((volatile signed __int32 *)a1 + 30, 0xDFFFFFFF),
                  *((_DWORD *)v3 + 1) == 1) )
            {
              v72 = *((_DWORD *)a1 + 30);
              _InterlockedOr((volatile signed __int32 *)a1 + 30, 0x20000000u);
              LOBYTE(v71) = (v72 & 0x20000000) == 0;
              v81 = v71;
            }
            else
            {
              LOBYTE(v71) = v81;
            }
            v73 = *((_DWORD *)a1 + 120);
            v74 = *((_DWORD *)v3 + 1);
            if ( v73 != v74 )
            {
              if ( v73 == 1 )
              {
                v6->Flags |= 2u;
                ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)a1, v6, 2u);
                goto LABEL_273;
              }
              v75 = v71;
              if ( v74 == 1 )
                v75 = 1;
              LOBYTE(v81) = v75;
            }
          }
        }
        v6->Flags |= 2u;
        ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)a1, v6, 2u);
        if ( !v80 )
        {
LABEL_274:
          if ( (_BYTE)v81 )
            ndisRestoreFilterHandlersForMediaDisconnect((struct _NDIS_MINIPORT_BLOCK *)a1, 0LL, 0LL);
          ndisMReleaseStInLockAndSpinLock((struct _NDIS_MINIPORT_BLOCK *)a1, v78[0]);
          goto LABEL_277;
        }
LABEL_273:
        ndisSwapFilterHandlersForMediaDisconnect((struct _NDIS_MINIPORT_BLOCK *)a1, 0LL, 0LL);
        goto LABEL_274;
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
            goto LABEL_114;
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
        v3 = v90;
        if ( v35 )
        {
          v42 = (__int64 *)*((_QWORD *)a1 + 121);
          v82 = 0;
          v84 = 0;
          v85 = 0;
          v83 = 0LL;
          v43 = 0;
          if ( v42 )
          {
            while ( 1 )
            {
              v44 = (__int64 **)(v42 + 1);
              if ( v42 != (__int64 *)-8LL )
                break;
LABEL_140:
              v42 = (__int64 *)*v42;
              if ( !v42 )
                goto LABEL_141;
            }
            while ( 1 )
            {
              if ( v44[2] == (__int64 *)&ndisIntReqWmi )
              {
                switch ( *((_DWORD *)v42 + 15) )
                {
                  case 1:
                    v43 |= 1u;
                    goto LABEL_138;
                  case 2:
                    v43 |= 2u;
                    goto LABEL_138;
                  case 3:
                    v43 |= 4u;
                    goto LABEL_138;
                  case 4:
                    v43 |= 8u;
                    goto LABEL_138;
                  case 5:
                    v43 |= 0x10000u;
LABEL_138:
                    *(_DWORD *)((char *)&v83 + 3) = v43;
                    break;
                }
              }
              v44 = (__int64 **)*v44;
              if ( !v44 )
                goto LABEL_140;
            }
          }
LABEL_141:
          *((_DWORD *)a1 + 286) = v43;
LABEL_142:
          ndisGetCombinedPMConfig((struct _NDIS_MINIPORT_BLOCK *)a1, (struct _NDIS_PM_PARAMETERS *)a1 + 56);
          updated = v77;
LABEL_114:
          v5 = v79;
          goto LABEL_115;
        }
LABEL_213:
        updated = v77;
        goto LABEL_214;
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
            goto LABEL_114;
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
        v3 = v90;
        if ( !v45 )
          goto LABEL_213;
        v52 = (__int64 *)*((_QWORD *)a1 + 122);
        v86 = 0;
        v88 = 0;
        v89 = 0;
        v87 = 0LL;
        v53 = 0;
        if ( !v52 )
        {
LABEL_166:
          *((_DWORD *)a1 + 287) = v53;
          goto LABEL_142;
        }
        while ( 1 )
        {
          v54 = (__int64 **)(v52 + 1);
          if ( v52 != (__int64 *)-8LL )
            break;
LABEL_165:
          v52 = (__int64 *)*v52;
          if ( !v52 )
            goto LABEL_166;
        }
        while ( 1 )
        {
          if ( v54[2] == (__int64 *)&ndisIntReqWmi )
          {
            if ( *((_DWORD *)v52 + 15) == 1 )
            {
              v53 |= 1u;
              goto LABEL_163;
            }
            if ( *((_DWORD *)v52 + 15) == 2 )
            {
              v53 |= 2u;
              goto LABEL_163;
            }
            if ( (unsigned int)(*((_DWORD *)v52 + 15) - 3) <= 1 )
            {
              v53 |= 0x80u;
LABEL_163:
              *(_DWORD *)((char *)&v87 + 7) = v53;
            }
          }
          v54 = (__int64 **)*v54;
          if ( !v54 )
            goto LABEL_165;
        }
      case 1073938517:
        v77 = ndisMValidatePMWakeReason((struct _NDIS_MINIPORT_BLOCK *)a1, v6, a3);
        updated = v77;
        if ( v77 )
          goto LABEL_214;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return;
        v55 = 200;
LABEL_171:
        LOBYTE(a2) = 3;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          a2,
          24,
          v55,
          (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
          (char)a1);
        return;
    }
    if ( (unsigned int)(v7 - 1073873072) > 1
      || (SourceHandle = (struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)v6->SourceHandle,
          SourceHandle == (struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)0x140000000LL) )
    {
      if ( v7 == 1073807372 )
      {
        HIDWORD(v93) = 2;
        goto LABEL_81;
      }
      goto LABEL_214;
    }
    if ( v7 == 1073873072 )
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
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return;
        v55 = 201;
        goto LABEL_171;
      }
    }
    else if ( v7 == 1073873073
           && (*((_BYTE *)a1 + 32) <= 6u && (*((_BYTE *)a1 + 32) != 6 || *((_BYTE *)a1 + 33) < 0x32u)
            || v6->Header.Type != 0x98
            || !v6->Header.Revision
            || v6->Header.Size < 0x70u
            || v6->DestinationHandle
            || SourceHandle != a1
            || v6->PortNumber
            || v6->StatusBufferSize != 4) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return;
      v55 = 202;
      goto LABEL_171;
    }
    v78[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 12);
    v10 = *((_BYTE *)a1 + 5328) == 0;
    *((_QWORD *)a1 + 65) = KeGetCurrentThread();
    if ( v10 )
    {
      if ( !(unsigned __int8)ndisReferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)a1, 0x3Au) )
      {
LABEL_205:
        v57 = v78[0];
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
    v58 = v7 - 1073873072;
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
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 2;
    WPP_RECORDER_SF_dq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      26,
      186,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      v7,
      (char)a1);
  }
}
