/*
 * XREFs of ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x140011370
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x14000C6D0 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceTopMiniportByNameForNsi@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU1@KKEW4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000F2F0 (-ndisReferenceTopMiniportByNameForNsi@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU1@KKEW4_NDIS_NSI_REFTAG@@.c)
 *     NdisReferenceWithTag @ 0x140010F90 (NdisReferenceWithTag.c)
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x1400110D0 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     ?ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1400136E0 (-ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisGetAnyActiveRefTag@@YAKPEAUNDIS_REFCOUNT_HANDLE__@@@Z @ 0x140013700 (-ndisGetAnyActiveRefTag@@YAKPEAUNDIS_REFCOUNT_HANDLE__@@@Z.c)
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1400137C0 (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     ?ndisRefCountBlockFromRefCountHandle@@YAPEAU_NDIS_REFCOUNT_BLOCK@@PEAUNDIS_REFCOUNT_HANDLE__@@@Z @ 0x140013820 (-ndisRefCountBlockFromRefCountHandle@@YAPEAU_NDIS_REFCOUNT_BLOCK@@PEAUNDIS_REFCOUNT_HANDLE__@@@Z.c)
 *     ?ndisFreeRefCountStacksInBlock@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x140013860 (-ndisFreeRefCountStacksInBlock@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x140013990 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008ADC0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     ndisNsiGetInterfaceRosEnumObject @ 0x14014F8F0 (ndisNsiGetInterfaceRosEnumObject.c)
 *     ndisNsiGetInterfaceRosInformation @ 0x1401513A0 (ndisNsiGetInterfaceRosInformation.c)
 *     ndisNsiGetInterfaceRwInformation @ 0x1401517F0 (ndisNsiGetInterfaceRwInformation.c)
 *     ndisIsMacAddressHidden @ 0x140159450 (ndisIsMacAddressHidden.c)
 *     ndisNsiGetInterfaceRodEnumObject @ 0x14016C5D0 (ndisNsiGetInterfaceRodEnumObject.c)
 *     ndisNsiGetInterfaceRodInformation @ 0x14016CC70 (ndisNsiGetInterfaceRodInformation.c)
 */

