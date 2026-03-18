/*
 * XREFs of ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x140093270
 * Callers:
 *     ?BltQueueWorkerThread@BLTQUEUE@@SAXPEAX@Z @ 0x1403EE5A0 (-BltQueueWorkerThread@BLTQUEUE@@SAXPEAX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140011820 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x140022C10 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1DXGAUTOSPINLOCK@@QEAA@XZ @ 0x1400354BC (--1DXGAUTOSPINLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z @ 0x140035C20 (--0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z.c)
 *     ?VidSchSignalSyncObjectsFromCpu@VIDSCH_EXPORT@@QEAAJIPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_K@Z @ 0x14004F184 (-VidSchSignalSyncObjectsFromCpu@VIDSCH_EXPORT@@QEAAJIPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGN.c)
 *     ?UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ @ 0x140094030 (-UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ.c)
 *     Feature_AccessEnableVSyncEventAtomically__private_IsEnabledDeviceUsageNoInline @ 0x14009430C (Feature_AccessEnableVSyncEventAtomically__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_DodVsyncEnsureLocked__private_IsEnabledDeviceUsageNoInline @ 0x140094360 (Feature_DodVsyncEnsureLocked__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline @ 0x140094408 (Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0iiiiii_EtwWriteTransfer @ 0x14009445C (McTemplateK0iiiiii_EtwWriteTransfer.c)
 *     McTemplateK0xqttt_EtwWriteTransfer @ 0x140094A0C (McTemplateK0xqttt_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?StopVSync@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z @ 0x14018A170 (-StopVSync@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z.c)
 *     ?TdrIsDodVSyncTimeoutForcedFlip@@YA_NXZ @ 0x14018BDC8 (-TdrIsDodVSyncTimeoutForcedFlip@@YA_NXZ.c)
 *     ?AcquireOwnershipWorker@BLTQUEUE@@AEAAJXZ @ 0x14028154C (-AcquireOwnershipWorker@BLTQUEUE@@AEAAJXZ.c)
 *     ?CleanupWorker@BLTQUEUE@@AEAAXXZ @ 0x14028189C (-CleanupWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ @ 0x14028222C (-DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?GlobalVmBusStatusChangeWorker@BLTQUEUE@@AEAAXXZ @ 0x1402825D8 (-GlobalVmBusStatusChangeWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?HostMonitorPowerStateWorker@BLTQUEUE@@AEAAXXZ @ 0x14028266C (-HostMonitorPowerStateWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?LogRemoteVsyncTimeout@BLTQUEUE@@AEAAXXZ @ 0x140282700 (-LogRemoteVsyncTimeout@BLTQUEUE@@AEAAXXZ.c)
 *     ?ProcessVSyncTdrWorker@BLTQUEUE@@AEAAXE@Z @ 0x1402829AC (-ProcessVSyncTdrWorker@BLTQUEUE@@AEAAXE@Z.c)
 *     ?RecreateVsyncSource@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z @ 0x140282B44 (-RecreateVsyncSource@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z.c)
 *     ?ResetWorker@BLTQUEUE@@AEAAXXZ @ 0x140282E60 (-ResetWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?RestartQueueWorker@BLTQUEUE@@AEAAXXZ @ 0x140282F6C (-RestartQueueWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?StartVSync@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z @ 0x14028320C (-StartVSync@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z.c)
 *     ?BltQueueWorkerDecodeEvent@BLTQUEUE@@AEAAX_NJPEAU_BltQueueWaitEvent@1@@Z @ 0x140371D44 (-BltQueueWorkerDecodeEvent@BLTQUEUE@@AEAAX_NJPEAU_BltQueueWaitEvent@1@@Z.c)
 *     ?EnableVSyncEventWorker@BLTQUEUE@@AEAAXXZ @ 0x140430030 (-EnableVSyncEventWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x140430240 (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 */

