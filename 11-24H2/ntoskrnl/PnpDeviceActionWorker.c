/*
 * XREFs of PnpDeviceActionWorker @ 0x140467910
 * Callers:
 *     PnpRequestDeviceAction @ 0x140467508 (PnpRequestDeviceAction.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x140464570 (IoReportTargetDeviceChangeAsynchronous.c)
 *     PopDirectedDripsClearDisengageReason @ 0x1404673AC (PopDirectedDripsClearDisengageReason.c)
 *     PnpLogActionQueueEvent @ 0x140467FDC (PnpLogActionQueueEvent.c)
 *     PpProcessClearProblem @ 0x14046831C (PpProcessClearProblem.c)
 *     PiProcessDeviceResetAction @ 0x1405A1C18 (PiProcessDeviceResetAction.c)
 *     PnpCompleteSystemStartProcess @ 0x1405A2DCC (PnpCompleteSystemStartProcess.c)
 *     PnpProcessRebalance @ 0x1405A6738 (PnpProcessRebalance.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PiConfigureDevice @ 0x140721A7C (PiConfigureDevice.c)
 *     PiProcessResourceRequirementsChanged @ 0x140721BF4 (PiProcessResourceRequirementsChanged.c)
 *     PiProcessSetDeviceProblem @ 0x140721D58 (PiProcessSetDeviceProblem.c)
 *     PiProcessStartSystemDevices @ 0x140721EC4 (PiProcessStartSystemDevices.c)
 *     PiDmaGuardProcessUpdateConsoleLockStateAction @ 0x14072F7AC (PiDmaGuardProcessUpdateConsoleLockStateAction.c)
 *     PipProcessDevNodeTree @ 0x1408B7FE0 (PipProcessDevNodeTree.c)
 *     PiProcessRequeryDeviceState @ 0x1408B902C (PiProcessRequeryDeviceState.c)
 *     PiProcessClearDeviceProblem @ 0x140981B8C (PiProcessClearDeviceProblem.c)
 *     PnpDeleteDeviceActionRequest @ 0x1409ECFD4 (PnpDeleteDeviceActionRequest.c)
 *     PpDevNodeLockTree @ 0x140A05140 (PpDevNodeLockTree.c)
 *     PpDevNodeUnlockTree @ 0x140A0D4DC (PpDevNodeUnlockTree.c)
 *     PiProcessReenumeration @ 0x140A39068 (PiProcessReenumeration.c)
 *     PiQueryPowerRelations @ 0x140A887F8 (PiQueryPowerRelations.c)
 *     PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x140A98E3C (PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent.c)
 *     PiRestartDevice @ 0x140AB1D04 (PiRestartDevice.c)
 */

