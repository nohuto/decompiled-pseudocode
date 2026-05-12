/*
 * XREFs of RaidUnitCompleteIrpRequest @ 0x14000B1C0
 * Callers:
 *     RaidUnitSubmitIrpRequest @ 0x14000AA60 (RaidUnitSubmitIrpRequest.c)
 *     RaidCheckPerProcessorCompletions @ 0x14001F090 (RaidCheckPerProcessorCompletions.c)
 *     RaidpAdapterRedirectDpcRoutine @ 0x14001F240 (RaidpAdapterRedirectDpcRoutine.c)
 *     RaidpAdapterDpcRoutine @ 0x14002A4B0 (RaidpAdapterDpcRoutine.c)
 *     StorPortNotification @ 0x14004B4F0 (StorPortNotification.c)
 * Callees:
 *     RaidUnitSubmitIrpRequest @ 0x14000AA60 (RaidUnitSubmitIrpRequest.c)
 *     StorpTelemetryCollectPerfData @ 0x14000B4A0 (StorpTelemetryCollectPerfData.c)
 *     DbgLogRequest @ 0x140015470 (DbgLogRequest.c)
 *     RaidAdapterPoFxIdleComponent @ 0x14001D890 (RaidAdapterPoFxIdleComponent.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x14001DA00 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidStartNextIoPacket @ 0x140021350 (RaidStartNextIoPacket.c)
 *     StorpTelemetryCollectErrorData @ 0x1400220F0 (StorpTelemetryCollectErrorData.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     RaUnitCheckForwardIoOutstanding @ 0x140054AEC (RaUnitCheckForwardIoOutstanding.c)
 *     RaUnitAttributedIoComplete @ 0x140091B48 (RaUnitAttributedIoComplete.c)
 *     RaUnitAttributedIoDequeued @ 0x140091C18 (RaUnitAttributedIoDequeued.c)
 *     StorEtwIOIrpRequestServiceTimeEventData @ 0x1400A7DD0 (StorEtwIOIrpRequestServiceTimeEventData.c)
 *     StorEtwLogoIrpRequestServiceTimeEventData @ 0x1400A804C (StorEtwLogoIrpRequestServiceTimeEventData.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaidUnitCompleteIrpRequest(PIRP Irp, int a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  __int64 DeviceExtension; // rbx
  unsigned __int64 v6; // r8
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  __int64 result; // rax
  unsigned __int8 MajorFunction; // al
  char v11; // al
  int v12; // r9d
  unsigned int Length; // r15d
  int Status; // edx
  int v15; // ecx
  __int64 v16; // r15
  KIRQL v17; // r9
  __int64 v18; // rdx
  __int64 *v19; // rcx
  __int64 *v20; // r8
  __int64 v21; // rax
  int v22; // r8d
  __int64 v23; // rdx
  __int64 *v24; // rax
  unsigned __int8 v25; // di
  __int64 v26; // rsi
  unsigned __int64 v27; // r8
  signed __int32 v28; // eax
  signed __int32 v29; // ett
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rcx
  __int64 v33; // [rsp+68h] [rbp-11h] BYREF
  __int64 *v34; // [rsp+70h] [rbp-9h]
  unsigned __int64 QpcTimeStamp; // [rsp+78h] [rbp-1h] BYREF
  _QWORD v36[2]; // [rsp+80h] [rbp+7h] BYREF
  __int128 v37; // [rsp+90h] [rbp+17h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v34 = &v33;
  v33 = (__int64)&v33;
  v36[0] = 0LL;
  QpcTimeStamp = 0LL;
  DeviceExtension = (__int64)CurrentStackLocation->DeviceObject->DeviceExtension;
  if ( StorEtwLoggingEnabled )
  {
    if ( (byte_140171461 & 1) != 0 )
      StorEtwIOIrpRequestServiceTimeEventData(Irp, 0LL, 0LL);
    if ( *(_DWORD *)(DeviceExtension + 1940) && (byte_140171463 & 2) != 0 )
      StorEtwLogoIrpRequestServiceTimeEventData(Irp, 0LL, 0LL);
    if ( (unsigned __int8)(CurrentStackLocation->MajorFunction - 3) <= 1u && byte_140171461 < 0 )
    {
      v37 = 0LL;
      IoGetActivityIdIrp(Irp, &v37);
      if ( byte_140171461 < 0 )
      {
        Status = Irp->IoStatus.Status;
        v15 = Status >> 31;
        LOBYTE(v15) = ((Status >> 31) & 3) + 1;
        McTemplateK0pduuuuup_EtwWriteTransfer(
          v15,
          Status,
          (unsigned int)&v37,
          (_DWORD)Irp,
          Status,
          v15,
          (Status >> 31) & 2,
          0,
          0,
          0,
          (char)Irp);
      }
    }
  }
  if ( *(_DWORD *)(DeviceExtension + 2372) )
  {
    MajorFunction = CurrentStackLocation->MajorFunction;
    if ( CurrentStackLocation->MajorFunction == 4 )
    {
      v11 = 42;
    }
    else if ( MajorFunction == 3 )
    {
      v11 = 40;
    }
    else if ( MajorFunction == 9 )
    {
      v11 = 53;
    }
    else
    {
      v11 = 0;
    }
    StorpTelemetryCollectPerfData(0, 0, DeviceExtension, (_DWORD)Irp, v11);
  }
  if ( g_StorpTraceLoggingErrorDataEnabled && Irp->IoStatus.Status < 0 )
    StorpTelemetryCollectErrorData(DeviceExtension, Irp, 0LL, 0LL);
  if ( (*(_BYTE *)(DeviceExtension + 506) & 2) != 0 )
  {
    Irp->IoStatus.Information = 0LL;
    Irp->IoStatus.Status = -1073740534;
    _InterlockedIncrement64((volatile signed __int64 *)(DeviceExtension + 2232));
  }
  if ( *(_DWORD *)(*(_QWORD *)(DeviceExtension + 32) + 12LL) )
  {
    QpcTimeStamp = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
    v16 = _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(DeviceExtension + 32) + 16LL), QpcTimeStamp);
    if ( (int)IoGetIoAttributionHandle(Irp, v36) >= 0 )
      RaUnitAttributedIoComplete(DeviceExtension, (_DWORD)Irp, v36[0], QpcTimeStamp, v16);
  }
  if ( (qword_140170460 & 0x2000) != 0 )
  {
    v12 = Irp->IoStatus.Status;
    QpcTimeStamp = 0LL;
    DbgLogRequest(
      *(_QWORD *)(DeviceExtension + 24),
      50,
      (_DWORD)Irp,
      v12,
      CurrentStackLocation->MajorFunction,
      0LL,
      0LL);
  }
  if ( a2 < 0 )
  {
    Length = 0;
    if ( (unsigned __int8)(CurrentStackLocation->MajorFunction - 3) <= 1u )
      Length = CurrentStackLocation->Parameters.Read.Length;
    v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)(DeviceExtension + 32) + 24LL));
    --*(_DWORD *)(*(_QWORD *)(DeviceExtension + 32) + 4LL);
    *(_DWORD *)(*(_QWORD *)(DeviceExtension + 32) + 8LL) -= Length;
    while ( 1 )
    {
      v18 = *(_QWORD *)(DeviceExtension + 32);
      v19 = *(__int64 **)(v18 + 48);
      v20 = (__int64 *)(v18 + 48);
      if ( v19 == (__int64 *)(v18 + 48) || *(int *)(v18 + 4) >= 8 || *(int *)(v18 + 8) >= 0x40000 )
        break;
      if ( (__int64 *)v19[1] != v20 )
        goto LABEL_76;
      v21 = *v19;
      if ( *(__int64 **)(*v19 + 8) != v19 )
        goto LABEL_76;
      *v20 = v21;
      *(_QWORD *)(v21 + 8) = v20;
      v22 = 0;
      v23 = v19[2];
      if ( (unsigned __int8)(*(_BYTE *)v23 - 3) <= 1u )
        v22 = *(_DWORD *)(v23 + 8);
      ++*(_DWORD *)(*(_QWORD *)(DeviceExtension + 32) + 4LL);
      *(_DWORD *)(*(_QWORD *)(DeviceExtension + 32) + 8LL) += v22;
      v24 = v34;
      if ( (__int64 *)*v34 != &v33 )
LABEL_76:
        __fastfail(3u);
      v19[1] = (__int64)v34;
      *v19 = (__int64)&v33;
      *v24 = (__int64)v19;
      v34 = v19;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v18 + 24), v17);
  }
  IofCompleteRequest(Irp, 0);
  if ( (*(_DWORD *)(*(_QWORD *)(DeviceExtension + 32) + 80LL) & 1) != 0 )
  {
    if ( _InterlockedExchangeAdd(
           (volatile signed __int32 *)(((unsigned __int64)(a2 & 0x7FFFFFFF) << 6) + *(_QWORD *)(DeviceExtension + 40) + 4),
           0xFFFFFFFE) == 2
      && _InterlockedExchangeAdd(*(volatile signed __int32 **)(DeviceExtension + 32), 0xFFFFFFFC) == 4 )
    {
      v25 = (*(_DWORD *)(*(_QWORD *)(DeviceExtension + 32) + 80LL) >> 1) & 3;
      if ( !_InterlockedCompareExchange(*(volatile signed __int32 **)(DeviceExtension + 32), 1, 0) )
      {
        v26 = *(_QWORD *)(DeviceExtension + 24);
        if ( (v25 & 1) != 0 && (unsigned __int8)RaidUnitCheckAndAcquirePoFx(DeviceExtension) )
        {
          PoFxIdleComponent(**(_QWORD **)(DeviceExtension + 1872), 0LL, 0LL);
          ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(DeviceExtension + 1864));
        }
        if ( v25 >= 2u && *(_QWORD *)(v26 + 4960) )
          RaidAdapterPoFxIdleComponent(v26, 0LL, 0LL);
        v27 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
        v28 = *(_DWORD *)(v27 + *(_QWORD *)(DeviceExtension + 40));
        while ( (v28 & 1) == 0 )
        {
          v29 = v28;
          v28 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)(v27 + *(_QWORD *)(DeviceExtension + 40)),
                  v28 - 2,
                  v28);
          if ( v29 == v28 )
            goto LABEL_18;
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(DeviceExtension + 1032), 0xFFFFFFFF) == 1 )
          KeSetEvent((PRKEVENT)(DeviceExtension + 520), 0, 0);
      }
    }
  }
  else
  {
    v6 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
    v7 = *(_DWORD *)(v6 + *(_QWORD *)(DeviceExtension + 40) + 4);
    while ( (v7 & 1) == 0 )
    {
      v8 = v7;
      v7 = _InterlockedCompareExchange(
             (volatile signed __int32 *)(v6 + *(_QWORD *)(DeviceExtension + 40) + 4),
             v7 - 2,
             v7);
      if ( v8 == v7 )
        goto LABEL_18;
    }
    _InterlockedAdd(*(volatile signed __int32 **)(DeviceExtension + 32), 0xFFFFFFFC);
  }
LABEL_18:
  if ( (*(_DWORD *)(*(_QWORD *)(DeviceExtension + 32) + 80LL) & 0x100) != 0
    && !(unsigned __int8)RaUnitCheckForwardIoOutstanding(DeviceExtension) )
  {
    RaidStartNextIoPacket(DeviceExtension, 0LL, 1LL);
  }
  while ( 1 )
  {
    result = v33;
    if ( (__int64 *)v33 == &v33 )
      return result;
    if ( *(__int64 **)(v33 + 8) != &v33 )
      goto LABEL_76;
    v30 = *(_QWORD *)v33;
    if ( *(_QWORD *)(*(_QWORD *)v33 + 8LL) != v33 )
      goto LABEL_76;
    v33 = *(_QWORD *)v33;
    *(_QWORD *)(v30 + 8) = &v33;
    v31 = result - 168;
    if ( (int)IoGetIoAttributionHandle(result - 168, v36) >= 0 )
      RaUnitAttributedIoDequeued(v32, v31, v36[0]);
    RaidUnitSubmitIrpRequest(DeviceExtension, v31, 1);
  }
}
