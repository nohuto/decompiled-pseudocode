/*
 * XREFs of ?ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1400110C0
 * Callers:
 *     ?ndisDeviceControlIrpHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x14006E7E0 (-ndisDeviceControlIrpHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     NdisWdfDeviceControlIrpHandler @ 0x140076290 (NdisWdfDeviceControlIrpHandler.c)
 * Callees:
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x140007E60 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     NdisReferenceWithTag @ 0x14000E820 (NdisReferenceWithTag.c)
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     ?ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x140010990 (-ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisGetAnyActiveRefTag@@YAKPEAUNDIS_REFCOUNT_HANDLE__@@@Z @ 0x1400109B0 (-ndisGetAnyActiveRefTag@@YAKPEAUNDIS_REFCOUNT_HANDLE__@@@Z.c)
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x140010A70 (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     ?ndisRefCountBlockFromRefCountHandle@@YAPEAU_NDIS_REFCOUNT_BLOCK@@PEAUNDIS_REFCOUNT_HANDLE__@@@Z @ 0x140010AD0 (-ndisRefCountBlockFromRefCountHandle@@YAPEAU_NDIS_REFCOUNT_BLOCK@@PEAUNDIS_REFCOUNT_HANDLE__@@@Z.c)
 *     ?ndisFreeRefCountStacksInBlock@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x140010B10 (-ndisFreeRefCountStacksInBlock@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x140010F10 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisGetAdapterRssInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@EPEAH@Z @ 0x140012AC0 (-ndisGetAdapterRssInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@EPEAH@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14005A650 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisGetHardwareInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z @ 0x140090F20 (-ndisGetHardwareInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z.c)
 *     ?ndisGetAdapterHardwareInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z @ 0x140091450 (-ndisGetAdapterHardwareInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x140096020 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisGetPowerInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z @ 0x140096540 (-ndisGetPowerInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     memcmp @ 0x1400EE8A0 (memcmp.c)
 *     ?ndisGetRdmaCapabilities@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x140140BC0 (-ndisGetRdmaCapabilities@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisPcwGetMiniportDataBlock@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14014A58C (-ndisPcwGetMiniportDataBlock@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL@@AEAK@Z @ 0x140166D10 (-ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL.c)
 *     ?ndisMiniportFatalError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x140174190 (-ndisMiniportFatalError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 */

