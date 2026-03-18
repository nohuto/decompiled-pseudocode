/*
 * XREFs of ?_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z @ 0x140017360
 * Callers:
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1400374F0 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?AllocateReservedRequest@FxIoQueue@@QEAAJPEAPEAVFxRequest@@@Z @ 0x1400A1054 (-AllocateReservedRequest@FxIoQueue@@QEAAJPEAPEAVFxRequest@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_D @ 0x14001177C (WPP_IFR_SF_D.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140011878 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_qDqD @ 0x140016E4C (WPP_IFR_SF_qDqD.c)
 *     FxAllocateFromNPagedLookasideList @ 0x140019390 (FxAllocateFromNPagedLookasideList.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x14004B508 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x140081AEC (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z @ 0x140082618 (-FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830A8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     FxLiveDump @ 0x1400837D4 (FxLiveDump.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x140083BB0 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 *     memset @ 0x1400AC800 (memset.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1400E4854 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

__int64 __fastcall FxRequest::_CreateForPackage(
        FX_POOL *Device,
        _WDF_OBJECT_ATTRIBUTES *RequestAttributes,
        _IRP *Irp,
        FX_POOL ***Request)
{
  FxPkgPnp *m_Lock; // rax
  unsigned int v5; // esi
  _FX_DRIVER_GLOBALS *Flink; // r15
  _WDF_OBJECT_ATTRIBUTES *p_Blink; // r13
  FX_POOL_TRACKER *v11; // rax
  _FX_DRIVER_GLOBALS *v12; // rdx
  FX_POOL_TRACKER *v13; // rbx
  FX_POOL_TRACKER *v14; // rdi
  FX_POOL **p_Pool; // rbx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  unsigned __int64 ContextSizeOverride; // r8
  FX_POOL *v18; // rax
  _IRP *v19; // rcx
  FX_POOL *v20; // rcx
  _LIST_ENTRY *v21; // rdx
  int Flink_low; // r8d
  int v23; // eax
  FX_POOL *v24; // rax
  __int16 v25; // cx
  FxObject *flags; // rdi
  unsigned __int64 ParentObject; // r15
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  void (__fastcall *EvtDestroyCallback)(void *); // rcx
  void (__fastcall *EvtCleanupCallback)(void *); // rcx
  _LIST_ENTRY *v33; // rdi
  signed int _a1; // ebp
  _WDF_BUGCHECK_CODES v35; // edx
  _FX_DRIVER_GLOBALS *v36; // rcx
  const char *DriverName; // r14
  KIRQL v38; // r13
  KIRQL v39; // r15
  _LIST_ENTRY *v40; // rdx
  _LIST_ENTRY *v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rax
  void (__fastcall *v44)(void *); // rcx
  void (__fastcall *v45)(void *); // rcx
  _LIST_ENTRY *v46; // rdi
  FX_POOL *NonPagedBytes; // rax
  KIRQL v49; // r13
  _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *v51; // rcx
  unsigned __int8 v52; // dl
  unsigned int v53; // r8d
  unsigned __int16 v54; // r9
  KIRQL v55; // al
  KIRQL v56; // al
  _FX_DRIVER_GLOBALS *v57; // rdx
  signed int v58; // ebp
  _WDF_BUGCHECK_CODES v59; // edx
  _FX_DRIVER_GLOBALS *v60; // rcx
  const char *v61; // r14
  KIRQL v62; // dl
  const _GUID *traceGuid; // [rsp+20h] [rbp-88h]
  FxObject **v64; // [rsp+50h] [rbp-58h] BYREF
  __int16 v65; // [rsp+58h] [rbp-50h]
  __int16 v66; // [rsp+5Ah] [rbp-4Eh]
  int v67; // [rsp+5Ch] [rbp-4Ch]
  void *retaddr; // [rsp+A8h] [rbp+0h]
  KIRQL v69; // [rsp+B0h] [rbp+8h]
  FxObject *v70; // [rsp+B8h] [rbp+10h] BYREF
  _IRP *v71; // [rsp+C0h] [rbp+18h]
  FxVerifierLock *VerifierLock; // [rsp+C8h] [rbp+20h] BYREF

  v71 = Irp;
  m_Lock = (FxPkgPnp *)Device[4].NonPagedLock.m_Lock;
  v5 = 0;
  Flink = (_FX_DRIVER_GLOBALS *)Device->NonPagedHead.Flink;
  *Request = 0LL;
  p_Blink = RequestAttributes;
  if ( m_Lock && m_Lock->m_Type == 4354 && BYTE3(m_Lock[1].m_DisposeSingleEntry.Next) )
  {
    v13 = (FX_POOL_TRACKER *)ExpInterlockedPopEntrySList((PSLIST_HEADER)&Device[2].NonPagedAllocations);
    if ( v13 )
      goto LABEL_5;
    v11 = (FX_POOL_TRACKER *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))Device[3].NonPagedHead.Flink)(
                               *((unsigned int *)&Device[3].NonPagedLock.m_DbgFlagIsInitialized + 1),
                               HIDWORD(Device[3].NonPagedLock.m_Lock),
                               LODWORD(Device[3].NonPagedLock.m_Lock));
  }
  else
  {
    v11 = (FX_POOL_TRACKER *)FxAllocateFromNPagedLookasideList(
                               (_NPAGED_LOOKASIDE_LIST *)&Device[2].NonPagedAllocations,
                               (unsigned __int64)RequestAttributes);
  }
  v13 = v11;
LABEL_5:
  if ( v13 )
  {
    if ( Flink->FxPoolTrackingOn )
    {
      v14 = v13 + 1;
      FxPoolInsertNonPagedAllocateTracker(
        &Flink->FxPoolFrameworks,
        v13,
        (unsigned __int64)Device[3].PagedHead.Flink,
        Flink->Tag,
        retaddr);
    }
    else
    {
      v14 = v13;
    }
    v14->Link.Flink = &v13->Link;
    p_Pool = &v14->Pool;
    v14->Link.Blink = &Flink->Linkage;
    if ( !RequestAttributes )
      p_Blink = (_WDF_OBJECT_ATTRIBUTES *)&Device[3].PagedHead.Blink;
    if ( Flink->FxVerifierHandle )
    {
      *(_OWORD *)p_Pool = 0LL;
      *(_OWORD *)&v14->Size = 0LL;
      *(_OWORD *)&v14->CallersAddress = 0LL;
      LODWORD(v14->CallersAddress) = 1146058822;
      p_Pool = (FX_POOL **)&v14[1];
    }
    p_Pool[47] = 0LL;
    p_Pool[48] = 0LL;
    p_Pool[49] = 0LL;
    p_Pool[50] = 0LL;
    p_Pool[51] = 0LL;
    p_Pool[46] = (FX_POOL *)p_Pool;
    if ( p_Blink )
    {
      ContextTypeInfo = p_Blink->ContextTypeInfo;
      if ( ContextTypeInfo )
      {
        ContextSizeOverride = p_Blink->ContextSizeOverride;
        if ( !ContextSizeOverride )
          ContextSizeOverride = ContextTypeInfo->ContextSize;
        memset(p_Pool + 52, 0, (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      }
      p_Pool[50] = (FX_POOL *)p_Blink->ContextTypeInfo;
    }
    if ( p_Pool )
    {
      p_Pool[2] = (FX_POOL *)Device->NonPagedHead.Flink;
      *p_Pool = (FX_POOL *)FxObject::`vftable';
      *((_DWORD *)p_Pool + 2) = 24121352;
      p_Pool[7] = 0LL;
      *((_BYTE *)p_Pool + 48) = 1;
      *((_DWORD *)p_Pool + 3) = 1;
      *((_DWORD *)p_Pool + 6) = 0x10000;
      p_Pool[8] = 0LL;
      p_Pool[5] = (FX_POOL *)(p_Pool + 4);
      p_Pool[4] = (FX_POOL *)(p_Pool + 4);
      p_Pool[10] = (FX_POOL *)(p_Pool + 9);
      p_Pool[9] = (FX_POOL *)(p_Pool + 9);
      v18 = p_Pool[2];
      p_Pool[11] = 0LL;
      p_Pool[12] = 0LL;
      if ( *(&v18[2].NonPagedLock.m_DbgFlagIsInitialized + 4) )
        FxObject::Vf_VerifyConstruct((FxObject *)p_Pool, v12, 0);
      *p_Pool = (FX_POOL *)FxNonPagedObject::`vftable';
      p_Pool[14] = 0LL;
      *((_BYTE *)p_Pool + 104) = 1;
      if ( *((char *)p_Pool + 24) < 0 )
      {
        v57 = (_FX_DRIVER_GLOBALS *)p_Pool[2];
        if ( v57->FxVerifierLock )
        {
          VerifierLock = 0LL;
          FxVerifierLock::CreateAndInitialize(&VerifierLock, v57, (FxObject *)p_Pool);
          *(p_Pool - 5) = (FX_POOL *)VerifierLock;
        }
      }
      v19 = v71;
      p_Pool[19] = (FX_POOL *)v71;
      p_Pool[23] = 0LL;
      p_Pool[24] = 0LL;
      *((_BYTE *)p_Pool + 214) = v19 == 0LL;
      *((_WORD *)p_Pool + 106) = 0;
      *((_BYTE *)p_Pool + 238) = 1;
      p_Pool[20] = 0LL;
      p_Pool[25] = 0LL;
      *((_BYTE *)p_Pool + 215) = 0;
      *((_BYTE *)p_Pool + 236) = 0;
      p_Pool[21] = 0LL;
      p_Pool[22] = 0LL;
      p_Pool[16] = (FX_POOL *)(p_Pool + 15);
      p_Pool[15] = (FX_POOL *)(p_Pool + 15);
      p_Pool[18] = 0LL;
      p_Pool[27] = (FX_POOL *)216;
      p_Pool[28] = 0LL;
      *((_DWORD *)p_Pool + 52) = 0;
      p_Pool[30] = 0LL;
      *((_DWORD *)p_Pool + 58) = 232;
      *((_BYTE *)p_Pool + 237) = 0;
      p_Pool[32] = (FX_POOL *)FxRequestSystemBuffer::`vftable';
      p_Pool[33] = 0LL;
      p_Pool[34] = (FX_POOL *)FxRequestOutputBuffer::`vftable';
      p_Pool[35] = 0LL;
      p_Pool[31] = 0LL;
      *((_BYTE *)p_Pool + 353) = 0;
      p_Pool[37] = (FX_POOL *)(p_Pool + 36);
      p_Pool[36] = (FX_POOL *)(p_Pool + 36);
      p_Pool[39] = (FX_POOL *)(p_Pool + 38);
      p_Pool[38] = (FX_POOL *)(p_Pool + 38);
      p_Pool[41] = (FX_POOL *)(p_Pool + 40);
      p_Pool[40] = (FX_POOL *)(p_Pool + 40);
      *p_Pool = (FX_POOL *)FxRequestFromLookaside::`vftable';
      *((_BYTE *)p_Pool + 352) = 0;
      *((_WORD *)p_Pool + 177) = 0;
      p_Pool[42] = 0LL;
      p_Pool[43] = 0LL;
      p_Pool[12] = (FX_POOL *)Device->PagedHead.Flink;
      if ( !v19 )
      {
LABEL_32:
        v25 = *((_WORD *)p_Pool + 5);
        if ( BYTE1(Device->NonPagedHead.Flink[21].Blink) )
        {
          v70 = 0LL;
          flags = 0LL;
          if ( v25 )
          {
            if ( RequestAttributes )
            {
              if ( RequestAttributes->ExecutionLevel == WdfExecutionLevelPassive )
              {
                v55 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)p_Pool + 7);
                *((_WORD *)p_Pool + 12) |= 0x11u;
                KeReleaseSpinLock((PKSPIN_LOCK)p_Pool + 7, v55);
                flags = v70;
              }
              ParentObject = (unsigned __int64)RequestAttributes->ParentObject;
              if ( ParentObject )
              {
                LOWORD(v28) = 0;
                flags = (FxObject *)(~ParentObject & 0xFFFFFFFFFFFFFFF8uLL);
                if ( (ParentObject & 1) != 0 )
                {
                  v28 = LOWORD(flags->__vftable);
                  flags = (FxObject *)((char *)flags - v28);
                }
                if ( flags->m_Type == 4096 )
                {
                  v70 = flags;
                }
                else
                {
                  v66 = v28;
                  v64 = &v70;
                  v65 = 4096;
                  v67 = 0;
                  if ( flags->QueryInterface(flags, (FxQueryInterfaceParams *)&v64) < 0 )
                  {
                    WPP_IFR_SF_qDqD(
                      flags->m_Globals,
                      v52,
                      v53,
                      v54,
                      traceGuid,
                      (const void *)ParentObject,
                      0x1000u,
                      flags,
                      flags->m_Type);
                    FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, ParentObject, 0x1000uLL);
                  }
                  flags = v70;
                }
              }
            }
            if ( !flags )
              goto LABEL_43;
            v38 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)p_Pool + 7);
            v69 = v38;
            if ( *((_WORD *)p_Pool + 13) == 1 )
            {
              if ( !p_Pool[8] )
              {
                v49 = KeAcquireSpinLockRaiseToDpc(&flags->m_SpinLock.m_Lock);
                if ( flags->m_ObjectState == 1 )
                {
                  Blink = flags->m_ChildListHead.Blink;
                  v51 = (_LIST_ENTRY *)(p_Pool + 9);
                  if ( Blink->Flink == &flags->m_ChildListHead )
                  {
                    v51->Flink = &flags->m_ChildListHead;
                    p_Pool[10] = (FX_POOL *)Blink;
                    Blink->Flink = v51;
                    flags->m_ChildListHead.Blink = v51;
                    if ( !p_Pool[12] )
                      p_Pool[12] = (FX_POOL *)flags->m_DeviceBase;
                    KeReleaseSpinLock(&flags->m_SpinLock.m_Lock, v49);
                    p_Pool[8] = (FX_POOL *)flags;
                    KeReleaseSpinLock((PKSPIN_LOCK)p_Pool + 7, v69);
LABEL_43:
                    if ( RequestAttributes )
                    {
                      v29 = *((unsigned __int16 *)p_Pool + 5);
                      if ( (_WORD)v29 )
                        v30 = (__int64)p_Pool + v29;
                      else
                        v30 = 0LL;
                      EvtDestroyCallback = RequestAttributes->EvtDestroyCallback;
                      if ( EvtDestroyCallback )
                        *(_QWORD *)(v30 + 24) = EvtDestroyCallback;
                      EvtCleanupCallback = RequestAttributes->EvtCleanupCallback;
                      if ( EvtCleanupCallback )
                      {
                        *(_QWORD *)(v30 + 16) = EvtCleanupCallback;
                        *((_WORD *)p_Pool + 12) |= 0x400u;
                      }
                    }
                    *((_WORD *)p_Pool + 12) |= 8u;
                    v33 = p_Pool[2][2].NonPagedHead.Flink;
                    if ( !v33 || LODWORD(v33->Flink) )
                      goto LABEL_80;
                    if ( *((_WORD *)p_Pool + 4) == 4098 )
                    {
                      if ( _InterlockedIncrement((volatile signed __int32 *)&v33[1].Flink + 1) >= 2 )
                        _InterlockedAdd((volatile signed __int32 *)&v33->Blink + 1, (unsigned int)v33->Blink);
                      goto LABEL_55;
                    }
                    if ( *((_WORD *)p_Pool + 4) != 4104 || *((_BYTE *)p_Pool + 213) == 2 )
                    {
LABEL_55:
                      *((_WORD *)p_Pool + 12) |= 0x40u;
                      _a1 = _InterlockedIncrement((volatile signed __int32 *)&v33[1]);
                      if ( _a1 >= SHIDWORD(v33->Blink)
                        && !KeGetCurrentIrql()
                        && !_InterlockedCompareExchange((volatile signed __int32 *)v33, 1, 0) )
                      {
                        WPP_IFR_SF_D((_FX_DRIVER_GLOBALS *)p_Pool[2], 2u, 0x14u, 0xFu, WPP_FxObject_cpp_Traceguids, _a1);
                        if ( BYTE4(v33->Flink) )
                          DbgBreakPoint();
                        v36 = (_FX_DRIVER_GLOBALS *)p_Pool[2];
                        DriverName = v36->Public.DriverName;
                        FxLiveDump(v36, v35, (unsigned __int64)v36->Public.DriverName, _a1);
                        if ( _a1 >= SHIDWORD(v33->Blink) )
                          MicrosoftTelemetryAssertTriggeredArgsKM(DriverName, _a1, 0);
                      }
                    }
LABEL_80:
                    *Request = p_Pool;
                    return v5;
                  }
LABEL_137:
                  __fastfail(3u);
                }
                FxObject::TraceDroppedEvent(flags, FxObjectDroppedEventAddChildObjectInternal);
                KeReleaseSpinLock(&flags->m_SpinLock.m_Lock, v49);
                v62 = v69;
                goto LABEL_135;
              }
              goto LABEL_132;
            }
            FxObject::TraceDroppedEvent((FxObject *)p_Pool, FxObjectDroppedEventAssignParentObject);
            goto LABEL_134;
          }
        }
        else if ( v25 )
        {
          if ( RequestAttributes && RequestAttributes->ExecutionLevel == WdfExecutionLevelPassive )
          {
            v56 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)p_Pool + 7);
            *((_WORD *)p_Pool + 12) |= 0x11u;
            KeReleaseSpinLock((PKSPIN_LOCK)p_Pool + 7, v56);
          }
          v38 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)p_Pool + 7);
          if ( *((_WORD *)p_Pool + 13) == 1 )
          {
            if ( p_Pool[8] )
            {
LABEL_132:
              KeReleaseSpinLock((PKSPIN_LOCK)p_Pool + 7, v38);
              v5 = -1071644147;
              goto LABEL_110;
            }
            v39 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Device->PagedLock.m_Lock.Contention);
            if ( WORD1(Device->NonPagedHead.Blink) == 1 )
            {
              v40 = *(_LIST_ENTRY **)&Device->PagedLock.m_Lock.Count;
              v41 = (_LIST_ENTRY *)(p_Pool + 9);
              if ( (MxPagedLockNoDynam *)v40->Flink == &Device->PagedLock )
              {
                v41->Flink = (_LIST_ENTRY *)&Device->PagedLock;
                p_Pool[10] = (FX_POOL *)v40;
                v40->Flink = v41;
                *(_QWORD *)&Device->PagedLock.m_Lock.Count = v41;
                if ( !p_Pool[12] )
                  p_Pool[12] = (FX_POOL *)Device->PagedHead.Flink;
                KeReleaseSpinLock((PKSPIN_LOCK)&Device->PagedLock.m_Lock.Contention, v39);
                p_Pool[8] = Device;
                KeReleaseSpinLock((PKSPIN_LOCK)p_Pool + 7, v38);
                if ( RequestAttributes )
                {
                  v42 = *((unsigned __int16 *)p_Pool + 5);
                  if ( (_WORD)v42 )
                    v43 = (__int64)p_Pool + v42;
                  else
                    v43 = 0LL;
                  v44 = RequestAttributes->EvtDestroyCallback;
                  if ( v44 )
                    *(_QWORD *)(v43 + 24) = v44;
                  v45 = RequestAttributes->EvtCleanupCallback;
                  if ( v45 )
                  {
                    *(_QWORD *)(v43 + 16) = v45;
                    *((_WORD *)p_Pool + 12) |= 0x400u;
                  }
                }
                *((_WORD *)p_Pool + 12) |= 8u;
                v46 = p_Pool[2][2].NonPagedHead.Flink;
                if ( !v46 || LODWORD(v46->Flink) )
                  goto LABEL_80;
                if ( *((_WORD *)p_Pool + 4) == 4098 )
                {
                  if ( _InterlockedIncrement((volatile signed __int32 *)&v46[1].Flink + 1) >= 2 )
                    _InterlockedAdd((volatile signed __int32 *)&v46->Blink + 1, (unsigned int)v46->Blink);
                }
                else if ( *((_WORD *)p_Pool + 4) == 4104 && *((_BYTE *)p_Pool + 213) != 2 )
                {
                  goto LABEL_80;
                }
                *((_WORD *)p_Pool + 12) |= 0x40u;
                v58 = _InterlockedIncrement((volatile signed __int32 *)&v46[1]);
                if ( v58 >= SHIDWORD(v46->Blink)
                  && !KeGetCurrentIrql()
                  && !_InterlockedCompareExchange((volatile signed __int32 *)v46, 1, 0) )
                {
                  WPP_IFR_SF_D((_FX_DRIVER_GLOBALS *)p_Pool[2], 2u, 0x14u, 0xFu, WPP_FxObject_cpp_Traceguids, v58);
                  if ( BYTE4(v46->Flink) )
                    DbgBreakPoint();
                  v60 = (_FX_DRIVER_GLOBALS *)p_Pool[2];
                  v61 = v60->Public.DriverName;
                  FxLiveDump(v60, v59, (unsigned __int64)v60->Public.DriverName, v58);
                  if ( v58 >= SHIDWORD(v46->Blink) )
                    MicrosoftTelemetryAssertTriggeredArgsKM(v61, v58, 0);
                }
                goto LABEL_80;
              }
              goto LABEL_137;
            }
            FxObject::TraceDroppedEvent((FxObject *)Device, FxObjectDroppedEventAddChildObjectInternal);
            KeReleaseSpinLock((PKSPIN_LOCK)&Device->PagedLock.m_Lock.Contention, v39);
          }
          else
          {
            FxObject::TraceDroppedEvent((FxObject *)p_Pool, FxObjectDroppedEventAssignParentObject);
          }
LABEL_134:
          v62 = v38;
LABEL_135:
          KeReleaseSpinLock((PKSPIN_LOCK)p_Pool + 7, v62);
          v5 = -1073741738;
          goto LABEL_110;
        }
        v5 = -1073741816;
LABEL_110:
        WPP_IFR_SF_D(
          (_FX_DRIVER_GLOBALS *)Device->NonPagedHead.Flink,
          2u,
          0x10u,
          0xBu,
          WPP_FxRequest_cpp_Traceguids,
          v5);
        FxObject::DeleteFromFailedCreate((FxObject *)p_Pool);
        return v5;
      }
      v20 = p_Pool[19];
      v21 = v20[1].NonPagedHead.Blink;
      Flink_low = LOBYTE(v21->Flink);
      if ( Flink_low != 15 )
      {
        if ( Flink_low == 3 || Flink_low == 4 )
        {
          if ( HIDWORD(Device[1].PagedLock.m_Lock.Owner) == 1 )
          {
            if ( v20->PagedLock.m_Lock.Event.Header.Type )
              goto LABEL_32;
            NonPagedBytes = (FX_POOL *)v20->NonPagedBytes;
          }
          else
          {
            if ( HIDWORD(Device[1].PagedLock.m_Lock.Owner) != 2 )
              goto LABEL_32;
            NonPagedBytes = (FX_POOL *)v20->NonPagedHead.Blink;
          }
          p_Pool[33] = NonPagedBytes;
          goto LABEL_28;
        }
        if ( Flink_low != 14 )
          goto LABEL_32;
      }
      v23 = (__int64)v21[1].Blink & 3;
      if ( v23 == 3 )
      {
        if ( (_BYTE)Flink_low != 15 && v20->PagedLock.m_Lock.Event.Header.Type )
          goto LABEL_32;
        p_Pool[33] = (FX_POOL *)v21[2].Flink;
        v24 = (FX_POOL *)v20->NonPagedBytes;
      }
      else
      {
        if ( v23 )
        {
          if ( (unsigned int)(v23 - 1) <= 1 )
            p_Pool[33] = (FX_POOL *)v20->NonPagedHead.Blink;
          goto LABEL_28;
        }
        p_Pool[33] = (FX_POOL *)v20->NonPagedHead.Blink;
        v24 = (FX_POOL *)v20->NonPagedHead.Blink;
      }
      p_Pool[35] = v24;
LABEL_28:
      if ( p_Pool[33] )
        *((_BYTE *)p_Pool + 235) |= 1u;
      if ( p_Pool[35] )
        *((_BYTE *)p_Pool + 235) |= 2u;
      goto LABEL_32;
    }
  }
  WPP_IFR_SF_D(
    (_FX_DRIVER_GLOBALS *)Device->NonPagedHead.Flink,
    2u,
    0x10u,
    0xAu,
    WPP_FxRequest_cpp_Traceguids,
    0xC000009A);
  return 3221225626LL;
}
