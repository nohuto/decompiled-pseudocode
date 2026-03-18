/*
 * XREFs of ?_QueryAllData@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z @ 0x14005E680
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140016210 (WPP_IFR_SF_qd.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14002BDA8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14002C4F0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140049FC8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?CompleteWmiRequest@FxWmiIrpHandler@@AEAAJPEAU_IRP@@JK@Z @ 0x14005EE18 (-CompleteWmiRequest@FxWmiIrpHandler@@AEAAJPEAU_IRP@@JK@Z.c)
 *     WPP_IFR_SF_dqd @ 0x14005EF2C (WPP_IFR_SF_dqd.c)
 *     WPP_IFR_SF_qdd @ 0x14005F07C (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_qdD @ 0x140065208 (WPP_IFR_SF_qdD.c)
 *     WPP_IFR_SF_qddd @ 0x1400863D4 (WPP_IFR_SF_qddd.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

int __fastcall FxWmiIrpHandler::_QueryAllData(
        FxWmiIrpHandler *This,
        _IRP *Irp,
        unsigned __int64 Provider,
        FxWmiInstance *Instance)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r13
  unsigned int _a3; // esi
  bool v8; // cf
  FxVerifierLock **p_WaitListHead; // rbx
  unsigned __int64 *p_m_Lock; // r14
  unsigned __int8 v11; // dl
  unsigned __int8 v12; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  unsigned int _a1; // r11d
  unsigned __int8 FxVerboseOn; // al
  _NAMED_PIPE_CREATE_PARAMETERS *v16; // r10
  unsigned __int64 v17; // rax
  unsigned int v18; // eax
  int v19; // ebx
  unsigned __int16 v20; // ax
  const void *_a2; // rdi
  unsigned int v23; // r12d
  unsigned int LowPart; // r9d
  unsigned int v25; // r9d
  __int64 v26; // r13
  unsigned int *p_OutboundQuota; // rcx
  unsigned int v28; // r8d
  unsigned __int64 v29; // rdx
  _LIST_ENTRY **p_Blink; // r13
  FxWmiIrpHandler *v31; // rcx
  _LIST_ENTRY *v32; // rcx
  unsigned int v33; // eax
  unsigned __int8 v34; // r8
  unsigned int v35; // edx
  FxTagTracker *Blink; // rcx
  FxWmiIrpHandler *v37; // rcx
  __int64 v38; // rax
  unsigned int v39; // r8d
  unsigned int *v40; // rax
  unsigned int v41; // edx
  unsigned int v42; // ecx
  int v43; // eax
  signed int v44; // edx
  const void *v45; // rcx
  _FX_DRIVER_GLOBALS *v46; // rcx
  unsigned __int16 v47; // ax
  const void *v48; // rdi
  const void *v49; // rcx
  const void *v50; // rax
  unsigned __int16 v51; // ax
  const void *v52; // rdi
  const void *v53; // rcx
  const void *v54; // rcx
  unsigned int *v55; // rax
  const void *v56; // rcx
  char v57; // [rsp+58h] [rbp-9h]
  KIRQL NewIrql; // [rsp+59h] [rbp-8h] BYREF
  unsigned __int8 v59[2]; // [rsp+5Ah] [rbp-7h] BYREF
  unsigned int v60; // [rsp+5Ch] [rbp-5h]
  unsigned __int8 PreviousIrql[4]; // [rsp+60h] [rbp-1h]
  int v62; // [rsp+64h] [rbp+3h]
  unsigned int *tmpSize; // [rsp+68h] [rbp+7h]
  int v64; // [rsp+70h] [rbp+Fh] BYREF
  unsigned int v65; // [rsp+74h] [rbp+13h]
  __int64 v66; // [rsp+78h] [rbp+17h]
  unsigned int *v67; // [rsp+80h] [rbp+1Fh]
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // [rsp+88h] [rbp+27h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v59[0] = 0;
  v65 = 0;
  _a3 = 0;
  v57 = 0;
  v8 = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart < 0x48;
  Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
  if ( v8 )
  {
    v19 = -1073741823;
    return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, v19, _a3);
  }
  p_WaitListHead = (FxVerifierLock **)&This[-1].m_UpdateEvent.m_Event.m_Event.Header.WaitListHead;
  if ( SLOBYTE(This->m_ObjectFlags) < 0 && *p_WaitListHead )
  {
    FxVerifierLock::Lock(*p_WaitListHead, v59, Provider);
    v11 = v59[0];
    p_m_Lock = &This->m_NPLock.m_Lock;
  }
  else
  {
    p_m_Lock = &This->m_NPLock.m_Lock;
    v11 = KeAcquireSpinLockRaiseToDpc(&This->m_NPLock.m_Lock);
    v59[0] = v11;
  }
  v62 = *(_DWORD *)(Provider + 152);
  if ( SLOBYTE(This->m_ObjectFlags) < 0 && *p_WaitListHead )
    FxVerifierLock::Unlock(*p_WaitListHead, v11, v12);
  else
    KeReleaseSpinLock(p_m_Lock, v11);
  m_Globals = This->m_Globals;
  _a1 = v62;
  FxVerboseOn = m_Globals->FxVerboseOn;
  if ( v62 )
  {
    if ( FxVerboseOn )
    {
      v53 = (const void *)(Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !*(_WORD *)(Provider + 10) )
        v53 = 0LL;
      WPP_IFR_SF_qd(m_Globals, 5u, 0xCu, 0x10u, WPP_FxWmiIrpHandler_cpp_Traceguids, v53, v62);
      _a1 = v62;
    }
    v16 = Parameters;
    v17 = 8LL * _a1;
    Parameters[1].ReadMode &= ~0x10u;
    v16[1].MaximumInstances = _a1;
    if ( v17 <= 0xFFFFFFFF )
    {
      v18 = v17 + 60;
      if ( v18 >= 0x3C )
      {
        v19 = 0;
        v23 = (v18 + 15) & 0xFFFFFFF0;
        if ( v23 >= v18 )
        {
          v16[1].CompletionMode = v23;
          LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
          if ( v23 > LowPart )
          {
            v57 = 1;
            p_OutboundQuota = 0LL;
            tmpSize = 0LL;
            v26 = 0LL;
            v66 = 0LL;
            v25 = 0;
            v60 = 0;
            v19 = -1073741789;
          }
          else
          {
            v25 = LowPart - v23;
            v26 = (__int64)v16 + v23;
            v60 = v25;
            p_OutboundQuota = &v16[1].OutboundQuota;
            v66 = v26;
            tmpSize = &v16[1].OutboundQuota;
          }
          v28 = *(_DWORD *)(Provider + 192);
          if ( v28 )
          {
            v29 = (_a1 - 1) * (unsigned __int64)((v28 + 15) & 0xFFFFFFF0);
            if ( v29 > 0xFFFFFFFF
              || (p_OutboundQuota = tmpSize, v60 = v25, v66 = v26, (unsigned int)v29 + v28 < (unsigned int)v29) )
            {
              v19 = -1073741675;
              return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, v19, _a3);
            }
            p_Blink = 0LL;
            v19 = 0;
            if ( v25 < (unsigned int)v29 + v28 )
            {
              _a3 = v29 + v28;
              v19 = -1073741789;
              return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, v19, _a3);
            }
          }
          else
          {
            p_Blink = 0LL;
          }
          *(_DWORD *)PreviousIrql = 0;
          if ( _a1 )
          {
            v67 = p_OutboundQuota;
            do
            {
              v31 = *(FxWmiIrpHandler **)(Provider + 160);
              NewIrql = 0;
              if ( SLOBYTE(v31->m_ObjectFlags) < 0 && v31[-1].m_UpdateEvent.m_Event.m_Event.Header.WaitListHead.Flink )
                FxVerifierLock::Lock(
                  (FxVerifierLock *)v31[-1].m_UpdateEvent.m_Event.m_Event.Header.WaitListHead.Flink,
                  &NewIrql,
                  v28);
              else
                NewIrql = KeAcquireSpinLockRaiseToDpc(&v31->m_NPLock.m_Lock);
              v32 = *(_LIST_ENTRY **)(Provider + 136);
              v33 = 0;
              v34 = PreviousIrql[0];
              while ( v33 < *(_DWORD *)(Provider + 152) )
              {
                if ( v33 == *(_DWORD *)PreviousIrql )
                {
                  p_Blink = &v32[-8].Blink;
                  v35 = _InterlockedIncrement((volatile signed __int32 *)&v32[-7].Flink + 1);
                  if ( SLOBYTE(v32[-6].Flink) < 0 )
                  {
                    Blink = (FxTagTracker *)v32[-11].Blink;
                    if ( Blink )
                      FxTagTracker::UpdateTagHistory(
                        Blink,
                        Irp,
                        498,
                        "minkernel\\wdf\\framework\\kmdf\\src\\irphandlers\\wmi\\fxwmiprovider.cpp",
                        TagAddRef,
                        v35);
                  }
                  break;
                }
                v32 = v32->Flink;
                ++v33;
              }
              v37 = *(FxWmiIrpHandler **)(Provider + 160);
              if ( SLOBYTE(v37->m_ObjectFlags) < 0 && v37[-1].m_UpdateEvent.m_Event.m_Event.Header.WaitListHead.Flink )
                FxVerifierLock::Unlock(
                  (FxVerifierLock *)v37[-1].m_UpdateEvent.m_Event.m_Event.Header.WaitListHead.Flink,
                  NewIrql,
                  v34);
              else
                KeReleaseSpinLock(&v37->m_NPLock.m_Lock, NewIrql);
              if ( !p_Blink )
                break;
              if ( ((unsigned __int8 (__fastcall *)(_LIST_ENTRY **))(*p_Blink)[4].Flink)(p_Blink) )
              {
                v38 = (__int64)*p_Blink;
                v64 = 0;
                v19 = (*(__int64 (__fastcall **)(_LIST_ENTRY **, _QWORD, __int64, int *))(v38 + 72))(
                        p_Blink,
                        v60,
                        v66,
                        &v64);
                if ( (int)(v19 + 0x80000000) < 0 || v19 == -1073741789 )
                {
                  v39 = (v64 + 15) & 0xFFFFFFF0;
                  if ( v39 < v64 )
                  {
                    v19 = -1073741675;
                    v50 = 0LL;
                    if ( *((_WORD *)p_Blink + 5) )
                      v50 = (const void *)((unsigned __int64)p_Blink ^ 0xFFFFFFFFFFFFFFF8uLL);
                    WPP_IFR_SF_qdd(
                      This->m_Globals,
                      2u,
                      0xCu,
                      0x12u,
                      WPP_FxWmiIrpHandler_cpp_Traceguids,
                      v50,
                      v64,
                      -1073741675);
                  }
                  else
                  {
                    v65 = v39 - v64;
                    if ( v19 < 0 || v57 )
                    {
                      v57 = 1;
                    }
                    else
                    {
                      v40 = v67;
                      v67[1] = v64;
                      *v40 = v23;
                      v66 += v39;
                    }
                    v41 = v23;
                    if ( v39 > v60 )
                    {
                      v42 = v60 + v23;
                      v60 = 0;
                    }
                    else
                    {
                      v42 = v39 + v23;
                      v60 -= v39;
                    }
                    v43 = -1;
                    if ( v42 >= v23 )
                      v43 = v42;
                    v23 = v43;
                    v44 = v42 < v41 ? 0xC0000095 : 0;
                    if ( v44 < 0 )
                    {
                      v19 = v44;
                      v54 = (const void *)(Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
                      if ( !*(_WORD *)(Provider + 10) )
                        v54 = 0LL;
                      WPP_IFR_SF_qd(This->m_Globals, 2u, 0xCu, 0x13u, WPP_FxWmiIrpHandler_cpp_Traceguids, v54, v44);
                    }
                    else if ( v39 + _a3 >= _a3 )
                    {
                      _a3 += v39;
                    }
                    else
                    {
                      _a3 = -1;
                      v19 = -1073741675;
                      v45 = (const void *)(Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
                      if ( !*(_WORD *)(Provider + 10) )
                        v45 = 0LL;
                      WPP_IFR_SF_qddd(
                        This->m_Globals,
                        v44,
                        0xCu,
                        0x14u,
                        WPP_FxWmiIrpHandler_cpp_Traceguids,
                        v45,
                        -1,
                        v39,
                        -1073741675);
                    }
                  }
                }
              }
              else if ( tmpSize )
              {
                v55 = v67;
                v67[1] = 0;
                *v55 = v23;
              }
              ((void (__fastcall *)(_LIST_ENTRY **, _IRP *, __int64, const char *))(*p_Blink)[1].Flink)(
                p_Blink,
                Irp,
                1178LL,
                "minkernel\\wdf\\framework\\kmdf\\src\\irphandlers\\wmi\\fxwmiirphandler.cpp");
              LOBYTE(v28) = 0;
              if ( (int)(v19 + 0x80000000) >= 0 && v19 != -1073741789 )
                goto LABEL_66;
              p_Blink = 0LL;
              v67 += 2;
              ++*(_DWORD *)PreviousIrql;
            }
            while ( *(_DWORD *)PreviousIrql < (unsigned int)v62 );
            v16 = Parameters;
          }
          if ( v19 != -1073741789 )
          {
            if ( v19 < 0 )
            {
LABEL_66:
              v49 = (const void *)(Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !*(_WORD *)(Provider + 10) )
                v49 = 0LL;
              WPP_IFR_SF_qd(This->m_Globals, 2u, 0xCu, 0x16u, WPP_FxWmiIrpHandler_cpp_Traceguids, v49, v19);
              _a3 = 0;
              goto LABEL_58;
            }
            if ( !v57 )
            {
              _a3 = v23 - v16[1].CompletionMode - v65;
LABEL_58:
              v46 = This->m_Globals;
              if ( v46->FxVerboseOn )
              {
                v47 = *(_WORD *)(Provider + 10);
                v48 = (const void *)(Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
                if ( !v47 )
                  v48 = 0LL;
                WPP_IFR_SF_qdD(v46, 5u, 0xCu, 0x17u, WPP_FxWmiIrpHandler_cpp_Traceguids, v48, v19, _a3);
              }
              return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, v19, _a3);
            }
          }
          _a3 -= v65;
          v19 = -1073741789;
          v56 = (const void *)(Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !*(_WORD *)(Provider + 10) )
            v56 = 0LL;
          WPP_IFR_SF_qdD(This->m_Globals, 4u, 0xCu, 0x15u, WPP_FxWmiIrpHandler_cpp_Traceguids, v56, -1073741789, _a3);
          goto LABEL_58;
        }
      }
    }
    v19 = -1073741675;
    v20 = *(_WORD *)(Provider + 10);
    _a2 = (const void *)(Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v20 )
      _a2 = 0LL;
    WPP_IFR_SF_dqd(This->m_Globals, 2u, 0xCu, 0x11u, WPP_FxWmiIrpHandler_cpp_Traceguids, _a1, _a2, -1073741675);
    _a3 = 0;
  }
  else
  {
    v19 = -1073741162;
    if ( FxVerboseOn )
    {
      v51 = *(_WORD *)(Provider + 10);
      v52 = (const void *)(Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v51 )
        v52 = 0LL;
      WPP_IFR_SF_qd(m_Globals, 5u, 0xCu, 0xFu, WPP_FxWmiIrpHandler_cpp_Traceguids, v52, -1073741162);
    }
  }
  return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, v19, _a3);
}
