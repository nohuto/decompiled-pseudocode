/*
 * XREFs of ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x14027A168
 * Callers:
 *     ?BltQueueWorkerThread@BLTQUEUE@@SAXPEAX@Z @ 0x1403F4570 (-BltQueueWorkerThread@BLTQUEUE@@SAXPEAX@Z.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x140013BA0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140014A20 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14001EF20 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?VidSchSignalSyncObjectsFromCpu@VIDSCH_EXPORT@@QEAAJIPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_K@Z @ 0x14004F704 (-VidSchSignalSyncObjectsFromCpu@VIDSCH_EXPORT@@QEAAJIPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGN.c)
 *     Feature_AccessEnableVSyncEventAtomically__private_IsEnabledDeviceUsageNoInline @ 0x140091EB0 (Feature_AccessEnableVSyncEventAtomically__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0iiiiii_EtwWriteTransfer @ 0x140091FAC (McTemplateK0iiiiii_EtwWriteTransfer.c)
 *     McTemplateK0xqttt_EtwWriteTransfer @ 0x14009255C (McTemplateK0xqttt_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?DiscardPendingPresent@BLTQUEUE@@AEAAXXZ @ 0x140185084 (-DiscardPendingPresent@BLTQUEUE@@AEAAXXZ.c)
 *     ?TdrIsDodVSyncTimeoutForcedFlip@@YA_NXZ @ 0x140189B78 (-TdrIsDodVSyncTimeoutForcedFlip@@YA_NXZ.c)
 *     ?AcquireOwnershipWorker@BLTQUEUE@@AEAAJXZ @ 0x14027A11C (-AcquireOwnershipWorker@BLTQUEUE@@AEAAJXZ.c)
 *     ?CleanupWorker@BLTQUEUE@@AEAAXXZ @ 0x14027AC74 (-CleanupWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ @ 0x14027B53C (-DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?GlobalVmBusStatusChangeWorker@BLTQUEUE@@AEAAXXZ @ 0x14027B798 (-GlobalVmBusStatusChangeWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?HostMonitorPowerStateWorker@BLTQUEUE@@AEAAXXZ @ 0x14027B7D8 (-HostMonitorPowerStateWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?LogRemoteVsyncTimeout@BLTQUEUE@@AEAAXXZ @ 0x14027B818 (-LogRemoteVsyncTimeout@BLTQUEUE@@AEAAXXZ.c)
 *     ?ProcessVSyncTdrWorker@BLTQUEUE@@AEAAXE@Z @ 0x14027B9B0 (-ProcessVSyncTdrWorker@BLTQUEUE@@AEAAXE@Z.c)
 *     ?RecreateVsyncSource@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z @ 0x14027BB3C (-RecreateVsyncSource@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z.c)
 *     ?ResetWorker@BLTQUEUE@@AEAAXXZ @ 0x14027BE04 (-ResetWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ @ 0x14027C3E0 (-UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x140304A00 (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 *     ?FinishCommand@BLTQUEUE@@AEAAXJ@Z @ 0x140305D64 (-FinishCommand@BLTQUEUE@@AEAAXJ@Z.c)
 *     ?StartVSync@BLTQUEUE@@AEAAXHW4VsyncEvent@1@@Z @ 0x1403A59D4 (-StartVSync@BLTQUEUE@@AEAAXHW4VsyncEvent@1@@Z.c)
 *     ?StopVSync@BLTQUEUE@@AEAAXHW4VsyncEvent@1@@Z @ 0x1403C5B84 (-StopVSync@BLTQUEUE@@AEAAXHW4VsyncEvent@1@@Z.c)
 *     ?EnableVSyncEventWorker@BLTQUEUE@@AEAAXXZ @ 0x14042E128 (-EnableVSyncEventWorker@BLTQUEUE@@AEAAXXZ.c)
 */