__int64 __fastcall ndisDeviceControlHandler(
        struct _DEVICE_OBJECT *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _IRP *a3)
{
  struct _IRP *v3; // r15
  struct _NDIS_MINIPORT_BLOCK *v4; // r14
  signed __int32 v6; // eax
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  _FILE_OBJECT *FileObject; // rax
  unsigned int v9; // esi
  __int128 *FsContext; // rbx
  _NDIS_MINIPORT_BLOCK *v11; // r12
  KIRQL v12; // al
  struct _NDIS_M_DRIVER_BLOCK *v13; // r15
  KIRQL v14; // di
  _REFERENCE_EX *p_Ref; // r13
  KIRQL v16; // al
  KIRQL v17; // bl
  unsigned __int16 ReferenceCount; // cx
  KIRQL v19; // al
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // rbx
  KIRQL v21; // r12
  _NDIS_BIND_PATHS *BindPaths; // rdx
  _NDIS_BIND_PATHS *v23; // rcx
  KIRQL v24; // al
  struct _NDIS_M_DRIVER_BLOCK *NextDriver; // rsi
  KIRQL v26; // al
  ULONG_PTR v27; // r8
  KIRQL v28; // r14
  __int64 v29; // r9
  bool v30; // zf
  unsigned __int8 m; // al
  _BYTE *v32; // rdx
  char v33; // cl
  char v34; // si
  KIRQL v35; // r14
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  unsigned int v37; // ecx
  struct _NDIS_REFCOUNT_BLOCK *NsiRefCountTracker; // rcx
  int *v39; // rax
  __int64 v40; // r15
  KIRQL v41; // r14
  ULONG_PTR v42; // r8
  __int64 v43; // r10
  struct _KEVENT *v44; // rcx
  int v45; // edx
  KIRQL v46; // al
  ULONG_PTR v47; // r8
  KIRQL v48; // r14
  __int64 v49; // r10
  int v50; // edi
  int v51; // edx
  __int64 v52; // rax
  unsigned int LowPart; // r8d
  unsigned int v54; // esi
  char v55; // r13
  KIRQL v56; // di
  ULONG_PTR v57; // r8
  __int64 v58; // r9
  struct _KEVENT *NsiRequestsCompletedEvent; // rcx
  int v60; // edx
  KIRQL v61; // al
  ULONG_PTR v62; // r8
  KIRQL v63; // r14
  __int64 v64; // r9
  int v65; // edi
  int v66; // edx
  int v67; // edx
  ULONG_PTR v69; // rbx
  unsigned int v70; // edx
  struct _NDIS_REFCOUNT_STACK_BLOCK *k; // rdi
  _IO_STACK_LOCATION *v72; // rdx
  unsigned __int8 i; // cl
  _BYTE *v74; // r9
  char v75; // al
  unsigned __int8 j; // cl
  _BYTE *v77; // r9
  char v78; // al
  unsigned __int8 jj; // cl
  _BYTE *v80; // rdx
  char v81; // al
  unsigned __int8 mm; // cl
  _BYTE *v83; // rdx
  char v84; // al
  struct _NDIS_LOG *Log; // rdi
  struct _KEVENT *RemoveReadyEvent; // rcx
  unsigned __int8 v87; // r8
  unsigned int HardwareInfo; // eax
  int v89; // eax
  _IO_STACK_LOCATION *v90; // rcx
  __int64 (__fastcall *v91)(struct _DEVICE_OBJECT *, struct _IRP *); // rax
  int v92; // edx
  _NDIS_SRIOV_CAPABILITIES *v93; // rax
  _IO_STACK_LOCATION *v94; // rdx
  _IO_STACK_LOCATION *v95; // rdx
  _IO_STATUS_BLOCK *p_IoStatus; // rdi
  unsigned int RdmaCapabilities; // eax
  _IO_STACK_LOCATION *v98; // rbx
  _IRP::<unnamed_type_AssociatedIrp> v99; // rdi
  struct _NDIS_PD_BLOCK *PDBlock; // rdx
  KIRQL v101; // dl
  _IO_STACK_LOCATION *v102; // rax
  unsigned int v103; // edx
  ULONG_PTR v104; // r14
  struct _NDIS_REFCOUNT_STACK_BLOCK *ii; // r15
  ULONG_PTR v106; // rdi
  unsigned int v107; // edx
  struct _NDIS_REFCOUNT_STACK_BLOCK *kk; // r15
  struct _KEVENT *v109; // rcx
  unsigned int v110; // edx
  ULONG_PTR v111; // rdi
  ULONG_PTR v112; // rdi
  unsigned int v113; // edx
  ULONG_PTR v114; // rbx
  ULONG AnyActiveRefTag; // eax
  struct _NDIS_REFCOUNT_BLOCK *v116; // rax
  struct _NDIS_REFCOUNT_BLOCK *v117; // rbx
  int v118; // edx
  struct _NDIS_M_DRIVER_BLOCK **n; // rcx
  struct _NDIS_M_DRIVER_BLOCK *v120; // rax
  wchar_t *Buffer; // rcx
  _NDIS_WRAPPER_HANDLE *NdisDriverInfo; // rcx
  _NDIS_PENDING_IM_INSTANCE *PendingDeviceList; // rcx
  _NDIS_PENDING_IM_INSTANCE *Next; // rbx
  int v125; // edx
  ULONG ByteCount; // esi
  _MDL *MdlAddress; // rcx
  char *MappedSystemVa; // r15
  __int64 v129; // rcx
  ULONG v130; // eax
  char *v131; // rdx
  unsigned __int64 v132; // r12
  int v133; // ecx
  unsigned int v134; // ecx
  unsigned int v135; // eax
  _IRP *MasterIrp; // rdi
  int v137; // ecx
  int v138; // ebx
  int v139; // ecx
  int v140; // ecx
  struct _NDIS_PCW_DATA_BLOCK *MiniportDataBlock; // r15
  unsigned int v142; // r14d
  unsigned int v143; // edi
  __int64 v144; // r12
  unsigned __int64 Length; // rcx
  _IRP::<unnamed_type_AssociatedIrp> v146; // rbx
  unsigned int v147; // esi
  unsigned int v148; // edx
  unsigned int v149; // r8d
  struct _NDIS_PCW_DATA_BLOCK *v150; // rax
  struct _NDIS_PCW_DATA_BLOCK *v151; // r9
  unsigned int v152; // r8d
  __int64 v153; // r10
  __int64 v154; // rdx
  _IO_STATUS_BLOCK *v155; // rax
  _IO_STATUS_BLOCK *v156; // rcx
  _IO_STATUS_BLOCK v157; // xmm0
  unsigned __int64 v158; // rax
  unsigned int v159; // esi
  unsigned __int64 v160; // rax
  _NDIS_SRIOV_CAPABILITIES *v161; // rax
  _NDIS_SRIOV_CAPABILITIES *SriovCurrentCapabilities; // rax
  _IRP::<unnamed_type_AssociatedIrp> v163; // rcx
  struct _MDL *v164; // [rsp+30h] [rbp-99h]
  struct _NDIS_MINIPORT_BLOCK *v165; // [rsp+40h] [rbp-89h]
  UCHAR Irql[4]; // [rsp+48h] [rbp-81h] BYREF
  int v167; // [rsp+4Ch] [rbp-7Dh] BYREF
  unsigned __int8 v168; // [rsp+50h] [rbp-79h] BYREF
  UCHAR v169; // [rsp+51h] [rbp-78h] BYREF
  UCHAR v170; // [rsp+52h] [rbp-77h] BYREF
  KIRQL v171; // [rsp+53h] [rbp-76h]
  int v172; // [rsp+54h] [rbp-75h]
  _NDIS_MINIPORT_BLOCK *v173; // [rsp+58h] [rbp-71h]
  unsigned int v174; // [rsp+60h] [rbp-69h] BYREF
  char v175[8]; // [rsp+68h] [rbp-61h]
  struct _NDIS_M_DRIVER_BLOCK *v176; // [rsp+70h] [rbp-59h]
  _IO_STACK_LOCATION *v177; // [rsp+78h] [rbp-51h]
  __int128 v178; // [rsp+80h] [rbp-49h] BYREF
  __int128 v179; // [rsp+90h] [rbp-39h]
  __int128 *v180; // [rsp+A0h] [rbp-29h]
  struct _KTIMER Timer; // [rsp+B0h] [rbp-19h] BYREF
  char v183; // [rsp+148h] [rbp+7Fh]

