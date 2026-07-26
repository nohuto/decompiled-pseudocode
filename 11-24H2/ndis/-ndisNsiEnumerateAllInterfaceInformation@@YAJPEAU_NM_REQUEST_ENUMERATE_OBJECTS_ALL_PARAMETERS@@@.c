/*
 * XREFs of ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x14000CFD0
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
 *     memmove @ 0x1400E7200 (memmove.c)
 *     ndisNsiGetInterfaceRosEnumObject @ 0x14014F8F0 (ndisNsiGetInterfaceRosEnumObject.c)
 *     ndisIsMacAddressHidden @ 0x140159450 (ndisIsMacAddressHidden.c)
 *     ndisNsiGetInterfaceRodEnumObject @ 0x14016C5D0 (ndisNsiGetInterfaceRodEnumObject.c)
 */

__int64 __fastcall ndisNsiEnumerateAllInterfaceInformation(
        struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *a1,
        __int16 a2)
{
  unsigned int v2; // r12d
  struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *v3; // r14
  int v4; // esi
  __int64 CurrentProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  int *ThreadProperty; // rax
  int v8; // r15d
  PACCESS_TOKEN v9; // rax
  void *v10; // rsi
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v12; // ebx
  unsigned int v13; // ebx
  KIRQL v14; // al
  struct _NDIS_IF_COMPARTMENT_BLOCK *v15; // rcx
  struct _NDIS_IF_COMPARTMENT_BLOCK *v16; // rdx
  KIRQL v17; // bl
  void *v18; // rcx
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  unsigned int v21; // r10d
  unsigned int v22; // r9d
  unsigned int v23; // r8d
  _DEVICE_OBJECT *Blink; // rdi
  unsigned int v25; // r8d
  _KDPC *BufferChainingDpc; // rcx
  struct _NDIS_IF_BLOCK *p_DeviceContext; // r13
  struct _NDIS_IF_BLOCK *IfBlock; // r12
  struct _NDIS_MINIPORT_BLOCK *Miniport; // rbx
  __int64 v30; // rdx
  KIRQL v31; // di
  unsigned int v32; // r8d
  struct _NDIS_MINIPORT_BLOCK *v33; // rax
  struct _NDIS_MINIPORT_BLOCK *v34; // r14
  _NDIS_FILTER_BLOCK *v35; // rdi
  struct _NDIS_MINIPORT_BLOCK *v36; // rax
  struct _NDIS_MINIPORT_BLOCK *v37; // r14
  _NDIS_FILTER_BLOCK *HighestFilter; // rdi
  __int64 v39; // rdx
  KIRQL v40; // si
  unsigned __int16 ReferenceCount; // cx
  KIRQL v42; // di
  ULONG_PTR NsiRefCountTracker; // r8
  __int64 v44; // r9
  bool v45; // zf
  struct _KEVENT *NsiRequestsCompletedEvent; // rcx
  __int16 v47; // dx
  KIRQL v48; // al
  _BYTE *v49; // rdx
  ULONG_PTR RefCountTracker; // r8
  KIRQL v51; // si
  __int64 v52; // r9
  int v53; // ebx
  __int16 v54; // dx
  KIRQL v55; // al
  ULONG_PTR MpRefCountTracker; // r8
  KIRQL v57; // di
  __int64 v58; // r9
  __int64 v59; // rdx
  __int64 v60; // rbx
  char *v61; // rsi
  unsigned __int64 v62; // rbx
  __int64 v63; // rsi
  __int64 v64; // rbx
  __int64 v65; // rsi
  __int64 p_DeferredContext; // rsi
  KIRQL v67; // al
  ULONG_PTR v68; // r8
  KIRQL v69; // r14
  __int64 v70; // r9
  unsigned int v71; // ebx
  int v72; // edx
  unsigned __int8 jj; // cl
  _BYTE *v75; // rdx
  char v76; // al
  __int64 v77; // rdx
  KIRQL v78; // si
  unsigned __int16 v79; // cx
  KIRQL v80; // di
  ULONG_PTR v81; // r8
  __int64 v82; // r9
  struct _KEVENT *v83; // rcx
  __int16 v84; // dx
  KIRQL v85; // al
  _BYTE *v86; // rdx
  ULONG_PTR v87; // r8
  KIRQL v88; // si
  __int64 v89; // r9
  int v90; // ebx
  unsigned __int8 k; // cl
  _BYTE *v92; // rdx
  char v93; // al
  unsigned __int8 m; // cl
  _BYTE *v95; // rdx
  char v96; // al
  unsigned __int8 n; // cl
  char v98; // al
  unsigned __int8 i; // cl
  _BYTE *v100; // rdx
  char v101; // al
  unsigned __int8 j; // cl
  char v103; // al
  _NDIS_MINIPORT_BLOCK *v104; // rax
  struct _KEVENT *IfBlockPointerRefZeroEvent; // rcx
  ULONG_PTR v106; // rbx
  unsigned int v107; // edx
  struct _NDIS_REFCOUNT_STACK_BLOCK *ii; // rdi
  struct _KEVENT *v109; // rcx
  struct _KEVENT *RemoveReadyEvent; // rcx
  struct _KTHREAD *v111; // rsi
  PACCESS_TOKEN v112; // rax
  void *v113; // rdi
  unsigned int ThreadSessionId; // eax
  ULONG_PTR v115; // rbx
  unsigned int v116; // r9d
  NTSTATUS v117; // ebx
  ULONG_PTR v118; // rbx
  unsigned int v119; // r9d
  ULONG_PTR v120; // rbx
  unsigned int v121; // r9d
  ULONG_PTR v122; // rbx
  unsigned int v123; // r9d
  ULONG_PTR v124; // rbx
  unsigned int v125; // r9d
  _DEVICE_OBJECT *kk; // rcx
  _KDPC *v127; // rdx
  unsigned __int64 v128; // r8
  NTSTATUS v129; // ebx
  KIRQL v130; // al
  ULONG_PTR v131; // rbx
  unsigned int AnyActiveRefTag; // eax
  struct _NDIS_REFCOUNT_BLOCK *v133; // rax
  struct _NDIS_REFCOUNT_BLOCK *v134; // rbx
  KIRQL v135; // [rsp+40h] [rbp-89h]
  BOOLEAN EffectiveOnly; // [rsp+41h] [rbp-88h] BYREF
  BOOLEAN CopyOnOpen; // [rsp+42h] [rbp-87h] BYREF
  BOOLEAN v138; // [rsp+43h] [rbp-86h] BYREF
  BOOLEAN v139[4]; // [rsp+44h] [rbp-85h] BYREF
  _LIST_ENTRY *v140; // [rsp+48h] [rbp-81h]
  struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *v141; // [rsp+50h] [rbp-79h]
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+58h] [rbp-71h] BYREF
  _SECURITY_IMPERSONATION_LEVEL v143; // [rsp+5Ch] [rbp-6Dh] BYREF
  unsigned int Size; // [rsp+60h] [rbp-69h]
  unsigned int Size_4; // [rsp+64h] [rbp-65h]
  unsigned int v146; // [rsp+68h] [rbp-61h]
  int v147; // [rsp+6Ch] [rbp-5Dh]
  unsigned int v148; // [rsp+70h] [rbp-59h]
  PVOID TokenInformation; // [rsp+78h] [rbp-51h] BYREF
  PVOID v150; // [rsp+80h] [rbp-49h] BYREF
  void *v151; // [rsp+88h] [rbp-41h]
  unsigned __int64 v152; // [rsp+90h] [rbp-39h]
  __int64 v153; // [rsp+98h] [rbp-31h]
  __int128 v154; // [rsp+A0h] [rbp-29h]
  __int128 v155; // [rsp+B0h] [rbp-19h]
  __int128 v156; // [rsp+C0h] [rbp-9h]
  __int128 v157; // [rsp+D0h] [rbp+7h]
  _BYTE v158[24]; // [rsp+E0h] [rbp+17h] BYREF

  v2 = *((_DWORD *)a1 + 22);
  v154 = 0LL;
  v3 = a1;
  v141 = a1;
  v155 = 0LL;
  v4 = 0;
  v148 = v2;
  v156 = 0LL;
  v157 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      22,
      14,
      (struct _GUID *)&WPP_1fac887ef26339fd0b855bd4d9383f6d_Traceguids,
      (char)a1);
  }
  CurrentProcess = PsGetCurrentProcess();
  v139[1] = ndisIsMacAddressHidden(CurrentProcess);
  KeEnterCriticalRegion();
  CurrentThread = KeGetCurrentThread();
  memset(v158, 0, sizeof(v158));
  ThreadProperty = (int *)PsGetThreadProperty(CurrentThread, 0x6D43644EuLL, 0);
  v8 = 1;
  if ( !ThreadProperty )
  {
    *(_DWORD *)v158 = 0;
    goto LABEL_5;
  }
  v8 = *ThreadProperty;
  *(_DWORD *)v158 = ThreadProperty[1];
  *(_DWORD *)&v158[4] = v8;
  ObfDereferenceObject(ThreadProperty);
  v13 = v8;
  if ( !v8 )
  {
    v8 = 1;
LABEL_5:
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
        v117 = SeQueryInformationToken(v9, TokenSessionId, &TokenInformation);
        PsDereferenceImpersonationToken(v10);
        if ( v117 >= 0 )
        {
          v12 = (unsigned int)TokenInformation;
LABEL_9:
          if ( v12 == -1 )
          {
            v111 = KeGetCurrentThread();
            v143 = SecurityAnonymous;
            v150 = 0LL;
            v139[0] = 0;
            v138 = 0;
            if ( KeGetCurrentIrql() >= 2u )
            {
              ThreadSessionId = PsGetCurrentProcessSessionId();
            }
            else
            {
              v112 = PsReferenceImpersonationToken(v111, v139, &v138, &v143);
              v113 = v112;
              if ( v112 )
              {
                v129 = SeQueryInformationToken(v112, TokenSessionId, &v150);
                PsDereferenceImpersonationToken(v113);
                if ( v129 >= 0 )
                {
                  v12 = (unsigned int)v150;
                  goto LABEL_10;
                }
              }
              ThreadSessionId = PsGetThreadSessionId(v111);
            }
            v12 = ThreadSessionId;
          }
LABEL_10:
          v4 = 0;
          if ( v12 < dword_14011C950 )
          {
            v8 = 0;
            v130 = KeAcquireSpinLockRaiseToDpc(&qword_14011C9A0);
            if ( v12 < dword_14011C950 )
              v8 = *((_DWORD *)qword_14011C9F0 + 6 * v12);
            KeReleaseSpinLock(&qword_14011C9A0, v130);
            if ( !v8 )
              v8 = 1;
          }
          *(_DWORD *)&v158[4] = v8;
          v13 = v8;
          goto LABEL_12;
        }
      }
      CurrentProcessSessionId = PsGetThreadSessionId(CurrentThread);
    }
    v12 = CurrentProcessSessionId;
    goto LABEL_9;
  }