void __fastcall __noreturn BLTQUEUE::BltQueueWorker(BLTQUEUE *this)
{
  struct _KTHREAD **v2; // r13
  bool v3; // r15
  struct _KTHREAD **v4; // r14
  struct _KMUTANT *v5; // rsi
  __int32 v6; // ebx
  struct _KEVENT *v7; // rax
  ULONG v8; // r12d
  __int64 v9; // r8
  _BYTE *v10; // rdx
  unsigned __int64 v11; // rsi
  __int64 v12; // rcx
  void *v13; // rax
  __int64 v14; // rcx
  ULONG v15; // r12d
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r14
  LONGLONG v19; // r13
  LARGE_INTEGER v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // r15
  int v23; // edx
  int v24; // ecx
  int v25; // r8d
  __int64 v26; // r10
  LONGLONG v27; // rdx
  LONGLONG v28; // r14
  LONGLONG v29; // r15
  LARGE_INTEGER v30; // rax
  LARGE_INTEGER v31; // rdx
  DWORD v32; // ecx
  LARGE_INTEGER v33; // r8
  __int64 v34; // r9
  char LowPart; // bl
  __int64 v36; // r10
  LONGLONG v37; // rdx
  NTSTATUS v38; // eax
  BLTQUEUE *v39; // rcx
  int v40; // r8d
  int v41; // ecx
  int v42; // edx
  int v43; // ebx
  int v44; // r8d
  int v45; // ebx
  int v46; // ebx
  int v47; // ebx
  int v48; // ebx
  const wchar_t *v49; // r9
  PVOID v50; // rbx
  unsigned __int64 v51; // rsi
  __int64 v52; // rax
  unsigned __int64 v53; // rbx
  struct DXGADAPTER *v54; // r14
  __int64 v55; // r8
  int v56; // eax
  __int64 v57; // rdx
  BLTQUEUE *v58; // rcx
  unsigned int v59; // eax
  __int64 v60; // rdx
  unsigned __int64 i; // rbx
  __int64 v62; // rax
  __int64 v63; // rdx
  __int128 v64; // xmm1
  __int128 v65; // xmm0
  __int128 v66; // xmm1
  __int128 v67; // xmm0
  bool v68; // zf
  __int32 v69; // eax
  char v70; // bl
  __int64 WaitMode; // [rsp+28h] [rbp-E0h]
  char Alertable; // [rsp+30h] [rbp-D8h]
  char Timeout; // [rsp+38h] [rbp-D0h]
  char WaitBlockArray; // [rsp+40h] [rbp-C8h]
  char v75; // [rsp+58h] [rbp-B0h]
  __int128 v76; // [rsp+60h] [rbp-A8h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+70h] [rbp-98h] BYREF
  union _LARGE_INTEGER v78; // [rsp+78h] [rbp-90h] BYREF
  PLARGE_INTEGER v79[2]; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int64 v80; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v81[24]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v82; // [rsp+B0h] [rbp-58h]
  _BYTE v83[8]; // [rsp+B8h] [rbp-50h] BYREF
  DXGPUSHLOCK *v84; // [rsp+C0h] [rbp-48h]
  int v85; // [rsp+C8h] [rbp-40h]
  _BYTE v86[8]; // [rsp+D0h] [rbp-38h] BYREF
  DXGPUSHLOCK *v87; // [rsp+D8h] [rbp-30h]
  int v88; // [rsp+E0h] [rbp-28h]
  struct _KEVENT v89; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v90[24]; // [rsp+100h] [rbp-8h] BYREF
  _BYTE v91[24]; // [rsp+118h] [rbp+10h] BYREF
  struct _KEVENT Event; // [rsp+130h] [rbp+28h] BYREF
  _BYTE v93[48]; // [rsp+148h] [rbp+40h] BYREF
  _BYTE v94[144]; // [rsp+178h] [rbp+70h] BYREF
  PVOID Object[12]; // [rsp+208h] [rbp+100h] BYREF
  struct _KWAIT_BLOCK v96; // [rsp+268h] [rbp+160h] BYREF

  memset(&Event, 0, sizeof(Event));
  memset(&v89, 0, sizeof(v89));
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  KeInitializeEvent(&v89, SynchronizationEvent, 0);
  *((_QWORD *)this + 90) = KeGetCurrentThread();
  KeSetEvent((PRKEVENT)this + 22, 0, 0);
  v2 = (struct _KTHREAD **)((char *)this + 424);
  v76 = 0LL;
  v3 = 0;
  while ( 1 )
  {
    v4 = (struct _KTHREAD **)((char *)this + 2984);
    v5 = (struct _KMUTANT *)((char *)this + 600);
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            memset(Object, 0, sizeof(Object));
            if ( (unsigned int)Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline() )
            {
              KeWaitForSingleObject(v5, Executive, 0, 0, 0LL);
              v6 = _InterlockedExchange((volatile __int32 *)this + 167, 0);
              KeReleaseMutex(v5, 0);
            }
            else
            {
              v6 = _InterlockedExchange((volatile __int32 *)this + 167, 0);
            }
            if ( v6 )
              BLTQUEUE::DisableHwVSyncWorker(this);
            v7 = &v89;
            Object[0] = (char *)this + 552;
            if ( (v76 & 1) != 0 )
              v7 = (struct _KEVENT *)*((_QWORD *)&v76 + 1);
            Object[1] = v7;
            if ( (v76 & 3) != 0 )
              BLTQUEUE::StartVSync(this, 0LL, (unsigned int)((v76 & 2) == 0) + 1);
            v8 = 2;
            if ( (*((_DWORD *)this + 268) & 2) != 0 )
            {
              DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v81, v4, 0);
              DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v81);
              v9 = 8LL;
              v10 = (_BYTE *)(*((_QWORD *)this + 379) + 56LL);
              v11 = 0LL;
              do
              {
                if ( *((_QWORD *)v10 - 1) && !*v10 && v10[1] == 1 )
                {
                  v12 = v8++;
                  Object[v12] = (PVOID)*((_QWORD *)v10 - 7);
                }
                v10 += 64;
                --v9;
              }
              while ( v9 );
              DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v81);
              if ( v8 <= 2 )
              {
                v75 = 1;
                v13 = (void *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 16) + 16LL))(*((_QWORD *)this + 16));
                v14 = v8;
                v15 = v8 + 1;
                Object[v14] = v13;
                Object[v15] = (PVOID)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 16) + 24LL))(*((_QWORD *)this + 16));
                v8 = v15 + 1;
              }
              else
              {
                v75 = 0;
              }
              if ( v8 > 0xC )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 2440;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146LL,
                  0xFFFFFFFFLL,
                  L"nObjects <= NumWaitBlocks",
                  2440LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              if ( (unsigned int)Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline()
                && (unsigned int)Feature_DodVsyncEnsureLocked__private_IsEnabledDeviceUsageNoInline(v17, v16) )
              {
                DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v83, v2, 0);
                DXGPUSHLOCK::AcquireExclusive(v84);
                v85 = 2;
                DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v81);
                PerformanceFrequency.QuadPart = 0LL;
                LOBYTE(v18) = 0;
                v19 = 0LL;
                v20 = KeQueryPerformanceCounter(&PerformanceFrequency);
                DXGAUTOSPINLOCK::DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v93, (KSPIN_LOCK *)this + 57, 1);
                v21 = *((_QWORD *)this + 62);
                v22 = *((_QWORD *)this + 60);
                if ( v21 > 0 && v22 > 0 && v20.QuadPart > v22 )
                {
                  v18 = v21 + v20.QuadPart - (v20.QuadPart - v22) % v21;
                  v19 = 10000000 * ((v20.QuadPart - v22) % v21 - v21) / PerformanceFrequency.QuadPart;
                }
                DXGAUTOSPINLOCK::~DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v93);
                do
                {
                  v26 = *((_QWORD *)this + 379);
                  if ( *(_QWORD *)(v11 + v26 + 48) && !*(_BYTE *)(v11 + v26 + 56) && *(_BYTE *)(v11 + v26 + 57) == 1 )
                  {
                    v27 = 0LL;
                    if ( v19 + *(_QWORD *)(v11 + v26 + 32) <= 0 )
                      v27 = v19 + *(_QWORD *)(v11 + v26 + 32);
                    ExSetTimer(*(_QWORD *)(v11 + v26), v27, 0LL, 0LL);
                  }
                  v11 += 64LL;
                }
                while ( v11 < 0x200 );
                if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                  McTemplateK0iiiiii_EtwWriteTransfer(
                    v24,
                    v23,
                    v25,
                    v19,
                    v18,
                    v20.QuadPart,
                    PerformanceFrequency.QuadPart,
                    v22,
                    *((_QWORD *)this + 62));
                (*(void (__fastcall **)(_QWORD, LONGLONG))(**((_QWORD **)this + 16) + 56LL))(
                  *((_QWORD *)this + 16),
                  v19);
                DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v81);
                DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v83);
                DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v83);
                v2 = (struct _KTHREAD **)((char *)this + 424);
              }
              else
              {
                DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v86, v2, 0);
                DXGPUSHLOCK::AcquireExclusive(v87);
                v88 = 2;
                DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v81);
                v78.QuadPart = 0LL;
                LOBYTE(v28) = 0;
                v29 = 0LL;
                v30 = KeQueryPerformanceCounter(&v78);
                v34 = *((_QWORD *)this + 62);
                LowPart = v30.LowPart;
                if ( v34 > 0 )
                {
                  v33 = *(LARGE_INTEGER *)((char *)this + 480);
                  if ( v33.QuadPart > 0 && v30.QuadPart > v33.QuadPart )
                  {
                    v32 = v30.LowPart - v33.LowPart;
                    v28 = v30.QuadPart + v34 - (v30.QuadPart - v33.QuadPart) % v34;
                    v31.QuadPart = 10000000 * ((v30.QuadPart - v33.QuadPart) % v34 - v34) % v78.QuadPart;
                    v29 = 10000000 * ((v30.QuadPart - v33.QuadPart) % v34 - v34) / v78.QuadPart;
                  }
                }
                do
                {
                  v36 = *((_QWORD *)this + 379);
                  if ( *(_QWORD *)(v11 + v36 + 48) && !*(_BYTE *)(v11 + v36 + 56) && *(_BYTE *)(v11 + v36 + 57) == 1 )
                  {
                    v37 = 0LL;
                    if ( v29 + *(_QWORD *)(v11 + v36 + 32) <= 0 )
                      v37 = v29 + *(_QWORD *)(v11 + v36 + 32);
                    ExSetTimer(*(_QWORD *)(v11 + v36), v37, 0LL, 0LL);
                  }
                  v11 += 64LL;
                }
                while ( v11 < 0x200 );
                if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                  McTemplateK0iiiiii_EtwWriteTransfer(
                    v32,
                    v31.LowPart,
                    v33.LowPart,
                    v29,
                    v28,
                    LowPart,
                    v78.QuadPart,
                    *((_QWORD *)this + 60),
                    *((_QWORD *)this + 62));
                (*(void (__fastcall **)(_QWORD, LONGLONG))(**((_QWORD **)this + 16) + 56LL))(
                  *((_QWORD *)this + 16),
                  v29);
                DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v81);
                DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v86);
                DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v86);
              }
              DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v81);
              v3 = v75;
              v5 = (struct _KMUTANT *)((char *)this + 600);
              v4 = (struct _KTHREAD **)((char *)this + 2984);
            }
            v38 = KeWaitForMultipleObjects(v8, Object, WaitAny, Executive, 0, 1u, 0LL, &v96);
            v76 = 0LL;
            *(_OWORD *)v79 = 0LL;
            BLTQUEUE::BltQueueWorkerDecodeEvent(v39, v3, v38, (struct BLTQUEUE::_BltQueueWaitEvent *)v79);
            if ( (unsigned int)Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline() )
            {
              KeWaitForSingleObject(v5, Executive, 0, 0, 0LL);
              v43 = (int)v79[0];
              if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                McTemplateK0xqttt_EtwWriteTransfer(
                  (*((_DWORD *)this + 169) >> 2) & 1,
                  (*((_DWORD *)this + 169) >> 3) & 1,
                  v44,
                  *((_QWORD *)this + 31),
                  (char)v79[0],
                  (*((_DWORD *)this + 169) & 8) != 0,
                  (*((_DWORD *)this + 169) & 4) != 0,
                  *((_BYTE *)this + 661));
              KeReleaseMutex(v5, 0);
            }
            else
            {
              if ( (unsigned int)Feature_AccessEnableVSyncEventAtomically__private_IsEnabledDeviceUsageNoInline() )
              {
                if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                {
                  v41 = *((unsigned __int8 *)this + 661);
                  v42 = *((unsigned __int8 *)this + 658);
                  WaitBlockArray = *((_BYTE *)this + 661);
                  Timeout = *((_BYTE *)this + 658);
                  Alertable = _InterlockedCompareExchange((volatile signed __int32 *)this + 168, 0, 0);
                  goto LABEL_66;
                }
              }
              else if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              {
                v41 = *((unsigned __int8 *)this + 658);
                v42 = *((unsigned __int8 *)this + 659);
                WaitBlockArray = *((_BYTE *)this + 661);
                Timeout = *((_BYTE *)this + 658);
                Alertable = *((_BYTE *)this + 659);
LABEL_66:
                v43 = (int)v79[0];
                McTemplateK0xqttt_EtwWriteTransfer(
                  v41,
                  v42,
                  v40,
                  *((_QWORD *)this + 31),
                  (char)v79[0],
                  Alertable,
                  Timeout,
                  WaitBlockArray);
                goto LABEL_72;
              }
              v43 = (int)v79[0];
            }