  v165 = a2;
  v167 = -1073741823;
  v174 = 0;
  v3 = a3;
  v178 = 0LL;
  v4 = a2;
  v179 = 0LL;
  v183 = 1;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      21,
      (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
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
  v177 = CurrentStackLocation;
  FileObject = CurrentStackLocation->FileObject;
  if ( !FileObject )
  {
    v54 = -1073741823;
    MmUnlockPagableImageSection(ImageSectionHandle);
    _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
    v55 = (char)v4;
    goto LABEL_170;
  }
  if ( v4->Header.Type != 17 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(CurrentStackLocation) = 4;
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)CurrentStackLocation,
        11,
        27,
        (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
        (char)a1,
        (char)v3);
    }
    v90 = v3->Tail.Overlay.CurrentStackLocation;
    if ( v4->Header.Type == 17 )
    {
      v54 = 0;
      if ( v90->MajorFunction != 18 )
        v54 = -1073741637;
    }
    else
    {
      if ( v4->Header.Type == 9 )
      {
        v91 = (__int64 (__fastcall *)(struct _DEVICE_OBJECT *, struct _IRP *))*((_QWORD *)&v4->Reserved28
                                                                              + v90->MajorFunction);
        if ( v91 )
        {
          v54 = v91(a1, v3);
LABEL_231:
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v92) = 4;
            WPP_RECORDER_SF_qq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v92,
              11,
              28,
              (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
              (char)a1,
              (char)v3);
          }
          MmUnlockPagableImageSection(ImageSectionHandle);
          _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
          v55 = (char)v4;
          goto LABEL_112;
        }
      }
      v54 = -1073741637;
    }
    v3->IoStatus.Status = v54;
    IofCompleteRequest(v3, 2);
    goto LABEL_231;
  }
  v9 = 1;
  FsContext = (__int128 *)FileObject->FsContext;
  v11 = 0LL;
  v180 = FsContext;
  v172 = 1;
  v173 = 0LL;
  *(_QWORD *)v175 = 0LL;
  if ( !v4->BindPaths )
  {
    v173 = 0LL;
    goto LABEL_78;
  }
  v12 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  v13 = ndisMiniDriverList;
  v14 = v12;
  v176 = ndisMiniDriverList;
  if ( !ndisMiniDriverList )
    goto LABEL_76;
  while ( 2 )
  {
    p_Ref = &v13->Ref;
    v16 = KeAcquireSpinLockRaiseToDpc(&v13->Ref.SpinLock);
    v17 = v16;
    if ( v13->Ref.Closing )
      goto LABEL_130;
    ReferenceCount = v13->Ref.ReferenceCount;
    if ( ReferenceCount >= 0xFFEBu )
    {
      ndisRefCountReferenceCountOverflow = 1;
LABEL_130:
      KeReleaseSpinLock(&v13->Ref.SpinLock, v16);
      NextDriver = v13->NextDriver;
      goto LABEL_26;
    }
    v13->Ref.ReferenceCount = ReferenceCount + 1;
    NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v13->Ref.RefCountTracker, 8u);
    KeReleaseSpinLock(&v13->Ref.SpinLock, v17);
    KeReleaseSpinLock(&ndisMiniDriverListLock, v14);
    v19 = KeAcquireSpinLockRaiseToDpc(&v13->Ref.SpinLock);
    MiniportQueue = v13->MiniportQueue;
    v21 = v19;
    if ( !MiniportQueue )
      goto LABEL_17;
    do
    {
      BindPaths = MiniportQueue->BindPaths;
      if ( !BindPaths )
        goto LABEL_15;
      if ( BindPaths->Number < v9 )
        goto LABEL_15;
      v23 = v4->BindPaths;
      if ( v23->Paths[0].Length != BindPaths->Paths[0].Length
        || memcmp(v23->Paths[0].Buffer, BindPaths->Paths[0].Buffer, v23->Paths[0].Length) )
      {
        goto LABEL_15;
      }
      KeAcquireSpinLockAtDpcLevel(&MiniportQueue->Lock);
      v30 = (MiniportQueue->Flags & 0x80200020) == 0;
      MiniportQueue->MiniportThread = KeGetCurrentThread();
      if ( v30
        && (MiniportQueue->PnPFlags & 0x1084110) == 0
        && MiniportQueue->PnPDeviceState == NdisPnPDeviceStarted
        && MiniportQueue->CurrentDevicePowerState == PowerDeviceD0 )
      {
        v34 = 1;
        v35 = KeAcquireSpinLockRaiseToDpc(&MiniportQueue->Ref.SpinLock);
        if ( !MiniportQueue->Ref.Closing )
        {
          RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)MiniportQueue->RefCountTracker;
          if ( RefCountTracker )
            NdisReferenceWithTag(RefCountTracker, 0x57u);
          v37 = MiniportQueue->Ref.ReferenceCount;
          MiniportQueue->Ref.ReferenceCount = v37 + 1;
          if ( v37 != -1 )
            goto LABEL_46;
          MiniportQueue->Ref.ReferenceCount = -1;
        }
        v34 = 0;
LABEL_46:
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v164) = MiniportQueue->Ref.ReferenceCount;
          WPP_RECORDER_SF_qL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0x14u,
            0xCu,
            (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
            (char)MiniportQueue,
            v164);
        }
        KeReleaseSpinLock(&MiniportQueue->Ref.SpinLock, v35);
        if ( v34 )
        {
          NsiRefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)MiniportQueue->NsiRefCountTracker;
          *(_QWORD *)v175 = v173;
          NdisReferenceWithTag(NsiRefCountTracker, 0);
          v39 = (int *)MiniportQueue->BindPaths;
          ++MiniportQueue->NsiOpenReferences;
          v173 = MiniportQueue;
          v172 = *v39;
        }
      }
      MiniportQueue->MiniportThread = 0LL;
      KeReleaseSpinLockFromDpcLevel(&MiniportQueue->Lock);
      v40 = *(_QWORD *)v175;
      if ( *(_QWORD *)v175 )
      {
        v41 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)v175 + 96LL));
        v42 = *(_QWORD *)(*(_QWORD *)v175 + 4904LL);
        *(_QWORD *)(*(_QWORD *)v175 + 520LL) = KeGetCurrentThread();
        if ( v42 - 2 > 1 )
        {
          if ( v42 < 2 )
            ndisBugCheckEx(0x1EuLL, 3uLL, v42, 0LL);
          if ( !*(_BYTE *)(v42 + 2) )
            ndisBugCheckEx(0x1EuLL, 2uLL, v42, 0LL);
          if ( *(_BYTE *)(v42 + 1) )
          {
            if ( *(_BYTE *)(v42 + 1) == 1 )
            {
              v110 = *(_DWORD *)(v42 + 64);
              v111 = v42 + 8;
              if ( v110 >> 17 < 0x3FFE && (unsigned __int16)v110 >> 1 == (v110 >> 17) + 1 )
              {
                ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v42 + 8));
                *(_DWORD *)(v111 + 56) &= 0x10001u;
              }
              else
              {
                if ( !((unsigned __int16)v110 >> 1) && (v110 & 1) == 0 )
LABEL_146:
                  ndisReportRefcountImbalance(v42, 0);
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v42 + 8), 0);
              }
            }
          }
          else
          {
            v43 = *(_QWORD *)(v42 + 8);
            if ( v43 )
            {
              for ( i = 0; ; ++i )
              {
                if ( i >= *(_BYTE *)(v42 + 3) )
                  goto LABEL_56;
                v74 = (_BYTE *)(v43 + 2LL * i);
                if ( !*v74 )
                {
                  v75 = v74[1];
                  if ( v75 )
                    break;
                }
              }
              v74[1] = v75 - 1;
            }
            else
            {
LABEL_56:
              if ( !_bittestandreset((signed __int32 *)(v42 + 16), 0) )
                goto LABEL_146;
            }
          }
        }
        v30 = (*(_DWORD *)(v40 + 3124))-- == 1;
        if ( v30 )
        {
          v44 = *(struct _KEVENT **)(v40 + 3136);
          if ( v44 )
            KeSetEvent(v44, 0, 0);
        }
        *(_QWORD *)(v40 + 520) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)(v40 + 96), v41);
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v45) = 4;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v45,
            20,
            25,
            (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
            v40);
        }
        v46 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v40 + 4432));
        v47 = *(_QWORD *)(v40 + 4896);
        v48 = v46;
        if ( v47 && v47 - 2 > 1 )
        {
          if ( v47 == 1 )
            ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
          if ( *(_BYTE *)(v47 + 2) <= 0x57u )
            ndisBugCheckEx(0x1EuLL, 2uLL, v47, 0x57uLL);
          if ( *(_BYTE *)(v47 + 1) )
          {
            if ( *(_BYTE *)(v47 + 1) == 1 )
            {
              v112 = v47 + 5576;
              v113 = *(_DWORD *)(v47 + 5632);
              if ( v113 >> 17 < 0x3FFE && (unsigned __int16)v113 >> 1 == (v113 >> 17) + 1 )
              {
                ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v47 + 5576));
                *(_DWORD *)(v112 + 56) &= 0x10001u;
              }
              else
              {
                if ( !((unsigned __int16)v113 >> 1) && (v113 & 1) == 0 )
LABEL_147:
                  ndisReportRefcountImbalance(v47, 0x57u);
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v47 + 5576), 0);
              }
            }
          }
          else
          {
            v49 = *(_QWORD *)(v47 + 8);
            if ( v49 )
            {
              for ( j = 0; ; ++j )
              {
                if ( j >= *(_BYTE *)(v47 + 3) )
                  goto LABEL_68;
                v77 = (_BYTE *)(v49 + 2LL * j);
                if ( *v77 == 87 )
                {
                  v78 = v77[1];
                  if ( v78 )
                    break;
                }
              }
              v77[1] = v78 - 1;
            }
            else
            {
LABEL_68:
              if ( !_bittestandreset((signed __int32 *)(v47 + 24), 0x17u) )
                goto LABEL_147;
            }
          }
        }
        v50 = *(_DWORD *)(v40 + 4440) - 1;
        *(_DWORD *)(v40 + 4440) = v50;
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v164) = v50;
          WPP_RECORDER_SF_qL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0x14u,
            0xEu,
            (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
            v40,
            v164);
        }
        KeReleaseSpinLock((PKSPIN_LOCK)(v40 + 4432), v48);
        if ( !v50 )
        {
          v109 = *(struct _KEVENT **)(v40 + 1608);
          if ( v109 )
            KeSetEvent(v109, 0, 0);
        }
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v51) = 4;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v51,
            20,
            26,
            (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
            v40);
        }
        *(_QWORD *)v175 = 0LL;
      }
