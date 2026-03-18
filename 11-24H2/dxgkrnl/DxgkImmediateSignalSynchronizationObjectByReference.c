/*
 * XREFs of DxgkImmediateSignalSynchronizationObjectByReference @ 0x1403313E0
 * Callers:
 *     ?ImmediateSignalGpuFence@CFlipExBuffer@@QEAAJ_K@Z @ 0x140021410 (-ImmediateSignalGpuFence@CFlipExBuffer@@QEAAJ_K@Z.c)
 *     ?SignalGpuFence@CFlipExBuffer@@UEAAJ_K_N@Z @ 0x140033650 (-SignalGpuFence@CFlipExBuffer@@UEAAJ_K_N@Z.c)
 *     ?InsertCascadedTokenSignal@CFlipExBuffer@@QEAAJ_K@Z @ 0x140063414 (-InsertCascadedTokenSignal@CFlipExBuffer@@QEAAJ_K@Z.c)
 *     ?IssueFlipManagerSignal@CAdapterCollection@@QEAAJPEAUFlipManagerObject@@AEBU_LUID@@PEAXPEAU_KEVENT@@_K@Z @ 0x14009A868 (-IssueFlipManagerSignal@CAdapterCollection@@QEAAJPEAUFlipManagerObject@@AEBU_LUID@@PEAXPEAU_KEVE.c)
 *     ??1CFlipAwayFence@@QEAA@XZ @ 0x14009C038 (--1CFlipAwayFence@@QEAA@XZ.c)
 *     ?IssueAndFreeSignal@CFlipManager@@AEAAXPEAVCFlipManagerSignal@@_K_N@Z @ 0x14009EF2C (-IssueAndFreeSignal@CFlipManager@@AEAAXPEAVCFlipManagerSignal@@_K_N@Z.c)
 *     ?MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z @ 0x14009F1E4 (-MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEBD@Z @ 0x14000E400 (-AcquireShared@COREACCESS@@QEAAXPEBD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14000FBB0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     McTemplateK0qpx_EtwWriteTransfer @ 0x14004CF84 (McTemplateK0qpx_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?VmBusSendSignalFence@DXG_GUEST_GLOBAL_VMBUS@@QEAAJI_KW4SIGNAL_FENCE_HANDLE_TYPE@@@Z @ 0x140185FEC (-VmBusSendSignalFence@DXG_GUEST_GLOBAL_VMBUS@@QEAAJI_KW4SIGNAL_FENCE_HANDLE_TYPE@@@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x1402A4390 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?AdapterObjectSignalFence@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@_KIW4SIGNAL_FENCE_HANDLE_TYPE@@@Z @ 0x1403318D0 (-AdapterObjectSignalFence@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@_KIW4SIGNAL_FENCE_HANDLE.c)
 */

__int64 __fastcall DxgkImmediateSignalSynchronizationObjectByReference(_DWORD *a1, __int64 a2)
{
  _QWORD *v2; // rsi
  unsigned int v3; // r15d
  struct DXGADAPTER *v6; // rdx
  DXGADAPTER *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD *v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rsi
  _QWORD *v18; // rbx
  _QWORD *v19; // rbx
  int v20; // eax
  struct DXGGLOBAL *Global; // rax
  int v22; // [rsp+40h] [rbp-C0h]
  __int64 v23; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD *v25; // [rsp+60h] [rbp-A0h] BYREF
  char v26; // [rsp+68h] [rbp-98h]
  _BYTE v27[16]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v28[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v29[16]; // [rsp+88h] [rbp-78h] BYREF
  DXGADAPTER *v30; // [rsp+98h] [rbp-68h]
  _BYTE v31[16]; // [rsp+C8h] [rbp-38h] BYREF
  DXGADAPTER *v32; // [rsp+D8h] [rbp-28h]
  char v33; // [rsp+E0h] [rbp-20h]
  __int64 v34; // [rsp+E8h] [rbp-18h]

  v2 = *(_QWORD **)a1;
  v3 = a1[2];
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 408LL) & 4) != 0 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v27, (struct DXGFASTMUTEX *const)(v2 + 4), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v27);
    v18 = v2 + 53;
    if ( (_QWORD *)*v18 == v18 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1326;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"!IsListEmpty(&pCrossAdapterSyncObject->m_DxgSyncObjectSyncObjectListHead)",
        1326LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v19 = (_QWORD *)*v18;
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v27);
    v20 = DXGADAPTERSYNCOBJECT::AdapterObjectSignalFence(v19 - 14, v2, a2, v3, 0);
    goto LABEL_27;
  }
  v6 = *(struct DXGADAPTER **)(v2[55] + 16LL);
  if ( *((_BYTE *)v6 + 209) )
  {
    Global = DXGGLOBAL::GetGlobal();
    v20 = DXG_GUEST_GLOBAL_VMBUS::VmBusSendSignalFence(*((struct DXG_VMBUS_CHANNEL_BASE **)Global + 210), v3, a2, 0);
LABEL_27:
    LODWORD(v16) = v20;
    goto LABEL_20;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v28, v6, 0LL);
  if ( v33 )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, v31, 0LL, 0LL);
    WdLogGlobalForLineNumber = 7628;
  }
  v7 = v32;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v32 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v32 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v8, (__int64)&EventBlockThread, v9, 72);
      KeWaitForSingleObject((char *)v32 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v32, 0LL);
    v7 = v32;
  }
  v34 = 0LL;
  v33 = 1;
  if ( *((_DWORD *)v7 + 50) != 1 )
    goto LABEL_30;
  if ( v30 != v32 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v29, 0LL);
    if ( *((_DWORD *)v30 + 50) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v29);
LABEL_30:
      COREACCESS::Release((COREACCESS *)v31);
      WdLogSingleEntry0(4LL);
      WdLogGlobalForLineNumber = 1265;
LABEL_19:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v28);
      LODWORD(v16) = 0;
      goto LABEL_20;
    }
  }
  v10 = v2 + 4;
  v28[1] = 1;
  v25 = v2 + 4;
  v26 = 0;
  if ( v2 == (_QWORD *)-32LL )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 637;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_pMutex != NULL", 637LL, 0LL, 0LL, 0LL, 0LL);
    v10 = v25;
  }
  if ( (struct _KTHREAD *)v10[3] == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 644;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 644LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v25);
  v24 = v2[57];
  v11 = v2[55];
  v23 = a2;
  LOBYTE(v22) = 0;
  v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int, __int64 *, _DWORD, __int64 *, int))(*(_QWORD *)(*(_QWORD *)(v11 + 736) + 8LL) + 648LL))(
          0LL,
          0LL,
          0LL,
          0LL,
          1,
          &v24,
          0,
          &v23,
          v22);
  v16 = v12;
  if ( v12 >= 0 )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0qpx_EtwWriteTransfer(v14, v13, v15, 0, v24, v23);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v25);
    goto LABEL_19;
  }
  WdLogSingleEntry1(2LL, v12);
  WdLogGlobalForLineNumber = 1291;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"DXGADAPTERSYNCOBJECT::SignalFence failed. Status: %I64x",
    v16,
    0LL,
    0LL,
    0LL,
    0LL);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v25);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v28);
LABEL_20:
  if ( (int)v16 < 0 )
  {
    WdLogSingleEntry2(2LL, a1, (int)v16);
    WdLogGlobalForLineNumber = 1353;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"DxgkImmediateSignalSynchronizationObjectByReference failed for synch object: 0x%I64x, Status: %I64x",
      (__int64)a1,
      (int)v16,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v16;
}
