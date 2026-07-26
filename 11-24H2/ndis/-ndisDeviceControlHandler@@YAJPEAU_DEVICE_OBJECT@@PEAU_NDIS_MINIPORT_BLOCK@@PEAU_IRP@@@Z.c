/*
 * XREFs of ?ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x14000E580
 * Callers:
 *     ?ndisDeviceControlIrpHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x14000C6B0 (-ndisDeviceControlIrpHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     NdisWdfDeviceControlIrpHandler @ 0x140077960 (NdisWdfDeviceControlIrpHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisReferenceTopMiniportByNameForNsi@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU1@KKEW4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000F2F0 (-ndisReferenceTopMiniportByNameForNsi@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU1@KKEW4_NDIS_NSI_REFTAG@@.c)
 *     ?ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1400136E0 (-ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisFreeRefCountStacksInBlock@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x140013860 (-ndisFreeRefCountStacksInBlock@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x140013990 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     ?ndisGetAdapterRssInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@EPEAH@Z @ 0x14002B940 (-ndisGetAdapterRssInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@EPEAH@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1400353A0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisGetAdapterHardwareInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z @ 0x14007B4D0 (-ndisGetAdapterHardwareInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z.c)
 *     ?ndisGetHardwareInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z @ 0x14007B6E0 (-ndisGetHardwareInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008ADC0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisGetPowerInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z @ 0x14008B2E0 (-ndisGetPowerInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ?ndisGetRdmaCapabilities@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x140135BC0 (-ndisGetRdmaCapabilities@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisPcwGetMiniportDataBlock@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14013F6CC (-ndisPcwGetMiniportDataBlock@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL@@AEAK@Z @ 0x14015A1F0 (-ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL.c)
 *     ?ndisMiniportFatalError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x14016B4A0 (-ndisMiniportFatalError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 */