LABEL_12:
  v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  v15 = qword_14011CAA0;
  v16 = 0LL;
  while ( v15 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_14011CAA0 )
  {
    if ( *((_DWORD *)v15 + 4) == v13 )
    {
      v16 = v15;
      break;
    }
    if ( *((_DWORD *)v15 + 4) > v13 )
      break;
    v15 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)v15;
  }
  *(_OWORD *)&v158[8] = *(_OWORD *)((char *)v16 + 1684);
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v14);
  v135 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  v17 = v135;
  if ( v2 )
  {
    v18 = (void *)*((_QWORD *)v3 + 2);
    v19 = *((_QWORD *)v3 + 7);
    v20 = *((_QWORD *)v3 + 9);
    v21 = *((_DWORD *)v3 + 6);
    v22 = *((_DWORD *)v3 + 16);
    v23 = *((_DWORD *)v3 + 20);
    Size = v21;
    Size_4 = v22;
    v146 = v23;
    v151 = v18;
    v152 = v19;
    v153 = v20;
    if ( v18 && v21 != 8 || *((_QWORD *)v3 + 5) || *((_DWORD *)v3 + 12) || v19 && v22 < 0x28C || v20 && v23 < 0x238 )
    {
      v71 = -1073741306;
      goto LABEL_96;
    }
    Blink = (_DEVICE_OBJECT *)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink;
    v140 = WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink;
    v25 = 0;
    if ( (_LIST_ENTRY **)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink == &WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink )
      goto LABEL_95;
LABEL_23:
    BufferChainingDpc = Blink->Queue.Wcb.BufferChainingDpc;
    p_DeviceContext = (struct _NDIS_IF_BLOCK *)&Blink[-4].Queue.Wcb.DeviceContext;
    if ( v8 != LODWORD(BufferChainingDpc->ProcessorHistory) )
    {
      if ( *(_DWORD *)v158 != -1 )
        goto LABEL_179;
      v19 = *(_QWORD *)&v158[8] - *(unsigned __int64 *)((char *)&BufferChainingDpc[26].ProcessorHistory + 4);
      if ( *(_QWORD *)&v158[8] == *(unsigned __int64 *)((char *)&BufferChainingDpc[26].ProcessorHistory + 4) )
        v19 = *(_QWORD *)&v158[16] - *(unsigned __int64 *)((char *)&BufferChainingDpc[26].DeferredRoutine + 4);
      if ( v19 )
      {
LABEL_179:
        if ( (BufferChainingDpc[26].ProcessorHistory & 2) != 0 || v8 != 1 )
        {
          Blink = *(_DEVICE_OBJECT **)&Blink->Type;
          v140 = (_LIST_ENTRY *)Blink;
          goto LABEL_94;
        }
      }
    }
    v147 = ++v25;
    if ( v25 > v2 )
    {
      Blink = *(_DEVICE_OBJECT **)&Blink->Type;
      v140 = (_LIST_ENTRY *)Blink;
      goto LABEL_94;
    }
    LOBYTE(v19) = 6;
    NdisReferenceWithTag(p_DeviceContext->RefCountTracker, v19);
    ++p_DeviceContext->Ref;
    IfBlock = 0LL;
    if ( !p_DeviceContext->bNdisIsProvider || *((_QWORD *)v3 + 1) >= 2uLL )
      goto LABEL_76;
    Miniport = 0LL;
    v31 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    if ( p_DeviceContext->MiniportAvailable )
    {
      LOBYTE(v30) = 3;
      Miniport = p_DeviceContext->Miniport;
      NdisReferenceWithTag(p_DeviceContext->MpRefCountTracker, v30);
      ++p_DeviceContext->MiniportLinkReference;
    }
    KeReleaseSpinLock(&SpinLock, v31);
    if ( Miniport )
    {
      v36 = ndisReferenceTopMiniportByNameForNsi(Miniport, 0, v32, 0, NSIREF_IFTOP, MPREF_IF_FINDTOP);
      v37 = v36;
      if ( !v36 )
        goto LABEL_64;
      KeAcquireSpinLockAtDpcLevel(&v36->Lock);
      HighestFilter = v37->HighestFilter;
      v37->MiniportThread = KeGetCurrentThread();
      if ( !HighestFilter )
      {
LABEL_36:
        IfBlock = v37->IfBlock;
        goto LABEL_40;
      }
      while ( 1 )
      {
        v40 = KeAcquireSpinLockRaiseToDpc(&HighestFilter->PnPRef.SpinLock);
        if ( !HighestFilter->PnPRef.Closing )
        {
          ReferenceCount = HighestFilter->PnPRef.ReferenceCount;
          if ( ReferenceCount < 0xFFEBu )
          {
            LOBYTE(v39) = 11;
            HighestFilter->PnPRef.ReferenceCount = ReferenceCount + 1;
            NdisReferenceWithTag(HighestFilter->PnPRef.RefCountTracker, v39);
            KeReleaseSpinLock(&HighestFilter->PnPRef.SpinLock, v40);
            IfBlock = HighestFilter->IfBlock;
LABEL_40:
            v37->MiniportThread = 0LL;
            KeReleaseSpinLockFromDpcLevel(&v37->Lock);
            v42 = KeAcquireSpinLockRaiseToDpc(&v37->Lock);
            NsiRefCountTracker = (ULONG_PTR)v37->NsiRefCountTracker;
            v37->MiniportThread = KeGetCurrentThread();
            if ( NsiRefCountTracker - 2 > 1 )
            {
              if ( NsiRefCountTracker < 2 )
                ndisBugCheckEx(0x1EuLL, 3uLL, NsiRefCountTracker, 0LL);
              if ( *(_BYTE *)(NsiRefCountTracker + 2) <= 2u )
                ndisBugCheckEx(0x1EuLL, 2uLL, NsiRefCountTracker, 2uLL);
              if ( *(_BYTE *)(NsiRefCountTracker + 1) )
              {
                if ( *(_BYTE *)(NsiRefCountTracker + 1) != 1 )
                  goto LABEL_46;
                v122 = NsiRefCountTracker + 136;
                v123 = *(_DWORD *)(NsiRefCountTracker + 192);
                if ( v123 >> 17 < 0x3FFE && (unsigned __int16)v123 >> 1 == (v123 >> 17) + 1 )
                {
                  ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(NsiRefCountTracker + 136));
                  *(_DWORD *)(v122 + 56) &= 0x10001u;
                  goto LABEL_46;
                }
                if ( (unsigned __int16)v123 >> 1 || (v123 & 1) != 0 )
                {
                  ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(NsiRefCountTracker + 136), 0);
                  goto LABEL_46;
                }
                goto LABEL_172;
              }
              v44 = *(_QWORD *)(NsiRefCountTracker + 8);
              if ( !v44 )
              {
LABEL_45:
                if ( _bittestandreset((signed __int32 *)(NsiRefCountTracker + 16), 2u) )
                  goto LABEL_46;
LABEL_172:
                ndisReportRefcountImbalance(NsiRefCountTracker, 2u);
              }
              for ( i = 0; ; ++i )
              {
                if ( i >= *(_BYTE *)(NsiRefCountTracker + 3) )
                  goto LABEL_45;
                v100 = (_BYTE *)(v44 + 2LL * i);
                if ( *v100 == 2 )
                {
                  v101 = v100[1];
                  if ( v101 )
                    break;
                }
              }
              v100[1] = v101 - 1;
            }
LABEL_46:
            v45 = v37->NsiOpenReferences-- == 1;
            if ( v45 )
            {
              NsiRequestsCompletedEvent = v37->NsiRequestsCompletedEvent;
              if ( NsiRequestsCompletedEvent )
                KeSetEvent(NsiRequestsCompletedEvent, 0, 0);
            }
            v37->MiniportThread = 0LL;
            KeReleaseSpinLock(&v37->Lock, v42);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v47) = 4;
              WPP_RECORDER_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v47,
                20,
                25,
                (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
                (char)v37);
            }
            v48 = KeAcquireSpinLockRaiseToDpc(&v37->Ref.SpinLock);
            RefCountTracker = (ULONG_PTR)v37->RefCountTracker;
            v51 = v48;
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
                  v124 = RefCountTracker + 3848;
                  v125 = *(_DWORD *)(RefCountTracker + 3904);
                  if ( v125 >> 17 < 0x3FFE && (unsigned __int16)v125 >> 1 == (v125 >> 17) + 1 )
                  {
                    ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(RefCountTracker + 3848));
                    *(_DWORD *)(v124 + 56) &= 0x10001u;
                  }
                  else
                  {
                    if ( !((unsigned __int16)v125 >> 1) && (v125 & 1) == 0 )
                      goto LABEL_173;
                    ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(RefCountTracker + 3848), 0);
                  }
                }
              }
              else
              {
                v52 = *(_QWORD *)(RefCountTracker + 8);
                if ( !v52 )
                {
LABEL_57:
                  if ( _bittestandreset((signed __int32 *)(RefCountTracker + 20), 0x1Cu) )
                    goto LABEL_58;
LABEL_173:
                  ndisReportRefcountImbalance(RefCountTracker, 0x3Cu);
                }
                for ( j = 0; ; ++j )
                {
                  if ( j >= *(_BYTE *)(RefCountTracker + 3) )
                    goto LABEL_57;
                  v49 = (_BYTE *)(v52 + 2LL * j);
                  if ( *v49 == 60 )
                  {
                    v103 = v49[1];
                    if ( v103 )
                      break;
                  }
                }
                v49[1] = v103 - 1;
              }
            }