__int64 __fastcall ndisNsiGetAllInterfaceInformation(struct _NM_REQUEST_GET_ALL_PARAMETERS *a1, __int16 a2)
{
  _NDIS_IF_BLOCK *v2; // r12
  struct _NM_REQUEST_GET_ALL_PARAMETERS *v3; // r15
  __int64 CurrentProcess; // rax
  struct _KTHREAD *CurrentThread; // rsi
  _LIST_ENTRY **v6; // rbx
  _LIST_ENTRY *v7; // rbx
  int *ThreadProperty; // rax
  PACCESS_TOKEN v9; // rax
  void *v10; // r14
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v12; // edi
  int v13; // r14d
  unsigned int v14; // edi
  KIRQL v15; // al
  struct _NDIS_IF_COMPARTMENT_BLOCK *v16; // rdx
  KIRQL v17; // r8
  struct _NDIS_IF_COMPARTMENT_BLOCK *i; // rax
  KIRQL v19; // al
  int v20; // ecx
  KIRQL v21; // si
  _DEVICE_OBJECT *v22; // rax
  void **p_DeviceContext; // r13
  char *v24; // rcx
  char *v25; // rdx
  int v26; // ebx
  KIRQL v27; // r14
  __int64 p_DeferredContext; // rbx
  KIRQL v29; // al
  ULONG_PTR v30; // r8
  KIRQL v31; // r15
  __int64 v32; // r9
  bool v33; // zf
  unsigned int v34; // ebx
  int v35; // edx
  struct _KTHREAD *v36; // r14
  PACCESS_TOKEN v37; // rax
  void *v38; // rsi
  unsigned int ThreadSessionId; // eax
  NTSTATUS v40; // edi
  unsigned __int8 kk; // cl
  _BYTE *v42; // rdx
  char v43; // al
  char *v44; // rcx
  char *v45; // r8
  KIRQL v46; // al
  KIRQL v47; // di
  struct _NDIS_MINIPORT_BLOCK *v48; // rbx
  __int64 v49; // r8
  struct _NDIS_MINIPORT_BLOCK *v50; // rax
  struct _NDIS_MINIPORT_BLOCK *v51; // rbx
  _NDIS_FILTER_BLOCK *v52; // rdi
  _NDIS_IF_BLOCK *v53; // r15
  int v54; // ecx
  _DEVICE_OBJECT *Blink; // rax
  NTSTATUS InformationToken; // edi
  KIRQL v57; // r8
  ULONG_PTR v58; // rdi
  unsigned int v59; // r9d
  struct _NDIS_REFCOUNT_STACK_BLOCK *jj; // rsi
  struct _NDIS_MINIPORT_BLOCK *v61; // rax
  struct _NDIS_MINIPORT_BLOCK *v62; // rbx
  _NDIS_FILTER_BLOCK *HighestFilter; // rdi
  _NDIS_IF_BLOCK *IfBlock; // r15
  KIRQL v65; // r15
  unsigned __int16 ReferenceCount; // ax
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  KIRQL v68; // si
  ULONG_PTR NsiRefCountTracker; // r8
  __int64 v70; // r9
  struct _KEVENT *NsiRequestsCompletedEvent; // rcx
  __int16 v72; // dx
  KIRQL v73; // al
  _BYTE *v74; // rdx
  ULONG_PTR v75; // r8
  KIRQL v76; // r14
  __int64 v77; // r9
  int v78; // edi
  __int16 v79; // dx
  KIRQL v80; // al
  ULONG_PTR v81; // r8
  KIRQL v82; // bl
  __int64 v83; // rdx
  __int64 v84; // rax
  KIRQL v85; // r15
  unsigned __int16 v86; // ax
  struct _NDIS_REFCOUNT_BLOCK *v87; // rcx
  KIRQL v88; // si
  ULONG_PTR v89; // r8
  __int64 v90; // r9
  struct _KEVENT *v91; // rcx
  __int16 v92; // dx
  KIRQL v93; // al
  _BYTE *v94; // rdx
  ULONG_PTR v95; // r8
  KIRQL v96; // r14
  __int64 v97; // r9
  int v98; // edi
  __int16 v99; // dx
  unsigned __int8 m; // cl
  _BYTE *v101; // r9
  char v102; // al
  unsigned __int8 n; // cl
  _BYTE *v104; // rdx
  char v105; // al
  unsigned __int8 ii; // cl
  char v107; // al
  unsigned __int8 j; // cl
  _BYTE *v109; // rdx
  char v110; // al
  unsigned __int8 k; // cl
  char v112; // al
  void *v113; // rax
  struct _KEVENT *v114; // rcx
  struct _KEVENT *v115; // rcx
  struct _KEVENT *RemoveReadyEvent; // rcx
  ULONG_PTR v117; // rdi
  unsigned int v118; // r9d
  ULONG_PTR v119; // rdi
  unsigned int v120; // r9d
  ULONG_PTR v121; // rdi
  unsigned int v122; // r9d
  ULONG_PTR v123; // rdi
  unsigned int v124; // edx
  ULONG_PTR v125; // rdi
  unsigned int v126; // edx
  ULONG_PTR v127; // rdi
  unsigned int AnyActiveRefTag; // eax
  struct _NDIS_REFCOUNT_BLOCK *v129; // rax
  struct _NDIS_REFCOUNT_BLOCK *v130; // rdi
  KIRQL v132; // [rsp+40h] [rbp-59h]
  BOOLEAN EffectiveOnly; // [rsp+41h] [rbp-58h] BYREF
  BOOLEAN CopyOnOpen; // [rsp+42h] [rbp-57h] BYREF
  BOOLEAN v135; // [rsp+43h] [rbp-56h] BYREF
  BOOLEAN v136[4]; // [rsp+44h] [rbp-55h] BYREF
  char v137[4]; // [rsp+48h] [rbp-51h]
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+4Ch] [rbp-4Dh] BYREF
  _SECURITY_IMPERSONATION_LEVEL v139; // [rsp+50h] [rbp-49h] BYREF
  struct _NM_REQUEST_GET_ALL_PARAMETERS *v140; // [rsp+58h] [rbp-41h]
  char v141[16]; // [rsp+60h] [rbp-39h] BYREF
  __int128 v142; // [rsp+70h] [rbp-29h]
  __int128 v143; // [rsp+80h] [rbp-19h]
  __int128 v144; // [rsp+90h] [rbp-9h]
  PVOID TokenInformation; // [rsp+A0h] [rbp+7h] BYREF
  PVOID v146[4]; // [rsp+A8h] [rbp+Fh] BYREF

  v2 = 0LL;
  v140 = a1;
  *(_DWORD *)v137 = 0;
  v3 = a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      22,
      26,
      (struct _GUID *)&WPP_1fac887ef26339fd0b855bd4d9383f6d_Traceguids,
      (char)a1);
  }
  *(_OWORD *)v141 = 0LL;
  v142 = 0LL;
  v143 = 0LL;
  v144 = 0LL;
  CurrentProcess = PsGetCurrentProcess();
  v136[1] = ndisIsMacAddressHidden(CurrentProcess);
  KeEnterCriticalRegion();
  if ( *((_DWORD *)v3 + 6) != 8 )
  {
    v34 = -1073741808;
    v27 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
    goto LABEL_52;
  }
  CurrentThread = KeGetCurrentThread();
  v6 = (_LIST_ENTRY **)*((_QWORD *)v3 + 2);
  memset(&v146[1], 0, 24);
  v7 = *v6;
  ThreadProperty = (int *)PsGetThreadProperty(CurrentThread, 0x6D43644EuLL, 0);
  if ( !ThreadProperty )
  {
    LODWORD(v146[1]) = 0;
    goto LABEL_6;
  }
  v13 = *ThreadProperty;
  LODWORD(v146[1]) = ThreadProperty[1];
  HIDWORD(v146[1]) = v13;
  ObfDereferenceObject(ThreadProperty);
  v14 = v13;
  if ( !v13 )
  {
LABEL_6:
    CopyOnOpen = 0;
    EffectiveOnly = 0;
    ImpersonationLevel = SecurityAnonymous;
    TokenInformation = 0LL;
    if ( KeGetCurrentIrql() >= 2u )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    }
    else
    {
      v9 = PsReferenceImpersonationToken(CurrentThread, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
      v10 = v9;
      if ( v9 )
      {
        v40 = SeQueryInformationToken(v9, TokenSessionId, &TokenInformation);
        PsDereferenceImpersonationToken(v10);
        if ( v40 >= 0 )
        {
          v12 = (unsigned int)TokenInformation;
LABEL_10:
          if ( v12 == -1 )
          {
            v36 = KeGetCurrentThread();
            v136[0] = 0;
            v135 = 0;
            v139 = SecurityAnonymous;
            v146[0] = 0LL;
            if ( KeGetCurrentIrql() >= 2u )
            {
              ThreadSessionId = PsGetCurrentProcessSessionId();
            }
            else
            {
              v37 = PsReferenceImpersonationToken(v36, v136, &v135, &v139);
              v38 = v37;
              if ( v37 )
              {
                InformationToken = SeQueryInformationToken(v37, TokenSessionId, v146);
                PsDereferenceImpersonationToken(v38);
                if ( InformationToken >= 0 )
                {
                  v12 = (unsigned int)v146[0];
                  goto LABEL_11;
                }
              }
              ThreadSessionId = PsGetThreadSessionId(v36);
            }
            v12 = ThreadSessionId;
          }
LABEL_11:
          if ( v12 < dword_14011C950 )
          {
            v13 = 0;
            v57 = KeAcquireSpinLockRaiseToDpc(&qword_14011C9A0);
            if ( v12 < dword_14011C950 )
              v13 = *((_DWORD *)qword_14011C9F0 + 6 * v12);
            KeReleaseSpinLock(&qword_14011C9A0, v57);
            if ( !v13 )
              v13 = 1;
          }
          else
          {
            v13 = 1;
          }
          HIDWORD(v146[1]) = v13;
          v14 = v13;
          goto LABEL_14;
        }
      }
      CurrentProcessSessionId = PsGetThreadSessionId(CurrentThread);
    }
    v12 = CurrentProcessSessionId;
    goto LABEL_10;
  }
