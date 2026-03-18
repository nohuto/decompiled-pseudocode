/*
 * XREFs of ?VmBusSendGetDeviceState@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_GETDEVICESTATE@@@Z @ 0x1403DFCD4
 * Callers:
 *     DxgkGetDeviceStateInternal @ 0x1402AB150 (DxgkGetDeviceStateInternal.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1400644F8 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     McTemplateK0xqqxx_EtwWriteTransfer @ 0x14007BFF4 (McTemplateK0xqqxx_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x14018468C (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?FindMappingFromGuestVidPnSourceId@REMOTEMONITORMAPPING@@QEAAJIPEAUPATH_IDENTIFIER_HOST@1@@Z @ 0x1401F3F20 (-FindMappingFromGuestVidPnSourceId@REMOTEMONITORMAPPING@@QEAAJIPEAUPATH_IDENTIFIER_HOST@1@@Z.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x14022EE3C (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z @ 0x1403D3630 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1403E0D70 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetDeviceState(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        struct _D3DKMT_GETDEVICESTATE *a4)
{
  unsigned int v8; // r14d
  char *v9; // rbx
  int HostProcess; // eax
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v13; // rax
  __int64 v14; // r9
  __int64 v15; // r10
  unsigned int v16; // edx
  int v17; // esi
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  int v20; // eax
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  LARGE_INTEGER v23; // rdx
  LARGE_INTEGER v24; // rcx
  LARGE_INTEGER PerformanceCounter; // rbx
  LARGE_INTEGER v26; // r8
  __int64 v27; // r14
  LARGE_INTEGER v28; // rax
  __int64 v29; // r14
  LARGE_INTEGER v30; // rax
  unsigned int *v31; // [rsp+20h] [rbp-E0h]
  unsigned int *v32; // [rsp+28h] [rbp-D8h]
  unsigned int v33; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v34; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v35; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v36; // [rsp+68h] [rbp-98h] BYREF
  int v37; // [rsp+70h] [rbp-90h]
  int v38; // [rsp+78h] [rbp-88h] BYREF
  int v39; // [rsp+7Ch] [rbp-84h] BYREF
  __int64 v40; // [rsp+80h] [rbp-80h] BYREF
  PVOID P[2]; // [rsp+90h] [rbp-70h] BYREF
  int v42; // [rsp+A0h] [rbp-60h]
  char v43; // [rsp+A4h] [rbp-5Ch] BYREF
  __int128 v44; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v45; // [rsp+1C0h] [rbp+C0h] BYREF
  __int128 v46; // [rsp+1C8h] [rbp+C8h] BYREF
  __int64 v47; // [rsp+1D8h] [rbp+D8h] BYREF
  _OWORD v48[4]; // [rsp+1E0h] [rbp+E0h] BYREF

  v8 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 434);
  *(_OWORD *)P = 0LL;
  v36 = 0LL;
  v37 = 0;
  v42 = 0;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)P, this, 0x58u, 0LL, 0LL, 0LL);
  v9 = (char *)P[0];
  if ( P[0] )
  {
    HostProcess = DXGPROCESS::GetHostProcess(a2);
    v9[12] = 0;
    *((_DWORD *)v9 + 3) &= 0x1FFu;
    *((_DWORD *)v9 + 2) = HostProcess;
    *(_QWORD *)v9 = 0LL;
    *((_QWORD *)v9 + 2) = 28LL;
    *((_QWORD *)v9 + 10) = 0LL;
    v35 = 64;
    *(_OWORD *)(v9 + 24) = *(_OWORD *)&a4->hDevice;
    *(_OWORD *)(v9 + 40) = *(_OWORD *)(&a4->PresentQueueState + 1);
    *(_OWORD *)(v9 + 56) = *(_OWORD *)(&a4->PresentQueueState + 3);
    *((_QWORD *)v9 + 9) = *((_QWORD *)&a4->PresentQueueState + 5);
    *((_DWORD *)v9 + 6) = *((_DWORD *)a3 + 118);
    if ( v8 >= 0x20 && *((_DWORD *)v9 + 7) == 4 )
    {
      Global = DXGGLOBAL::GetGlobal();
      if ( (int)REMOTEMONITORMAPPING::FindMappingFromGuestVidPnSourceId(
                  (struct _KTHREAD **)Global + 38157,
                  *((_DWORD *)v9 + 8),
                  (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_HOST *)&v36) >= 0
        && v36 == *(_QWORD *)(*((_QWORD *)this + 9) + 4764LL) )
      {
        if ( v8 >= 0x23 )
        {
          if ( *((_QWORD *)DXGGLOBAL::GetGlobal() + 214) )
          {
            if ( *((_DWORD *)v9 + 8) < 0x10u )
            {
              v13 = DXGGLOBAL::GetGlobal();
              v14 = 32LL * *((unsigned int *)v9 + 8);
              v15 = *((_QWORD *)v13 + 214);
              do
              {
                _InterlockedExchange((volatile __int32 *)&v33, *(_DWORD *)(v14 + v15 + 8));
                v16 = v33;
                _InterlockedExchange64(&v40, *(_QWORD *)(v14 + v15 + 16));
                _InterlockedExchange((volatile __int32 *)&v33, *(_DWORD *)(v14 + v15 + 8));
              }
              while ( v33 != v16 );
              if ( v40 )
              {
                memset(v48, 0, sizeof(v48));
                v17 = 0;
                v18 = *(_OWORD *)(&a4->PresentQueueState + 1);
                v48[0] = *(_OWORD *)&a4->hDevice;
                v19 = *(_OWORD *)(&a4->PresentQueueState + 3);
                v48[1] = v18;
                *(_QWORD *)&v18 = *((_QWORD *)&a4->PresentQueueState + 5);
                *(_QWORD *)&v48[2] = __PAIR64__(DWORD1(v19), v33);
                *(_QWORD *)((char *)&v48[3] + 4) = DWORD1(v18);
                *((_QWORD *)&v48[2] + 1) = v40;
                v48[1] = 0uLL;
                LODWORD(v48[3]) = 0;
                goto LABEL_21;
              }
            }
          }
        }
        v20 = v37;
        *((_QWORD *)v9 + 10) |= 1uLL;
        *((_DWORD *)v9 + 8) = v20;
      }
    }
    v17 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)P, v48, &v35);
    if ( v17 < 0 )
      goto LABEL_40;
    v17 = -1073741823;
    if ( v35 < 0x40 )
      goto LABEL_40;
    v17 = DWORD2(v48[3]);
LABEL_21:
    v21 = v48[1];
    *(_OWORD *)&a4->hDevice = v48[0];
    v22 = v48[2];
    *(_OWORD *)(&a4->PresentQueueState + 1) = v21;
    *(_QWORD *)&v21 = *(_QWORD *)&v48[3];
    *(_OWORD *)(&a4->PresentQueueState + 3) = v22;
    *((_QWORD *)&a4->PresentQueueState + 5) = v21;
    if ( v8 < 0x20 || *((_DWORD *)v9 + 7) != 4 )
      goto LABEL_39;
    v34 = 0LL;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    if ( v17 >= 0 )
    {
      v27 = *((_QWORD *)&v48[2] + 1);
      if ( !*((_QWORD *)&v48[2] + 1) )
      {
LABEL_29:
        v29 = *((_QWORD *)&v48[1] + 1);
        if ( *((_QWORD *)&v48[1] + 1) )
        {
          v17 = RtlConvertHostPerfCounterToPerfCounter(*((_QWORD *)&v48[1] + 1), -1LL, &v34);
          if ( v17 < 0 )
          {
            a4->PresentStateDWM.PresentStatsDWM.PresentQPCTime.QuadPart = 0LL;
          }
          else
          {
            v30.QuadPart = v34;
            if ( PerformanceCounter.QuadPart < v34 )
            {
              v39 = 0;
              v47 = 0LL;
              v46 = 0LL;
              RtlGetSystemGlobalData(18LL, &v47, 8LL);
              RtlGetMultiTimePrecise(&v46, 3LL, &v39);
              DxgCreateLiveDumpWithWdLogs(403LL, 2081LL, v29, v34, PerformanceCounter.QuadPart, 5u);
              v30.QuadPart = v34;
            }
            a4->PresentStateDWM.PresentStatsDWM.PresentQPCTime = v30;
          }
        }
        goto LABEL_36;
      }
      v17 = RtlConvertHostPerfCounterToPerfCounter(*((_QWORD *)&v48[2] + 1), -1LL, &v34);
      if ( v17 >= 0 )
      {
        v28.QuadPart = v34;
        if ( PerformanceCounter.QuadPart < v34 )
        {
          v38 = 0;
          v45 = 0LL;
          v44 = 0LL;
          RtlGetSystemGlobalData(18LL, &v45, 8LL);
          RtlGetMultiTimePrecise(&v44, 3LL, &v38);
          DxgCreateLiveDumpWithWdLogs(403LL, 2081LL, v27, v34, PerformanceCounter.QuadPart, 5u);
          v28.QuadPart = v34;
        }
        a4->PresentState.PresentStats.SyncGPUTime = v28;
        goto LABEL_29;
      }
      a4->PresentState.PresentStats.SyncGPUTime.QuadPart = 0LL;
    }
LABEL_36:
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
    {
      LODWORD(v32) = a4->PresentState.PresentStats.SyncQPCTime.LowPart;
      LODWORD(v31) = v37;
      McTemplateK0xqqxx_EtwWriteTransfer(
        v24.QuadPart,
        v23.QuadPart,
        v26.QuadPart,
        v36,
        v31,
        v32,
        a4->PresentState.PresentStats.SyncGPUTime.QuadPart,
        *((_QWORD *)&v48[2] + 1));
    }
LABEL_39:
    if ( v17 >= 0 )
    {
LABEL_41:
      DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)P);
      return (unsigned int)v17;
    }
LABEL_40:
    WdLogSingleEntry1(2LL, v17);
    WdLogGlobalForLineNumber = 12328;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"VmBusSendGetDeviceState failed: 0x%I64x",
      v17,
      0LL,
      0LL,
      0LL,
      0LL);
    a4->PresentState.VidPnSourceId = 4;
    v17 = 0;
    goto LABEL_41;
  }
  if ( P[1] )
  {
    if ( P[1] != &v43 )
      ExFreePoolWithTag(P[1], 0x4D767844u);
  }
  return 3221225495LL;
}