LABEL_58:
            v53 = v37->Ref.ReferenceCount - 1;
            v37->Ref.ReferenceCount = v53;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v49) = 4;
              WPP_RECORDER_SF_qL(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                (int)v49,
                20,
                14,
                (struct _GUID *)&WPP_cb6db8c6f99e3ae11a098d09772ad370_Traceguids,
                (char)v37,
                v37->Ref.ReferenceCount);
            }
            KeReleaseSpinLock(&v37->Ref.SpinLock, v51);
            if ( !v53 )
            {
              RemoveReadyEvent = v37->RemoveReadyEvent;
              if ( RemoveReadyEvent )
                KeSetEvent(RemoveReadyEvent, 0, 0);
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v54) = 4;
              WPP_RECORDER_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v54,
                20,
                26,
                (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
                (char)v37);
            }
            v8 = *(_DWORD *)&v158[4];
LABEL_64:
            v55 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
            MpRefCountTracker = (ULONG_PTR)p_DeviceContext->MpRefCountTracker;
            v57 = v55;
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
                  v115 = MpRefCountTracker + 200;
                  v116 = *(_DWORD *)(MpRefCountTracker + 256);
                  if ( v116 >> 17 < 0x3FFE && (unsigned __int16)v116 >> 1 == (v116 >> 17) + 1 )
                  {
                    ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(MpRefCountTracker + 200));
                    *(_DWORD *)(v115 + 56) &= 0x10001u;
                  }
                  else
                  {
                    if ( !((unsigned __int16)v116 >> 1) && (v116 & 1) == 0 )
                      goto LABEL_145;
                    ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(MpRefCountTracker + 200), 0);
                  }
                }
              }
              else
              {
                v58 = *(_QWORD *)(MpRefCountTracker + 8);
                if ( !v58 )
                {
LABEL_69:
                  if ( _bittestandreset((signed __int32 *)(MpRefCountTracker + 16), 3u) )
                    goto LABEL_70;
LABEL_145:
                  ndisReportRefcountImbalance(MpRefCountTracker, 3u);
                }
                for ( k = 0; ; ++k )
                {
                  if ( k >= *(_BYTE *)(MpRefCountTracker + 3) )
                    goto LABEL_69;
                  v92 = (_BYTE *)(v58 + 2LL * k);
                  if ( *v92 == 3 )
                  {
                    v93 = v92[1];
                    if ( v93 )
                      break;
                  }
                }
                v92[1] = v93 - 1;
              }
            }