LABEL_15:
      MiniportQueue = MiniportQueue->NextMiniport;
      v4 = v165;
      v9 = v172;
    }
    while ( MiniportQueue );
    v13 = v176;
LABEL_17:
    KeReleaseSpinLock(&p_Ref->SpinLock, v21);
    v24 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    NextDriver = v13->NextDriver;
    v14 = v24;
    v171 = v24;
    v26 = KeAcquireSpinLockRaiseToDpc(&p_Ref->SpinLock);
    v27 = (ULONG_PTR)p_Ref->RefCountTracker;
    v28 = v26;
    if ( v27 - 2 > 1 )
    {
      if ( v27 < 2 )
        ndisBugCheckEx(0x1EuLL, 3uLL, v27, 0LL);
      if ( *(_BYTE *)(v27 + 2) <= 8u )
        ndisBugCheckEx(0x1EuLL, 2uLL, v27, 8uLL);
      if ( *(_BYTE *)(v27 + 1) )
      {
        if ( *(_BYTE *)(v27 + 1) == 1 )
        {
          v69 = v27 + 520;
          v70 = *(_DWORD *)(v27 + 576);
          if ( v70 >> 17 < 0x3FFE && (unsigned __int16)v70 >> 1 == (v70 >> 17) + 1 )
          {
            for ( k = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v69;
                  *(_QWORD *)v69;
                  k = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v69 )
            {
              *(_QWORD *)v69 = k->Next;
              ndisFreeRefCountStacksInBlock(k);
              ExFreePoolWithTag(k, 0);
            }
            ndisFreeRefCountStacksInBlock((struct _NDIS_REFCOUNT_STACK_BLOCK *)v69);
            *(_DWORD *)(v69 + 56) &= 0x10001u;
            v14 = v171;
          }
          else
          {
            if ( !((unsigned __int16)v70 >> 1) && (v70 & 1) == 0 )
              goto LABEL_35;
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v27 + 520), 0);
          }
        }
      }
      else
      {
        v29 = *(_QWORD *)(v27 + 8);
        if ( !v29 )
        {
LABEL_22:
          if ( _bittestandreset((signed __int32 *)(v27 + 16), 8u) )
            goto LABEL_23;
LABEL_35:
          ndisReportRefcountImbalance(v27, 8u);
        }
        for ( m = 0; ; ++m )
        {
          if ( m >= *(_BYTE *)(v27 + 3) )
            goto LABEL_22;
          v32 = (_BYTE *)(v29 + 2LL * m);
          if ( *v32 == 8 )
          {
            v33 = v32[1];
            if ( v33 )
              break;
          }
        }
        v32[1] = v33 - 1;
      }
    }