LABEL_14:
  v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  v16 = 0LL;
  v17 = v15;
  for ( i = qword_14011CAA0;
        i != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_14011CAA0;
        i = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)i )
  {
    if ( *((_DWORD *)i + 4) == v14 )
    {
      v16 = i;
      break;
    }
    if ( *((_DWORD *)i + 4) > v14 )
      break;
  }
  *(_OWORD *)&v146[2] = *(_OWORD *)((char *)v16 + 1684);
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v17);
  v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  v20 = *((_DWORD *)v3 + 8);
  v21 = v19;
  v132 = v19;
  if ( v20 )
  {
    v54 = v20 - 1;
    if ( v54 )
    {
      if ( v54 != 1 )
      {
        v34 = -1073741811;
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v19);
        v27 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
        goto LABEL_52;
      }
    }
    else
    {
      v7 = 0LL;
    }
    while ( 1 )
    {
      Blink = (_DEVICE_OBJECT *)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink;
      p_DeviceContext = 0LL;
      while ( Blink != (_DEVICE_OBJECT *)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink )
      {
        if ( Blink->Queue.ListEntry.Flink > v7 )
        {
          p_DeviceContext = &Blink[-4].Queue.Wcb.DeviceContext;
          break;
        }
        Blink = *(_DEVICE_OBJECT **)&Blink->Type;
      }
      if ( !p_DeviceContext )
        break;
      v44 = (char *)p_DeviceContext[172];
      v7 = (_LIST_ENTRY *)p_DeviceContext[164];
      if ( v13 == *((_DWORD *)v44 + 4) )
        goto LABEL_78;
      if ( LODWORD(v146[1]) == -1 )
      {
        v45 = (char *)v146[2] - *(_QWORD *)(v44 + 1684);
        if ( v146[2] == *(PVOID *)(v44 + 1684) )
          v45 = (char *)v146[3] - *(_QWORD *)(v44 + 1692);
        if ( !v45 )
          goto LABEL_78;
      }
      if ( (*((_DWORD *)v44 + 420) & 2) == 0 && v13 == 1 )
        goto LABEL_78;
    }