LABEL_70:
            v45 = p_DeviceContext->MiniportLinkReference-- == 1;
            if ( v45 )
            {
              v104 = p_DeviceContext->Miniport;
              if ( v104 )
              {
                IfBlockPointerRefZeroEvent = v104->IfBlockPointerRefZeroEvent;
                if ( IfBlockPointerRefZeroEvent )
                  KeSetEvent(IfBlockPointerRefZeroEvent, 0, 0);
              }
            }
            KeReleaseSpinLock(&SpinLock, v57);
            goto LABEL_72;
          }
          ndisRefCountReferenceCountOverflow = 1;
        }
        KeReleaseSpinLock(&HighestFilter->PnPRef.SpinLock, v40);
        HighestFilter = HighestFilter->LowerFilter;
        if ( !HighestFilter )
          goto LABEL_36;
      }
    }
    if ( !p_DeviceContext->IsNdisFilter )
      goto LABEL_75;
    v33 = ndisReferenceTopMiniportByNameForNsi(
            *(struct _NDIS_MINIPORT_BLOCK **)&p_DeviceContext->Miniport->Reserved4.Length,
            0,
            v32,
            0,
            NSIREF_IFTOP,
            MPREF_IF_FINDTOP);
    v34 = v33;
    if ( !v33 )
      goto LABEL_74;
    KeAcquireSpinLockAtDpcLevel(&v33->Lock);
    v35 = v34->HighestFilter;
    v34->MiniportThread = KeGetCurrentThread();
    if ( !v35 )
    {
LABEL_33:
      IfBlock = v34->IfBlock;
      goto LABEL_110;
    }
    while ( 1 )
    {
      v78 = KeAcquireSpinLockRaiseToDpc(&v35->PnPRef.SpinLock);
      if ( !v35->PnPRef.Closing )
      {
        v79 = v35->PnPRef.ReferenceCount;
        if ( v79 < 0xFFEBu )
        {
          LOBYTE(v77) = 11;
          v35->PnPRef.ReferenceCount = v79 + 1;
          NdisReferenceWithTag(v35->PnPRef.RefCountTracker, v77);
          KeReleaseSpinLock(&v35->PnPRef.SpinLock, v78);
          IfBlock = v35->IfBlock;
LABEL_110:
          v34->MiniportThread = 0LL;
          KeReleaseSpinLockFromDpcLevel(&v34->Lock);
          v80 = KeAcquireSpinLockRaiseToDpc(&v34->Lock);
          v81 = (ULONG_PTR)v34->NsiRefCountTracker;
          v34->MiniportThread = KeGetCurrentThread();
          if ( v81 - 2 > 1 )
          {
            if ( v81 < 2 )
              ndisBugCheckEx(0x1EuLL, 3uLL, v81, 0LL);
            if ( *(_BYTE *)(v81 + 2) <= 2u )
              ndisBugCheckEx(0x1EuLL, 2uLL, v81, 2uLL);
            if ( *(_BYTE *)(v81 + 1) )
            {
              if ( *(_BYTE *)(v81 + 1) != 1 )
                goto LABEL_116;
              v118 = v81 + 136;
              v119 = *(_DWORD *)(v81 + 192);
              if ( v119 >> 17 < 0x3FFE && (unsigned __int16)v119 >> 1 == (v119 >> 17) + 1 )
              {
                ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v81 + 136));
                *(_DWORD *)(v118 + 56) &= 0x10001u;
                goto LABEL_116;
              }
              if ( (unsigned __int16)v119 >> 1 || (v119 & 1) != 0 )
              {
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v81 + 136), 0);
                goto LABEL_116;
              }
              goto LABEL_170;
            }
            v82 = *(_QWORD *)(v81 + 8);
            if ( !v82 )
            {
LABEL_115:
              if ( _bittestandreset((signed __int32 *)(v81 + 16), 2u) )
                goto LABEL_116;
LABEL_170:
              ndisReportRefcountImbalance(v81, 2u);
            }
            for ( m = 0; ; ++m )
            {
              if ( m >= *(_BYTE *)(v81 + 3) )
                goto LABEL_115;
              v95 = (_BYTE *)(v82 + 2LL * m);
              if ( *v95 == 2 )
              {
                v96 = v95[1];
                if ( v96 )
                  break;
              }
            }
            v95[1] = v96 - 1;
          }