LABEL_23:
    v30 = p_Ref->ReferenceCount-- == 1;
    if ( v30 )
    {
      if ( !p_Ref->ZeroBased )
      {
        v114 = (ULONG_PTR)p_Ref->RefCountTracker;
        if ( v114 )
        {
          AnyActiveRefTag = ndisGetAnyActiveRefTag(p_Ref->RefCountTracker);
          if ( AnyActiveRefTag != -2 )
            ndisBugCheckEx(0x1EuLL, 4uLL, v114, AnyActiveRefTag);
          v116 = ndisRefCountBlockFromRefCountHandle(v114);
          v117 = v116;
          if ( v116 )
          {
            ndisFreeRefCountAuxiliaryMemory(v116);
            ExFreePoolWithTag(v117, 0);
          }
        }
        p_Ref->RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)1;
      }
      KeReleaseSpinLock(&p_Ref->SpinLock, v28);
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v118) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v118,
          20,
          23,
          (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
          (char)v13);
      }
      for ( n = &ndisMiniDriverList; ; n = &v120->NextDriver )
      {
        v120 = *n;
        if ( !*n )
          break;
        if ( v120 == v13 )
        {
          *n = v13->NextDriver;
          ObfDereferenceObject(ndisDriverObject);
          break;
        }
      }
      Buffer = v13->ImageName.Buffer;
      if ( Buffer )
      {
        ExFreePoolWithTag(Buffer, 0);
        v13->ImageName.Buffer = 0LL;
      }
      NdisDriverInfo = v13->NdisDriverInfo;
      if ( NdisDriverInfo )
      {
        ExFreePoolWithTag(NdisDriverInfo, 0);
        v13->NdisDriverInfo = 0LL;
      }
      if ( (v13->Flags & 1) != 0 )
      {
        PendingDeviceList = v13->PendingDeviceList;
        if ( PendingDeviceList )
        {
          do
          {
            Next = PendingDeviceList->Next;
            ExFreePoolWithTag(PendingDeviceList, 0);
            PendingDeviceList = Next;
          }
          while ( Next );
        }
      }
      KeSetEvent(&v13->MiniportsRemovedEvent, 0, 0);
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v125) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v125,
          20,
          24,
          (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
          (char)v13);
      }
    }
    else
    {
      KeReleaseSpinLock(&p_Ref->SpinLock, v28);
    }
    v4 = v165;
LABEL_26:
    v176 = NextDriver;
    v13 = NextDriver;
    if ( NextDriver )
    {
      v9 = v172;
      continue;
    }
    break;
  }
  v11 = v173;
  FsContext = v180;
LABEL_76:
  KeReleaseSpinLock(&ndisMiniDriverListLock, v14);
  v3 = a3;
  CurrentStackLocation = v177;
  if ( v11 )
  {
    *(_DWORD *)((char *)&v179 + 9) = 0;
    v4 = v11;
    *(_WORD *)((char *)&v179 + 13) = 0;
    HIBYTE(v179) = 0;
    *((_QWORD *)&v178 + 1) = v11;
    *(_QWORD *)&v179 = v11->OidList;
    BYTE8(v179) = *((_BYTE *)FsContext + 24);
    v52 = *(_QWORD *)FsContext;
    FsContext = &v178;
    *(_QWORD *)&v178 = v52;
    v165 = v11;
  }