__int64 __fastcall ndisDeviceControlHandler(
        struct _DEVICE_OBJECT *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _IRP *a3)
{
  struct _IRP *v3; // r13
  struct _NDIS_MINIPORT_BLOCK *v4; // r15
  signed __int32 v6; // eax
  int v7; // edx
  unsigned int v8; // r8d
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  _FILE_OBJECT *FileObject; // rdi
  __int128 *FsContext; // rdi
  struct _NDIS_MINIPORT_BLOCK *v12; // rax
  struct _NDIS_MINIPORT_BLOCK *v13; // rbx
  __int64 v14; // rcx
  unsigned int LowPart; // r8d
  unsigned int v16; // edi
  _IO_STACK_LOCATION *v17; // rdx
  struct _NDIS_LOG *Log; // rdi
  KIRQL v19; // r13
  ULONG_PTR NsiRefCountTracker; // r8
  __int64 v21; // r9
  struct _KEVENT *NsiRequestsCompletedEvent; // rcx
  int v24; // edx
  KIRQL v25; // al
  _BYTE *v26; // rdx
  ULONG_PTR RefCountTracker; // r8
  KIRQL v28; // r13
  __int64 v29; // r9
  int v30; // esi
  int v31; // edx
  int v32; // edx
  unsigned __int8 j; // cl
  _BYTE *v35; // rdx
  char v36; // al
  unsigned __int8 m; // al
  char v38; // cl
  struct _KEVENT *RemoveReadyEvent; // rcx
  unsigned __int8 v40; // r8
  unsigned int HardwareInfo; // eax
  int v42; // eax
  _IO_STACK_LOCATION *v43; // rcx
  __int64 (__fastcall *v44)(struct _DEVICE_OBJECT *, struct _IRP *); // rax
  int v45; // edx
  _IO_STACK_LOCATION *v46; // rdx
  _IO_STACK_LOCATION *v47; // rdx
  _IO_STATUS_BLOCK *p_IoStatus; // rdi
  unsigned int RdmaCapabilities; // eax
  _IO_STACK_LOCATION *v50; // rdi
  _IRP::<unnamed_type_AssociatedIrp> v51; // rsi
  struct _NDIS_PD_BLOCK *PDBlock; // rdx
  KIRQL v53; // dl
  _IO_STACK_LOCATION *v54; // rax
  _NDIS_SRIOV_CAPABILITIES *SriovCurrentCapabilities; // rax
  _NDIS_SRIOV_CAPABILITIES *v56; // rax
  unsigned int v57; // edx
  ULONG_PTR v58; // rsi
  struct _NDIS_REFCOUNT_STACK_BLOCK *i; // r14
  ULONG_PTR v60; // rsi
  unsigned int v61; // edx
  struct _NDIS_REFCOUNT_STACK_BLOCK *k; // r12
  KSPIN_LOCK *v63; // r14
  ULONG ByteCount; // r12d
  _MDL *MdlAddress; // rcx
  char *MappedSystemVa; // r13
  __int64 v67; // rcx
  ULONG v68; // eax
  char *v69; // rdx
  size_t v70; // r8
  char *v71; // rcx
  __int64 v72; // rcx
  int v73; // ecx
  unsigned int v74; // ecx
  unsigned int v75; // eax
  _IRP *MasterIrp; // r14
  int v77; // ecx
  int v78; // esi
  int v79; // ecx
  int v80; // ecx
  struct _NDIS_PCW_DATA_BLOCK *MiniportDataBlock; // r12
  unsigned int v82; // r14d
  __int64 v83; // r13
  unsigned __int64 Length; // rcx
  _IRP::<unnamed_type_AssociatedIrp> v85; // rsi
  unsigned int v86; // r14d
  unsigned int v87; // eax
  unsigned int v88; // r8d
  struct _NDIS_PCW_DATA_BLOCK *v89; // rax
  struct _NDIS_PCW_DATA_BLOCK *v90; // r9
  unsigned int v91; // r8d
  __int64 v92; // r10
  __int64 v93; // rdx
  _IO_STATUS_BLOCK *v94; // rax
  _IO_STATUS_BLOCK *v95; // rcx
  _IO_STATUS_BLOCK v96; // xmm0
  unsigned int v97; // r14d
  _NDIS_SRIOV_CAPABILITIES *v98; // rax
  _NDIS_SRIOV_CAPABILITIES *v99; // rax
  _IRP::<unnamed_type_AssociatedIrp> v100; // rcx
  UCHAR Irql[4]; // [rsp+40h] [rbp-89h] BYREF
  int v102; // [rsp+44h] [rbp-85h] BYREF
  unsigned __int8 v103; // [rsp+48h] [rbp-81h] BYREF
  UCHAR v104; // [rsp+49h] [rbp-80h] BYREF
  UCHAR v105[2]; // [rsp+4Ah] [rbp-7Fh] BYREF
  unsigned int v106; // [rsp+4Ch] [rbp-7Dh] BYREF
  __int128 v107; // [rsp+50h] [rbp-79h] BYREF
  __int128 v108; // [rsp+60h] [rbp-69h]
  __int128 v109; // [rsp+70h] [rbp-59h]
  __int128 v110; // [rsp+80h] [rbp-49h]
  __int128 v111; // [rsp+90h] [rbp-39h]
  __int128 v112; // [rsp+A0h] [rbp-29h]
  struct _KTIMER Timer; // [rsp+B0h] [rbp-19h] BYREF
  char v115; // [rsp+148h] [rbp+7Fh]

