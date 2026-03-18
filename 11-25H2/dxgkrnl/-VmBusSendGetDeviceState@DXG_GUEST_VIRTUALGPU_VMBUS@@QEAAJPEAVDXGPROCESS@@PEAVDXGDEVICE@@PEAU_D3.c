/*
 * XREFs of ?VmBusSendGetDeviceState@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_GETDEVICESTATE@@@Z @ 0x1402F9C2C
 * Callers:
 *     DxgkGetDeviceStateInternal @ 0x1402A4C80 (DxgkGetDeviceStateInternal.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1400648D8 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     McTemplateK0xqqxx_EtwWriteTransfer @ 0x14007BB48 (McTemplateK0xqqxx_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1401821C4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?FindMappingFromGuestVidPnSourceId@REMOTEMONITORMAPPING@@QEAAJIPEAUPATH_IDENTIFIER_HOST@1@@Z @ 0x1401EE57C (-FindMappingFromGuestVidPnSourceId@REMOTEMONITORMAPPING@@QEAAJIPEAUPATH_IDENTIFIER_HOST@1@@Z.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x140228550 (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402FACC0 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z @ 0x1403DA520 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z.c)
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
  LARGE_INTEGER v27; // rax
  LARGE_INTEGER v28; // rax
  unsigned int *v29; // [rsp+20h] [rbp-E0h]
  unsigned int *v30; // [rsp+28h] [rbp-D8h]
  unsigned int v31; // [rsp+50h] [rbp-B0h] BYREF
  LARGE_INTEGER v32; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v33; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v34; // [rsp+68h] [rbp-98h] BYREF
  int v35; // [rsp+70h] [rbp-90h]
  int v36; // [rsp+78h] [rbp-88h] BYREF
  int v37; // [rsp+7Ch] [rbp-84h] BYREF
  __int64 v38; // [rsp+80h] [rbp-80h] BYREF
  PVOID P[2]; // [rsp+90h] [rbp-70h] BYREF
  int v40; // [rsp+A0h] [rbp-60h]
  char v41; // [rsp+A4h] [rbp-5Ch] BYREF
  __int128 v42; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v43; // [rsp+1C0h] [rbp+C0h] BYREF
  __int128 v44; // [rsp+1C8h] [rbp+C8h] BYREF
  __int64 v45; // [rsp+1D8h] [rbp+D8h] BYREF
  _OWORD v46[4]; // [rsp+1E0h] [rbp+E0h] BYREF

  v8 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 426);
  *(_OWORD *)P = 0LL;
  v34 = 0LL;
  v35 = 0;
  v40 = 0;
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
    v33 = 64;
    *(_OWORD *)(v9 + 24) = *(_OWORD *)&a4->hDevice;
    *(_OWORD *)(v9 + 40) = *(_OWORD *)(&a4->PresentQueueState + 1);
    *(_OWORD *)(v9 + 56) = *(_OWORD *)(&a4->PresentQueueState + 3);
    *((_QWORD *)v9 + 9) = *((_QWORD *)&a4->PresentQueueState + 5);
    *((_DWORD *)v9 + 6) = *((_DWORD *)a3 + 118);
    if ( v8 >= 0x20 && *((_DWORD *)v9 + 7) == 4 )
    {
      Global = DXGGLOBAL::GetGlobal();
      if ( (int)REMOTEMONITORMAPPING::FindMappingFromGuestVidPnSourceId(
                  (struct _KTHREAD **)Global + 38147,
                  *((_DWORD *)v9 + 8),
                  (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_HOST *)&v34) >= 0
        && v34 == *(_QWORD *)(*((_QWORD *)this + 9) + 4764LL) )
      {
        if ( v8 >= 0x23 )
        {
          if ( *((_QWORD *)DXGGLOBAL::GetGlobal() + 210) )
          {
            if ( *((_DWORD *)v9 + 8) < 0x10u )
            {
              v13 = DXGGLOBAL::GetGlobal();
              v14 = 32LL * *((unsigned int *)v9 + 8);
              v15 = *((_QWORD *)v13 + 210);
              do
              {
                _InterlockedExchange((volatile __int32 *)&v31, *(_DWORD *)(v14 + v15 + 8));
                v16 = v31;
                _InterlockedExchange64(&v38, *(_QWORD *)(v14 + v15 + 16));
                _InterlockedExchange((volatile __int32 *)&v31, *(_DWORD *)(v14 + v15 + 8));
              }
              while ( v31 != v16 );
              if ( v38 )
              {
                memset(v46, 0, sizeof(v46));
                v17 = 0;
                v18 = *(_OWORD *)(&a4->PresentQueueState + 1);
                v46[0] = *(_OWORD *)&a4->hDevice;
                v19 = *(_OWORD *)(&a4->PresentQueueState + 3);
                v46[1] = v18;
                *(_QWORD *)&v18 = *((_QWORD *)&a4->PresentQueueState + 5);
                *(_QWORD *)&v46[2] = __PAIR64__(DWORD1(v19), v31);
                *(_QWORD *)((char *)&v46[3] + 4) = DWORD1(v18);
                *((_QWORD *)&v46[2] + 1) = v38;
                v46[1] = 0uLL;
                LODWORD(v46[3]) = 0;
                goto LABEL_21;
              }
            }
          }
        }
        v20 = v35;
        *((_QWORD *)v9 + 10) |= 1uLL;
        *((_DWORD *)v9 + 8) = v20;
      }
    }
    v17 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)P, v46, &v33);
    if ( v17 < 0 )
      goto LABEL_40;
    v17 = -1073741823;
    if ( v33 < 0x40 )
      goto LABEL_40;
    v17 = DWORD2(v46[3]);
LABEL_21:
    v21 = v46[1];
    *(_OWORD *)&a4->hDevice = v46[0];
    v22 = v46[2];
    *(_OWORD *)(&a4->PresentQueueState + 1) = v21;
    *(_QWORD *)&v21 = *(_QWORD *)&v46[3];
    *(_OWORD *)(&a4->PresentQueueState + 3) = v22;
    *((_QWORD *)&a4->PresentQueueState + 5) = v21;
    if ( v8 < 0x20 || *((_DWORD *)v9 + 7) != 4 )
      goto LABEL_39;
    v32.QuadPart = 0LL;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    if ( v17 >= 0 )
    {
      if ( !*((_QWORD *)&v46[2] + 1) )
      {
LABEL_29:
        if ( *((_QWORD *)&v46[1] + 1) )
        {
          v17 = RtlConvertHostPerfCounterToPerfCounter(*((_QWORD *)&v46[1] + 1), -1LL, &v32);
          if ( v17 < 0 )
          {
            a4->PresentStateDWM.PresentStatsDWM.PresentQPCTime.QuadPart = 0LL;
          }
          else
          {
            v28 = v32;
            if ( PerformanceCounter.QuadPart < (unsigned __int64)v32.QuadPart )
            {
              v37 = 0;
              v45 = 0LL;
              v44 = 0LL;
              RtlGetSystemGlobalData(18LL, &v45, 8LL);
              RtlGetMultiTimePrecise(&v44, 3LL, &v37);
              HIDWORD(v29) = PerformanceCounter.HighPart;
              DxgCreateLiveDumpWithWdLogs(403LL, 2081LL);
              v28 = v32;
            }
            a4->PresentStateDWM.PresentStatsDWM.PresentQPCTime = v28;
          }
        }
        goto LABEL_36;
      }
      v17 = RtlConvertHostPerfCounterToPerfCounter(*((_QWORD *)&v46[2] + 1), -1LL, &v32);
      if ( v17 >= 0 )
      {
        v27 = v32;
        if ( PerformanceCounter.QuadPart < (unsigned __int64)v32.QuadPart )
        {
          v36 = 0;
          v43 = 0LL;
          v42 = 0LL;
          RtlGetSystemGlobalData(18LL, &v43, 8LL);
          RtlGetMultiTimePrecise(&v42, 3LL, &v36);
          HIDWORD(v29) = PerformanceCounter.HighPart;
          DxgCreateLiveDumpWithWdLogs(403LL, 2081LL);
          v27 = v32;
        }
        a4->PresentState.PresentStats.SyncGPUTime = v27;
        goto LABEL_29;
      }
      a4->PresentState.PresentStats.SyncGPUTime.QuadPart = 0LL;
    }
LABEL_36:
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
    {
      LODWORD(v30) = a4->PresentState.PresentStats.SyncQPCTime.LowPart;
      LODWORD(v29) = v35;
      McTemplateK0xqqxx_EtwWriteTransfer(
        v24.QuadPart,
        v23.QuadPart,
        v26.QuadPart,
        v34,
        v29,
        v30,
        a4->PresentState.PresentStats.SyncGPUTime.QuadPart,
        *((_QWORD *)&v46[2] + 1));
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
    WdLogGlobalForLineNumber = 12140;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
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
    if ( P[1] != &v41 )
      ExFreePoolWithTag(P[1], 0x4D767844u);
  }
  return 3221225495LL;
}