__int64 __fastcall PnpDeviceActionWorker()
{
  int v0; // r12d
  char v1; // r13
  char v2; // r15
  unsigned int v3; // r14d
  KIRQL v4; // al
  __int64 v5; // rsi
  KIRQL v6; // bl
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // r13d
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v11; // rbx
  char *v12; // rax
  char *v13; // r15
  char v14; // r15
  signed __int64 v15; // rax
  signed __int64 v16; // rdx
  signed __int64 v17; // rtt
  int v18; // ebx
  KIRQL v19; // al
  KIRQL v20; // al
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rbx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  unsigned int PowerRelations; // eax
  __int64 v32; // rbx
  KIRQL v33; // al
  KIRQL v34; // al
  unsigned int **v35; // rbx
  unsigned int *v36; // rax
  __int64 v37; // r12
  KIRQL v38; // al
  bool v39; // zf
  KIRQL v40; // r15
  KIRQL v41; // al
  unsigned int *v42; // rax
  struct _KEVENT *v43; // rcx
  int v45; // ecx
  int v46; // ecx
  int v47; // ecx
  int v48; // ecx
  int v49; // eax
  int v50; // ecx
  int v51; // ecx
  int v52; // ecx
  int v53; // ecx
  int v54; // ecx
  __int64 v55; // rax
  __int64 v56; // rcx
  int v57; // ecx
  int v58; // ecx
  int v59; // ecx
  int v60; // ecx
  int v61; // ecx
  char v62; // [rsp+48h] [rbp-19h]
  char v63; // [rsp+49h] [rbp-18h]
  char v64; // [rsp+4Ah] [rbp-17h]
  char v65; // [rsp+4Bh] [rbp-16h]
  int v66; // [rsp+4Ch] [rbp-15h]
  __int64 v67; // [rsp+50h] [rbp-11h] BYREF
  _OWORD NotificationStructure[2]; // [rsp+58h] [rbp-9h] BYREF
  __int64 v69; // [rsp+78h] [rbp+17h]
  __int128 v70; // [rsp+80h] [rbp+1Fh] BYREF

  v67 = 0LL;
  memset(NotificationStructure, 0, sizeof(NotificationStructure));
  v69 = 0LL;
  LOBYTE(v0) = 0;
  v66 = v0;
  v62 = 0;
  v70 = 0LL;
  _InterlockedExchange64((volatile __int64 *)&PnpDeviceActionThread, (__int64)KeGetCurrentThread());
  v1 = 0;
  v63 = 0;
  v2 = 0;
  PpDevNodeLockTree(1LL);
  while ( 1 )
  {
    v65 = 0;
    v3 = 0;
    v64 = 1;
    v4 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
    v5 = PnpEnumerationRequestList;
    v6 = v4;
    if ( (__int64 *)PnpEnumerationRequestList != &PnpEnumerationRequestList )
    {
      if ( *(__int64 **)(PnpEnumerationRequestList + 8) != &PnpEnumerationRequestList
        || (v7 = *(_QWORD *)PnpEnumerationRequestList,
            *(_QWORD *)(*(_QWORD *)PnpEnumerationRequestList + 8LL) != PnpEnumerationRequestList) )
      {
LABEL_71:
        __fastfail(3u);
      }
      PnpEnumerationRequestList = *(_QWORD *)PnpEnumerationRequestList;
      *(_QWORD *)(v7 + 8) = &PnpEnumerationRequestList;
      *(_BYTE *)(v5 + 84) = 1;
      goto LABEL_6;
    }
    if ( !(_BYTE)v0 && !v1 && !v2 )
      break;
    v5 = 0LL;
LABEL_6:
    KeReleaseSpinLock(&PnpSpinLock, v6);
    if ( v5 )
    {
      v8 = *(_QWORD *)&CPER_EMPTY_GUID.Data1 - *(_QWORD *)(v5 + 64);
      if ( *(_QWORD *)&CPER_EMPTY_GUID.Data1 == *(_QWORD *)(v5 + 64) )
        v8 = *(_QWORD *)CPER_EMPTY_GUID.Data4 - *(_QWORD *)(v5 + 72);
      v9 = 1;
      if ( v8 )
      {
        v65 = 1;
        v70 = *(_OWORD *)(v5 + 64);
        KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink = (struct _LIST_ENTRY *)&v70;
      }
      CurrentThread = KeGetCurrentThread();
      v11 = (signed __int64 *)(v5 + 88);
      --CurrentThread->KernelApcDisable;
      v12 = (char *)KeAbPreAcquire(v5 + 88, 0LL);
      v13 = v12;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 88), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v5 + 88), v12, v5 + 88);
      if ( v13 )
        v13[10] = 1;
      v14 = *(_BYTE *)(v5 + 96);
      _m_prefetchw(v11);
      v15 = *v11;
      v16 = *v11 - 16;
      if ( (*v11 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v16 = 0LL;
      if ( (v15 & 2) != 0 || (v17 = *v11, v17 != _InterlockedCompareExchange64(v11, v16, v15)) )
        ExfReleasePushLock((_QWORD *)(v5 + 88));
      KeAbPostRelease(v5 + 88);
      KeLeaveCriticalRegion();
      v18 = *(_DWORD *)(v5 + 24);
      v19 = KeAcquireSpinLockRaiseToDpc(&qword_140F0E200);
      KeReleaseSpinLock(&qword_140F0E200, v19);
      v20 = KeAcquireSpinLockRaiseToDpc(&qword_140F06950);
      dword_140F0695C = v18;
      if ( byte_140F069D0 )
        qword_140F069E8 = MEMORY[0xFFFFF78000000008];
      KeReleaseSpinLock(&qword_140F06950, v20);
      *(_QWORD *)(v5 + 8) = v5;
      *(_QWORD *)v5 = v5;
      if ( PnpShutdownEvent.Header.SignalState )
      {
        v3 = -1073741431;
      }
      else if ( v14 )
      {
        v3 = -1073741536;
      }
      else
      {
        v21 = *(_QWORD *)(v5 + 16);
        v22 = v21 + 312;
        if ( v21 )
          v23 = *(_QWORD *)(*(_QWORD *)v22 + 40LL);
        else
          v23 = 0LL;
        if ( *(_DWORD *)(v23 + 300) != 790 )
        {
          if ( v21 )
          {
            v24 = *(_QWORD *)(*(_QWORD *)v22 + 40LL);
            if ( v24 )
            {
              ObfReferenceObjectWithTag(*(PVOID *)(v5 + 16), 0x65706E50u);
              PnpLogActionQueueEvent(v24, *(unsigned int *)(v5 + 24), 1LL, 0LL);
            }
          }
          else
          {
            v24 = 0LL;
          }
          v25 = *(_DWORD *)(v5 + 24);
          if ( v25 <= 14 )
          {
            if ( v25 == 14 )
              goto LABEL_93;
            if ( v25 > 7 )
            {
              v26 = v25 - 8;
              if ( v26 )
              {
                v27 = v26 - 1;
                if ( v27 )
                {
                  v28 = v27 - 1;
                  if ( v28 )
                  {
                    v29 = v28 - 1;
                    if ( v29 )
                    {
                      v30 = v29 - 1;
                      if ( !v30 )
                        goto LABEL_37;
                      if ( v30 == 1 )
                      {
                        v49 = PiProcessResourceRequirementsChanged(v5);
                        v0 = (unsigned __int8)v0;
                        if ( v49 >= 0 )
                          v3 = v49;
                        else
                          v0 = 1;
                        v66 = v0;
LABEL_39:
                        if ( v24 )
                        {
                          PnpLogActionQueueEvent(v24, *(unsigned int *)(v5 + 24), 2LL, v3);
                          ObfDereferenceObjectWithTag(*(PVOID *)(v5 + 16), 0x65706E50u);
                        }
                        goto LABEL_41;
                      }
LABEL_122:
                      v3 = -1073741823;
                      goto LABEL_39;
                    }
                    PowerRelations = PiProcessRequeryDeviceState(v5);
LABEL_38:
                    v3 = PowerRelations;
                    goto LABEL_39;
                  }
                }
              }
LABEL_93:
              PowerRelations = PiProcessReenumeration(v5);
LABEL_110:
              v64 = 0;
              goto LABEL_38;
            }
            if ( v25 == 7 )
            {
              v62 = 1;
              goto LABEL_39;
            }
            if ( !v25 )
            {
              LOBYTE(v66) = 1;
              goto LABEL_39;
            }
            v45 = v25 - 1;
            if ( v45 )
            {
              v46 = v45 - 1;
              if ( !v46 )
              {
                PowerRelations = PpProcessClearProblem(v5);
                goto LABEL_38;
              }
              v47 = v46 - 1;
              if ( v47 )
              {
                v48 = v47 - 2;
                if ( v48 )
                {
                  if ( v48 != 1 )
                    goto LABEL_122;
                  PowerRelations = PnpProcessRebalance(v5);
                }
                else
                {
                  v55 = *(_QWORD *)(v5 + 16);
                  if ( v55 )
                    v56 = *(_QWORD *)(*(_QWORD *)(v55 + 312) + 40LL);
                  else
                    v56 = 0LL;
                  PowerRelations = PiQueryPowerRelations(v56, 0LL);
                }
                goto LABEL_38;
              }
            }
LABEL_103:
            PowerRelations = PiProcessClearDeviceProblem(v5);
            goto LABEL_38;
          }
          if ( v25 > 21 )
          {
            v57 = v25 - 22;
            if ( v57 )
            {
              v58 = v57 - 1;
              if ( v58 )
              {
                v59 = v58 - 1;
                if ( v59 )
                {
                  v60 = v59 - 1;
                  if ( v60 )
                  {
                    v61 = v60 - 1;
                    if ( v61 )
                    {
                      if ( v61 != 1 )
                        goto LABEL_122;
                      PowerRelations = PiDmaGuardProcessUpdateConsoleLockStateAction(v5);
                    }
                    else
                    {
                      PowerRelations = PiProcessDeviceResetAction(v5);
                    }
                    goto LABEL_38;
                  }
                  goto LABEL_103;
                }
              }
            }
          }
          else if ( v25 != 21 )
          {
            v50 = v25 - 15;
            if ( !v50 )
            {
              PowerRelations = PiProcessSetDeviceProblem(v5);
              goto LABEL_38;
            }
            v51 = v50 - 1;
            if ( !v51 )
            {
LABEL_37:
              PowerRelations = PiRestartDevice(v5);
              goto LABEL_38;
            }
            v52 = v51 - 1;
            if ( v52 )
            {
              v53 = v52 - 1;
              if ( !v53 )
              {
                v63 = 1;
                goto LABEL_39;
              }
              v54 = v53 - 1;
              if ( v54 )
              {
                if ( v54 != 1 )
                  goto LABEL_122;
              }
              else
              {
                DWORD1(NotificationStructure[1]) = 0;
                *(GUID *)((char *)NotificationStructure + 4) = GUID_TARGET_DEVICE_TRANSPORT_RELATIONS_CHANGED;
                LODWORD(NotificationStructure[0]) = 2359297;
                *((_QWORD *)&NotificationStructure[1] + 1) = 0LL;
                v69 = 0xFFFFFFFFLL;
                IoReportTargetDeviceChangeAsynchronous(*(PDEVICE_OBJECT *)(v5 + 16), NotificationStructure, 0LL, 0LL);
              }
              PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent(*(_QWORD *)(v5 + 16));
              goto LABEL_39;
            }
            PowerRelations = PiProcessStartSystemDevices(v5);
            goto LABEL_110;
          }
          PowerRelations = PiConfigureDevice(v5);
          goto LABEL_38;
        }
        v3 = -1073741823;
      }
LABEL_41:
      v32 = *(unsigned int *)(v5 + 24);
      v33 = KeAcquireSpinLockRaiseToDpc(&qword_140F0E200);
      KeReleaseSpinLock(&qword_140F0E200, v33);
      v34 = KeAcquireSpinLockRaiseToDpc(&qword_140F06950);
      if ( byte_140F069D0 )
      {
        *(&PopDirectedDripsDiagSessionContext + v32 + 26) = (char *)*(&PopDirectedDripsDiagSessionContext + v32 + 26)
                                                          + MEMORY[0xFFFFF78000000008]
                                                          - qword_140F069E8;
        qword_140F069E8 = 0LL;
      }
      dword_140F0695C = 28;
      KeReleaseSpinLock(&qword_140F06950, v34);
      do
      {
        v35 = *(unsigned int ***)v5;
        if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 )
          goto LABEL_71;
        v36 = *v35;
        if ( *((unsigned int ***)*v35 + 1) != v35 )
          goto LABEL_71;
        *(_QWORD *)v5 = v36;
        *((_QWORD *)v36 + 1) = v5;
        v37 = *((unsigned int *)v35 + 6);
        v38 = KeAcquireSpinLockRaiseToDpc(&qword_140F0E200);
        v39 = dword_140F0E208-- == 1;
        v40 = v38;
        if ( v39 )
          PopDirectedDripsClearDisengageReason(4);
        KeReleaseSpinLock(&qword_140F0E200, v40);
        v41 = KeAcquireSpinLockRaiseToDpc(&qword_140F06950);
        if ( !--dword_140F06958 && byte_140F069D0 )
        {
          qword_140F069D8 += MEMORY[0xFFFFF78000000008] - qword_140F069E0;
          qword_140F069E0 = 0LL;
        }
        --*((_DWORD *)&PopDirectedDripsDiagSessionContext + v37 + 16);
        KeReleaseSpinLock(&qword_140F06950, v41);
        v42 = v35[7];
        if ( v42 )
          *v42 = v3;
        v43 = (struct _KEVENT *)v35[6];
        if ( v43 )
          KeSetEvent(v43, 0, 0);
        if ( v35 == (unsigned int **)v5 )
        {
          v9 = 0;
          if ( v64 )
            ObfDereferenceObjectWithTag(v35[2], 0x746C6644u);
        }
        PnpDeleteDeviceActionRequest(v35);
      }
      while ( v9 );
      v0 = v66;
      v1 = v62;
      v2 = v63;
      if ( v65 )
        KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink = 0LL;
    }
    else if ( (_BYTE)v0 || v1 )
    {
      LODWORD(v67) = 3;
      BYTE4(v67) = PnPBootDriversInitialized;
      ObfReferenceObjectWithTag(*((PVOID *)IopRootDeviceNode + 4), 0x746C6644u);
      PipProcessDevNodeTree((_DWORD)IopRootDeviceNode, 0, (unsigned int)&v67, v1 == 0 ? 3 : 0, v0, 0, 0);
      LOBYTE(v0) = 0;
      v62 = 0;
      v66 = v0;
      v1 = 0;
    }
    else
    {
      PnpCompleteSystemStartProcess();
      v2 = 0;
      v63 = 0;
    }
  }
  PnpEnumerationInProgress = 0;
  KeSetEvent(&PnpEnumerationLock, 0, 0);
  KeReleaseSpinLock(&PnpSpinLock, v6);
  _InterlockedExchange64((volatile __int64 *)&PnpDeviceActionThread, 0LL);
  return PpDevNodeUnlockTree(1LL);
}