LABEL_35:
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v21);
    v26 = -1073741772;
    if ( *((_DWORD *)v3 + 8) )
      v26 = -2147483622;
    *(_DWORD *)v137 = v26;
    goto LABEL_38;
  }
  v22 = (_DEVICE_OBJECT *)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink;
  p_DeviceContext = 0LL;
  while ( v22 != (_DEVICE_OBJECT *)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink )
  {
    if ( v22->Queue.ListEntry.Flink == v7 )
    {
      p_DeviceContext = &v22[-4].Queue.Wcb.DeviceContext;
      break;
    }
    if ( v22->Queue.ListEntry.Flink > v7 )
      break;
    v22 = *(_DEVICE_OBJECT **)&v22->Type;
  }
  if ( !p_DeviceContext )
    goto LABEL_35;
  v24 = (char *)p_DeviceContext[172];
  if ( v13 != *((_DWORD *)v24 + 4) )
  {
    v25 = (char *)v146[2] - *(_QWORD *)(v24 + 1684);
    if ( v146[2] == *(PVOID *)(v24 + 1684) )
      v25 = (char *)v146[3] - *(_QWORD *)(v24 + 1692);
    if ( v25 && ((*((_DWORD *)v24 + 420) & 2) != 0 || v13 != 1) )
    {
      p_DeviceContext = 0LL;
      goto LABEL_35;
    }
  }
LABEL_78:
  NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)p_DeviceContext[179], 3u);
  ++*((_DWORD *)p_DeviceContext + 326);
  if ( !*((_BYTE *)p_DeviceContext + 1393) || *((_QWORD *)v3 + 1) >= 2uLL )
    goto LABEL_150;
  v46 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  v47 = v46;
  if ( *((_BYTE *)p_DeviceContext + 1395) )
  {
    v48 = (struct _NDIS_MINIPORT_BLOCK *)p_DeviceContext[176];
    NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)p_DeviceContext[180], 3u);
    ++*((_DWORD *)p_DeviceContext + 349);
    KeReleaseSpinLock(&SpinLock, v47);
    if ( v48 )
    {
      v61 = ndisReferenceTopMiniportByNameForNsi(v48, 0, v49, 0, NSIREF_IFTOP, MPREF_IF_FINDTOP);
      v62 = v61;
      if ( !v61 )
        goto LABEL_139;
      KeAcquireSpinLockAtDpcLevel(&v61->Lock);
      HighestFilter = v62->HighestFilter;
      v62->MiniportThread = KeGetCurrentThread();
      if ( !HighestFilter )
      {
LABEL_111:
        IfBlock = v62->IfBlock;
        goto LABEL_115;
      }
      while ( 1 )
      {
        v65 = KeAcquireSpinLockRaiseToDpc(&HighestFilter->PnPRef.SpinLock);
        if ( !HighestFilter->PnPRef.Closing )
        {
          ReferenceCount = HighestFilter->PnPRef.ReferenceCount;
          if ( ReferenceCount < 0xFFEBu )
          {
            RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)HighestFilter->PnPRef.RefCountTracker;
            HighestFilter->PnPRef.ReferenceCount = ReferenceCount + 1;
            NdisReferenceWithTag(RefCountTracker, 0xBu);
            KeReleaseSpinLock(&HighestFilter->PnPRef.SpinLock, v65);
            IfBlock = HighestFilter->IfBlock;
LABEL_115:
            v62->MiniportThread = 0LL;
            KeReleaseSpinLockFromDpcLevel(&v62->Lock);
            v68 = KeAcquireSpinLockRaiseToDpc(&v62->Lock);
            NsiRefCountTracker = (ULONG_PTR)v62->NsiRefCountTracker;
            v62->MiniportThread = KeGetCurrentThread();
            if ( NsiRefCountTracker - 2 > 1 )
            {
              if ( NsiRefCountTracker < 2 )
                ndisBugCheckEx(0x1EuLL, 3uLL, NsiRefCountTracker, 0LL);
              if ( *(_BYTE *)(NsiRefCountTracker + 2) <= 2u )
                ndisBugCheckEx(0x1EuLL, 2uLL, NsiRefCountTracker, 2uLL);
              if ( *(_BYTE *)(NsiRefCountTracker + 1) )
              {
                if ( *(_BYTE *)(NsiRefCountTracker + 1) != 1 )
                  goto LABEL_121;
                v123 = NsiRefCountTracker + 136;
                v124 = *(_DWORD *)(NsiRefCountTracker + 192);
                if ( v124 >> 17 < 0x3FFE && (unsigned __int16)v124 >> 1 == (v124 >> 17) + 1 )
                {
                  ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(NsiRefCountTracker + 136));
                  *(_DWORD *)(v123 + 56) &= 0x10001u;
                  goto LABEL_121;
                }
                if ( (unsigned __int16)v124 >> 1 || (v124 & 1) != 0 )
                {
                  ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(NsiRefCountTracker + 136), 0);
                  goto LABEL_121;
                }
                goto LABEL_220;
              }
              v70 = *(_QWORD *)(NsiRefCountTracker + 8);
              if ( !v70 )
              {
LABEL_120:
                if ( _bittestandreset((signed __int32 *)(NsiRefCountTracker + 16), 2u) )
                  goto LABEL_121;
LABEL_220:
                ndisReportRefcountImbalance(NsiRefCountTracker, 2u);
              }
              for ( j = 0; ; ++j )
              {
                if ( j >= *(_BYTE *)(NsiRefCountTracker + 3) )
                  goto LABEL_120;
                v109 = (_BYTE *)(v70 + 2LL * j);
                if ( *v109 == 2 )
                {
                  v110 = v109[1];
                  if ( v110 )
                    break;
                }
              }
              v109[1] = v110 - 1;
            }
LABEL_121:
            v33 = v62->NsiOpenReferences-- == 1;
            if ( v33 )
            {
              NsiRequestsCompletedEvent = v62->NsiRequestsCompletedEvent;
              if ( NsiRequestsCompletedEvent )
                KeSetEvent(NsiRequestsCompletedEvent, 0, 0);
            }
            v62->MiniportThread = 0LL;
            KeReleaseSpinLock(&v62->Lock, v68);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v72) = 4;
              WPP_RECORDER_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v72,
                20,
                25,
                (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
                (char)v62);
            }
            v73 = KeAcquireSpinLockRaiseToDpc(&v62->Ref.SpinLock);
            v75 = (ULONG_PTR)v62->RefCountTracker;
            v76 = v73;
            if ( v75 && v75 - 2 > 1 )
            {
              if ( v75 == 1 )
                ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
              if ( *(_BYTE *)(v75 + 2) <= 0x3Cu )
                ndisBugCheckEx(0x1EuLL, 2uLL, v75, 0x3CuLL);
              if ( *(_BYTE *)(v75 + 1) )
              {
                if ( *(_BYTE *)(v75 + 1) == 1 )
                {
                  v125 = v75 + 3848;
                  v126 = *(_DWORD *)(v75 + 3904);
                  if ( v126 >> 17 < 0x3FFE && (unsigned __int16)v126 >> 1 == (v126 >> 17) + 1 )
                  {
                    ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v75 + 3848));
                    *(_DWORD *)(v125 + 56) &= 0x10001u;
                  }
                  else
                  {
                    if ( !((unsigned __int16)v126 >> 1) && (v126 & 1) == 0 )
                      goto LABEL_221;
                    ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v75 + 3848), 0);
                  }
                }
              }
              else
              {
                v77 = *(_QWORD *)(v75 + 8);
                if ( !v77 )
                {
LABEL_132:
                  if ( _bittestandreset((signed __int32 *)(v75 + 20), 0x1Cu) )
                    goto LABEL_133;
LABEL_221:
                  ndisReportRefcountImbalance(v75, 0x3Cu);
                }
                for ( k = 0; ; ++k )
                {
                  if ( k >= *(_BYTE *)(v75 + 3) )
                    goto LABEL_132;
                  v74 = (_BYTE *)(v77 + 2LL * k);
                  if ( *v74 == 60 )
                  {
                    v112 = v74[1];
                    if ( v112 )
                      break;
                  }
                }
                v74[1] = v112 - 1;
              }
            }