LABEL_116:
          v45 = v34->NsiOpenReferences-- == 1;
          if ( v45 )
          {
            v83 = v34->NsiRequestsCompletedEvent;
            if ( v83 )
              KeSetEvent(v83, 0, 0);
          }
          v34->MiniportThread = 0LL;
          KeReleaseSpinLock(&v34->Lock, v80);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v84) = 4;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v84,
              20,
              25,
              (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
              (char)v34);
          }
          v85 = KeAcquireSpinLockRaiseToDpc(&v34->Ref.SpinLock);
          v87 = (ULONG_PTR)v34->RefCountTracker;
          v88 = v85;
          if ( v87 && v87 - 2 > 1 )
          {
            if ( v87 == 1 )
              ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
            if ( *(_BYTE *)(v87 + 2) <= 0x3Cu )
              ndisBugCheckEx(0x1EuLL, 2uLL, v87, 0x3CuLL);
            if ( *(_BYTE *)(v87 + 1) )
            {
              if ( *(_BYTE *)(v87 + 1) == 1 )
              {
                v120 = v87 + 3848;
                v121 = *(_DWORD *)(v87 + 3904);
                if ( v121 >> 17 < 0x3FFE && (unsigned __int16)v121 >> 1 == (v121 >> 17) + 1 )
                {
                  ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v87 + 3848));
                  *(_DWORD *)(v120 + 56) &= 0x10001u;
                }
                else
                {
                  if ( !((unsigned __int16)v121 >> 1) && (v121 & 1) == 0 )
                    goto LABEL_171;
                  ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v87 + 3848), 0);
                }
              }
            }
            else
            {
              v89 = *(_QWORD *)(v87 + 8);
              if ( !v89 )
              {
LABEL_127:
                if ( _bittestandreset((signed __int32 *)(v87 + 20), 0x1Cu) )
                  goto LABEL_128;
LABEL_171:
                ndisReportRefcountImbalance(v87, 0x3Cu);
              }
              for ( n = 0; ; ++n )
              {
                if ( n >= *(_BYTE *)(v87 + 3) )
                  goto LABEL_127;
                v86 = (_BYTE *)(v89 + 2LL * n);
                if ( *v86 == 60 )
                {
                  v98 = v86[1];
                  if ( v98 )
                    break;
                }
              }
              v86[1] = v98 - 1;
            }
          }