  v115 = 1;
  v3 = a3;
  v106 = 0;
  v4 = a2;
  v107 = 0LL;
  v108 = 0LL;
  v109 = 0LL;
  v110 = 0LL;
  v111 = 0LL;
  v112 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      21,
      (struct _GUID *)&WPP_cb6db8c6f99e3ae11a098d09772ad370_Traceguids,
      (char)v4,
      (char)a3);
  }
  v6 = _InterlockedIncrement((volatile signed __int32 *)&ndisPkgs);
  if ( !ImageSectionHandle )
  {
    if ( v6 == 1 )
    {
      ImageSectionHandle = MmLockPagableDataSection(AddressWithinSection);
      MmUnlockPagableImageSection(ImageSectionHandle);
    }
    else
    {
      do
      {
        memset(&Timer, 0, sizeof(Timer));
        KeInitializeTimerEx(&Timer, SynchronizationTimer);
        KeSetTimer(&Timer, (LARGE_INTEGER)-500LL, 0LL);
        KeWaitForSingleObject(&Timer, Executive, 0, 0, 0LL);
      }
      while ( !ImageSectionHandle );
    }
  }
  MmLockPagableSectionByHandle(ImageSectionHandle);
  CurrentStackLocation = v3->Tail.Overlay.CurrentStackLocation;
  v3->IoStatus.Status = 259;
  v3->IoStatus.Information = 0LL;
  FileObject = CurrentStackLocation->FileObject;
  if ( !FileObject )
  {
    v16 = -1073741823;
    MmUnlockPagableImageSection(ImageSectionHandle);
    _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
LABEL_75:
    v3->IoStatus.Status = v16;
    IofCompleteRequest(v3, 2);
    goto LABEL_53;
  }
  if ( v4->Header.Type != 17 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v7,
        11,
        32,
        (struct _GUID *)&WPP_cb6db8c6f99e3ae11a098d09772ad370_Traceguids,
        (char)a1,
        (char)v3);
    }
    v43 = v3->Tail.Overlay.CurrentStackLocation;
    if ( v4->Header.Type == 17 )
    {
      v16 = 0;
      if ( v43->MajorFunction != 18 )
        v16 = -1073741637;
    }
    else
    {
      if ( v4->Header.Type == 9 )
      {
        v44 = (__int64 (__fastcall *)(struct _DEVICE_OBJECT *, struct _IRP *))*((_QWORD *)&v4->Reserved28
                                                                              + v43->MajorFunction);
        if ( v44 )
        {
          v16 = v44(a1, v3);
LABEL_137:
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v45) = 4;
            WPP_RECORDER_SF_qq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v45,
              11,
              33,
              (struct _GUID *)&WPP_cb6db8c6f99e3ae11a098d09772ad370_Traceguids,
              (char)a1,
              (char)v3);
          }
          MmUnlockPagableImageSection(ImageSectionHandle);
          _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
          goto LABEL_53;
        }
      }
      v16 = -1073741637;
    }
    v3->IoStatus.Status = v16;
    IofCompleteRequest(v3, 2);
    goto LABEL_137;
  }
  FsContext = (__int128 *)FileObject->FsContext;
  v12 = ndisReferenceTopMiniportByNameForNsi(v4, 0, v8, 0, NSIREF_IOCTL, MPREF_UM_IOCTL);
  v13 = v12;
  if ( v12 )
  {
    *((_QWORD *)&v107 + 1) = v12;
    v4 = v12;
    *(_QWORD *)&v108 = v12->OidList;
    BYTE8(v108) = *((_BYTE *)FsContext + 24);
    v14 = *(_QWORD *)FsContext;
    FsContext = &v107;
    *(_QWORD *)&v107 = v14;
  }
  if ( (v4->PnPFlags & 0x4010) != 0 )
  {
    v16 = -1073741436;
    goto LABEL_27;
  }
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( LowPart > 0x226044 )
  {
    switch ( LowPart )
    {
      case 0x226048u:
        if ( !*((_BYTE *)v3->Tail.Overlay.CurrentStackLocation->FileObject->FsContext + 24) )
        {
          v16 = -1073741823;
          goto LABEL_27;
        }
        if ( !ndisSystemSupportsSriov )
          goto LABEL_118;
        break;
      case 0x22604Cu:
        if ( !*((_BYTE *)v3->Tail.Overlay.CurrentStackLocation->FileObject->FsContext + 24) )
          goto LABEL_24;
        if ( !ndisSystemSupportsSriov )
          goto LABEL_118;
        SriovCurrentCapabilities = v4->SriovCurrentCapabilities;
        if ( !SriovCurrentCapabilities || (SriovCurrentCapabilities->SriovCapabilities & 3) != 3 )
          goto LABEL_118;
LABEL_128:
        v3->IoStatus.Information = 0LL;
        v16 = 0;
        goto LABEL_27;
      case 0x226050u:
        if ( !*((_BYTE *)v3->Tail.Overlay.CurrentStackLocation->FileObject->FsContext + 24) )
          goto LABEL_24;
        if ( !ndisSystemSupportsSriov )
          goto LABEL_118;
        break;
      case 0x226054u:
        v17 = v3->Tail.Overlay.CurrentStackLocation;
        v105[0] = 0;
        if ( *((_BYTE *)v17->FileObject->FsContext + 24) && v17->Parameters.Read.Length >= 0x10 )
        {
          if ( ndisSystemSupportsSriov )
          {
            v99 = v4->SriovCurrentCapabilities;
            if ( v99 )
            {
              if ( (v99->SriovCapabilities & 3) == 3 )
              {
                IoAcquireCancelSpinLock(v105);
                if ( v4->InvalidateBlockMask )
                {
                  v16 = 0;
                  v100.MasterIrp = (_IRP *)v3->AssociatedIrp;
                  v100.MasterIrp->Type = v4->InvalidateVfId;
                  v100.MasterIrp->MdlAddress = (_MDL *)v4->InvalidateBlockMask;
                  v3->IoStatus.Information = 16LL;
                  v4->InvalidateBlockMask = 0LL;
                }
                else
                {
                  v4->InvalidateBlockIoctlPf = v3;
                  v16 = 259;
                  v3->Tail.Overlay.CurrentStackLocation->Control |= 1u;
                  _InterlockedExchange64((volatile __int64 *)&v3->CancelRoutine, (__int64)ndisIovCancelIoctlInvalidate);
                }
                IoReleaseCancelSpinLock(v105[0]);
                if ( v16 != 259 )
                {
LABEL_25:
                  if ( (v16 & 0xC0230000) == 0xC0230000 )
                    v16 = (unsigned __int16)v16 | 0xC0010000;
                  goto LABEL_27;
                }
LABEL_160:
                v115 = 0;
                goto LABEL_25;
              }
            }
          }
LABEL_118:
          v16 = -1073741637;
          goto LABEL_27;
        }
LABEL_24:
        v16 = -1073741823;
        goto LABEL_25;
      default:
LABEL_115:
        v16 = -1073741822;
        goto LABEL_27;
    }
    v56 = v4->SriovCurrentCapabilities;
    if ( !v56 || (v56->SriovCapabilities & 3) != 3 )
      goto LABEL_118;
    goto LABEL_128;
  }
  if ( LowPart == 2252868 )
  {
    v54 = v3->Tail.Overlay.CurrentStackLocation;
    v104 = 0;
    if ( *((_BYTE *)v54->FileObject->FsContext + 24) )
    {
      if ( ndisSystemSupportsSriov )
      {
        v98 = v4->SriovCurrentCapabilities;
        if ( v98 )
        {
          if ( (v98->SriovCapabilities & 3) == 3 )
          {
            IoAcquireCancelSpinLock(&v104);
            _InterlockedExchange64((volatile __int64 *)&v3->CancelRoutine, (__int64)ndisIovCancelIoctlNotification);
            IoReleaseCancelSpinLock(v104);
            v16 = 259;
            v3->IoStatus.Information = 0LL;
            goto LABEL_160;
          }
        }
      }
      goto LABEL_118;
    }
    goto LABEL_24;
  }
  switch ( LowPart )
  {
    case 0x170002u:
    case 0x170006u:
    case 0x17000Eu:
    case 0x170028u:
    case 0x17002Cu:
    case 0x170030u:
    case 0x17003Eu:
    case 0x17009Cu:
      v42 = ndisMiniportOidIoctl(
              v4,
              (struct _NDIS_USER_OPEN_CONTEXT *)FsContext,
              LowPart,
              CurrentStackLocation->Parameters.Create.Options,
              CurrentStackLocation->Parameters.Read.Length,
              (unsigned __int8 *)v3->AssociatedIrp.MasterIrp,
              v3->MdlAddress,
              &v106);
      v16 = v42;
      if ( !v42 || v42 == -2147483643 )
        v3->IoStatus.Information = v106;
      v115 = 1;
      goto LABEL_25;
    case 0x17001Eu:
      if ( !v3->MdlAddress )
      {
        v16 = -1073741811;
        break;
      }
      Irql[0] = 0;
      IoAcquireCancelSpinLock(Irql);
      KeAcquireSpinLockAtDpcLevel(&v4->Lock);
      Log = v4->Log;
      v4->MiniportThread = KeGetCurrentThread();
      if ( !Log )
      {
        v4->MiniportThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(&v4->Lock);
        IoReleaseCancelSpinLock(Irql[0]);
        goto LABEL_24;
      }
      v63 = (KSPIN_LOCK *)((char *)Log + 8);
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)Log + 1);
      ByteCount = *((_DWORD *)Log + 7);
      if ( ByteCount )
      {
        MdlAddress = v3->MdlAddress;
        if ( MdlAddress->ByteCount <= ByteCount )
          ByteCount = MdlAddress->ByteCount;
        if ( (MdlAddress->MdlFlags & 5) != 0 )
          MappedSystemVa = (char *)MdlAddress->MappedSystemVa;
        else
          MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(MdlAddress, 0, MmCached, 0LL, 0, 0x40000000u);
        if ( MappedSystemVa )
        {
          v67 = *((unsigned int *)Log + 9);
          v68 = *((_DWORD *)Log + 6) - v67;
          v69 = (char *)Log + v67 + 40;
          if ( v68 < ByteCount )
          {
            memmove(MappedSystemVa, v69, v68);
            v69 = (char *)Log + 40;
            v72 = *((unsigned int *)Log + 6);
            v70 = ByteCount + *((_DWORD *)Log + 9) - (_DWORD)v72;
            v71 = &MappedSystemVa[v72 - *((unsigned int *)Log + 9)];
          }
          else
          {
            v70 = ByteCount;
            v71 = MappedSystemVa;
          }
          memmove(v71, v69, v70);
          v73 = *((_DWORD *)Log + 9);
          *((_DWORD *)Log + 7) -= ByteCount;
          v74 = ByteCount + v73;
          v75 = *((_DWORD *)Log + 6);
          *((_DWORD *)Log + 9) = v74;
          if ( v74 >= v75 )
            *((_DWORD *)Log + 9) = v74 - v75;
          v3 = a3;
          v16 = 0;
          a3->IoStatus.Information = ByteCount;
        }
        else
        {
          v3 = a3;
          v16 = -1073741670;
        }
      }
      else if ( *((_QWORD *)Log + 2) )
      {
        v16 = -1073741823;
      }
      else
      {
        _InterlockedExchange64((volatile __int64 *)&v3->CancelRoutine, (__int64)ndisCancelLogIrp);
        *((_QWORD *)Log + 2) = v3;
        v16 = 259;
      }
      KeReleaseSpinLockFromDpcLevel(v63);
      v4->MiniportThread = 0LL;
      KeReleaseSpinLockFromDpcLevel(&v4->Lock);
      IoReleaseCancelSpinLock(Irql[0]);
      if ( v16 != 259 && v16 )
        goto LABEL_24;
      goto LABEL_25;
    case 0x170068u:
      v46 = v3->Tail.Overlay.CurrentStackLocation;
      v16 = 0;
      if ( !*((_BYTE *)v46->FileObject->FsContext + 24) || v46->Parameters.Create.Options < 0x14 )
        goto LABEL_24;
      MasterIrp = v3->AssociatedIrp.MasterIrp;
      v77 = (int)MasterIrp->MdlAddress;
      if ( (unsigned int)(v77 - 1) > 2 )
      {
        v16 = -1073741811;
        v78 = -1073741811;
        v102 = -1073741811;
      }
      else
      {
        v102 = 0;
        v78 = 0;
        v79 = v77 - 1;
        if ( v79 )
        {
          v80 = v79 - 1;
          if ( v80 )
          {
            if ( v80 == 1 )
            {
              MiniportDataBlock = ndisPcwGetMiniportDataBlock(v4);
              if ( MiniportDataBlock )
              {
                v82 = 0;
                if ( ndisMaxNumberOfProcessors )
                {
                  v83 = ndisPcwOffsetToPerCpuData;
                  do
                    memset((char *)MiniportDataBlock + v83 + ndisPcwPerCpuDataStride * v82++, 0, 0x130uLL);
                  while ( v82 < ndisMaxNumberOfProcessors );
                  v3 = a3;
                }
              }
              v4->NumberOfIndirectionTableChanges = 0LL;
            }
          }
          else
          {
            v4->PcwDatapathEventMask = 0;
            v4->PcwDatapathCycleMask = 0;
          }
        }
        else if ( ndisPcwGetMiniportDataBlock(v4) )
        {
          v4->PcwDatapathEventMask = HIDWORD(MasterIrp->MdlAddress);
          v4->PcwDatapathCycleMask = MasterIrp->Flags;
        }
        v3->IoStatus.Information = 0LL;
      }
      if ( v78 )
        goto LABEL_24;
      goto LABEL_25;
    case 0x17006Cu:
      v47 = v3->Tail.Overlay.CurrentStackLocation;
      p_IoStatus = 0LL;
      if ( !*((_BYTE *)v47->FileObject->FsContext + 24) )
        goto LABEL_24;
      Length = v47->Parameters.Read.Length;
      v85.MasterIrp = (_IRP *)v3->AssociatedIrp;
      if ( (unsigned int)Length < 0x30 )
        goto LABEL_24;
      v86 = 48;
      *(_OWORD *)&v85.MasterIrp->Type = 0LL;
      *(_OWORD *)&v85.MasterIrp->Flags = 0LL;
      v85.MasterIrp->ThreadListEntry = 0LL;
      *(_DWORD *)&v85.MasterIrp->Type = 3146112;
      v85.MasterIrp->Reserved2 = ndisMaxNumberOfProcessors;
      v85.MasterIrp->AssociatedIrp.MasterIrp = (_IRP *)v4->NumberOfIndirectionTableChanges;
      HIDWORD(v85.MasterIrp->MdlAddress) = v4->PcwDatapathEventMask;
      v85.MasterIrp->Flags = v4->PcwDatapathCycleMask;
      v87 = ndisMaxNumberOfProcessors;
      v88 = 304 * ndisMaxNumberOfProcessors + 48;
      if ( (unsigned int)Length < v88 )
      {
        LODWORD(v85.MasterIrp->ThreadListEntry.Flink) = Length / 0x130;
        if ( !(unsigned int)(Length / 0x130) )
          goto LABEL_213;
        HIDWORD(v85.MasterIrp->ThreadListEntry.Flink) = 48;
        v86 = 304 * (Length / 0x130) + 48;
      }
      else
      {
        HIDWORD(v85.MasterIrp->ThreadListEntry.Flink) = 48;
        v86 = v88;
        LODWORD(v85.MasterIrp->ThreadListEntry.Flink) = v87;
      }
      LODWORD(v85.MasterIrp->ThreadListEntry.Blink) = 304;
      p_IoStatus = &v85.MasterIrp->IoStatus;