LABEL_72:
            if ( v43 )
              break;
            if ( (unsigned int)Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline() )
            {
              KeWaitForSingleObject(v5, Executive, 0, 0, 0LL);
              v66 = *((_OWORD *)this + 42);
              *((_OWORD *)this + 56) = *((_OWORD *)this + 41);
              v67 = *((_OWORD *)this + 43);
              *((_OWORD *)this + 57) = v66;
              *(_QWORD *)&v66 = *((_QWORD *)this + 88);
              *((_OWORD *)this + 58) = v67;
              *((_QWORD *)this + 118) = v66;
              KeReleaseMutex(v5, 0);
            }
            else
            {
              v64 = *((_OWORD *)this + 42);
              *((_OWORD *)this + 56) = *((_OWORD *)this + 41);
              v65 = *((_OWORD *)this + 43);
              *((_OWORD *)this + 57) = v64;
              *(_QWORD *)&v64 = *((_QWORD *)this + 88);
              *((_OWORD *)this + 58) = v65;
              *((_QWORD *)this + 118) = v64;
            }
            *((LARGE_INTEGER *)this + 111) = KeQueryPerformanceCounter(0LL);
            if ( (unsigned int)Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline() )
            {
              KeWaitForSingleObject(v5, Executive, 0, 0, 0LL);
              v82 = *(_QWORD *)((char *)this + 676);
              KeReleaseMutex(v5, 0);
              v70 = v82;
              if ( (v82 & 1) != 0 )
              {
                BLTQUEUE::AcquireOwnershipWorker(this);
              }
              else if ( (v82 & 2) != 0 )
              {
                BLTQUEUE::ResetWorker(this);
              }
              else if ( (v82 & 0x10) != 0 )
              {
                BLTQUEUE::CleanupWorker(this);
              }
              else if ( (v82 & 4) != 0 )
              {
                BLTQUEUE::UpdateDisplayModeInfoWorker(this);
              }
              else if ( (v82 & 8) != 0 )
              {
                BLTQUEUE::EnableVSyncEventWorker(this);
              }
              else if ( (v82 & 0x100) != 0 )
              {
                BLTQUEUE::GlobalVmBusStatusChangeWorker(this);
              }
              else if ( (v82 & 0x200) != 0 )
              {
                BLTQUEUE::HostMonitorPowerStateWorker(this);
              }
              if ( v70 >= 0 )
                goto LABEL_154;
LABEL_138:
              BLTQUEUE::RestartQueueWorker(this);
            }
            else
            {
              if ( (unsigned int)Feature_AccessEnableVSyncEventAtomically__private_IsEnabledDeviceUsageNoInline() )
              {
                v69 = _InterlockedExchange((volatile __int32 *)this + 168, 0);
                if ( *((_BYTE *)this + 656) )
                {
LABEL_118:
                  BLTQUEUE::AcquireOwnershipWorker(this);
                  goto LABEL_137;
                }
                if ( *((_BYTE *)this + 657) )
                {
LABEL_120:
                  BLTQUEUE::ResetWorker(this);
                  goto LABEL_137;
                }
                if ( *((_BYTE *)this + 660) )
                {
LABEL_122:
                  BLTQUEUE::CleanupWorker(this);
                  goto LABEL_137;
                }
                if ( *((_BYTE *)this + 658) )
                {
LABEL_124:
                  BLTQUEUE::UpdateDisplayModeInfoWorker(this);
                  goto LABEL_137;
                }
                v68 = v69 == 0;
              }
              else
              {
                if ( *((_BYTE *)this + 656) )
                  goto LABEL_118;
                if ( *((_BYTE *)this + 657) )
                  goto LABEL_120;
                if ( *((_BYTE *)this + 660) )
                  goto LABEL_122;
                if ( *((_BYTE *)this + 658) )
                  goto LABEL_124;
                v68 = *((_BYTE *)this + 659) == 0;
              }
              if ( v68 )
              {
                if ( *((_BYTE *)this + 664) )
                {
                  BLTQUEUE::GlobalVmBusStatusChangeWorker(this);
                }
                else if ( *((_BYTE *)this + 665) )
                {
                  BLTQUEUE::HostMonitorPowerStateWorker(this);
                }
              }
              else
              {
                BLTQUEUE::EnableVSyncEventWorker(this);
              }
LABEL_137:
              if ( *((_BYTE *)this + 663) )
                goto LABEL_138;
LABEL_154:
              v63 = 0LL;
LABEL_155:
              BLTQUEUE::ProcessBltQueue(this, v63, &v76);
            }
          }
          v45 = v43 - 1;
          if ( !v45 )
          {
            v63 = 2LL;
            goto LABEL_155;
          }
          v46 = v45 - 1;
          if ( v46 )
            break;
          if ( g_TdrForceDodVSyncTimeout && TdrIsDodVSyncTimeoutForcedFlip() )
          {
            BLTQUEUE::ProcessVSyncTdrWorker(this, 1u);
          }
          else
          {
            BLTQUEUE::ProcessBltQueue(this, 1LL, &v76);
            if ( !*((_DWORD *)this + 103) && (v76 & 3) == 0 )
            {
              v59 = *((_DWORD *)this + 104) + 1;
              *((_DWORD *)this + 104) = v59;
              if ( v59 > 0xA )
                BLTQUEUE::StopVSync(this, 0LL, 8LL);
            }
          }
          DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v91, v4, 0);
          DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v91);
          for ( i = 0LL; i < 0x200; i += 64LL )
          {
            v62 = *((_QWORD *)this + 379);
            if ( *(_QWORD *)(i + v62 + 48) )
            {
              if ( *(_BYTE *)(i + v62 + 56) == 1 )
              {
                *(_QWORD *)(i + v62 + 48) = 0LL;
                LOBYTE(v60) = 1;
                *(_BYTE *)(i + *((_QWORD *)this + 379) + 56) = 0;
                ExDeleteTimer(*(_QWORD *)(i + *((_QWORD *)this + 379)), v60, 0LL, 0LL);
              }
              else
              {
                *(_BYTE *)(i + v62 + 57) = 1;
              }
            }
          }
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v91);
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v91);
        }
        v47 = v46 - 1;
        if ( v47 )
          break;
        v56 = *((_DWORD *)this + 34);
        if ( v56 == 1 )
        {
          BLTQUEUE::ProcessVSyncTdrWorker(this, 0);
        }
        else if ( v56 == 3 )
        {
          BLTQUEUE::StopVSync(this, 0LL, 3LL);
          LOBYTE(v57) = 1;
          BLTQUEUE::RecreateVsyncSource(this, v57, 3LL);
          BLTQUEUE::StartVSync(this, 0LL, 3LL);
          BLTQUEUE::LogRemoteVsyncTimeout(v58);
        }
        else
        {
          WdLogSingleEntry1(1LL, *((int *)this + 34));
          WaitMode = *((int *)this + 34);
          WdLogGlobalForLineNumber = 2879;
          DxgkLogInternalTriageEvent(
            0LL,
            262146LL,
            0xFFFFFFFFLL,
            L"Not expecting Vsync TDR for type 0x%I64x",
            WaitMode,
            0LL,
            0LL,
            0LL,
            0LL);
        }
      }
      v48 = v47 - 1;
      if ( !v48 )
        break;
      WdLogSingleEntry1(2LL, this);
      if ( v48 == 1 )
      {
        v49 = L"BLTQUEUE 0x%I64x : worker thread alerted";
        WdLogGlobalForLineNumber = 2892;
      }
      else
      {
        v49 = L"BLTQUEUE 0x%I64x : Received invalid WaitStatus";
        WdLogGlobalForLineNumber = 2946;
      }
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v49, (__int64)this, 0LL, 0LL, 0LL, 0LL);
    }
    v50 = Object[(__int64)v79[1]];
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v90, v4, 0);
    DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v90);
    v51 = 0LL;
    v52 = *((_QWORD *)this + 379);
    while ( *(PVOID *)v52 != v50 || *(_BYTE *)(v52 + 57) != 1 )
    {
      ++v51;
      v52 += 64LL;
      if ( v51 >= 8 )
        goto LABEL_91;
    }
    v53 = v51 << 6;
    v54 = *(struct DXGADAPTER **)((v51 << 6) + *((_QWORD *)this + 379) + 16);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v94, v54, 0LL);
    if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v94, 0LL) >= 0 )
    {
      v55 = *((_QWORD *)this + 379);
      v80 = (unsigned int)(*((_DWORD *)this + 744) + 1);
      if ( (int)VIDSCH_EXPORT::VidSchSignalSyncObjectsFromCpu(
                  *(VIDSCH_EXPORT **)(*((_QWORD *)v54 + 391) + 736LL),
                  1u,
                  (struct _VIDSCH_SYNC_OBJECT **)(v53 + v55 + 8),
                  0,
                  &v80) < 0 )
      {
        WdLogSingleEntry1(2LL, v51);
        WdLogGlobalForLineNumber = 2932;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Failed to signal pending dod periodic frame notification id: %lu",
          v51,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)this + 379) + v53 + 40) = v80;
      }
    }
    *(_BYTE *)(*((_QWORD *)this + 379) + v53 + 57) = 0;
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v94);
LABEL_91:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v90);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v90);
  }
}