void __fastcall __noreturn BLTQUEUE::BltQueueWorker(BLTQUEUE *this)
{
  struct _KTHREAD **v2; // r15
  LONGLONG v3; // r12
  char v4; // r13
  struct _KEVENT *QuadPart; // rax
  int v6; // ebx
  __int64 v7; // r14
  __int64 v8; // r8
  _BYTE *v9; // rdx
  void *v10; // rax
  __int64 v11; // rcx
  int v12; // r14d
  __int64 v13; // r15
  LARGE_INTEGER v14; // rax
  LARGE_INTEGER v15; // rdx
  LARGE_INTEGER v16; // rcx
  __int64 v17; // r8
  LARGE_INTEGER v18; // rbx
  unsigned __int64 i; // rsi
  __int64 v20; // r10
  LONGLONG v21; // rdx
  NTSTATUS v22; // eax
  __int64 v23; // rsi
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rdx
  int v27; // ebx
  int v28; // ebx
  int v29; // ebx
  int v30; // ebx
  const wchar_t *v31; // r9
  PVOID v32; // rbx
  unsigned __int64 v33; // rsi
  __int64 v34; // rax
  unsigned __int64 v35; // rbx
  struct DXGADAPTER *v36; // r14
  __int64 v37; // r8
  DXGAUTOPUSHLOCK *v38; // rcx
  int v39; // eax
  __int64 v40; // rdx
  BLTQUEUE *v41; // rcx
  unsigned int v42; // eax
  __int64 v43; // rdx
  unsigned __int64 j; // rbx
  __int64 v45; // rax
  __int64 v46; // rdx
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  bool v49; // zf
  __int32 v50; // eax
  KPROCESSOR_MODE WaitMode[8]; // [rsp+28h] [rbp-E0h]
  __int64 WaitModea; // [rsp+28h] [rbp-E0h]
  BOOLEAN Alertable[8]; // [rsp+30h] [rbp-D8h]
  __int64 v54; // [rsp+60h] [rbp-A8h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+68h] [rbp-A0h] BYREF
  union _LARGE_INTEGER PerformanceFrequency_8[2]; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v57; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v58[24]; // [rsp+88h] [rbp-80h] BYREF
  char v59[8]; // [rsp+A0h] [rbp-68h] BYREF
  DXGPUSHLOCK *v60; // [rsp+A8h] [rbp-60h]
  int v61; // [rsp+B0h] [rbp-58h]
  struct _KEVENT v62; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v63[24]; // [rsp+D0h] [rbp-38h] BYREF
  _BYTE v64[24]; // [rsp+E8h] [rbp-20h] BYREF
  struct _KEVENT Event; // [rsp+100h] [rbp-8h] BYREF
  _BYTE v66[144]; // [rsp+118h] [rbp+10h] BYREF
  PVOID Object[12]; // [rsp+1A8h] [rbp+A0h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+208h] [rbp+100h] BYREF

  memset(&Event, 0, sizeof(Event));
  memset(&v62, 0, sizeof(v62));
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  KeInitializeEvent(&v62, SynchronizationEvent, 0);
  *((_QWORD *)this + 82) = KeGetCurrentThread();
  KeSetEvent((PRKEVENT)this + 22, 0, 0);
  v2 = (struct _KTHREAD **)((char *)this + 2912);
  v3 = 0LL;
  *(_OWORD *)&PerformanceFrequency_8[0].LowPart = 0LL;
  v4 = 0;
  while ( 1 )
  {
    memset(Object, 0, sizeof(Object));
    if ( _InterlockedExchange((volatile __int32 *)this + 153, 0) )
      BLTQUEUE::DisableHwVSyncWorker(this);
    QuadPart = &v62;
    Object[0] = (char *)this + 552;
    if ( (PerformanceFrequency_8[0].LowPart & 1) != 0 )
      QuadPart = (struct _KEVENT *)PerformanceFrequency_8[1].QuadPart;
    Object[1] = QuadPart;
    if ( (PerformanceFrequency_8[0].LowPart & 3) != 0 )
      BLTQUEUE::StartVSync(this, 0LL, (unsigned int)((PerformanceFrequency_8[0].LowPart & 2) == 0) + 1);
    v6 = 2;
    v7 = 2LL;
    if ( (*((_DWORD *)this + 250) & 2) != 0 )
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v58, v2, 0);
      DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v58);
      v8 = 8LL;
      v9 = (_BYTE *)(*((_QWORD *)this + 370) + 56LL);
      do
      {
        if ( *((_QWORD *)v9 - 1) && !*v9 && v9[1] == 1 )
        {
          Object[v7] = (PVOID)*((_QWORD *)v9 - 7);
          v7 = (unsigned int)(v7 + 1);
        }
        v9 += 64;
        --v8;
      }
      while ( v8 );
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v58);
      if ( (unsigned int)v7 <= 2 )
      {
        v4 = 1;
        v10 = (void *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 16) + 16LL))(*((_QWORD *)this + 16));
        v11 = *((_QWORD *)this + 16);
        Object[v7] = v10;
        v12 = v7 + 1;
        Object[v12] = (PVOID)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 24LL))(v11);
        LODWORD(v7) = v12 + 1;
      }
      else
      {
        v4 = 0;
      }
      if ( (unsigned int)v7 > 0xC )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2255;
        DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"nObjects <= NumWaitBlocks", 2255LL, 0LL, 0LL, 0LL, 0LL);
      }
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v59, (struct _KTHREAD **)this + 53, 0);
      DXGPUSHLOCK::AcquireExclusive(v60);
      v61 = 2;
      DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v58);
      PerformanceFrequency.QuadPart = 0LL;
      v13 = 0LL;
      v14 = KeQueryPerformanceCounter(&PerformanceFrequency);
      v17 = *((_QWORD *)this + 62);
      v18 = v14;
      if ( v17 > 0 )
      {
        v16 = *(LARGE_INTEGER *)((char *)this + 480);
        if ( v16.QuadPart > 0 && v14.QuadPart > v16.QuadPart )
        {
          v13 = v17 + v14.QuadPart - (v14.QuadPart - v16.QuadPart) % v17;
          v15.QuadPart = 10000000 * ((v14.QuadPart - v16.QuadPart) % v17 - v17) % PerformanceFrequency.QuadPart;
          v3 = 10000000 * ((v14.QuadPart - v16.QuadPart) % v17 - v17) / PerformanceFrequency.QuadPart;
        }
      }
      for ( i = 0LL; i < 0x200; i += 64LL )
      {
        v20 = *((_QWORD *)this + 370);
        if ( *(_QWORD *)(i + v20 + 48) && !*(_BYTE *)(i + v20 + 56) && *(_BYTE *)(i + v20 + 57) == 1 )
        {
          v21 = 0LL;
          if ( v3 + *(_QWORD *)(i + v20 + 32) <= 0 )
            v21 = v3 + *(_QWORD *)(i + v20 + 32);
          ExSetTimer(*(_QWORD *)(i + v20), v21, 0LL, 0LL, *(_QWORD *)WaitMode, *(_QWORD *)Alertable);
        }
      }
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0iiiiii_EtwWriteTransfer(
          v16.QuadPart,
          v15.QuadPart,
          v17,
          v3,
          v13,
          v18.QuadPart,
          PerformanceFrequency.QuadPart,
          *((_QWORD *)this + 60),
          *((_QWORD *)this + 62));
      (*(void (__fastcall **)(_QWORD, LONGLONG))(**((_QWORD **)this + 16) + 56LL))(*((_QWORD *)this + 16), v3);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v58);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v59);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v59);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v58);
      v3 = 0LL;
      v2 = (struct _KTHREAD **)((char *)this + 2912);
      v6 = 2;
    }
    v22 = KeWaitForMultipleObjects(v7, Object, WaitAny, Executive, 0, 1u, 0LL, &WaitBlockArray);
    v23 = 0LL;
    v54 = 0LL;
    *(_OWORD *)&PerformanceFrequency_8[0].LowPart = 0LL;
    if ( v22 )
    {
      if ( v22 == 1 )
      {
        v6 = 1;
      }
      else if ( v4 )
      {
        if ( v22 != 2 )
        {
          if ( v22 != 3 )
            goto LABEL_46;
          v6 = 3;
        }
      }
      else
      {
        if ( (unsigned int)(v22 - 2) > 8 )
        {
LABEL_46:
          v6 = (v22 != 257) + 5;
          goto LABEL_47;
        }
        v6 = 4;
        v54 = v22;
        v23 = v22;
      }
    }
    else
    {
      v6 = 0;
    }