LABEL_128:
          v90 = v34->Ref.ReferenceCount - 1;
          v34->Ref.ReferenceCount = v90;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v86) = 4;
            WPP_RECORDER_SF_qL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)v86,
              20,
              14,
              (struct _GUID *)&WPP_cb6db8c6f99e3ae11a098d09772ad370_Traceguids,
              (char)v34,
              v34->Ref.ReferenceCount);
          }
          KeReleaseSpinLock(&v34->Ref.SpinLock, v88);
          if ( !v90 )
          {
            v109 = v34->RemoveReadyEvent;
            if ( v109 )
              KeSetEvent(v109, 0, 0);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v59) = 4;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (unsigned __int16)v59,
              20,
              26,
              (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
              (char)v34);
          }
          v8 = *(_DWORD *)&v158[4];
LABEL_72:
          if ( IfBlock )
          {
            LOBYTE(v59) = 7;
            NdisReferenceWithTag(IfBlock->RefCountTracker, v59);
            ++IfBlock->Ref;
          }
LABEL_74:
          v3 = v141;
LABEL_75:
          Blink = (_DEVICE_OBJECT *)v140;
          v17 = v135;
LABEL_76:
          KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v17);
          if ( *((_QWORD *)v3 + 2) )
          {
            v60 = Size;
            v61 = (char *)v151;
            memmove(v151, &p_DeviceContext->NetLuid, Size);
            v151 = &v61[v60];
          }
          if ( *((_QWORD *)v3 + 7) )
          {
            v62 = v152;
            v63 = Size_4;
            LODWORD(v156) = 1;
            *((_QWORD *)&v156 + 1) = v152;
            LODWORD(v157) = Size_4;
            ndisNsiGetInterfaceRodEnumObject((char)p_DeviceContext);
            v152 = v63 + v62;
          }
          if ( *((_QWORD *)v3 + 9) )
          {
            v64 = v153;
            v65 = v146;
            *((_QWORD *)&v156 + 1) = v153;
            LODWORD(v157) = v146;
            LODWORD(v156) = 2;
            ndisNsiGetInterfaceRosEnumObject((char)p_DeviceContext);
            v153 = v65 + v64;
          }
          v135 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
          v17 = v135;
          if ( IfBlock )
          {
            if ( IfBlock->IsNdisFilter )
            {
              p_DeferredContext = (__int64)&IfBlock->Miniport->WakeUpDpcTimer.Dpc.DeferredContext;
              v67 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)p_DeferredContext);
              v68 = *(_QWORD *)(p_DeferredContext + 16);
              v69 = v67;
              if ( v68 - 2 > 1 )
              {
                if ( v68 < 2 )
                  ndisBugCheckEx(0x1EuLL, 3uLL, v68, 0LL);
                if ( *(_BYTE *)(v68 + 2) <= 0xBu )
                  ndisBugCheckEx(0x1EuLL, 2uLL, v68, 0xBuLL);
                if ( *(_BYTE *)(v68 + 1) )
                {
                  if ( *(_BYTE *)(v68 + 1) != 1 )
                    goto LABEL_90;
                  v106 = v68 + 712;
                  v107 = *(_DWORD *)(v68 + 768);
                  if ( v107 >> 17 >= 0x3FFE || (unsigned __int16)v107 >> 1 != (v107 >> 17) + 1 )
                  {
                    if ( (unsigned __int16)v107 >> 1 || (v107 & 1) != 0 )
                    {
                      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v68 + 712), 0);
                      goto LABEL_90;
                    }
                    goto LABEL_106;
                  }
                  for ( ii = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v106;
                        *(_QWORD *)v106;
                        ii = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v106 )
                  {
                    *(_QWORD *)v106 = ii->Next;
                    ndisFreeRefCountStacksInBlock(ii);
                    ExFreePoolWithTag(ii, 0);
                  }
                  ndisFreeRefCountStacksInBlock((struct _NDIS_REFCOUNT_STACK_BLOCK *)v106);
                  *(_DWORD *)(v106 + 56) &= 0x10001u;
                }
                else
                {
                  v70 = *(_QWORD *)(v68 + 8);
                  if ( !v70 )
                  {
LABEL_89:
                    if ( _bittestandreset((signed __int32 *)(v68 + 16), 0xBu) )
                      goto LABEL_90;
LABEL_106:
                    ndisReportRefcountImbalance(v68, 0xBu);
                  }
                  for ( jj = 0; ; ++jj )
                  {
                    if ( jj >= *(_BYTE *)(v68 + 3) )
                      goto LABEL_89;
                    v75 = (_BYTE *)(v70 + 2LL * jj);
                    if ( *v75 == 11 )
                    {
                      v76 = v75[1];
                      if ( v76 )
                        break;
                    }
                  }
                  v75[1] = v76 - 1;
                }
              }
