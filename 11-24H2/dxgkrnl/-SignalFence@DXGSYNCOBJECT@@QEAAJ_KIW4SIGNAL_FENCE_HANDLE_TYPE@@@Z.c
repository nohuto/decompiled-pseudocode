/*
 * XREFs of ?SignalFence@DXGSYNCOBJECT@@QEAAJ_KIW4SIGNAL_FENCE_HANDLE_TYPE@@@Z @ 0x140330F50
 * Callers:
 *     ?SignalFence@DXGPROTECTEDSESSION@@QEAAXXZ @ 0x1401F04F0 (-SignalFence@DXGPROTECTEDSESSION@@QEAAXXZ.c)
 *     ?VmBusSignalFence@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140330B80 (-VmBusSignalFence@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
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

__int64 __fastcall DXGSYNCOBJECT::SignalFence(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  unsigned int v8; // edi
  struct DXGADAPTER *v9; // rdx
  DXGADAPTER *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rsi
  _QWORD *v21; // rbx
  _QWORD *v22; // rbx
  struct DXGGLOBAL *Global; // rax
  int v24; // [rsp+40h] [rbp-C0h]
  __int64 v25; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A0h] BYREF
  char v28; // [rsp+68h] [rbp-98h]
  _BYTE v29[16]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v30[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v31[16]; // [rsp+88h] [rbp-78h] BYREF
  DXGADAPTER *v32; // [rsp+98h] [rbp-68h]
  _BYTE v33[16]; // [rsp+C8h] [rbp-38h] BYREF
  DXGADAPTER *v34; // [rsp+D8h] [rbp-28h]
  char v35; // [rsp+E0h] [rbp-20h]
  __int64 v36; // [rsp+E8h] [rbp-18h]

  if ( (*(_DWORD *)(a1 + 408) & 4) == 0 )
  {
    v8 = 0;
    v9 = *(struct DXGADAPTER **)(*(_QWORD *)(a1 + 440) + 16LL);
    if ( *((_BYTE *)v9 + 209) )
    {
      Global = DXGGLOBAL::GetGlobal();
      return (unsigned int)DXG_GUEST_GLOBAL_VMBUS::VmBusSendSignalFence(
                             *((struct DXG_VMBUS_CHANNEL_BASE **)Global + 210),
                             a3,
                             a2,
                             a4);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v30, v9, 0LL);
    if ( v35 )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v33, 0LL, 0LL);
      WdLogGlobalForLineNumber = 7628;
    }
    v10 = v34;
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v34 + 23) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v34 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventBlockThread, v12, 72);
        KeWaitForSingleObject((char *)v34 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v34, 0LL);
      v10 = v34;
    }
    v36 = 0LL;
    v35 = 1;
    if ( *((_DWORD *)v10 + 50) == 1 )
    {
      if ( v32 == v34 || (COREACCESS::AcquireShared((COREACCESS *)v31, 0LL), *((_DWORD *)v32 + 50) == 1) )
      {
        v13 = a1 + 32;
        v30[1] = 1;
        v27 = a1 + 32;
        v28 = 0;
        if ( a1 == -32 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 637;
          DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_pMutex != NULL", 637LL, 0LL, 0LL, 0LL, 0LL);
          v13 = v27;
        }
        if ( *(struct _KTHREAD **)(v13 + 24) == KeGetCurrentThread() )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 644;
          DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 644LL, 0LL, 0LL, 0LL, 0LL);
        }
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v27);
        v26 = *(_QWORD *)(a1 + 456);
        v14 = *(_QWORD *)(a1 + 440);
        v25 = a2;
        LOBYTE(v24) = 0;
        v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int, __int64 *, _DWORD, __int64 *, int))(*(_QWORD *)(*(_QWORD *)(v14 + 736) + 8LL) + 648LL))(
                0LL,
                0LL,
                0LL,
                0LL,
                1,
                &v26,
                0,
                &v25,
                v24);
        v19 = v15;
        if ( v15 < 0 )
        {
          WdLogSingleEntry1(2LL, v15);
          WdLogGlobalForLineNumber = 1291;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"DXGADAPTERSYNCOBJECT::SignalFence failed. Status: %I64x",
            v19,
            0LL,
            0LL,
            0LL,
            0LL);
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v27);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v30);
          return (unsigned int)v19;
        }
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0qpx_EtwWriteTransfer(v17, v16, v18, 0, v26, v25);
        }
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v27);
LABEL_19:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v30);
        return v8;
      }
      COREACCESS::Release((COREACCESS *)v31);
    }
    COREACCESS::Release((COREACCESS *)v33);
    WdLogSingleEntry0(4LL);
    WdLogGlobalForLineNumber = 1265;
    goto LABEL_19;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v29, (struct DXGFASTMUTEX *const)(a1 + 32), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v29);
  v21 = (_QWORD *)(a1 + 424);
  if ( (_QWORD *)*v21 == v21 )
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
  v22 = (_QWORD *)*v21;
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v29);
  return DXGADAPTERSYNCOBJECT::AdapterObjectSignalFence(v22 - 14, a1, a2, a3, a4);
}