LABEL_133:
            v78 = v62->Ref.ReferenceCount - 1;
            v62->Ref.ReferenceCount = v78;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v74) = 4;
              WPP_RECORDER_SF_qL(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                (int)v74,
                20,
                14,
                (struct _GUID *)&WPP_cb6db8c6f99e3ae11a098d09772ad370_Traceguids,
                (char)v62,
                v62->Ref.ReferenceCount);
            }
            KeReleaseSpinLock(&v62->Ref.SpinLock, v76);
            if ( !v78 )
            {
              RemoveReadyEvent = v62->RemoveReadyEvent;
              if ( RemoveReadyEvent )
                KeSetEvent(RemoveReadyEvent, 0, 0);
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v79) = 4;
              WPP_RECORDER_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v79,
                20,
                26,
                (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
                (char)v62);
            }
            v2 = IfBlock;
LABEL_139:
            v80 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
            v81 = (ULONG_PTR)p_DeviceContext[180];
            v82 = v80;
            if ( v81 - 2 > 1 )
            {
              if ( v81 < 2 )
                ndisBugCheckEx(0x1EuLL, 3uLL, v81, 0LL);
              if ( *(_BYTE *)(v81 + 2) <= 3u )
                ndisBugCheckEx(0x1EuLL, 2uLL, v81, 3uLL);
              if ( *(_BYTE *)(v81 + 1) )
              {
                if ( *(_BYTE *)(v81 + 1) == 1 )
                {
                  v117 = v81 + 200;
                  v118 = *(_DWORD *)(v81 + 256);
                  if ( v118 >> 17 < 0x3FFE && (unsigned __int16)v118 >> 1 == (v118 >> 17) + 1 )
                  {
                    ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v81 + 200));
                    *(_DWORD *)(v117 + 56) &= 0x10001u;
                  }
                  else
                  {
                    if ( !((unsigned __int16)v118 >> 1) && (v118 & 1) == 0 )
                      goto LABEL_193;
                    ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v81 + 200), 0);
                  }
                }
              }
              else
              {
                v83 = *(_QWORD *)(v81 + 8);
                if ( !v83 )
                {
LABEL_144:
                  if ( _bittestandreset((signed __int32 *)(v81 + 16), 3u) )
                    goto LABEL_145;
LABEL_193:
                  ndisReportRefcountImbalance(v81, 3u);
                }
                for ( m = 0; ; ++m )
                {
                  if ( m >= *(_BYTE *)(v81 + 3) )
                    goto LABEL_144;
                  v101 = (_BYTE *)(v83 + 2LL * m);
                  if ( *v101 == 3 )
                  {
                    v102 = v101[1];
                    if ( v102 )
                      break;
                  }
                }
                v101[1] = v102 - 1;
              }
            }