LABEL_213:
      LODWORD(v85.MasterIrp->MdlAddress) = v88;
      v89 = ndisPcwGetMiniportDataBlock(v4);
      v90 = v89;
      if ( p_IoStatus )
      {
        if ( v89 )
        {
          v91 = 0;
          if ( LODWORD(v85.MasterIrp->ThreadListEntry.Flink) )
          {
            v92 = ndisPcwOffsetToPerCpuData;
            do
            {
              v93 = 2LL;
              v94 = &p_IoStatus[19 * v91];
              v95 = (_IO_STATUS_BLOCK *)((char *)v90 + v92 + ndisPcwPerCpuDataStride * v91);
              do
              {
                v94 += 8;
                v96 = *v95;
                v95 += 8;
                v94[-8] = v96;
                v94[-7] = v95[-7];
                v94[-6] = v95[-6];
                v94[-5] = v95[-5];
                v94[-4] = v95[-4];
                v94[-3] = v95[-3];
                v94[-2] = v95[-2];
                v94[-1] = v95[-1];
                --v93;
              }
              while ( v93 );
              ++v91;
              *v94 = *v95;
              v94[1] = v95[1];
              v94[2] = v95[2];
            }
            while ( v91 < LODWORD(v85.MasterIrp->ThreadListEntry.Flink) );
          }
        }
      }
      v16 = 0;
      v3->IoStatus.Information = v86;
      break;
    case 0x170070u:
      v102 = 0;
      HardwareInfo = ndisGetHardwareInfo(v4, v3, &v102);
      goto LABEL_79;
    case 0x170078u:
      v102 = 0;
      HardwareInfo = ndisGetPowerInfo(v4, v3, &v102);
      goto LABEL_79;
    case 0x170090u:
      RdmaCapabilities = ndisGetRdmaCapabilities(v4, v3);
      v16 = RdmaCapabilities;
      switch ( RdmaCapabilities )
      {
        case 0u:
          goto LABEL_25;
        case 0xC0010014:
          v16 = -2147483643;
          break;
        case 0xC00000BB:
          v16 = -1073741637;
          break;
        default:
          goto LABEL_24;
      }
      break;
    case 0x170094u:
      v102 = 0;
      HardwareInfo = ndisGetAdapterHardwareInfo(v4, v3, &v102);
      goto LABEL_79;
    case 0x170098u:
      v40 = *((_BYTE *)FsContext + 24);
      v102 = 0;
      HardwareInfo = ndisGetAdapterRssInfo(v4, v3, v40, &v102);