LABEL_47:
    if ( (unsigned int)Feature_AccessEnableVSyncEventAtomically__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      {
        v25 = *((unsigned __int8 *)this + 605);
        v26 = *((unsigned __int8 *)this + 602);
        *(_DWORD *)Alertable = _InterlockedCompareExchange((volatile signed __int32 *)this + 154, 0, 0);
        *(_DWORD *)WaitMode = v6;
        McTemplateK0xqttt_EtwWriteTransfer(v25, v26, v24, *((_QWORD *)this + 31));
        v23 = v54;
      }
    }
    else if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      *(_DWORD *)Alertable = *((unsigned __int8 *)this + 603);
      *(_DWORD *)WaitMode = v6;
      McTemplateK0xqttt_EtwWriteTransfer(
        *((unsigned __int8 *)this + 602),
        *((unsigned __int8 *)this + 603),
        v24,
        *((_QWORD *)this + 31));
    }
    if ( v6 )
    {
      v27 = v6 - 1;
      if ( !v27 )
      {
        v46 = 2LL;
        goto LABEL_119;
      }
      v28 = v27 - 1;
      if ( !v28 )
      {
        if ( g_TdrForceDodVSyncTimeout && TdrIsDodVSyncTimeoutForcedFlip() )
        {
          BLTQUEUE::ProcessVSyncTdrWorker(this, 1u);
        }
        else
        {
          BLTQUEUE::ProcessBltQueue(this, 1LL, PerformanceFrequency_8);
          if ( !*((_DWORD *)this + 103) && (PerformanceFrequency_8[0].LowPart & 3) == 0 )
          {
            v42 = *((_DWORD *)this + 104) + 1;
            *((_DWORD *)this + 104) = v42;
            if ( v42 > 0xA )
              BLTQUEUE::StopVSync(this, 0LL, 8LL);
          }
        }
        DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v64, v2, 0);
        DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v64);
        for ( j = 0LL; j < 0x200; j += 64LL )
        {
          v45 = *((_QWORD *)this + 370);
          if ( *(_QWORD *)(j + v45 + 48) )
          {
            if ( *(_BYTE *)(j + v45 + 56) == 1 )
            {
              *(_QWORD *)(j + v45 + 48) = 0LL;
              LOBYTE(v43) = 1;
              *(_BYTE *)(j + *((_QWORD *)this + 370) + 56) = 0;
              ExDeleteTimer(*(_QWORD *)(j + *((_QWORD *)this + 370)), v43, 0LL, 0LL);
            }
            else
            {
              *(_BYTE *)(j + v45 + 57) = 1;
            }
          }
        }
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v64);
        v38 = (DXGAUTOPUSHLOCK *)v64;
        goto LABEL_93;
      }
      v29 = v28 - 1;
      if ( v29 )
      {
        v30 = v29 - 1;
        if ( v30 )
        {
          WdLogSingleEntry1(2LL, this);
          if ( v30 == 1 )
          {
            v31 = L"BLTQUEUE 0x%I64x : worker thread alerted";
            WdLogGlobalForLineNumber = 2551;
          }
          else
          {
            v31 = L"BLTQUEUE 0x%I64x : Received invalid WaitStatus";
            WdLogGlobalForLineNumber = 2605;
          }
          DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v31, (__int64)this, 0LL, 0LL, 0LL, 0LL);
        }
        else
        {
          v32 = Object[v23];
          DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v63, v2, 0);
          DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v63);
          v33 = 0LL;
          v34 = *((_QWORD *)this + 370);
          while ( *(PVOID *)v34 != v32 || *(_BYTE *)(v34 + 57) != 1 )
          {
            ++v33;
            v34 += 64LL;
            if ( v33 >= 8 )
              goto LABEL_73;
          }
          v35 = v33 << 6;
          v36 = *(struct DXGADAPTER **)((v33 << 6) + *((_QWORD *)this + 370) + 16);
          COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v66, v36, 0LL);
          if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v66, 0LL) >= 0 )
          {
            v37 = *((_QWORD *)this + 370);
            v57 = (unsigned int)(*((_DWORD *)this + 726) + 1);
            if ( (int)VIDSCH_EXPORT::VidSchSignalSyncObjectsFromCpu(
                        *(VIDSCH_EXPORT **)(*((_QWORD *)v36 + 391) + 736LL),
                        1u,
                        (struct _VIDSCH_SYNC_OBJECT **)(v35 + v37 + 8),
                        0,
                        &v57) < 0 )
            {
              WdLogSingleEntry1(2LL, v33);
              WdLogGlobalForLineNumber = 2591;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                0xFFFFFFFFLL,
                L"Failed to signal pending dod periodic frame notification id: %lu",
                v33,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            else
            {
              *(_QWORD *)(v35 + *((_QWORD *)this + 370) + 40) = v57;
            }
          }
          *(_BYTE *)(v35 + *((_QWORD *)this + 370) + 57) = 0;
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v66);
LABEL_73:
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v63);
          v38 = (DXGAUTOPUSHLOCK *)v63;