LABEL_145:
            v33 = (*((_DWORD *)p_DeviceContext + 349))-- == 1;
            if ( v33 )
            {
              v113 = p_DeviceContext[176];
              if ( v113 )
              {
                v114 = (struct _KEVENT *)*((_QWORD *)v113 + 506);
                if ( v114 )
                  KeSetEvent(v114, 0, 0);
              }
            }
            KeReleaseSpinLock(&SpinLock, v82);
            goto LABEL_147;
          }
          ndisRefCountReferenceCountOverflow = 1;
        }
        KeReleaseSpinLock(&HighestFilter->PnPRef.SpinLock, v65);
        HighestFilter = HighestFilter->LowerFilter;
        if ( !HighestFilter )
          goto LABEL_111;
      }
    }
  }
  else
  {
    KeReleaseSpinLock(&SpinLock, v46);
  }
  if ( !*((_BYTE *)p_DeviceContext + 1394) )
    goto LABEL_150;
  v50 = ndisReferenceTopMiniportByNameForNsi(
          *((struct _NDIS_MINIPORT_BLOCK **)p_DeviceContext[176] + 4),
          0,
          v49,
          0,
          NSIREF_IFTOP,
          MPREF_IF_FINDTOP);
  v51 = v50;
  if ( !v50 )
    goto LABEL_150;
  KeAcquireSpinLockAtDpcLevel(&v50->Lock);
  v52 = v51->HighestFilter;
  v51->MiniportThread = KeGetCurrentThread();
  if ( !v52 )
  {
LABEL_85:
    v53 = v51->IfBlock;
    goto LABEL_155;
  }
  while ( 1 )
  {
    v85 = KeAcquireSpinLockRaiseToDpc(&v52->PnPRef.SpinLock);
    if ( !v52->PnPRef.Closing )
      break;
LABEL_271:
    KeReleaseSpinLock(&v52->PnPRef.SpinLock, v85);
    v52 = v52->LowerFilter;
    if ( !v52 )
      goto LABEL_85;
  }
  v86 = v52->PnPRef.ReferenceCount;
  if ( v86 >= 0xFFEBu )
  {
    ndisRefCountReferenceCountOverflow = 1;
    goto LABEL_271;
  }
  v87 = (struct _NDIS_REFCOUNT_BLOCK *)v52->PnPRef.RefCountTracker;
  v52->PnPRef.ReferenceCount = v86 + 1;
  NdisReferenceWithTag(v87, 0xBu);
  KeReleaseSpinLock(&v52->PnPRef.SpinLock, v85);
  v53 = v52->IfBlock;
LABEL_155:
  v51->MiniportThread = 0LL;
  KeReleaseSpinLockFromDpcLevel(&v51->Lock);
  v88 = KeAcquireSpinLockRaiseToDpc(&v51->Lock);
  v89 = (ULONG_PTR)v51->NsiRefCountTracker;
  v51->MiniportThread = KeGetCurrentThread();
  if ( v89 - 2 > 1 )
  {
    if ( v89 < 2 )
      ndisBugCheckEx(0x1EuLL, 3uLL, v89, 0LL);
    if ( *(_BYTE *)(v89 + 2) <= 2u )
      ndisBugCheckEx(0x1EuLL, 2uLL, v89, 2uLL);
    if ( *(_BYTE *)(v89 + 1) )
    {
      if ( *(_BYTE *)(v89 + 1) != 1 )
        goto LABEL_161;
      v119 = v89 + 136;
      v120 = *(_DWORD *)(v89 + 192);
      if ( v120 >> 17 < 0x3FFE && (unsigned __int16)v120 >> 1 == (v120 >> 17) + 1 )
      {
        ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v89 + 136));
        *(_DWORD *)(v119 + 56) &= 0x10001u;
        goto LABEL_161;
      }
      if ( (unsigned __int16)v120 >> 1 || (v120 & 1) != 0 )
      {
        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v89 + 136), 0);
        goto LABEL_161;
      }
      goto LABEL_218;
    }
    v90 = *(_QWORD *)(v89 + 8);
    if ( !v90 )
    {
LABEL_160:
      if ( _bittestandreset((signed __int32 *)(v89 + 16), 2u) )
        goto LABEL_161;
LABEL_218:
      ndisReportRefcountImbalance(v89, 2u);
    }
    for ( n = 0; ; ++n )
    {
      if ( n >= *(_BYTE *)(v89 + 3) )
        goto LABEL_160;
      v104 = (_BYTE *)(v90 + 2LL * n);
      if ( *v104 == 2 )
      {
        v105 = v104[1];
        if ( v105 )
          break;
      }
    }
    v104[1] = v105 - 1;
  }