LABEL_79:
      v16 = HardwareInfo;
      switch ( v102 )
      {
        case 0:
          goto LABEL_25;
        case -1073676268:
          v16 = -2147483643;
          break;
        case -1073741637:
          v16 = -1073741637;
          break;
        default:
          goto LABEL_24;
      }
      break;
    case 0x1700A8u:
      if ( !*((_BYTE *)FsContext + 24) )
        goto LABEL_24;
      ndisMiniportFatalError(v4, NdisMEventErr_Min);
      v16 = 0;
      break;
    case 0x1700B0u:
      v50 = v3->Tail.Overlay.CurrentStackLocation;
      v103 = 0;
      if ( !*((_BYTE *)v50->FileObject->FsContext + 24)
        || v50->Parameters.Create.Options
        || v50->Parameters.Read.Length < 0x18 )
      {
        goto LABEL_24;
      }
      v51.MasterIrp = (_IRP *)v3->AssociatedIrp;
      *(_DWORD *)&v51.MasterIrp->Type = 1573248;
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v4, &v103);
      PDBlock = v4->PDBlock;
      if ( PDBlock )
      {
        v97 = *((_DWORD *)PDBlock + 8) + 24;
        if ( *((_DWORD *)PDBlock + 8) >= 0xFFFFFFE8 )
        {
          v16 = -1073741675;
        }
        else
        {
          *(_DWORD *)&v51.MasterIrp->AllocationProcessorNumber = v97;
          if ( v50->Parameters.Read.Length >= v97 )
          {
            v51.MasterIrp->Reserved2 = *((_DWORD *)PDBlock + 2);
            LOBYTE(v51.MasterIrp->Flags) = *((_BYTE *)PDBlock + 20);
            LODWORD(v51.MasterIrp->MdlAddress) = 24;
            HIDWORD(v51.MasterIrp->MdlAddress) = *((_DWORD *)PDBlock + 8);
            memmove(&v51.MasterIrp->AssociatedIrp, *((const void **)PDBlock + 3), *((unsigned int *)PDBlock + 8));
            v16 = 0;
            v3->IoStatus.Information = v97;
          }
          else
          {
            v16 = -1073676268;
            v3->IoStatus.Information = 24LL;
          }
        }
      }
      else
      {
        v16 = -1073741808;
      }
      v53 = v103;
      v4->MiniportThread = 0LL;
      KeReleaseSpinLock(&v4->Lock, v53);
      if ( !v16 )
        goto LABEL_25;
      if ( v16 != -1073676268 )
        goto LABEL_24;
      v16 = -2147483643;
      break;
    default:
      goto LABEL_115;
  }