LABEL_93:
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK(v38);
        }
      }
      else
      {
        v39 = *((_DWORD *)this + 34);
        if ( v39 == 1 )
        {
          BLTQUEUE::ProcessVSyncTdrWorker(this, 0);
        }
        else if ( v39 == 3 )
        {
          BLTQUEUE::StopVSync(this, 0LL, 3LL);
          LOBYTE(v40) = 1;
          BLTQUEUE::RecreateVsyncSource(this, v40, 3LL);
          BLTQUEUE::StartVSync(this, 0LL, 3LL);
          BLTQUEUE::LogRemoteVsyncTimeout(v41);
        }
        else
        {
          WdLogSingleEntry1(1LL, *((int *)this + 34));
          WaitModea = *((int *)this + 34);
          WdLogGlobalForLineNumber = 2538;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            0xFFFFFFFFLL,
            L"Not expecting Vsync TDR for type 0x%I64x",
            WaitModea,
            0LL,
            0LL,
            0LL,
            0LL);
        }
      }
    }
    else
    {
      v47 = *(_OWORD *)((char *)this + 616);
      *((_OWORD *)this + 52) = *(_OWORD *)((char *)this + 600);
      v48 = *(_OWORD *)((char *)this + 632);
      *((_OWORD *)this + 53) = v47;
      *((_OWORD *)this + 54) = v48;
      *((LARGE_INTEGER *)this + 103) = KeQueryPerformanceCounter(0LL);
      if ( (unsigned int)Feature_AccessEnableVSyncEventAtomically__private_IsEnabledDeviceUsageNoInline() )
      {
        v50 = _InterlockedExchange((volatile __int32 *)this + 154, 0);
        if ( !*((_BYTE *)this + 600) )
        {
          if ( !*((_BYTE *)this + 601) )
          {
            if ( !*((_BYTE *)this + 604) )
            {
              if ( !*((_BYTE *)this + 602) )
              {
                v49 = v50 == 0;
LABEL_110:
                if ( v49 )
                {
                  if ( *((_BYTE *)this + 608) )
                  {
                    BLTQUEUE::GlobalVmBusStatusChangeWorker(this);
                  }
                  else if ( *((_BYTE *)this + 609) )
                  {
                    BLTQUEUE::HostMonitorPowerStateWorker(this);
                  }
                }
                else
                {
                  BLTQUEUE::EnableVSyncEventWorker(this);
                }
                goto LABEL_116;
              }
              goto LABEL_103;
            }
            goto LABEL_101;
          }
          goto LABEL_99;
        }
      }
      else if ( !*((_BYTE *)this + 600) )
      {
        if ( !*((_BYTE *)this + 601) )
        {
          if ( !*((_BYTE *)this + 604) )
          {
            if ( !*((_BYTE *)this + 602) )
            {
              v49 = *((_BYTE *)this + 603) == 0;
              goto LABEL_110;
            }
LABEL_103:
            BLTQUEUE::UpdateDisplayModeInfoWorker(this);
            goto LABEL_116;
          }
LABEL_101:
          BLTQUEUE::CleanupWorker(this);
          goto LABEL_116;
        }
LABEL_99:
        BLTQUEUE::ResetWorker(this);
        goto LABEL_116;
      }
      BLTQUEUE::AcquireOwnershipWorker(this);
LABEL_116:
      if ( *((_BYTE *)this + 607) )
      {
        BLTQUEUE::DiscardPendingPresent(this);
        *(_QWORD *)((char *)this + 516) = 0LL;
        *((_BYTE *)this + 607) = 0;
        BLTQUEUE::FinishCommand(this, 0);
      }
      else
      {
        v46 = 0LL;
LABEL_119:
        BLTQUEUE::ProcessBltQueue(this, v46, PerformanceFrequency_8);
      }
    }
  }
}