LABEL_161:
  v33 = v51->NsiOpenReferences-- == 1;
  if ( v33 )
  {
    v91 = v51->NsiRequestsCompletedEvent;
    if ( v91 )
      KeSetEvent(v91, 0, 0);
  }
  v51->MiniportThread = 0LL;
  KeReleaseSpinLock(&v51->Lock, v88);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v92) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v92,
      20,
      25,
      (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
      (char)v51);
  }
  v93 = KeAcquireSpinLockRaiseToDpc(&v51->Ref.SpinLock);
  v95 = (ULONG_PTR)v51->RefCountTracker;
  v96 = v93;
  if ( v95 && v95 - 2 > 1 )
  {
    if ( v95 == 1 )
      ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
    if ( *(_BYTE *)(v95 + 2) <= 0x3Cu )
      ndisBugCheckEx(0x1EuLL, 2uLL, v95, 0x3CuLL);
    if ( *(_BYTE *)(v95 + 1) )
    {
      if ( *(_BYTE *)(v95 + 1) == 1 )
      {
        v121 = v95 + 3848;
        v122 = *(_DWORD *)(v95 + 3904);
        if ( v122 >> 17 < 0x3FFE && (unsigned __int16)v122 >> 1 == (v122 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v95 + 3848));
          *(_DWORD *)(v121 + 56) &= 0x10001u;
        }
        else
        {
          if ( !((unsigned __int16)v122 >> 1) && (v122 & 1) == 0 )
            goto LABEL_219;
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v95 + 3848), 0);
        }
      }
    }
    else
    {
      v97 = *(_QWORD *)(v95 + 8);
      if ( !v97 )
      {
LABEL_172:
        if ( _bittestandreset((signed __int32 *)(v95 + 20), 0x1Cu) )
          goto LABEL_173;
LABEL_219:
        ndisReportRefcountImbalance(v95, 0x3Cu);
      }
      for ( ii = 0; ; ++ii )
      {
        if ( ii >= *(_BYTE *)(v95 + 3) )
          goto LABEL_172;
        v94 = (_BYTE *)(v97 + 2LL * ii);
        if ( *v94 == 60 )
        {
          v107 = v94[1];
          if ( v107 )
            break;
        }
      }
      v94[1] = v107 - 1;
    }
  }
LABEL_173:
  v98 = v51->Ref.ReferenceCount - 1;
  v51->Ref.ReferenceCount = v98;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v94) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v94,
      20,
      14,
      (struct _GUID *)&WPP_cb6db8c6f99e3ae11a098d09772ad370_Traceguids,
      (char)v51,
      v51->Ref.ReferenceCount);
  }
  KeReleaseSpinLock(&v51->Ref.SpinLock, v96);
  if ( !v98 )
  {
    v115 = v51->RemoveReadyEvent;
    if ( v115 )
      KeSetEvent(v115, 0, 0);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v99) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v99,
      20,
      26,
      (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
      (char)v51);
  }
  v2 = v53;
LABEL_147:
  if ( v2 )
  {
    NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v2->RefCountTracker, 4u);
    ++v2->Ref;
  }
  v21 = v132;
  v3 = v140;
LABEL_150:
  **((_QWORD **)v3 + 2) = p_DeviceContext[164];
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v21);
  v84 = *((_QWORD *)v3 + 1);
  if ( v84 )
  {
    switch ( v84 )
    {
      case 1LL:
        goto LABEL_190;
      case 12LL:
        goto LABEL_151;
      case 13LL:
LABEL_190:
        *((_QWORD *)&v143 + 1) = *((_QWORD *)v3 + 7);
        LODWORD(v144) = *((_DWORD *)v3 + 16);
        LODWORD(v143) = 1;
        ndisNsiGetInterfaceRodEnumObject((char)p_DeviceContext);
        *((_DWORD *)v3 + 16) = v144;
        *((_QWORD *)&v143 + 1) = *((_QWORD *)v3 + 9);
        LODWORD(v144) = *((_DWORD *)v3 + 20);
        LODWORD(v143) = 2;
        ndisNsiGetInterfaceRosEnumObject((char)p_DeviceContext);
        *((_DWORD *)v3 + 20) = v144;
        break;
      default:
        *(_DWORD *)v137 = -1073741811;
        break;
    }
  }
  else
  {
LABEL_151:
    *((_QWORD *)&v143 + 1) = *((_QWORD *)v3 + 5);
    LODWORD(v144) = *((_DWORD *)v3 + 12);
    ndisNsiGetInterfaceRwInformation((char)p_DeviceContext, (char)v2, (char)v141);
    *((_DWORD *)v3 + 12) = v144;
    *((_QWORD *)&v143 + 1) = *((_QWORD *)v3 + 7);
    LODWORD(v144) = *((_DWORD *)v3 + 16);
    LODWORD(v143) = 1;
    ndisNsiGetInterfaceRodInformation((char)p_DeviceContext, (char)v2, (char)v141);
    *((_DWORD *)v3 + 16) = v144;
    *((_QWORD *)&v143 + 1) = *((_QWORD *)v3 + 9);
    LODWORD(v144) = *((_DWORD *)v3 + 20);
    LODWORD(v143) = 2;
    ndisNsiGetInterfaceRosInformation((struct _NDIS_IF_BLOCK *)p_DeviceContext);
    *((_DWORD *)v3 + 20) = v144;
  }
