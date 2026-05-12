/*
 * XREFs of RaidAdapterPowerUpDeviceCompletionLastStep @ 0x14000F548
 * Callers:
 *     RaidAdapterDevicePowerUpSrbComplete @ 0x14000EAC0 (RaidAdapterDevicePowerUpSrbComplete.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x14000F240 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaidAdapterSendPowerToMiniportWorkItemRoutine @ 0x140077A10 (RaidAdapterSendPowerToMiniportWorkItemRoutine.c)
 * Callees:
 *     RaidUnitProcessSetDevicePowerIrp @ 0x140007B60 (RaidUnitProcessSetDevicePowerIrp.c)
 *     RaidResumeAdapterQueue @ 0x14000FA30 (RaidResumeAdapterQueue.c)
 *     RaidAdapterRestartQueues @ 0x14000FD00 (RaidAdapterRestartQueues.c)
 *     RaidAdapterRestartAdapter @ 0x14001BD1C (RaidAdapterRestartAdapter.c)
 *     RaidIsAdapterControlSupported @ 0x14001C7B0 (RaidIsAdapterControlSupported.c)
 *     StorPortUnitIdleState @ 0x14001CBA0 (StorPortUnitIdleState.c)
 *     StorUpdateCrashDumpPowerReady @ 0x14001D620 (StorUpdateCrashDumpPowerReady.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     RaidAdapterReInitialize @ 0x140054250 (RaidAdapterReInitialize.c)
 *     WPP_SF_qqD @ 0x140055624 (WPP_SF_qqD.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     McTemplateK0qpd_EtwWriteTransfer @ 0x140076740 (McTemplateK0qpd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

void __fastcall RaidAdapterPowerUpDeviceCompletionLastStep(PIRP Irp, __int64 a2)
{
  KIRQL v4; // bl
  unsigned int LowPart; // ebx
  bool v6; // zf
  __int64 v7; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  PSLIST_ENTRY v9; // rax
  int v10; // edx
  int v11; // ecx
  PSLIST_ENTRY v12; // rbx
  IRP *Next; // rdx
  unsigned __int64 v14; // r8
  signed __int32 v15; // eax
  signed __int32 v16; // ett
  void *v17; // rdx
  int *Information; // rax
  int v19; // ecx
  unsigned __int64 ProviderId; // rdx
  _BYTE *v21; // rcx
  _BYTE *v22; // rax
  char v23; // bl
  unsigned int v24; // eax
  unsigned __int8 v25; // r12
  char v26; // r11
  char v27; // al
  int v28; // ecx
  __int64 v29; // r8
  char v30; // r15
  _BYTE *v31; // r9
  unsigned __int8 v32; // r10
  char *v33; // r11
  unsigned int v34; // ecx
  unsigned int *v35; // r13
  __int64 v36; // rax
  unsigned __int64 v37; // r14
  char v38; // cl
  char v39; // r8
  char v40; // [rsp+60h] [rbp-39h]
  char v41; // [rsp+61h] [rbp-38h]
  unsigned int v42; // [rsp+64h] [rbp-35h]
  unsigned int v43; // [rsp+68h] [rbp-31h]
  __int64 v44; // [rsp+70h] [rbp-29h] BYREF
  __int64 v45; // [rsp+78h] [rbp-21h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-19h] BYREF
  __int128 v47; // [rsp+98h] [rbp-1h] BYREF
  __int128 v48; // [rsp+A8h] [rbp+Fh] BYREF

  LODWORD(v45) = 0;
  v44 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (unsigned __int8)RaidIsAdapterControlSupported(a2 + 376, 2LL) )
    RaidAdapterRestartAdapter(a2);
  else
    RaidAdapterReInitialize(a2);
  RaidResumeAdapterQueue(a2, 0LL, 0LL);
  v4 = KfRaiseIrql(2u);
  RaidAdapterRestartQueues(a2, 0LL);
  KeLowerIrql(v4);
  LowPart = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a2 + 80), &LockHandle);
  *(_DWORD *)(a2 + 348) = LowPart;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  PoSetPowerState(*(PDEVICE_OBJECT *)(a2 + 8), DevicePowerState, (POWER_STATE)LowPart);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      28LL,
      &WPP_3e1ffd7ece683aaa229dca75055d12f9_Traceguids,
      a2,
      Irp,
      Irp->IoStatus.Status);
  }
  if ( StorEtwLoggingEnabled )
  {
    v48 = 0LL;
    IoGetActivityIdIrp(Irp, &v48);
    if ( (byte_140171462 & 0x10) != 0 )
      McTemplateK0qpd_EtwWriteTransfer(
        v11,
        v10,
        (unsigned int)&v48,
        *(_DWORD *)(a2 + 56),
        (char)Irp,
        Irp->IoStatus.Status);
  }
  if ( (*(_BYTE *)(a2 + 109) & 1) != 0 )
  {
    LODWORD(v44) = *(_DWORD *)(a2 + 860);
    v45 = *(_QWORD *)(a2 + 848);
    IoReportInterruptActive(&v44);
  }
  if ( *(_DWORD *)(a2 + 96) && *(_QWORD *)(a2 + 5016) )
    StorUpdateCrashDumpPowerReady(a2);
  v6 = StorEtwLoggingEnabled == 0;
  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
  if ( v6 )
    goto LABEL_12;
  v47 = 0LL;
  IoGetActivityIdIrp(Irp, &v47);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  switch ( CurrentStackLocation->MajorFunction )
  {
    case 0xEu:
      if ( (byte_140171462 & 8) == 0 )
        break;
      v17 = &EventNonReadWriteRequestComplete;
LABEL_29:
      McTemplateK0pd_EtwWriteTransfer(v7, v17, &v47, Irp, Irp->IoStatus.Status);
      break;
    case 0xFu:
      if ( byte_140171461 >= 0 )
        break;
      ProviderId = CurrentStackLocation->Parameters.WMI.ProviderId;
      v30 = 0;
      v31 = 0LL;
      v40 = 0;
      v32 = 0;
      v23 = 0;
      v26 = 0;
      v25 = 0;
      if ( *(_BYTE *)(ProviderId + 2) != 40 )
      {
        v38 = *(_BYTE *)(ProviderId + 72);
        v31 = *(_BYTE **)(ProviderId + 32);
        v32 = *(_BYTE *)(ProviderId + 11);
        v30 = *(_BYTE *)(ProviderId + 4);
        if ( !*(_BYTE *)(ProviderId + 2) )
          goto LABEL_93;
        break;
      }
      v33 = 0LL;
      v41 = 0;
      if ( *(_DWORD *)(ProviderId + 20) )
        break;
      v34 = 0;
      v42 = 0;
      v43 = *(_DWORD *)(ProviderId + 56);
      if ( !v43 )
        goto LABEL_85;
      v35 = (unsigned int *)(ProviderId + 120);
      while ( 1 )
      {
        v36 = *v35;
        if ( (unsigned int)v36 >= 0x80 )
        {
          v37 = *(unsigned int *)(ProviderId + 16);
          if ( (unsigned int)v36 < (unsigned int)v37 )
          {
            if ( *(_DWORD *)(v36 + ProviderId) == 64 )
            {
              if ( v36 + 40 <= v37 )
              {
                if ( *(_BYTE *)(v36 + ProviderId + 10) )
                  v33 = (char *)(v36 + ProviderId + 24);
                v31 = *(_BYTE **)(v36 + ProviderId + 16);
LABEL_91:
                v30 = *(_BYTE *)(v36 + ProviderId + 8);
                v32 = *(_BYTE *)(v36 + ProviderId + 9);
LABEL_85:
                if ( v33 )
                {
                  v38 = *v33;
                  v26 = 0;
LABEL_93:
                  if ( ((v38 - 8) & 0x5D) == 0 )
                  {
                    v39 = *(_BYTE *)(ProviderId + 3);
                    if ( v39 == 1 || !v31 || !v32 )
                      goto LABEL_53;
                    LOBYTE(ProviderId) = 0;
                    v21 = &v31[v32];
                    v22 = v31 + 8;
                    if ( (unsigned __int8)((*v31 & 0x7F) - 114) <= 1u )
                    {
                      if ( v22 <= v21 )
                      {
                        LOBYTE(ProviderId) = 1;
                        v26 = v31[2];
                        v23 = v31[1] & 0xF;
                        v25 = v31[3];
                      }
                    }
                    else
                    {
                      if ( v22 <= v21 )
                      {
                        v23 = v31[2] & 0xF;
                        v24 = v32;
                        if ( (unsigned int)(unsigned __int8)v31[7] + 8 <= v32 )
                          v24 = (unsigned __int8)v31[7] + 8;
                        ProviderId = (unsigned __int64)&v31[v24];
                        if ( (unsigned __int64)(v31 + 13) > ProviderId )
                          v40 = 0;
                        else
                          v40 = v31[12];
                        if ( (unsigned __int64)(v31 + 14) > ProviderId )
                          v25 = 0;
                        else
                          v25 = v31[13];
                        LOBYTE(ProviderId) = 1;
                      }
                      v26 = v40;
                    }
                    if ( (_BYTE)ProviderId )
                    {
                      v27 = v26;
                      v28 = v25;
                    }
                    else
                    {
LABEL_53:
                      v23 = 0;
                      v27 = 0;
                      v28 = 0;
                    }
                    McTemplateK0pduuuuup_EtwWriteTransfer(
                      v28,
                      ProviderId,
                      (unsigned int)&v47,
                      (_DWORD)Irp,
                      Irp->IoStatus.Status,
                      v39,
                      v30,
                      v23,
                      v27,
                      v28,
                      (char)Irp);
                  }
                }
                goto LABEL_12;
              }
            }
            else if ( *(_DWORD *)(v36 + ProviderId) == 65 )
            {
              if ( v36 + 56 <= v37 )
              {
                v41 = 1;
                if ( *(_BYTE *)(v36 + ProviderId + 10) )
                  v33 = (char *)(v36 + ProviderId + 24);
                v30 = *(_BYTE *)(v36 + ProviderId + 8);
                v31 = *(_BYTE **)(v36 + ProviderId + 16);
                v32 = *(_BYTE *)(v36 + ProviderId + 9);
              }
            }
            else if ( *(_DWORD *)(v36 + ProviderId) == 66 && v36 + 40 <= v37 )
            {
              if ( *(_DWORD *)(v36 + ProviderId + 12) )
                v33 = (char *)(v36 + ProviderId + 32);
              v31 = *(_BYTE **)(v36 + ProviderId + 24);
              goto LABEL_91;
            }
            if ( v41 )
              goto LABEL_85;
            v34 = v42;
          }
        }
        ++v34;
        ++v35;
        v42 = v34;
        if ( v34 >= v43 )
          goto LABEL_85;
      }
    case 0x1Bu:
      if ( CurrentStackLocation->MinorFunction == 7 && !CurrentStackLocation->Parameters.Read.Length )
      {
        if ( (byte_140171462 & 0x40) != 0 )
        {
          Information = (int *)Irp->IoStatus.Information;
          if ( Information )
            v19 = *Information;
          else
            v19 = 0;
          McTemplateK0pqd_EtwWriteTransfer(
            v19,
            (_DWORD)CurrentStackLocation,
            (unsigned int)&v47,
            (_DWORD)Irp,
            v19,
            Irp->IoStatus.Status);
        }
        break;
      }
      if ( (byte_140171462 & 0x20) != 0 )
      {
        v17 = &EventPnpRequestComplete;
        goto LABEL_29;
      }
      break;
  }
LABEL_12:
  IofCompleteRequest(Irp, 0);
LABEL_13:
  while ( 1 )
  {
    v9 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(a2 + 4944));
    if ( !v9 )
      break;
    v12 = v9 - 129;
    if ( *((_BYTE *)&v9[-2].Next + 9) )
    {
      Next = (IRP *)v12[128].Next;
      v12[128].Next = 0LL;
      *((_BYTE *)&v12[127].Next + 9) = 0;
      _interlockedbittestandset((volatile signed __int32 *)&v12[32], 7u);
      RaidUnitProcessSetDevicePowerIrp((char *)&v9[-129], Next);
      _interlockedbittestandreset((volatile signed __int32 *)&v12[32], 7u);
      v14 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
      v15 = *(_DWORD *)(v14 + *((_QWORD *)&v12[2].Next + 1));
      while ( (v15 & 1) == 0 )
      {
        v16 = v15;
        v15 = _InterlockedCompareExchange(
                (volatile signed __int32 *)(v14 + *((_QWORD *)&v12[2].Next + 1)),
                v15 - 2,
                v15);
        if ( v16 == v15 )
          goto LABEL_13;
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v12[64].Next + 2, 0xFFFFFFFF) == 1 )
        KeSetEvent((PRKEVENT)(&v12[32].Next + 1), 0, 0);
    }
    else if ( *((_BYTE *)&v12[127].Next + 8) )
    {
      v29 = *((unsigned int *)&v12[127].Next + 3);
      *((_BYTE *)&v12[127].Next + 8) = 0;
      StorPortUnitIdleState(&v9[-129], 0LL, v29);
    }
  }
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a2 + 336));
}