LABEL_90:
              v45 = (*(_WORD *)(p_DeferredContext + 8))-- == 1;
              if ( v45 && !*(_BYTE *)(p_DeferredContext + 11) )
              {
                v131 = *(_QWORD *)(p_DeferredContext + 16);
                if ( v131 )
                {
                  AnyActiveRefTag = ndisGetAnyActiveRefTag(*(struct NDIS_REFCOUNT_HANDLE__ **)(p_DeferredContext + 16));
                  if ( AnyActiveRefTag != -2 )
                    ndisBugCheckEx(0x1EuLL, 4uLL, v131, AnyActiveRefTag);
                  v133 = ndisRefCountBlockFromRefCountHandle(v131);
                  v134 = v133;
                  if ( v133 )
                  {
                    ndisFreeRefCountAuxiliaryMemory(v133);
                    ExFreePoolWithTag(v134, 0);
                  }
                }
                *(_QWORD *)(p_DeferredContext + 16) = 1LL;
              }
              KeReleaseSpinLock((PKSPIN_LOCK)p_DeferredContext, v69);
              v3 = v141;
              v17 = v135;
            }
            IFBLOCK_DECREMENT_REF(IfBlock, IFREF_TOPENUMALL);
            Blink = (_DEVICE_OBJECT *)v140;
          }
          Blink = *(_DEVICE_OBJECT **)&Blink->Type;
          v140 = (_LIST_ENTRY *)Blink;
          IFBLOCK_DECREMENT_REF(p_DeviceContext, IFREF_ENUMALL);
          v25 = v147;
          v2 = v148;
