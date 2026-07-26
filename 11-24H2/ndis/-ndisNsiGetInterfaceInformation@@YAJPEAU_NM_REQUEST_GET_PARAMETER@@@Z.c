/*
 * XREFs of ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x14000F620
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

__int64 __fastcall ndisNsiGetInterfaceInformation(struct _NM_REQUEST_GET_PARAMETER *a1, __int16 a2)
{
  struct _NDIS_IF_BLOCK *v2; // r15
  struct _NM_REQUEST_GET_PARAMETER *v3; // r12
  __int64 CurrentProcess; // rax
  struct _KTHREAD *CurrentThread; // rsi
  _LIST_ENTRY **v6; // rbx
  _LIST_ENTRY *Value; // rbx
  int *ThreadProperty; // rax
  PACCESS_TOKEN v9; // rax
  void *v10; // r14
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v12; // edi
  int v13; // r14d
  unsigned int v14; // edi
  KIRQL v15; // al
  struct _NDIS_IF_COMPARTMENT_BLOCK *v16; // rcx
  struct _NDIS_IF_COMPARTMENT_BLOCK *v17; // r8
  KIRQL v18; // al
  unsigned __int64 v19; // rdx
  KIRQL v20; // si
  _DEVICE_OBJECT *v21; // rax
  struct _NDIS_IF_BLOCK *p_DeviceContext; // r13
  unsigned int InterfaceRodEnumObject; // ebx
  KIRQL v24; // r12
  __int64 p_DeferredContext; // rdi
  KIRQL v26; // al
  ULONG_PTR v27; // r8
  KIRQL v28; // r15
  __int64 v29; // r9
  bool v30; // zf
  int v31; // edx
  struct _KTHREAD *v32; // r14
  PACCESS_TOKEN v33; // rax
  void *v34; // rsi
  unsigned int ThreadSessionId; // eax
  NTSTATUS v36; // edi
  unsigned __int8 i1; // cl
  _BYTE *v38; // rdx
  char v39; // al
  NTSTATUS InformationToken; // edi
  KIRQL v41; // al
  ULONG_PTR v42; // rsi
  unsigned int v43; // r9d
  struct _NDIS_REFCOUNT_STACK_BLOCK *nn; // r14
  _DEVICE_OBJECT *Blink; // rax
  struct _NDIS_IF_COMPARTMENT_BLOCK *Compartment; // rcx
  struct _NDIS_IF_COMPARTMENT_BLOCK *v47; // rcx
  KIRQL v48; // al
  __int64 v49; // rdx
  KIRQL v50; // di
  struct _NDIS_MINIPORT_BLOCK *Miniport; // rbx
  __int64 v52; // r8
  struct _NDIS_MINIPORT_BLOCK *v53; // rax
  struct _NDIS_MINIPORT_BLOCK *v54; // rbx
  _NDIS_FILTER_BLOCK *v55; // rsi
  struct _NDIS_IF_BLOCK *v56; // r12
  struct _NDIS_MINIPORT_BLOCK *v57; // rax
  struct _NDIS_MINIPORT_BLOCK *v58; // rbx
  _NDIS_FILTER_BLOCK *HighestFilter; // rsi
  struct _NDIS_IF_BLOCK *IfBlock; // r13
  KIRQL v61; // al
  __int64 v62; // rdx
  KIRQL v63; // r15
  unsigned __int16 ReferenceCount; // cx
  KIRQL v65; // r14
  ULONG_PTR NsiRefCountTracker; // r8
  __int64 v67; // r9
  struct _KEVENT *NsiRequestsCompletedEvent; // rcx
  __int16 v69; // dx
  KIRQL v70; // al
  _BYTE *v71; // rdx
  ULONG_PTR RefCountTracker; // r8
  KIRQL v73; // r15
  __int64 v74; // r9
  int v75; // edi
  __int16 v76; // dx
  KIRQL v77; // al
  ULONG_PTR MpRefCountTracker; // r8
  KIRQL v79; // bl
  __int64 v80; // rdx
  __int64 v81; // rdx
  _NET_LUID_LH *v82; // rcx
  _NET_LUID_LH v83; // rax
  __int64 v84; // rax
  int v85; // eax
  KIRQL v86; // al
  __int64 v87; // rdx
  KIRQL v88; // r15
  unsigned __int16 v89; // cx
  KIRQL v90; // r14
  ULONG_PTR v91; // r8
  __int64 v92; // r9
  struct _KEVENT *v93; // rcx
  __int16 v94; // dx
  KIRQL v95; // al
  _BYTE *v96; // rdx
  ULONG_PTR v97; // r8
  KIRQL v98; // r15
  __int64 v99; // r9
  int v100; // edi
  unsigned __int8 n; // cl
  _BYTE *v102; // r9
  char v103; // al
  unsigned __int8 jj; // cl
  _BYTE *v105; // rdx
  char v106; // al
  unsigned __int8 mm; // cl
  char v108; // al
  unsigned __int8 j; // cl
  _BYTE *v110; // rdx
  char v111; // al
  unsigned __int8 m; // cl
  char v113; // al
  _NDIS_MINIPORT_BLOCK *v114; // rax
  struct _KEVENT *IfBlockPointerRefZeroEvent; // rcx
  struct _KEVENT *v116; // rcx
  struct _KEVENT *RemoveReadyEvent; // rcx
  ULONG_PTR v118; // rdi
  unsigned int v119; // r9d
  ULONG_PTR v120; // rdi
  unsigned int v121; // r9d
  struct _NDIS_REFCOUNT_STACK_BLOCK *ii; // rsi
  ULONG_PTR v123; // rdi
  unsigned int v124; // r9d
  struct _NDIS_REFCOUNT_STACK_BLOCK *kk; // rsi
  ULONG_PTR v126; // rdi
  unsigned int v127; // edx
  struct _NDIS_REFCOUNT_STACK_BLOCK *i; // rsi
  ULONG_PTR v129; // rdi
  unsigned int v130; // edx
  struct _NDIS_REFCOUNT_STACK_BLOCK *k; // rsi
  ULONG_PTR v132; // rsi
  unsigned int AnyActiveRefTag; // eax
  struct _NDIS_REFCOUNT_BLOCK *v134; // rax
  struct _NDIS_REFCOUNT_BLOCK *v135; // rsi
  int v136; // eax
  KIRQL v138; // [rsp+40h] [rbp-29h]
  BOOLEAN EffectiveOnly; // [rsp+41h] [rbp-28h] BYREF
  BOOLEAN CopyOnOpen; // [rsp+42h] [rbp-27h] BYREF
  BOOLEAN v141; // [rsp+43h] [rbp-26h] BYREF
  BOOLEAN v142[4]; // [rsp+44h] [rbp-25h] BYREF
  struct _NDIS_IF_BLOCK *v143; // [rsp+48h] [rbp-21h]
  struct _NDIS_IF_BLOCK *v144; // [rsp+50h] [rbp-19h]
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+58h] [rbp-11h] BYREF
  _SECURITY_IMPERSONATION_LEVEL v146; // [rsp+5Ch] [rbp-Dh] BYREF
  char v147[8]; // [rsp+60h] [rbp-9h]
  PVOID TokenInformation; // [rsp+68h] [rbp-1h] BYREF
  PVOID v149[4]; // [rsp+70h] [rbp+7h] BYREF

  v2 = 0LL;
  *(_QWORD *)v147 = a1;
  v144 = 0LL;
  v3 = a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      22,
      24,
      (struct _GUID *)&WPP_1fac887ef26339fd0b855bd4d9383f6d_Traceguids,
      (char)a1);
  }
  CurrentProcess = PsGetCurrentProcess();
  v142[1] = ndisIsMacAddressHidden(CurrentProcess);
  KeEnterCriticalRegion();
  if ( *((_DWORD *)v3 + 6) != 8 || !*((_DWORD *)v3 + 12) || !*((_QWORD *)v3 + 5) )
  {
    InterfaceRodEnumObject = -1073741808;
    v24 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
    goto LABEL_44;
  }
  CurrentThread = KeGetCurrentThread();
  v6 = (_LIST_ENTRY **)*((_QWORD *)v3 + 2);
  memset(&v149[1], 0, 24);
  Value = *v6;
  ThreadProperty = (int *)PsGetThreadProperty(CurrentThread, 0x6D43644EuLL, 0);
  if ( ThreadProperty )
  {
    v13 = *ThreadProperty;
    LODWORD(v149[1]) = ThreadProperty[1];
    HIDWORD(v149[1]) = v13;
    ObfDereferenceObject(ThreadProperty);
    v14 = v13;
    if ( v13 )
      goto LABEL_16;
  }
  else
  {
    LODWORD(v149[1]) = 0;
  }
  CopyOnOpen = 0;
  EffectiveOnly = 0;
  ImpersonationLevel = SecurityAnonymous;
  TokenInformation = 0LL;
  if ( KeGetCurrentIrql() >= 2u )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    goto LABEL_11;
  }
  v9 = PsReferenceImpersonationToken(CurrentThread, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
  v10 = v9;
  if ( !v9
    || (v36 = SeQueryInformationToken(v9, TokenSessionId, &TokenInformation),
        PsDereferenceImpersonationToken(v10),
        v36 < 0) )
  {
    CurrentProcessSessionId = PsGetThreadSessionId(CurrentThread);
LABEL_11:
    v12 = CurrentProcessSessionId;
    goto LABEL_12;
  }
  v12 = (unsigned int)TokenInformation;
LABEL_12:
  if ( v12 == -1 )
  {
    v32 = KeGetCurrentThread();
    v142[0] = 0;
    v141 = 0;
    v146 = SecurityAnonymous;
    v149[0] = 0LL;
    if ( KeGetCurrentIrql() >= 2u )
    {
      ThreadSessionId = PsGetCurrentProcessSessionId();
    }
    else
    {
      v33 = PsReferenceImpersonationToken(v32, v142, &v141, &v146);
      v34 = v33;
      if ( v33 )
      {
        InformationToken = SeQueryInformationToken(v33, TokenSessionId, v149);
        PsDereferenceImpersonationToken(v34);
        if ( InformationToken >= 0 )
        {
          v12 = (unsigned int)v149[0];
          goto LABEL_13;
        }
      }
      ThreadSessionId = PsGetThreadSessionId(v32);
    }
    v12 = ThreadSessionId;
  }
LABEL_13:
  if ( v12 < dword_14011C950 )
  {
    v13 = 0;
    v41 = KeAcquireSpinLockRaiseToDpc(&qword_14011C9A0);
    if ( v12 < dword_14011C950 )
      v13 = *((_DWORD *)qword_14011C9F0 + 6 * v12);
    KeReleaseSpinLock(&qword_14011C9A0, v41);
    if ( !v13 )
      v13 = 1;
  }
  else
  {
    v13 = 1;
  }
  HIDWORD(v149[1]) = v13;
  v14 = v13;
LABEL_16:
  v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  v16 = qword_14011CAA0;
  v17 = 0LL;
  while ( v16 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_14011CAA0 )
  {
    if ( *((_DWORD *)v16 + 4) == v14 )
    {
      v17 = v16;
      break;
    }
    if ( *((_DWORD *)v16 + 4) > v14 )
      break;
    v16 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)v16;
  }
  *(_OWORD *)&v149[2] = *(_OWORD *)((char *)v17 + 1684);
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v15);
  v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  v19 = *((unsigned int *)v3 + 14);
  v20 = v18;
  v138 = v18;
  if ( (_DWORD)v19 )
  {
    v19 = (unsigned int)(v19 - 1);
    if ( (_DWORD)v19 )
    {
      if ( (_DWORD)v19 != 1 )
      {
        InterfaceRodEnumObject = -1073741808;
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v18);
        v24 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
        goto LABEL_44;
      }
    }
    else
    {
      Value = 0LL;
    }
    while ( 1 )
    {
      Blink = (_DEVICE_OBJECT *)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink;
      p_DeviceContext = 0LL;
      v143 = 0LL;
      while ( Blink != (_DEVICE_OBJECT *)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink )
      {
        if ( Blink->Queue.ListEntry.Flink > Value )
        {
          p_DeviceContext = (struct _NDIS_IF_BLOCK *)&Blink[-4].Queue.Wcb.DeviceContext;
          v143 = (struct _NDIS_IF_BLOCK *)&Blink[-4].Queue.Wcb.DeviceContext;
          break;
        }
        Blink = *(_DEVICE_OBJECT **)&Blink->Type;
      }
      if ( !p_DeviceContext )
        goto LABEL_28;
      Compartment = p_DeviceContext->Compartment;
      Value = (_LIST_ENTRY *)p_DeviceContext->NetLuid.Value;
      if ( v13 == *((_DWORD *)Compartment + 4) )
        goto LABEL_99;
      if ( LODWORD(v149[1]) == -1 )
      {
        v19 = (unsigned __int64)v149[2] - *(_QWORD *)((char *)Compartment + 1684);
        if ( v149[2] == *(PVOID *)((char *)Compartment + 1684) )
          v19 = (unsigned __int64)v149[3] - *(_QWORD *)((char *)Compartment + 1692);
        if ( !v19 )
          goto LABEL_99;
      }
      if ( (*((_DWORD *)Compartment + 420) & 2) == 0 && v13 == 1 )
        goto LABEL_99;
    }
  }
  v21 = (_DEVICE_OBJECT *)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink;
  p_DeviceContext = 0LL;
  v143 = 0LL;
  while ( v21 != (_DEVICE_OBJECT *)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink )
  {
    if ( v21->Queue.ListEntry.Flink == Value )
    {
      p_DeviceContext = (struct _NDIS_IF_BLOCK *)&v21[-4].Queue.Wcb.DeviceContext;
      v143 = (struct _NDIS_IF_BLOCK *)&v21[-4].Queue.Wcb.DeviceContext;
      break;
    }
    if ( v21->Queue.ListEntry.Flink > Value )
      break;
    v21 = *(_DEVICE_OBJECT **)&v21->Type;
  }
  if ( !p_DeviceContext )
  {
LABEL_28:
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v20);
LABEL_29:
    InterfaceRodEnumObject = -1073741772;
    if ( *((_DWORD *)v3 + 14) )
      InterfaceRodEnumObject = -2147483622;
    goto LABEL_31;
  }
  v47 = p_DeviceContext->Compartment;
  if ( v13 != *((_DWORD *)v47 + 4) )
  {
    v19 = (unsigned __int64)v149[2] - *(_QWORD *)((char *)v47 + 1684);
    if ( v149[2] == *(PVOID *)((char *)v47 + 1684) )
      v19 = (unsigned __int64)v149[3] - *(_QWORD *)((char *)v47 + 1692);
    if ( v19 && ((*((_DWORD *)v47 + 420) & 2) != 0 || v13 != 1) )
    {
      p_DeviceContext = 0LL;
      goto LABEL_28;
    }
  }
LABEL_99:
  LOBYTE(v19) = 1;
  NdisReferenceWithTag(p_DeviceContext->RefCountTracker, v19);
  ++p_DeviceContext->Ref;
  if ( !p_DeviceContext->bNdisIsProvider || *((_QWORD *)v3 + 1) >= 2uLL )
    goto LABEL_148;
  v48 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  v50 = v48;
  if ( p_DeviceContext->MiniportAvailable )
  {
    LOBYTE(v49) = 3;
    Miniport = p_DeviceContext->Miniport;
    NdisReferenceWithTag(p_DeviceContext->MpRefCountTracker, v49);
    ++p_DeviceContext->MiniportLinkReference;
    KeReleaseSpinLock(&SpinLock, v50);
    if ( Miniport )
    {
      v57 = ndisReferenceTopMiniportByNameForNsi(Miniport, 0, v52, 0, NSIREF_IFTOP, MPREF_IF_FINDTOP);
      v58 = v57;
      if ( !v57 )
        goto LABEL_137;
      KeAcquireSpinLockAtDpcLevel(&v57->Lock);
      HighestFilter = v58->HighestFilter;
      v58->MiniportThread = KeGetCurrentThread();
      if ( !HighestFilter )
      {
LABEL_109:
        IfBlock = v58->IfBlock;
        goto LABEL_113;
      }
      while ( 1 )
      {
        v61 = KeAcquireSpinLockRaiseToDpc(&HighestFilter->PnPRef.SpinLock);
        v63 = v61;
        if ( !HighestFilter->PnPRef.Closing )
        {
          ReferenceCount = HighestFilter->PnPRef.ReferenceCount;
          if ( ReferenceCount < 0xFFEBu )
          {
            LOBYTE(v62) = 11;
            HighestFilter->PnPRef.ReferenceCount = ReferenceCount + 1;
            NdisReferenceWithTag(HighestFilter->PnPRef.RefCountTracker, v62);
            KeReleaseSpinLock(&HighestFilter->PnPRef.SpinLock, v63);
            IfBlock = HighestFilter->IfBlock;
LABEL_113:
            v58->MiniportThread = 0LL;
            KeReleaseSpinLockFromDpcLevel(&v58->Lock);
            v65 = KeAcquireSpinLockRaiseToDpc(&v58->Lock);
            NsiRefCountTracker = (ULONG_PTR)v58->NsiRefCountTracker;
            v58->MiniportThread = KeGetCurrentThread();
            if ( NsiRefCountTracker - 2 > 1 )
            {
              if ( NsiRefCountTracker < 2 )
                ndisBugCheckEx(0x1EuLL, 3uLL, NsiRefCountTracker, 0LL);
              if ( *(_BYTE *)(NsiRefCountTracker + 2) <= 2u )
                ndisBugCheckEx(0x1EuLL, 2uLL, NsiRefCountTracker, 2uLL);
              if ( *(_BYTE *)(NsiRefCountTracker + 1) )
              {
                if ( *(_BYTE *)(NsiRefCountTracker + 1) != 1 )
                  goto LABEL_119;
                v126 = NsiRefCountTracker + 136;
                v127 = *(_DWORD *)(NsiRefCountTracker + 192);
                if ( v127 >> 17 >= 0x3FFE || (unsigned __int16)v127 >> 1 != (v127 >> 17) + 1 )
                {
                  if ( (unsigned __int16)v127 >> 1 || (v127 & 1) != 0 )
                  {
                    ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(NsiRefCountTracker + 136), 0);
                    goto LABEL_119;
                  }
                  goto LABEL_220;
                }
                for ( i = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v126;
                      *(_QWORD *)v126;
                      i = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v126 )
                {
                  *(_QWORD *)v126 = i->Next;
                  ndisFreeRefCountStacksInBlock(i);
                  ExFreePoolWithTag(i, 0);
                }
                ndisFreeRefCountStacksInBlock((struct _NDIS_REFCOUNT_STACK_BLOCK *)v126);
                *(_DWORD *)(v126 + 56) &= 0x10001u;
              }
              else
              {
                v67 = *(_QWORD *)(NsiRefCountTracker + 8);
                if ( !v67 )
                {
LABEL_118:
                  if ( _bittestandreset((signed __int32 *)(NsiRefCountTracker + 16), 2u) )
                    goto LABEL_119;
LABEL_220:
                  ndisReportRefcountImbalance(NsiRefCountTracker, 2u);
                }
                for ( j = 0; ; ++j )
                {
                  if ( j >= *(_BYTE *)(NsiRefCountTracker + 3) )
                    goto LABEL_118;
                  v110 = (_BYTE *)(v67 + 2LL * j);
                  if ( *v110 == 2 )
                  {
                    v111 = v110[1];
                    if ( v111 )
                      break;
                  }
                }
                v110[1] = v111 - 1;
              }
            }
LABEL_119:
            v30 = v58->NsiOpenReferences-- == 1;
            if ( v30 )
            {
              NsiRequestsCompletedEvent = v58->NsiRequestsCompletedEvent;
              if ( NsiRequestsCompletedEvent )
                KeSetEvent(NsiRequestsCompletedEvent, 0, 0);
            }
            v58->MiniportThread = 0LL;
            KeReleaseSpinLock(&v58->Lock, v65);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v69) = 4;
              WPP_RECORDER_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v69,
                20,
                25,
                (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
                (char)v58);
            }
            v70 = KeAcquireSpinLockRaiseToDpc(&v58->Ref.SpinLock);
            RefCountTracker = (ULONG_PTR)v58->RefCountTracker;
            v73 = v70;
            if ( RefCountTracker && RefCountTracker - 2 > 1 )
            {
              if ( RefCountTracker == 1 )
                ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
              if ( *(_BYTE *)(RefCountTracker + 2) <= 0x3Cu )
                ndisBugCheckEx(0x1EuLL, 2uLL, RefCountTracker, 0x3CuLL);
              if ( *(_BYTE *)(RefCountTracker + 1) )
              {
                if ( *(_BYTE *)(RefCountTracker + 1) == 1 )
                {
                  v129 = RefCountTracker + 3848;
                  v130 = *(_DWORD *)(RefCountTracker + 3904);
                  if ( v130 >> 17 < 0x3FFE && (unsigned __int16)v130 >> 1 == (v130 >> 17) + 1 )
                  {
                    for ( k = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v129;
                          *(_QWORD *)v129;
                          k = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v129 )
                    {
                      *(_QWORD *)v129 = k->Next;
                      ndisFreeRefCountStacksInBlock(k);
                      ExFreePoolWithTag(k, 0);
                    }
                    ndisFreeRefCountStacksInBlock((struct _NDIS_REFCOUNT_STACK_BLOCK *)v129);
                    *(_DWORD *)(v129 + 56) &= 0x10001u;
                  }
                  else
                  {
                    if ( !((unsigned __int16)v130 >> 1) && (v130 & 1) == 0 )
                      goto LABEL_221;
                    ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(RefCountTracker + 3848), 0);
                  }
                }
              }
              else
              {
                v74 = *(_QWORD *)(RefCountTracker + 8);
                if ( !v74 )
                {
LABEL_130:
                  if ( _bittestandreset((signed __int32 *)(RefCountTracker + 20), 0x1Cu) )
                    goto LABEL_131;
LABEL_221:
                  ndisReportRefcountImbalance(RefCountTracker, 0x3Cu);
                }
                for ( m = 0; ; ++m )
                {
                  if ( m >= *(_BYTE *)(RefCountTracker + 3) )
                    goto LABEL_130;
                  v71 = (_BYTE *)(v74 + 2LL * m);
                  if ( *v71 == 60 )
                  {
                    v113 = v71[1];
                    if ( v113 )
                      break;
                  }
                }
                v71[1] = v113 - 1;
              }
            }
LABEL_131:
            v75 = v58->Ref.ReferenceCount - 1;
            v58->Ref.ReferenceCount = v75;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v71) = 4;
              WPP_RECORDER_SF_qL(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                (int)v71,
                20,
                14,
                (struct _GUID *)&WPP_cb6db8c6f99e3ae11a098d09772ad370_Traceguids,
                (char)v58,
                v58->Ref.ReferenceCount);
            }
            KeReleaseSpinLock(&v58->Ref.SpinLock, v73);
            if ( !v75 )
            {
              RemoveReadyEvent = v58->RemoveReadyEvent;
              if ( RemoveReadyEvent )
                KeSetEvent(RemoveReadyEvent, 0, 0);
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v76) = 4;
              WPP_RECORDER_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v76,
                20,
                26,
                (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
                (char)v58);
            }
            v2 = IfBlock;
            p_DeviceContext = v143;
LABEL_137:
            v77 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
            MpRefCountTracker = (ULONG_PTR)p_DeviceContext->MpRefCountTracker;
            v79 = v77;
            if ( MpRefCountTracker - 2 > 1 )
            {
              if ( MpRefCountTracker < 2 )
                ndisBugCheckEx(0x1EuLL, 3uLL, MpRefCountTracker, 0LL);
              if ( *(_BYTE *)(MpRefCountTracker + 2) <= 3u )
                ndisBugCheckEx(0x1EuLL, 2uLL, MpRefCountTracker, 3uLL);
              if ( *(_BYTE *)(MpRefCountTracker + 1) )
              {
                if ( *(_BYTE *)(MpRefCountTracker + 1) == 1 )
                {
                  v118 = MpRefCountTracker + 200;
                  v119 = *(_DWORD *)(MpRefCountTracker + 256);
                  if ( v119 >> 17 < 0x3FFE && (unsigned __int16)v119 >> 1 == (v119 >> 17) + 1 )
                  {
                    ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(MpRefCountTracker + 200));
                    *(_DWORD *)(v118 + 56) &= 0x10001u;
                  }
                  else
                  {
                    if ( !((unsigned __int16)v119 >> 1) && (v119 & 1) == 0 )
                      goto LABEL_193;
                    ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(MpRefCountTracker + 200), 0);
                  }
                }
              }
              else
              {
                v80 = *(_QWORD *)(MpRefCountTracker + 8);
                if ( !v80 )
                {
LABEL_142:
                  if ( _bittestandreset((signed __int32 *)(MpRefCountTracker + 16), 3u) )
                    goto LABEL_143;
LABEL_193:
                  ndisReportRefcountImbalance(MpRefCountTracker, 3u);
                }
                for ( n = 0; ; ++n )
                {
                  if ( n >= *(_BYTE *)(MpRefCountTracker + 3) )
                    goto LABEL_142;
                  v102 = (_BYTE *)(v80 + 2LL * n);
                  if ( *v102 == 3 )
                  {
                    v103 = v102[1];
                    if ( v103 )
                      break;
                  }
                }
                v102[1] = v103 - 1;
              }
            }
LABEL_143:
            v30 = p_DeviceContext->MiniportLinkReference-- == 1;
            if ( v30 )
            {
              v114 = p_DeviceContext->Miniport;
              if ( v114 )
              {
                IfBlockPointerRefZeroEvent = v114->IfBlockPointerRefZeroEvent;
                if ( IfBlockPointerRefZeroEvent )
                  KeSetEvent(IfBlockPointerRefZeroEvent, 0, 0);
              }
            }
            KeReleaseSpinLock(&SpinLock, v79);
            goto LABEL_145;
          }
          ndisRefCountReferenceCountOverflow = 1;
        }
        KeReleaseSpinLock(&HighestFilter->PnPRef.SpinLock, v61);
        HighestFilter = HighestFilter->LowerFilter;
        if ( !HighestFilter )
          goto LABEL_109;
      }
    }
  }
  else
  {
    KeReleaseSpinLock(&SpinLock, v48);
  }
  if ( !p_DeviceContext->IsNdisFilter )
    goto LABEL_148;
  v53 = ndisReferenceTopMiniportByNameForNsi(
          *(struct _NDIS_MINIPORT_BLOCK **)&p_DeviceContext->Miniport->Reserved4.Length,
          0,
          v52,
          0,
          NSIREF_IFTOP,
          MPREF_IF_FINDTOP);
  v54 = v53;
  if ( !v53 )
    goto LABEL_148;
  KeAcquireSpinLockAtDpcLevel(&v53->Lock);
  v55 = v54->HighestFilter;
  v54->MiniportThread = KeGetCurrentThread();
  if ( !v55 )
  {
LABEL_106:
    v56 = v54->IfBlock;
    goto LABEL_157;
  }
  while ( 1 )
  {
    v86 = KeAcquireSpinLockRaiseToDpc(&v55->PnPRef.SpinLock);
    v88 = v86;
    if ( !v55->PnPRef.Closing )
      break;
LABEL_267:
    KeReleaseSpinLock(&v55->PnPRef.SpinLock, v86);
    v55 = v55->LowerFilter;
    if ( !v55 )
      goto LABEL_106;
  }
  v89 = v55->PnPRef.ReferenceCount;
  if ( v89 >= 0xFFEBu )
  {
    ndisRefCountReferenceCountOverflow = 1;
    goto LABEL_267;
  }
  LOBYTE(v87) = 11;
  v55->PnPRef.ReferenceCount = v89 + 1;
  NdisReferenceWithTag(v55->PnPRef.RefCountTracker, v87);
  KeReleaseSpinLock(&v55->PnPRef.SpinLock, v88);
  v56 = v55->IfBlock;
LABEL_157:
  v54->MiniportThread = 0LL;
  KeReleaseSpinLockFromDpcLevel(&v54->Lock);
  v90 = KeAcquireSpinLockRaiseToDpc(&v54->Lock);
  v91 = (ULONG_PTR)v54->NsiRefCountTracker;
  v54->MiniportThread = KeGetCurrentThread();
  if ( v91 - 2 > 1 )
  {
    if ( v91 < 2 )
      ndisBugCheckEx(0x1EuLL, 3uLL, v91, 0LL);
    if ( *(_BYTE *)(v91 + 2) <= 2u )
      ndisBugCheckEx(0x1EuLL, 2uLL, v91, 2uLL);
    if ( *(_BYTE *)(v91 + 1) )
    {
      if ( *(_BYTE *)(v91 + 1) != 1 )
        goto LABEL_163;
      v120 = v91 + 136;
      v121 = *(_DWORD *)(v91 + 192);
      if ( v121 >> 17 >= 0x3FFE || (unsigned __int16)v121 >> 1 != (v121 >> 17) + 1 )
      {
        if ( (unsigned __int16)v121 >> 1 || (v121 & 1) != 0 )
        {
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v91 + 136), 0);
          goto LABEL_163;
        }
        goto LABEL_218;
      }
      for ( ii = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v120;
            *(_QWORD *)v120;
            ii = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v120 )
      {
        *(_QWORD *)v120 = ii->Next;
        ndisFreeRefCountStacksInBlock(ii);
        ExFreePoolWithTag(ii, 0);
      }
      ndisFreeRefCountStacksInBlock((struct _NDIS_REFCOUNT_STACK_BLOCK *)v120);
      *(_DWORD *)(v120 + 56) &= 0x10001u;
    }
    else
    {
      v92 = *(_QWORD *)(v91 + 8);
      if ( !v92 )
      {
LABEL_162:
        if ( _bittestandreset((signed __int32 *)(v91 + 16), 2u) )
          goto LABEL_163;
LABEL_218:
        ndisReportRefcountImbalance(v91, 2u);
      }
      for ( jj = 0; ; ++jj )
      {
        if ( jj >= *(_BYTE *)(v91 + 3) )
          goto LABEL_162;
        v105 = (_BYTE *)(v92 + 2LL * jj);
        if ( *v105 == 2 )
        {
          v106 = v105[1];
          if ( v106 )
            break;
        }
      }
      v105[1] = v106 - 1;
    }
  }
LABEL_163:
  v30 = v54->NsiOpenReferences-- == 1;
  if ( v30 )
  {
    v93 = v54->NsiRequestsCompletedEvent;
    if ( v93 )
      KeSetEvent(v93, 0, 0);
  }
  v54->MiniportThread = 0LL;
  KeReleaseSpinLock(&v54->Lock, v90);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v94) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v94,
      20,
      25,
      (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
      (char)v54);
  }
  v95 = KeAcquireSpinLockRaiseToDpc(&v54->Ref.SpinLock);
  v97 = (ULONG_PTR)v54->RefCountTracker;
  v98 = v95;
  if ( v97 && v97 - 2 > 1 )
  {
    if ( v97 == 1 )
      ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
    if ( *(_BYTE *)(v97 + 2) <= 0x3Cu )
      ndisBugCheckEx(0x1EuLL, 2uLL, v97, 0x3CuLL);
    if ( *(_BYTE *)(v97 + 1) )
    {
      if ( *(_BYTE *)(v97 + 1) == 1 )
      {
        v123 = v97 + 3848;
        v124 = *(_DWORD *)(v97 + 3904);
        if ( v124 >> 17 < 0x3FFE && (unsigned __int16)v124 >> 1 == (v124 >> 17) + 1 )
        {
          for ( kk = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v123;
                *(_QWORD *)v123;
                kk = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v123 )
          {
            *(_QWORD *)v123 = kk->Next;
            ndisFreeRefCountStacksInBlock(kk);
            ExFreePoolWithTag(kk, 0);
          }
          ndisFreeRefCountStacksInBlock((struct _NDIS_REFCOUNT_STACK_BLOCK *)v123);
          *(_DWORD *)(v123 + 56) &= 0x10001u;
        }
        else
        {
          if ( !((unsigned __int16)v124 >> 1) && (v124 & 1) == 0 )
            goto LABEL_219;
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v97 + 3848), 0);
        }
      }
    }
    else
    {
      v99 = *(_QWORD *)(v97 + 8);
      if ( !v99 )
      {
LABEL_174:
        if ( _bittestandreset((signed __int32 *)(v97 + 20), 0x1Cu) )
          goto LABEL_175;
LABEL_219:
        ndisReportRefcountImbalance(v97, 0x3Cu);
      }
      for ( mm = 0; ; ++mm )
      {
        if ( mm >= *(_BYTE *)(v97 + 3) )
          goto LABEL_174;
        v96 = (_BYTE *)(v99 + 2LL * mm);
        if ( *v96 == 60 )
        {
          v108 = v96[1];
          if ( v108 )
            break;
        }
      }
      v96[1] = v108 - 1;
    }
  }
LABEL_175:
  v100 = v54->Ref.ReferenceCount - 1;
  v54->Ref.ReferenceCount = v100;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v96) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v96,
      20,
      14,
      (struct _GUID *)&WPP_cb6db8c6f99e3ae11a098d09772ad370_Traceguids,
      (char)v54,
      v54->Ref.ReferenceCount);
  }
  KeReleaseSpinLock(&v54->Ref.SpinLock, v98);
  if ( !v100 )
  {
    v116 = v54->RemoveReadyEvent;
    if ( v116 )
      KeSetEvent(v116, 0, 0);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v81) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (unsigned __int16)v81,
      20,
      26,
      (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
      (char)v54);
  }
  v2 = v56;
LABEL_145:
  if ( v2 )
  {
    LOBYTE(v81) = 2;
    NdisReferenceWithTag(v2->RefCountTracker, v81);
    ++v2->Ref;
  }
  v20 = v138;
  v3 = *(struct _NM_REQUEST_GET_PARAMETER **)v147;
LABEL_148:
  v82 = (_NET_LUID_LH *)*((_QWORD *)v3 + 2);
  v83.Value = (ULONG64)p_DeviceContext->NetLuid;
  v144 = v2;
  v82->Value = v83.Value;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v20);
  if ( !p_DeviceContext )
    goto LABEL_29;
  v84 = *((_QWORD *)v3 + 1);
  InterfaceRodEnumObject = -1073741811;
  if ( v84 )
  {
    switch ( v84 )
    {
      case 1LL:
        goto LABEL_289;
      case 12LL:
        goto LABEL_150;
      case 13LL:
LABEL_289:
        v136 = *((_DWORD *)v3 + 8);
        if ( v136 == 1 )
        {
          InterfaceRodEnumObject = ndisNsiGetInterfaceRodEnumObject((char)p_DeviceContext);
        }
        else if ( v136 == 2 )
        {
          InterfaceRodEnumObject = ndisNsiGetInterfaceRosEnumObject((char)p_DeviceContext);
        }
        break;
    }
  }
  else
  {
LABEL_150:
    v85 = *((_DWORD *)v3 + 8);
    if ( v85 )
    {
      if ( v85 == 1 )
      {
        InterfaceRodEnumObject = ndisNsiGetInterfaceRodInformation((char)p_DeviceContext, (char)v2, (char)v3);
      }
      else if ( v85 == 2 )
      {
        InterfaceRodEnumObject = ndisNsiGetInterfaceRosInformation(p_DeviceContext);
      }
    }
    else
    {
      InterfaceRodEnumObject = ndisNsiGetInterfaceRwInformation((char)p_DeviceContext, (char)v2, (char)v3);
    }
  }
LABEL_31:
  v24 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  if ( v2 )
  {
    if ( v2->IsNdisFilter )
    {
      p_DeferredContext = (__int64)&v2->Miniport->WakeUpDpcTimer.Dpc.DeferredContext;
      v26 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)p_DeferredContext);
      v27 = *(_QWORD *)(p_DeferredContext + 16);
      v28 = v26;
      if ( v27 - 2 > 1 )
      {
        if ( v27 < 2 )
          ndisBugCheckEx(0x1EuLL, 3uLL, v27, 0LL);
        if ( *(_BYTE *)(v27 + 2) <= 0xBu )
          ndisBugCheckEx(0x1EuLL, 2uLL, v27, 0xBuLL);
        if ( *(_BYTE *)(v27 + 1) )
        {
          if ( *(_BYTE *)(v27 + 1) != 1 )
            goto LABEL_39;
          v42 = v27 + 712;
          v43 = *(_DWORD *)(v27 + 768);
          if ( v43 >> 17 >= 0x3FFE || (unsigned __int16)v43 >> 1 != (v43 >> 17) + 1 )
          {
            if ( (unsigned __int16)v43 >> 1 || (v43 & 1) != 0 )
            {
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v27 + 712), 0);
              goto LABEL_39;
            }
            goto LABEL_62;
          }
          for ( nn = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v42;
                *(_QWORD *)v42;
                nn = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v42 )
          {
            *(_QWORD *)v42 = nn->Next;
            ndisFreeRefCountStacksInBlock(nn);
            ExFreePoolWithTag(nn, 0);
          }
          ndisFreeRefCountStacksInBlock((struct _NDIS_REFCOUNT_STACK_BLOCK *)v42);
          *(_DWORD *)(v42 + 56) &= 0x10001u;
        }
        else
        {
          v29 = *(_QWORD *)(v27 + 8);
          if ( !v29 )
          {
LABEL_38:
            if ( _bittestandreset((signed __int32 *)(v27 + 16), 0xBu) )
              goto LABEL_39;
LABEL_62:
            ndisReportRefcountImbalance(v27, 0xBu);
          }
          for ( i1 = 0; ; ++i1 )
          {
            if ( i1 >= *(_BYTE *)(v27 + 3) )
              goto LABEL_38;
            v38 = (_BYTE *)(v29 + 2LL * i1);
            if ( *v38 == 11 )
            {
              v39 = v38[1];
              if ( v39 )
                break;
            }
          }
          v38[1] = v39 - 1;
        }
      }
LABEL_39:
      v30 = (*(_WORD *)(p_DeferredContext + 8))-- == 1;
      if ( v30 && !*(_BYTE *)(p_DeferredContext + 11) )
      {
        v132 = *(_QWORD *)(p_DeferredContext + 16);
        if ( v132 )
        {
          AnyActiveRefTag = ndisGetAnyActiveRefTag(*(struct NDIS_REFCOUNT_HANDLE__ **)(p_DeferredContext + 16));
          if ( AnyActiveRefTag != -2 )
            ndisBugCheckEx(0x1EuLL, 4uLL, v132, AnyActiveRefTag);
          v134 = ndisRefCountBlockFromRefCountHandle(v132);
          v135 = v134;
          if ( v134 )
          {
            ndisFreeRefCountAuxiliaryMemory(v134);
            ExFreePoolWithTag(v135, 0);
          }
        }
        *(_QWORD *)(p_DeferredContext + 16) = 1LL;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)p_DeferredContext, v28);
      v2 = v144;
    }
    IFBLOCK_DECREMENT_REF(v2, IFREF_TOPGETII);
  }
  if ( p_DeviceContext )
    IFBLOCK_DECREMENT_REF(p_DeviceContext, IFREF_GETII);
LABEL_44:
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v24);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v31) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v31,
      22,
      25,
      (struct _GUID *)&WPP_1fac887ef26339fd0b855bd4d9383f6d_Traceguids,
      v147[0],
      InterfaceRodEnumObject);
  }
  KeLeaveCriticalRegion();
  return InterfaceRodEnumObject;
}
