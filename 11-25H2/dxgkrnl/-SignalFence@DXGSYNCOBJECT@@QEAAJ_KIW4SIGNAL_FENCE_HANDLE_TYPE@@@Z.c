/*
 * XREFs of ?SignalFence@DXGSYNCOBJECT@@QEAAJ_KIW4SIGNAL_FENCE_HANDLE_TYPE@@@Z @ 0x14033C358
 * Callers:
 *     ?SignalFence@DXGPROTECTEDSESSION@@QEAAXXZ @ 0x1401EAAE8 (-SignalFence@DXGPROTECTEDSESSION@@QEAAXXZ.c)
 *     ?VmBusSignalFence@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14033BF90 (-VmBusSignalFence@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
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

__int64 __fastcall DXGSYNCOBJECT::SignalFence(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  unsigned int v8; // edi
  struct DXGADAPTER *v9; // rdx
  DXGADAPTER *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rsi
  _QWORD *v20; // rbx
  _QWORD *v21; // rbx
  struct DXGGLOBAL *Global; // rax
  int v23; // [rsp+40h] [rbp-C0h]
  __int64 v24; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+60h] [rbp-A0h] BYREF
  char v27; // [rsp+68h] [rbp-98h]
  _BYTE v28[16]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v29[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v30[16]; // [rsp+88h] [rbp-78h] BYREF
  DXGADAPTER *v31; // [rsp+98h] [rbp-68h]
  _BYTE v32[16]; // [rsp+C8h] [rbp-38h] BYREF
  DXGADAPTER *v33; // [rsp+D8h] [rbp-28h]
  char v34; // [rsp+E0h] [rbp-20h]
  __int64 v35; // [rsp+E8h] [rbp-18h]

  if ( (*(_DWORD *)(a1 + 408) & 4) == 0 )
  {
    v8 = 0;
    v9 = *(struct DXGADAPTER **)(*(_QWORD *)(a1 + 440) + 16LL);
    if ( *((_BYTE *)v9 + 209) )
    {
      Global = DXGGLOBAL::GetGlobal();
      return (unsigned int)DXG_GUEST_GLOBAL_VMBUS::VmBusSendSignalFence(
                             *((struct DXG_VMBUS_CHANNEL_BASE **)Global + 206),
                             a3,
                             a2,
                             a4);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v29, v9, 0LL);
    if ( v34 )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v32, 0LL, 0LL);
      WdLogGlobalForLineNumber = 7603;
    }
    v10 = v33;
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v33 + 23) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v33 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventBlockThread, v12, 72);
        KeWaitForSingleObject((char *)v33 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v33, 0LL);
      v10 = v33;
    }
    v35 = 0LL;
    v34 = 1;
    if ( *((_DWORD *)v10 + 50) == 1 )
    {
      if ( v31 == v33 || (COREACCESS::AcquireShared((COREACCESS *)v30, 0LL), *((_DWORD *)v31 + 50) == 1) )
      {
        v29[1] = 1;
        v26 = a1 + 32;
        v27 = 0;
        if ( a1 == -32 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 638;
          DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_pMutex != NULL", 638LL, 0LL, 0LL, 0LL, 0LL);
        }
        if ( *(struct _KTHREAD **)(v26 + 24) == KeGetCurrentThread() )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 645;
          DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 645LL, 0LL, 0LL, 0LL, 0LL);
        }
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v26);
        v25 = *(_QWORD *)(a1 + 456);
        v13 = *(_QWORD *)(a1 + 440);
        v24 = a2;
        LOBYTE(v23) = 0;
        v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int, __int64 *, _DWORD, __int64 *, int))(*(_QWORD *)(*(_QWORD *)(v13 + 736) + 8LL) + 648LL))(
                0LL,
                0LL,
                0LL,
                0LL,
                1,
                &v25,
                0,
                &v24,
                v23);
        v18 = v14;
        if ( v14 < 0 )
        {
          WdLogSingleEntry1(2LL, v14);
          WdLogGlobalForLineNumber = 1301;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"DXGADAPTERSYNCOBJECT::SignalFence failed. Status: %I64x",
            v18,
            0LL,
            0LL,
            0LL,
            0LL);
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v26);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v29);
          return (unsigned int)v18;
        }
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0qpx_EtwWriteTransfer(v16, v15, v17, 0, v25, v24);
        }
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v26);
LABEL_19:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v29);
        return v8;
      }
      COREACCESS::Release((COREACCESS *)v30);
    }
    COREACCESS::Release((COREACCESS *)v32);
    WdLogSingleEntry0(4LL);
    WdLogGlobalForLineNumber = 1275;
    goto LABEL_19;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v28, (struct DXGFASTMUTEX *const)(a1 + 32), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v28);
  v20 = (_QWORD *)(a1 + 424);
  if ( (_QWORD *)*v20 == v20 )
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
  v21 = (_QWORD *)*v20;
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v28);
  return DXGADAPTERSYNCOBJECT::AdapterObjectSignalFence(v21 - 14, a1, a2, a3, a4);
}