LABEL_94:
          if ( Blink == (_DEVICE_OBJECT *)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink )
          {
LABEL_95:
            *((_DWORD *)v3 + 22) = v25;
            v71 = v2 < v25 ? 0x105 : 0;
            goto LABEL_96;
          }
          goto LABEL_23;
        }
        ndisRefCountReferenceCountOverflow = 1;
      }
      KeReleaseSpinLock(&v35->PnPRef.SpinLock, v78);
      v35 = v35->LowerFilter;
      if ( !v35 )
        goto LABEL_33;
    }
  }
  for ( kk = (_DEVICE_OBJECT *)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink;
        kk != (_DEVICE_OBJECT *)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink;
        kk = *(_DEVICE_OBJECT **)&kk->Type )
  {
    v127 = kk->Queue.Wcb.BufferChainingDpc;
    if ( v8 == LODWORD(v127->ProcessorHistory) )
      goto LABEL_229;
    if ( *(_DWORD *)v158 == -1 )
    {
      v128 = *(_QWORD *)&v158[8] - *(unsigned __int64 *)((char *)&v127[26].ProcessorHistory + 4);
      if ( *(_QWORD *)&v158[8] == *(unsigned __int64 *)((char *)&v127[26].ProcessorHistory + 4) )
        v128 = *(_QWORD *)&v158[16] - *(unsigned __int64 *)((char *)&v127[26].DeferredRoutine + 4);
      if ( !v128 )
        goto LABEL_229;
    }
    if ( (v127[26].ProcessorHistory & 2) == 0 && v8 == 1 )
LABEL_229:
      ++v4;
  }
  *((_DWORD *)v3 + 22) = v4;
  v71 = v4 != 0 ? 0x105 : 0;
LABEL_96:
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v135);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v72) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v72,
      22,
      15,
      (struct _GUID *)&WPP_1fac887ef26339fd0b855bd4d9383f6d_Traceguids,
      (char)v3,
      v71);
  }
  KeLeaveCriticalRegion();
  return v71;
}