LABEL_78:
  if ( (v4->PnPFlags & 0x4010) != 0 )
  {
    v54 = -1073741436;
LABEL_183:
    v55 = (char)v165;
    goto LABEL_87;
  }
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( LowPart > 0x226044 )
  {
    switch ( LowPart )
    {
      case 0x226048u:
        if ( !*((_BYTE *)v3->Tail.Overlay.CurrentStackLocation->FileObject->FsContext + 24) )
        {
          v55 = (char)v165;
          v54 = -1073741823;
          goto LABEL_87;
        }
        break;
      case 0x22604Cu:
        if ( !*((_BYTE *)v3->Tail.Overlay.CurrentStackLocation->FileObject->FsContext + 24) )
          goto LABEL_83;
        break;
      case 0x226050u:
        if ( !*((_BYTE *)v3->Tail.Overlay.CurrentStackLocation->FileObject->FsContext + 24) )
          goto LABEL_83;
        break;
      case 0x226054u:
        v72 = v3->Tail.Overlay.CurrentStackLocation;
        v170 = 0;
        if ( *((_BYTE *)v72->FileObject->FsContext + 24) && v72->Parameters.Read.Length >= 0x10 )
        {
          if ( ndisSystemSupportsSriov )
          {
            SriovCurrentCapabilities = v4->SriovCurrentCapabilities;
            if ( SriovCurrentCapabilities )
            {
              if ( (SriovCurrentCapabilities->SriovCapabilities & 3) == 3 )
              {
                IoAcquireCancelSpinLock(&v170);
                if ( v4->InvalidateBlockMask )
                {
                  v54 = 0;
                  v163.MasterIrp = (_IRP *)v3->AssociatedIrp;
                  v163.MasterIrp->Type = v4->InvalidateVfId;
                  v163.MasterIrp->MdlAddress = (_MDL *)v4->InvalidateBlockMask;
                  v3->IoStatus.Information = 16LL;
                  v4->InvalidateBlockMask = 0LL;
                }
                else
                {
                  v4->InvalidateBlockIoctlPf = v3;
                  v54 = 259;
                  v3->Tail.Overlay.CurrentStackLocation->Control |= 1u;
                  _InterlockedExchange64((volatile __int64 *)&v3->CancelRoutine, (__int64)ndisIovCancelIoctlInvalidate);
                }
                IoReleaseCancelSpinLock(v170);
                if ( v54 != 259 )
                {
LABEL_84:
                  v55 = (char)v165;
LABEL_85:
                  if ( (v54 & 0xC0230000) == 0xC0230000 )
                    v54 = (unsigned __int16)v54 | 0xC0010000;
                  goto LABEL_87;
                }
LABEL_291:
                v183 = 0;
                goto LABEL_84;
              }
            }
          }
          goto LABEL_241;
        }
        goto LABEL_83;
      default:
LABEL_218:
        v55 = (char)v165;
        v54 = -1073741822;
        goto LABEL_87;
    }
    if ( ndisSystemSupportsSriov )
    {
      v93 = v4->SriovCurrentCapabilities;
      if ( v93 )
      {
        if ( (v93->SriovCapabilities & 3) == 3 )
        {
          v3->IoStatus.Information = 0LL;
          v54 = 0;
          v55 = (char)v165;
          goto LABEL_87;
        }
      }
    }
LABEL_241:
    v54 = -1073741637;
    goto LABEL_183;
  }
  if ( LowPart == 2252868 )
  {
    v102 = v3->Tail.Overlay.CurrentStackLocation;
    v169 = 0;
    if ( *((_BYTE *)v102->FileObject->FsContext + 24) )
    {
      if ( ndisSystemSupportsSriov )
      {
        v161 = v4->SriovCurrentCapabilities;
        if ( v161 )
        {
          if ( (v161->SriovCapabilities & 3) == 3 )
          {
            IoAcquireCancelSpinLock(&v169);
            _InterlockedExchange64((volatile __int64 *)&v3->CancelRoutine, (__int64)ndisIovCancelIoctlNotification);
            IoReleaseCancelSpinLock(v169);
            v54 = 259;
            v3->IoStatus.Information = 0LL;
            goto LABEL_291;
          }
        }
      }
      goto LABEL_241;
    }
LABEL_83:
    v54 = -1073741823;
    goto LABEL_84;
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
      v89 = ndisMiniportOidIoctl(
              v4,
              (struct _NDIS_USER_OPEN_CONTEXT *)FsContext,
              LowPart,
              CurrentStackLocation->Parameters.Create.Options,
              CurrentStackLocation->Parameters.Read.Length,
              (unsigned __int8 *)v3->AssociatedIrp.MasterIrp,
              v3->MdlAddress,
              &v174);
      v54 = v89;
      if ( !v89 || v89 == -2147483643 )
        v3->IoStatus.Information = v174;
      v183 = 1;
      goto LABEL_84;
    case 0x17001Eu:
      if ( !v3->MdlAddress )
      {
        v55 = (char)v165;
        v54 = -1073741811;
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
        v55 = (char)v165;
        goto LABEL_168;
      }
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
          v129 = *((unsigned int *)Log + 9);
          v130 = *((_DWORD *)Log + 6) - v129;
          v131 = (char *)Log + v129 + 40;
          if ( v130 < ByteCount )
          {
            memmove(MappedSystemVa, v131, v130);
            memmove(
              &MappedSystemVa[*((unsigned int *)Log + 6) - (unsigned __int64)*((unsigned int *)Log + 9)],
              (char *)Log + 40,
              ByteCount + *((_DWORD *)Log + 9) - *((_DWORD *)Log + 6));
            v132 = ByteCount;
          }
          else
          {
            v132 = ByteCount;
            memmove(MappedSystemVa, v131, ByteCount);
          }
          v133 = *((_DWORD *)Log + 9);
          *((_DWORD *)Log + 7) -= ByteCount;
          v134 = ByteCount + v133;
          v135 = *((_DWORD *)Log + 6);
          *((_DWORD *)Log + 9) = v134;
          if ( v134 >= v135 )
            *((_DWORD *)Log + 9) = v134 - v135;
          v54 = 0;
          a3->IoStatus.Information = v132;
          v11 = v173;
        }
        else
        {
          v54 = -1073741670;
        }
      }
      else if ( *((_QWORD *)Log + 2) )
      {
        v54 = -1073741823;
      }
      else
      {
        v54 = 259;
        _InterlockedExchange64((volatile __int64 *)&v3->CancelRoutine, (__int64)ndisCancelLogIrp);
        *((_QWORD *)Log + 2) = v3;
      }
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)Log + 1);
      v55 = (char)v165;
      v165->MiniportThread = 0LL;
      KeReleaseSpinLockFromDpcLevel(&v4->Lock);
      IoReleaseCancelSpinLock(Irql[0]);
      if ( v54 != 259 && v54 )
        v54 = -1073741823;
      goto LABEL_85;
    case 0x170068u:
      v94 = v3->Tail.Overlay.CurrentStackLocation;
      v54 = 0;
      if ( !*((_BYTE *)v94->FileObject->FsContext + 24) || v94->Parameters.Create.Options < 0x14 )
        goto LABEL_83;
      MasterIrp = v3->AssociatedIrp.MasterIrp;
      v137 = (int)MasterIrp->MdlAddress;
      if ( (unsigned int)(v137 - 1) > 2 )
      {
        v54 = -1073741811;
        v138 = -1073741811;
        v167 = -1073741811;
      }
      else
      {
        v138 = 0;
        v167 = 0;
        v139 = v137 - 1;
        if ( v139 )
        {
          v140 = v139 - 1;
          if ( v140 )
          {
            if ( v140 == 1 )
            {
              MiniportDataBlock = ndisPcwGetMiniportDataBlock(v4);
              if ( MiniportDataBlock )
              {
                v142 = ndisMaxNumberOfProcessors;
                v143 = 0;
                if ( ndisMaxNumberOfProcessors )
                {
                  v144 = ndisPcwOffsetToPerCpuData;
                  do
                    memset((char *)MiniportDataBlock + ndisPcwPerCpuDataStride * v143++ + v144, 0, 0x130uLL);
                  while ( v143 < v142 );
                  v11 = v173;
                }
                v4 = v165;
              }
              v3 = a3;
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
      if ( v138 )
        goto LABEL_83;
      goto LABEL_84;
    case 0x17006Cu:
      v95 = v3->Tail.Overlay.CurrentStackLocation;
      p_IoStatus = 0LL;
      if ( !*((_BYTE *)v95->FileObject->FsContext + 24) )
        goto LABEL_83;
      Length = v95->Parameters.Read.Length;
      v146.MasterIrp = (_IRP *)v3->AssociatedIrp;
      if ( (unsigned int)Length < 0x30 )
        goto LABEL_83;
      *(_QWORD *)&v146.MasterIrp->AllocationProcessorNumber = 0LL;
      v147 = 48;
      *(_MDL **)((char *)&v146.MasterIrp->MdlAddress + 4) = 0LL;
      v146.MasterIrp->AssociatedIrp.MasterIrp = 0LL;
      v146.MasterIrp->ThreadListEntry.Flink = 0LL;
      v146.MasterIrp->ThreadListEntry.Blink = 0LL;
      v148 = ndisMaxNumberOfProcessors;
      *(_DWORD *)&v146.MasterIrp->Type = 3146112;
      v146.MasterIrp->Reserved2 = v148;
      v146.MasterIrp->AssociatedIrp.MasterIrp = (_IRP *)v4->NumberOfIndirectionTableChanges;
      HIDWORD(v146.MasterIrp->MdlAddress) = v4->PcwDatapathEventMask;
      v149 = 304 * v148 + 48;
      v146.MasterIrp->Flags = v4->PcwDatapathCycleMask;
      if ( (unsigned int)Length < v149 )
      {
        LODWORD(v146.MasterIrp->ThreadListEntry.Flink) = Length / 0x130;
        if ( !(unsigned int)(Length / 0x130) )
          goto LABEL_358;
        HIDWORD(v146.MasterIrp->ThreadListEntry.Flink) = 48;
        v147 = 304 * (Length / 0x130) + 48;
      }
      else
      {
        HIDWORD(v146.MasterIrp->ThreadListEntry.Flink) = 48;
        v147 = 304 * v148 + 48;
        LODWORD(v146.MasterIrp->ThreadListEntry.Flink) = v148;
      }
      LODWORD(v146.MasterIrp->ThreadListEntry.Blink) = 304;
      p_IoStatus = &v146.MasterIrp->IoStatus;
LABEL_358:
      LODWORD(v146.MasterIrp->MdlAddress) = v149;
      v150 = ndisPcwGetMiniportDataBlock(v4);
      v151 = v150;
      if ( p_IoStatus )
      {
        if ( v150 )
        {
          v152 = 0;
          if ( LODWORD(v146.MasterIrp->ThreadListEntry.Flink) )
          {
            v153 = ndisPcwOffsetToPerCpuData;
            do
            {
              v154 = 2LL;
              v155 = &p_IoStatus[19 * v152];
              v156 = (_IO_STATUS_BLOCK *)((char *)v151 + ndisPcwPerCpuDataStride * v152 + v153);
              do
              {
                v155 += 8;
                v157 = *v156;
                v156 += 8;
                v155[-8] = v157;
                v155[-7] = v156[-7];
                v155[-6] = v156[-6];
                v155[-5] = v156[-5];
                v155[-4] = v156[-4];
                v155[-3] = v156[-3];
                v155[-2] = v156[-2];
                v155[-1] = v156[-1];
                --v154;
              }
              while ( v154 );
              ++v152;
              *v155 = *v156;
              v155[1] = v156[1];
              v155[2] = v156[2];
            }
            while ( v152 < LODWORD(v146.MasterIrp->ThreadListEntry.Flink) );
          }
        }
      }
      v158 = v147;
      v54 = 0;
      v3->IoStatus.Information = v158;
      goto LABEL_183;
    case 0x170070u:
      v167 = 0;
      HardwareInfo = ndisGetHardwareInfo(v4, v3, &v167);
      goto LABEL_174;
    case 0x170078u:
      v167 = 0;
      HardwareInfo = ndisGetPowerInfo(v4, v3, &v167);
      goto LABEL_174;
    case 0x170090u:
      RdmaCapabilities = ndisGetRdmaCapabilities(v4, v3);
      v54 = RdmaCapabilities;
      if ( !RdmaCapabilities )
        goto LABEL_84;
      if ( RdmaCapabilities == -1073676268 )
        goto LABEL_284;
      v55 = (char)v165;
      if ( RdmaCapabilities != -1073741637 )
        goto LABEL_168;
      v54 = -1073741637;
      break;
    case 0x170094u:
      v167 = 0;
      HardwareInfo = ndisGetAdapterHardwareInfo(v4, v3, &v167);
      goto LABEL_174;
    case 0x170098u:
      v87 = *((_BYTE *)FsContext + 24);
      v167 = 0;
      HardwareInfo = ndisGetAdapterRssInfo(v4, v3, v87, &v167);
LABEL_174:
      v54 = HardwareInfo;
      if ( !v167 )
        goto LABEL_84;
      if ( v167 == -1073676268 )
      {
LABEL_284:
        v55 = (char)v165;
        v54 = -2147483643;
      }
      else
      {
        v55 = (char)v165;
        if ( v167 != -1073741637 )
        {
LABEL_168:
          v54 = -1073741823;
          goto LABEL_85;
        }
        v54 = -1073741637;
      }
      break;
    case 0x1700A8u:
      if ( !*((_BYTE *)FsContext + 24) )
        goto LABEL_83;
      ndisMiniportFatalError(v4, NdisMEventErr_Min);
      v54 = 0;
      v55 = (char)v165;
      break;
    case 0x1700B0u:
      v98 = v3->Tail.Overlay.CurrentStackLocation;
      v168 = 0;
      if ( !*((_BYTE *)v98->FileObject->FsContext + 24)
        || v98->Parameters.Create.Options
        || v98->Parameters.Read.Length < 0x18 )
      {
        goto LABEL_83;
      }
      v99.MasterIrp = (_IRP *)v3->AssociatedIrp;
      *(_DWORD *)&v99.MasterIrp->Type = 1573248;
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v4, &v168);
      PDBlock = v4->PDBlock;
      if ( PDBlock )
      {
        v159 = *((_DWORD *)PDBlock + 8) + 24;
        if ( *((_DWORD *)PDBlock + 8) >= 0xFFFFFFE8 )
        {
          v54 = -1073741675;
        }
        else
        {
          *(_DWORD *)&v99.MasterIrp->AllocationProcessorNumber = v159;
          if ( v98->Parameters.Read.Length >= v159 )
          {
            v99.MasterIrp->Reserved2 = *((_DWORD *)PDBlock + 2);
            LOBYTE(v99.MasterIrp->Flags) = *((_BYTE *)PDBlock + 20);
            LODWORD(v99.MasterIrp->MdlAddress) = 24;
            HIDWORD(v99.MasterIrp->MdlAddress) = *((_DWORD *)PDBlock + 8);
            memmove(&v99.MasterIrp->AssociatedIrp, *((const void **)PDBlock + 3), *((unsigned int *)PDBlock + 8));
            v160 = v159;
            v54 = 0;
            v3->IoStatus.Information = v160;
          }
          else
          {
            v54 = -1073676268;
            v3->IoStatus.Information = 24LL;
          }
        }
      }
      else
      {
        v54 = -1073741808;
      }
      v101 = v168;
      v4->MiniportThread = 0LL;
      KeReleaseSpinLock(&v4->Lock, v101);
      if ( !v54 )
        goto LABEL_84;
      if ( v54 != -1073676268 )
        goto LABEL_83;
      v55 = (char)v165;
      v54 = -2147483643;
      break;
    default:
      goto LABEL_218;
  }
LABEL_87:
  if ( v11 )
  {
    v56 = KeAcquireSpinLockRaiseToDpc(&v11->Lock);
    v57 = (ULONG_PTR)v11->NsiRefCountTracker;
    v11->MiniportThread = KeGetCurrentThread();
    if ( v57 - 2 > 1 )
    {
      if ( v57 < 2 )
        ndisBugCheckEx(0x1EuLL, 3uLL, v57, 0LL);
      if ( !*(_BYTE *)(v57 + 2) )
        ndisBugCheckEx(0x1EuLL, 2uLL, v57, 0LL);
      if ( *(_BYTE *)(v57 + 1) )
      {
        if ( *(_BYTE *)(v57 + 1) != 1 )
          goto LABEL_94;
        v103 = *(_DWORD *)(v57 + 64);
        v104 = v57 + 8;
        if ( v103 >> 17 >= 0x3FFE || (unsigned __int16)v103 >> 1 != (v103 >> 17) + 1 )
        {
          if ( (unsigned __int16)v103 >> 1 || (v103 & 1) != 0 )
          {
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v57 + 8), 0);
            goto LABEL_94;
          }
          goto LABEL_163;
        }
        for ( ii = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v104;
              *(_QWORD *)v104;
              ii = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v104 )
        {
          *(_QWORD *)v104 = ii->Next;
          ndisFreeRefCountStacksInBlock(ii);
          ExFreePoolWithTag(ii, 0);
        }
        ndisFreeRefCountStacksInBlock((struct _NDIS_REFCOUNT_STACK_BLOCK *)v104);
        *(_DWORD *)(v104 + 56) &= 0x10001u;
      }
      else
      {
        v58 = *(_QWORD *)(v57 + 8);
        if ( !v58 )
        {
LABEL_93:
          if ( _bittestandreset((signed __int32 *)(v57 + 16), 0) )
            goto LABEL_94;
LABEL_163:
          ndisReportRefcountImbalance(v57, 0);
        }
        for ( jj = 0; ; ++jj )
        {
          if ( jj >= *(_BYTE *)(v57 + 3) )
            goto LABEL_93;
          v80 = (_BYTE *)(v58 + 2LL * jj);
          if ( !*v80 )
          {
            v81 = v80[1];
            if ( v81 )
              break;
          }
        }
        v80[1] = v81 - 1;
      }
    }
LABEL_94:
    v30 = v11->NsiOpenReferences-- == 1;
    if ( v30 )
    {
      NsiRequestsCompletedEvent = v11->NsiRequestsCompletedEvent;
      if ( NsiRequestsCompletedEvent )
        KeSetEvent(NsiRequestsCompletedEvent, 0, 0);
    }
    v11->MiniportThread = 0LL;
    KeReleaseSpinLock(&v11->Lock, v56);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v60) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v60,
        20,
        25,
        (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
        (char)v11);
    }
    v61 = KeAcquireSpinLockRaiseToDpc(&v11->Ref.SpinLock);
    v62 = (ULONG_PTR)v11->RefCountTracker;
    v63 = v61;
    if ( v62 && v62 - 2 > 1 )
    {
      if ( v62 == 1 )
        ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
      if ( *(_BYTE *)(v62 + 2) <= 0x57u )
        ndisBugCheckEx(0x1EuLL, 2uLL, v62, 0x57uLL);
      if ( *(_BYTE *)(v62 + 1) )
      {
        if ( *(_BYTE *)(v62 + 1) == 1 )
        {
          v106 = v62 + 5576;
          v107 = *(_DWORD *)(v62 + 5632);
          if ( v107 >> 17 < 0x3FFE && (unsigned __int16)v107 >> 1 == (v107 >> 17) + 1 )
          {
            for ( kk = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v106;
                  *(_QWORD *)v106;
                  kk = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v106 )
            {
              *(_QWORD *)v106 = kk->Next;
              ndisFreeRefCountStacksInBlock(kk);
              ExFreePoolWithTag(kk, 0);
            }
            ndisFreeRefCountStacksInBlock((struct _NDIS_REFCOUNT_STACK_BLOCK *)v106);
            *(_DWORD *)(v106 + 56) &= 0x10001u;
          }
          else
          {
            if ( !((unsigned __int16)v107 >> 1) && (v107 & 1) == 0 )
              goto LABEL_164;
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v62 + 5576), 0);
          }
        }
      }
      else
      {
        v64 = *(_QWORD *)(v62 + 8);
        if ( !v64 )
        {
LABEL_105:
          if ( _bittestandreset((signed __int32 *)(v62 + 24), 0x17u) )
            goto LABEL_106;
LABEL_164:
          ndisReportRefcountImbalance(v62, 0x57u);
        }
        for ( mm = 0; ; ++mm )
        {
          if ( mm >= *(_BYTE *)(v62 + 3) )
            goto LABEL_105;
          v83 = (_BYTE *)(v64 + 2LL * mm);
          if ( *v83 == 87 )
          {
            v84 = v83[1];
            if ( v84 )
              break;
          }
        }
        v83[1] = v84 - 1;
      }
    }
LABEL_106:
    v65 = v11->Ref.ReferenceCount - 1;
    v11->Ref.ReferenceCount = v65;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v164) = v65;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x14u,
        0xEu,
        (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
        (char)v11,
        v164);
    }
    KeReleaseSpinLock(&v11->Ref.SpinLock, v63);
    if ( !v65 )
    {
      RemoveReadyEvent = v11->RemoveReadyEvent;
      if ( RemoveReadyEvent )
        KeSetEvent(RemoveReadyEvent, 0, 0);
    }
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v66) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v66,
        20,
        26,
        (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
        (char)v11);
    }
  }
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  v3 = a3;
  if ( v183 && v54 != 259 )
  {
LABEL_170:
    v3->IoStatus.Status = v54;
    IofCompleteRequest(v3, 2);
  }
LABEL_112:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v67) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v67,
      11,
      22,
      (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
      v55,
      (char)v3);
  }
  return v54;
}