LABEL_27:
  if ( !v13 )
    goto LABEL_52;
  v19 = KeAcquireSpinLockRaiseToDpc(&v13->Lock);
  NsiRefCountTracker = (ULONG_PTR)v13->NsiRefCountTracker;
  v13->MiniportThread = KeGetCurrentThread();
  if ( NsiRefCountTracker - 2 > 1 )
  {
    if ( NsiRefCountTracker < 2 )
      ndisBugCheckEx(0x1EuLL, 3uLL, NsiRefCountTracker, 0LL);
    if ( !*(_BYTE *)(NsiRefCountTracker + 2) )
      ndisBugCheckEx(0x1EuLL, 2uLL, NsiRefCountTracker, 0LL);
    if ( *(_BYTE *)(NsiRefCountTracker + 1) )
    {
      if ( *(_BYTE *)(NsiRefCountTracker + 1) != 1 )
        goto LABEL_34;
      v57 = *(_DWORD *)(NsiRefCountTracker + 64);
      v58 = NsiRefCountTracker + 8;
      if ( v57 >> 17 >= 0x3FFE || (unsigned __int16)v57 >> 1 != (v57 >> 17) + 1 )
      {
        if ( (unsigned __int16)v57 >> 1 || (v57 & 1) != 0 )
        {
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(NsiRefCountTracker + 8), 0);
          goto LABEL_34;
        }
        goto LABEL_70;
      }
      for ( i = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v58; *(_QWORD *)v58; i = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v58 )
      {
        *(_QWORD *)v58 = i->Next;
        ndisFreeRefCountStacksInBlock(i);
        ExFreePoolWithTag(i, 0);
      }
      ndisFreeRefCountStacksInBlock((struct _NDIS_REFCOUNT_STACK_BLOCK *)v58);
      *(_DWORD *)(v58 + 56) &= 0x10001u;
    }
    else
    {
      v21 = *(_QWORD *)(NsiRefCountTracker + 8);
      if ( !v21 )
      {
LABEL_33:
        if ( _bittestandreset((signed __int32 *)(NsiRefCountTracker + 16), 0) )
          goto LABEL_34;
LABEL_70:
        ndisReportRefcountImbalance(NsiRefCountTracker, 0);
      }
      for ( j = 0; ; ++j )
      {
        if ( j >= *(_BYTE *)(NsiRefCountTracker + 3) )
          goto LABEL_33;
        v35 = (_BYTE *)(v21 + 2LL * j);
        if ( !*v35 )
        {
          v36 = v35[1];
          if ( v36 )
            break;
        }
      }
      v35[1] = v36 - 1;
    }
  }
