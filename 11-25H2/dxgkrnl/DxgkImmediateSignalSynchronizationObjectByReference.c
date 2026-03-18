/*
 * XREFs of DxgkImmediateSignalSynchronizationObjectByReference @ 0x14033C7E8
 * Callers:
 *     ?ImmediateSignalGpuFence@CFlipExBuffer@@QEAAJ_K@Z @ 0x140011F80 (-ImmediateSignalGpuFence@CFlipExBuffer@@QEAAJ_K@Z.c)
 *     ?SignalGpuFence@CFlipExBuffer@@UEAAJ_K_N@Z @ 0x140033780 (-SignalGpuFence@CFlipExBuffer@@UEAAJ_K_N@Z.c)
 *     ?InsertCascadedTokenSignal@CFlipExBuffer@@QEAAJ_K@Z @ 0x140062B24 (-InsertCascadedTokenSignal@CFlipExBuffer@@QEAAJ_K@Z.c)
 *     ?IssueFlipManagerSignal@CAdapterCollection@@QEAAJPEAUFlipManagerObject@@AEBU_LUID@@PEAXPEAU_KEVENT@@_K@Z @ 0x1400986D8 (-IssueFlipManagerSignal@CAdapterCollection@@QEAAJPEAUFlipManagerObject@@AEBU_LUID@@PEAXPEAU_KEVE.c)
 *     ??1CFlipAwayFence@@QEAA@XZ @ 0x140099E98 (--1CFlipAwayFence@@QEAA@XZ.c)
 *     ?IssueAndFreeSignal@CFlipManager@@AEAAXPEAVCFlipManagerSignal@@_K_N@Z @ 0x14009CBD4 (-IssueAndFreeSignal@CFlipManager@@AEAAXPEAVCFlipManagerSignal@@_K_N@Z.c)
 *     ?MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z @ 0x14009CEA8 (-MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEBD@Z @ 0x14001D9E0 (-AcquireShared@COREACCESS@@QEAAXPEBD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14001F190 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     McTemplateK0qpx_EtwWriteTransfer @ 0x14004D5E4 (McTemplateK0qpx_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?VmBusSendSignalFence@DXG_GUEST_GLOBAL_VMBUS@@QEAAJI_KW4SIGNAL_FENCE_HANDLE_TYPE@@@Z @ 0x140183C9C (-VmBusSendSignalFence@DXG_GUEST_GLOBAL_VMBUS@@QEAAJI_KW4SIGNAL_FENCE_HANDLE_TYPE@@@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x14028FF40 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?AdapterObjectSignalFence@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@_KIW4SIGNAL_FENCE_HANDLE_TYPE@@@Z @ 0x14033CCD4 (-AdapterObjectSignalFence@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@_KIW4SIGNAL_FENCE_HANDLE.c)
 */

__int64 __fastcall DxgkImmediateSignalSynchronizationObjectByReference(_DWORD *a1, __int64 a2)
{
  _QWORD *v2; // rsi
  unsigned int v3; // r15d
  struct DXGADAPTER *v6; // rdx
  DXGADAPTER *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rsi
  _QWORD *v17; // rbx
  _QWORD *v18; // rbx
  int v19; // eax
  struct DXGGLOBAL *Global; // rax
  int v21; // [rsp+40h] [rbp-C0h]
  __int64 v22; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD *v24; // [rsp+60h] [rbp-A0h] BYREF
  char v25; // [rsp+68h] [rbp-98h]
  _BYTE v26[16]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v27[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v28[16]; // [rsp+88h] [rbp-78h] BYREF
  DXGADAPTER *v29; // [rsp+98h] [rbp-68h]
  _BYTE v30[16]; // [rsp+C8h] [rbp-38h] BYREF
  DXGADAPTER *v31; // [rsp+D8h] [rbp-28h]
  char v32; // [rsp+E0h] [rbp-20h]
  __int64 v33; // [rsp+E8h] [rbp-18h]

  v2 = *(_QWORD **)a1;
  v3 = a1[2];
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 408LL) & 4) != 0 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v26, (struct DXGFASTMUTEX *const)(v2 + 4), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v26);
    v17 = v2 + 53;
    if ( (_QWORD *)*v17 == v17 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1336;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"!IsListEmpty(&pCrossAdapterSyncObject->m_DxgSyncObjectSyncObjectListHead)",
        1336LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v18 = (_QWORD *)*v17;
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v26);
    v19 = DXGADAPTERSYNCOBJECT::AdapterObjectSignalFence(v18 - 14, v2, a2, v3, 0);
    goto LABEL_27;
  }
  v6 = *(struct DXGADAPTER **)(v2[55] + 16LL);
  if ( *((_BYTE *)v6 + 209) )
  {
    Global = DXGGLOBAL::GetGlobal();
    v19 = DXG_GUEST_GLOBAL_VMBUS::VmBusSendSignalFence(*((struct DXG_VMBUS_CHANNEL_BASE **)Global + 206), v3, a2, 0);
LABEL_27:
    LODWORD(v15) = v19;
    goto LABEL_20;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v27, v6, 0LL);
  if ( v32 )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, v30, 0LL, 0LL);
    WdLogGlobalForLineNumber = 7603;
  }
  v7 = v31;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v31 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v31 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v8, (__int64)&EventBlockThread, v9, 72);
      KeWaitForSingleObject((char *)v31 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v31, 0LL);
    v7 = v31;
  }
  v33 = 0LL;
  v32 = 1;
  if ( *((_DWORD *)v7 + 50) != 1 )
    goto LABEL_30;
  if ( v29 != v31 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v28, 0LL);
    if ( *((_DWORD *)v29 + 50) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v28);
LABEL_30:
      COREACCESS::Release((COREACCESS *)v30);
      WdLogSingleEntry0(4LL);
      WdLogGlobalForLineNumber = 1275;
LABEL_19:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v27);
      LODWORD(v15) = 0;
      goto LABEL_20;
    }
  }
  v27[1] = 1;
  v24 = v2 + 4;
  v25 = 0;
  if ( v2 == (_QWORD *)-32LL )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 638;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_pMutex != NULL", 638LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( (struct _KTHREAD *)v24[3] == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 645;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 645LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v24);
  v23 = v2[57];
  v10 = v2[55];
  v22 = a2;
  LOBYTE(v21) = 0;
  v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int, __int64 *, _DWORD, __int64 *, int))(*(_QWORD *)(*(_QWORD *)(v10 + 736) + 8LL) + 648LL))(
          0LL,
          0LL,
          0LL,
          0LL,
          1,
          &v23,
          0,
          &v22,
          v21);
  v15 = v11;
  if ( v11 >= 0 )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0qpx_EtwWriteTransfer(v13, v12, v14, 0, v23, v22);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v24);
    goto LABEL_19;
  }
  WdLogSingleEntry1(2LL, v11);
  WdLogGlobalForLineNumber = 1301;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"DXGADAPTERSYNCOBJECT::SignalFence failed. Status: %I64x",
    v15,
    0LL,
    0LL,
    0LL,
    0LL);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v24);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v27);
LABEL_20:
  if ( (int)v15 < 0 )
  {
    WdLogSingleEntry2(2LL, a1, (int)v15);
    WdLogGlobalForLineNumber = 1363;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"DxgkImmediateSignalSynchronizationObjectByReference failed for synch object: 0x%I64x, Status: %I64x",
      (__int64)a1,
      (int)v15,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v15;
}
