/*
 * XREFs of DxgkReclaimAllocations2 @ 0x14029BF60
 * Callers:
 *     ?VmBusReclaimAllocations@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140227460 (-VmBusReclaimAllocations@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ @ 0x14000E9C4 (--1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14000FBB0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x14002DDD0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z @ 0x14002F238 (-Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@E@Z @ 0x14029C930 (-ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@E@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x1402A4390 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1402A4850 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1402C7874 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkReclaimAllocations2(_D3DKMT_RECLAIMALLOCATIONS2 *a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD **Current; // rsi
  char CurrentThreadPreviousMode; // r12
  const void *v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rcx
  int v9; // r14d
  struct _KEVENT *v10; // r15
  __int64 v11; // r9
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // r14d
  void *p_PagingFenceValue; // rcx
  __int64 v17; // rcx
  __int64 v18; // r8
  DXGADAPTER *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // r8
  struct _KEVENT *v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // [rsp+58h] [rbp-130h] BYREF
  __int64 v29; // [rsp+60h] [rbp-128h]
  char v30; // [rsp+68h] [rbp-120h]
  struct DXGPAGINGQUEUE *v31; // [rsp+70h] [rbp-118h] BYREF
  _BYTE v32[8]; // [rsp+78h] [rbp-110h] BYREF
  __int64 v33; // [rsp+80h] [rbp-108h] BYREF
  int v34; // [rsp+88h] [rbp-100h]
  _D3DKMT_RECLAIMALLOCATIONS2 v35; // [rsp+90h] [rbp-F8h] BYREF
  __int64 v36; // [rsp+B8h] [rbp-D0h]
  _BYTE v37[8]; // [rsp+C0h] [rbp-C8h] BYREF
  _BYTE v38[16]; // [rsp+C8h] [rbp-C0h] BYREF
  DXGADAPTER *v39; // [rsp+D8h] [rbp-B0h]
  char v40; // [rsp+E0h] [rbp-A8h]
  __int64 v41; // [rsp+E8h] [rbp-A0h]
  _BYTE v42[16]; // [rsp+108h] [rbp-80h] BYREF
  DXGADAPTER *v43; // [rsp+118h] [rbp-70h]
  char v44; // [rsp+120h] [rbp-68h]
  __int64 v45; // [rsp+128h] [rbp-60h]
  __int64 v46; // [rsp+148h] [rbp-40h]
  char v47; // [rsp+150h] [rbp-38h]

  v28 = -1;
  v29 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v30 = 1;
    v28 = 2071;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2071);
  }
  else
  {
    v30 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v28, 2071);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( Current )
  {
    CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
    memset(&v35, 0, sizeof(v35));
    if ( CurrentThreadPreviousMode == 1 )
    {
      v6 = a1;
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        v6 = (const void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(&v35, v6, 0x28uLL);
    }
    else
    {
      v35 = *a1;
    }
    v31 = 0LL;
    DXGPAGINGQUEUEBYHANDLE::Open((DXGPAGINGQUEUEBYHANDLE *)v32, v35.hPagingQueue, Current, &v31, 1);
    if ( v31 )
    {
      v7 = *((_QWORD *)v31 + 2);
      v36 = v7;
      v33 = v7;
      v8 = *(_QWORD *)(*(_QWORD *)(v7 + 16) + 16LL);
      if ( *(int *)(v8 + 2736) >= 0x2000 || *(_BYTE *)(v8 + 3036) )
      {
        v9 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 340);
        v34 = v9;
      }
      else
      {
        v9 = 0;
        v34 = 0;
      }
      v10 = *(struct _KEVENT **)(v7 + 16);
      if ( *(_DWORD *)(v7 + 464) == 2 )
      {
        if ( KeReadStateEvent(v10 + 5) )
          goto LABEL_13;
        v25 = v10 + 5;
      }
      else
      {
        if ( KeReadStateEvent(v10 + 4) )
        {
LABEL_13:
          if ( v9 )
          {
            KeEnterCriticalRegion();
            if ( (unsigned __int8)ExTryAcquirePushLockSharedEx(v7 + 144, 0LL) )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v7 + 160));
              v12 = 1;
            }
            else
            {
              KeLeaveCriticalRegion();
              v12 = 0;
            }
            if ( !v12 )
            {
              KeEnterCriticalRegion();
              DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v7 + 16) + 16LL));
              DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v7 + 144));
              DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v7 + 16) + 16LL));
              KeLeaveCriticalRegion();
            }
          }
          else
          {
            KeEnterCriticalRegion();
            if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v7 + 136), 0) )
            {
              DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v7 + 16) + 16LL));
              if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                McTemplateK0q_EtwWriteTransfer(v26, (__int64)&EventBlockThread, v27, 40);
              ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v7 + 136), 1u);
              DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v7 + 16) + 16LL));
            }
          }
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v37, v7, 0, v11, 0);
          if ( v47 )
          {
            if ( v44 )
            {
              WdLogSingleEntry5(0LL, 275LL, 4LL, v42, 0LL, 0LL);
              WdLogGlobalForLineNumber = 7628;
            }
            v20 = v43;
            if ( KeGetCurrentThread() != *((struct _KTHREAD **)v43 + 23) )
            {
              if ( !KeReadStateEvent((PRKEVENT)v43 + 2) )
              {
                if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                  McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventBlockThread, v22, 72);
                KeWaitForSingleObject((char *)v43 + 48, Executive, 0, 0, 0LL);
              }
              DXGADAPTER::AcquireCoreResourceShared(v43, 0LL);
              v20 = v43;
            }
            v45 = 0LL;
            v44 = 1;
            if ( *((_DWORD *)v20 + 50) != 1 )
              goto LABEL_44;
          }
          if ( v40 )
          {
            WdLogSingleEntry5(0LL, 275LL, 4LL, v38, 0LL, 0LL);
            WdLogGlobalForLineNumber = 7628;
          }
          if ( KeGetCurrentThread() != *((struct _KTHREAD **)v39 + 23) )
          {
            if ( !KeReadStateEvent((PRKEVENT)v39 + 2) )
            {
              if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventBlockThread, v14, 72);
              KeWaitForSingleObject((char *)v39 + 48, Executive, 0, 0, 0LL);
            }
            DXGADAPTER::AcquireCoreResourceShared(v39, 0LL);
          }
          v41 = 0LL;
          v40 = 1;
          if ( *(_DWORD *)(v46 + 608) == 1 )
          {
            v15 = DXGDEVICE::ReclaimAllocations((DXGDEVICE *)v7, v31, &v35, CurrentThreadPreviousMode == 1);
            if ( v15 >= 0 )
            {
              if ( CurrentThreadPreviousMode == 1 )
              {
                p_PagingFenceValue = &a1->PagingFenceValue;
                if ( (unsigned __int64)&a1->PagingFenceValue >= MmUserProbeAddress )
                  p_PagingFenceValue = (void *)MmUserProbeAddress;
                RtlCopyVolatileMemory(p_PagingFenceValue, &v35.PagingFenceValue, 8uLL);
              }
              else
              {
                a1->PagingFenceValue = v35.PagingFenceValue;
              }
            }
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v37);
            if ( v34 )
            {
              _InterlockedDecrement((volatile signed __int32 *)(v7 + 160));
              ExReleasePushLockSharedEx(v7 + 144, 0LL);
            }
            else
            {
              ExReleaseResourceLite(*(PERESOURCE *)(v7 + 136));
            }
            KeLeaveCriticalRegion();
            goto LABEL_33;
          }
          COREACCESS::Release((COREACCESS *)v38);
          if ( v47 )
LABEL_44:
            COREACCESS::Release((COREACCESS *)v42);
          v15 = -1073741130;
          WdLogSingleEntry2(3LL, v7, -1073741130LL);
          WdLogGlobalForLineNumber = 12462;
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v37);
          DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v33);
LABEL_33:
          DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v32);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
          if ( v30 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit, v18, v28);
          }
          return (unsigned int)v15;
        }
        v25 = v10 + 4;
      }
      KeWaitForSingleObject(v25, Executive, 0, 0, 0LL);
      goto LABEL_13;
    }
    WdLogSingleEntry2(3LL, v35.hPagingQueue, -1073741811LL);
    WdLogGlobalForLineNumber = 12446;
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v32);
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 12413;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
  if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v23, (__int64)&EventProfilerExit, v24, v28);
  return 3221225485LL;
}