LABEL_34:
  if ( v13->NsiOpenReferences-- == 1 )
  {
    NsiRequestsCompletedEvent = v13->NsiRequestsCompletedEvent;
    if ( NsiRequestsCompletedEvent )
      KeSetEvent(NsiRequestsCompletedEvent, 0, 0);
  }
  v13->MiniportThread = 0LL;
  KeReleaseSpinLock(&v13->Lock, v19);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v24) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v24,
      20,
      25,
      (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
      (char)v13);
  }
  v25 = KeAcquireSpinLockRaiseToDpc(&v13->Ref.SpinLock);
  RefCountTracker = (ULONG_PTR)v13->RefCountTracker;
  v28 = v25;
  if ( !RefCountTracker || RefCountTracker - 2 <= 1 )
    goto LABEL_46;
  if ( RefCountTracker == 1 )
    ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
  if ( *(_BYTE *)(RefCountTracker + 2) <= 0x57u )
    ndisBugCheckEx(0x1EuLL, 2uLL, RefCountTracker, 0x57uLL);
  if ( *(_BYTE *)(RefCountTracker + 1) )
  {
    if ( *(_BYTE *)(RefCountTracker + 1) != 1 )
      goto LABEL_46;
    v60 = RefCountTracker + 5576;
    v61 = *(_DWORD *)(RefCountTracker + 5632);
    if ( v61 >> 17 < 0x3FFE && (unsigned __int16)v61 >> 1 == (v61 >> 17) + 1 )
    {
      for ( k = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v60; *(_QWORD *)v60; k = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v60 )
      {
        *(_QWORD *)v60 = k->Next;
        ndisFreeRefCountStacksInBlock(k);
        ExFreePoolWithTag(k, 0);
      }
      ndisFreeRefCountStacksInBlock((struct _NDIS_REFCOUNT_STACK_BLOCK *)v60);
      *(_DWORD *)(v60 + 56) &= 0x10001u;
      goto LABEL_46;
    }
    if ( (unsigned __int16)v61 >> 1 || (v61 & 1) != 0 )
    {
      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(RefCountTracker + 5576), 0);
      goto LABEL_46;
    }