LABEL_38:
  v27 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  if ( v2 )
  {
    if ( v2->IsNdisFilter )
    {
      p_DeferredContext = (__int64)&v2->Miniport->WakeUpDpcTimer.Dpc.DeferredContext;
      v29 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)p_DeferredContext);
      v30 = *(_QWORD *)(p_DeferredContext + 16);
      v31 = v29;
      if ( v30 - 2 > 1 )
      {
        if ( v30 < 2 )
          ndisBugCheckEx(0x1EuLL, 3uLL, v30, 0LL);
        if ( *(_BYTE *)(v30 + 2) <= 0xBu )
          ndisBugCheckEx(0x1EuLL, 2uLL, v30, 0xBuLL);
        if ( *(_BYTE *)(v30 + 1) )
        {
          if ( *(_BYTE *)(v30 + 1) != 1 )
            goto LABEL_46;
          v58 = v30 + 712;
          v59 = *(_DWORD *)(v30 + 768);
          if ( v59 >> 17 >= 0x3FFE || (unsigned __int16)v59 >> 1 != (v59 >> 17) + 1 )
          {
            if ( (unsigned __int16)v59 >> 1 || (v59 & 1) != 0 )
            {
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v30 + 712), 0);
              goto LABEL_46;
            }
            goto LABEL_70;
          }
          for ( jj = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v58;
                *(_QWORD *)v58;
                jj = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v58 )
          {
            *(_QWORD *)v58 = jj->Next;
            ndisFreeRefCountStacksInBlock(jj);
            ExFreePoolWithTag(jj, 0);
          }
          ndisFreeRefCountStacksInBlock((struct _NDIS_REFCOUNT_STACK_BLOCK *)v58);
          *(_DWORD *)(v58 + 56) &= 0x10001u;
        }
        else
        {
          v32 = *(_QWORD *)(v30 + 8);
          if ( !v32 )
          {
LABEL_45:
            if ( _bittestandreset((signed __int32 *)(v30 + 16), 0xBu) )
              goto LABEL_46;
LABEL_70:
            ndisReportRefcountImbalance(v30, 0xBu);
          }
          for ( kk = 0; ; ++kk )
          {
            if ( kk >= *(_BYTE *)(v30 + 3) )
              goto LABEL_45;
            v42 = (_BYTE *)(v32 + 2LL * kk);
            if ( *v42 == 11 )
            {
              v43 = v42[1];
              if ( v43 )
                break;
            }
          }
          v42[1] = v43 - 1;
        }
      }
LABEL_46:
      v33 = (*(_WORD *)(p_DeferredContext + 8))-- == 1;
      if ( v33 && !*(_BYTE *)(p_DeferredContext + 11) )
      {
        v127 = *(_QWORD *)(p_DeferredContext + 16);
        if ( v127 )
        {
          AnyActiveRefTag = ndisGetAnyActiveRefTag(*(struct NDIS_REFCOUNT_HANDLE__ **)(p_DeferredContext + 16));
          if ( AnyActiveRefTag != -2 )
            ndisBugCheckEx(0x1EuLL, 4uLL, v127, AnyActiveRefTag);
          v129 = ndisRefCountBlockFromRefCountHandle(v127);
          v130 = v129;
          if ( v129 )
          {
            ndisFreeRefCountAuxiliaryMemory(v129);
            ExFreePoolWithTag(v130, 0);
          }
        }
        *(_QWORD *)(p_DeferredContext + 16) = 1LL;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)p_DeferredContext, v31);
      LOBYTE(v3) = (_BYTE)v140;
    }
    IFBLOCK_DECREMENT_REF(v2, IFREF_TOPGETALL);
  }
  if ( p_DeviceContext )
    IFBLOCK_DECREMENT_REF((struct _NDIS_IF_BLOCK *)p_DeviceContext, IFREF_GETALL);
  v34 = *(_DWORD *)v137;
LABEL_52:
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v27);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v35) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v35,
      22,
      27,
      (struct _GUID *)&WPP_1fac887ef26339fd0b855bd4d9383f6d_Traceguids,
      (char)v3,
      v34);
  }
  KeLeaveCriticalRegion();
  return v34;
}