LABEL_71:
    ndisReportRefcountImbalance(RefCountTracker, 0x57u);
  }
  v29 = *(_QWORD *)(RefCountTracker + 8);
  if ( v29 )
  {
    for ( m = 0; ; ++m )
    {
      if ( m >= *(_BYTE *)(RefCountTracker + 3) )
        goto LABEL_45;
      v26 = (_BYTE *)(v29 + 2LL * m);
      if ( *v26 == 87 )
      {
        v38 = v26[1];
        if ( v38 )
          break;
      }
    }
    v26[1] = v38 - 1;
    goto LABEL_46;
  }
LABEL_45:
  if ( !_bittestandreset((signed __int32 *)(RefCountTracker + 24), 0x17u) )
    goto LABEL_71;
LABEL_46:
  v30 = v13->Ref.ReferenceCount - 1;
  v13->Ref.ReferenceCount = v30;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v26) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v26,
      20,
      14,
      (struct _GUID *)&WPP_cb6db8c6f99e3ae11a098d09772ad370_Traceguids,
      (char)v13,
      v30);
  }
  KeReleaseSpinLock(&v13->Ref.SpinLock, v28);
  if ( !v30 )
  {
    RemoveReadyEvent = v13->RemoveReadyEvent;
    if ( RemoveReadyEvent )
      KeSetEvent(RemoveReadyEvent, 0, 0);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v31) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v31,
      20,
      26,
      (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
      (char)v13);
  }
  v3 = a3;
LABEL_52:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( v115 && v16 != 259 )
    goto LABEL_75;
LABEL_53:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v32) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v32,
      11,
      22,
      (struct _GUID *)&WPP_cb6db8c6f99e3ae11a098d09772ad370_Traceguids,
      (char)v4,
      (char)v3);
  }
  return v16;
}
