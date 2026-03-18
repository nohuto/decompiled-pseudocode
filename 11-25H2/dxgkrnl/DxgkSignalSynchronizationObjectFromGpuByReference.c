/*
 * XREFs of DxgkSignalSynchronizationObjectFromGpuByReference @ 0x140347AF0
 * Callers:
 *     ?SignalTokenSync@CAdapter@@UEAAJPEAX_K_N@Z @ 0x1400378D0 (-SignalTokenSync@CAdapter@@UEAAJPEAX_K_N@Z.c)
 *     ?AddSignalToContextByPtr@CAdapter@@UEAAJIPEAX_K@Z @ 0x140099140 (-AddSignalToContextByPtr@CAdapter@@UEAAJIPEAX_K@Z.c)
 *     ?IssueFlipManagerSignal@CAdapter@@QEAAJPEAUFlipManagerObject@@PEAXPEAU_KEVENT@@_K@Z @ 0x1400996B8 (-IssueFlipManagerSignal@CAdapter@@QEAAJPEAUFlipManagerObject@@PEAXPEAU_KEVENT@@_K@Z.c)
 *     ?VmBusSignalFenceNtSharedByRef@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140347810 (-VmBusSignalFenceNtSharedByRef@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140014A20 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14001DB80 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x14001DE10 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14001E4E8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x14002B720 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14002B770 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?VidSchSignalSyncObjectsFromGpu@VIDSCH_EXPORT@@QEAAJKPEAPEAUVIDSCH_HW_QUEUE@@KPEAPEAU_VIDSCH_CONTEXT@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KE@Z @ 0x14002CF20 (-VidSchSignalSyncObjectsFromGpu@VIDSCH_EXPORT@@QEAAJKPEAPEAUVIDSCH_HW_QUEUE@@KPEAPEAU_VIDSCH_CON.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002D5E0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x14002F800 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ?VidSchSubmitSignalToHwQueue@VIDSCH_EXPORT@@QEAAJKPEAPEAUVIDSCH_HW_QUEUE@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_K@Z @ 0x140039780 (-VidSchSubmitSignalToHwQueue@VIDSCH_EXPORT@@QEAAJKPEAPEAUVIDSCH_HW_QUEUE@@IPEAPEAU_VIDSCH_SYNC_O.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x140050100 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@PEAVDXGPAGINGQUEUE@@PEAE_N4@Z @ 0x14018061C (-GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@PE.c)
 *     ?VmBusSendSignalFenceNtSharedByRef@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@I_K@Z @ 0x14018355C (-VmBusSendSignalFenceNtSharedByRef@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTE.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A5D70 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1402FCB50 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectFromGpuByReference(
        DXGSYNCOBJECT *this,
        unsigned __int64 a2,
        unsigned int a3)
{
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v7; // rdi
  struct DXGTHREAD *Current; // rax
  struct DXGPROCESS *v9; // rsi
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  unsigned int v12; // eax
  __int64 v13; // rdx
  int v14; // ecx
  __int64 v15; // rdi
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  int v18; // ebx
  __int64 v19; // r9
  struct DXGGLOBAL *v20; // rax
  DXGSYNCOBJECT *v21; // rbx
  __int64 v22; // rax
  int DxgAdapterSyncObject; // eax
  __int64 v24; // r14
  struct ADAPTER_RENDER *v25; // rdx
  __int64 v26; // rcx
  int v27; // eax
  unsigned __int64 v29; // [rsp+50h] [rbp-B0h] BYREF
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v31[16]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v32[16]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v33[16]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v34; // [rsp+90h] [rbp-70h] BYREF
  char v35; // [rsp+98h] [rbp-68h]
  struct DXGADAPTERSYNCOBJECT *v36; // [rsp+A0h] [rbp-60h] BYREF
  struct VIDSCH_HW_QUEUE *v37; // [rsp+A8h] [rbp-58h] BYREF
  struct _VIDSCH_CONTEXT *v38; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v39[8]; // [rsp+B8h] [rbp-48h] BYREF
  char *v40; // [rsp+C0h] [rbp-40h]
  int v41; // [rsp+C8h] [rbp-38h]
  _BYTE v42[160]; // [rsp+D0h] [rbp-30h] BYREF

  v29 = a2;
  CurrentProcess = PsGetCurrentProcess(this);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v7 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) == 0 )
    goto LABEL_8;
  Current = DXGTHREAD::GetCurrent();
  if ( Current )
  {
    v9 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
    if ( v9 )
      goto LABEL_9;
    goto LABEL_8;
  }
  CurrentThread = KeGetCurrentThread();
  Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
  v9 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
  if ( !v9 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2925;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Failed to find DXGPROCESS", 2925LL, 0LL, 0LL, 0LL, 0LL);
LABEL_8:
    v9 = v7;
  }
LABEL_9:
  v41 = 0;
  v40 = (char *)v9 + 248;
  if ( v9 != (struct DXGPROCESS *)-248LL )
  {
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    if ( *((struct _KTHREAD **)v9 + 32) == KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1575;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
        1575LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v39);
  v12 = (a3 >> 6) & 0xFFFFFF;
  if ( v12 >= *((_DWORD *)v9 + 74) )
    goto LABEL_18;
  v13 = *((_QWORD *)v9 + 35);
  if ( ((a3 >> 25) & 0x60) != (*(_BYTE *)(v13 + 16LL * v12 + 8) & 0x60) )
    goto LABEL_18;
  if ( (*(_DWORD *)(v13 + 16LL * v12 + 8) & 0x2000) != 0 )
    goto LABEL_18;
  v14 = *(_DWORD *)(v13 + 16LL * v12 + 8) & 0x1F;
  if ( !v14 )
    goto LABEL_18;
  if ( v14 != 7 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_18:
    v15 = 0LL;
    goto LABEL_19;
  }
  v15 = *(_QWORD *)(v13 + 16LL * v12);
LABEL_19:
  v34 = v15;
  v35 = 0;
  if ( v15 )
  {
    _m_prefetchw((const void *)(v15 + 32));
    v16 = *(_QWORD *)(v15 + 32);
    do
    {
      if ( !v16 )
      {
        v15 = 0LL;
        v34 = 0LL;
        goto LABEL_25;
      }
      v17 = v16;
      v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 32), v16 + 1, v16);
    }
    while ( v17 != v16 );
    v15 = v34;
  }
LABEL_25:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v39);
  if ( v15 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v32,
      *(struct DXGDEVICE **)(v15 + 16));
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v42, *(_QWORD *)(v15 + 16), 0, v19, 0);
    v18 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v42, 0LL);
    if ( v18 < 0 )
    {
LABEL_46:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v42);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v32);
      goto LABEL_47;
    }
    v20 = DXGGLOBAL::GetGlobal();
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v31, v20, 0);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v31);
    if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*(ADAPTER_RENDER **)(*(_QWORD *)(v15 + 16) + 16LL)) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1407;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"pDxgContext->GetRenderCore()->IsCoreResourceSharedOwner()",
        1407LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (*((_DWORD *)v9 + 102) & 0x180) != 0 )
    {
      v21 = this;
    }
    else
    {
      v21 = *(DXGSYNCOBJECT **)this;
      if ( (*(_DWORD *)(*(_QWORD *)this + 412LL) & 2) != 0 )
      {
        v18 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalFenceNtSharedByRef(
                (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 16LL) + 16LL) + 4664LL),
                v9,
                (struct DXGCONTEXT *)v15,
                *((_DWORD *)this + 2),
                v29);
LABEL_45:
        DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v31);
        goto LABEL_46;
      }
    }
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v33, (DXGSYNCOBJECT *)((char *)v21 + 32), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v33);
    v22 = *(_QWORD *)(v15 + 16);
    v36 = 0LL;
    DxgAdapterSyncObject = DXGSYNCOBJECT::GetDxgAdapterSyncObject(
                             v21,
                             *(struct ADAPTER_RENDER **)(v22 + 16),
                             &v36,
                             0LL,
                             0LL,
                             0,
                             0);
    v24 = DxgAdapterSyncObject;
    v25 = *(struct ADAPTER_RENDER **)(*(_QWORD *)(v15 + 16) + 16LL);
    if ( DxgAdapterSyncObject < 0 )
    {
      WdLogSingleEntry3(2LL, v9, *((_QWORD *)v25 + 2), DxgAdapterSyncObject);
      v26 = *(_QWORD *)(v15 + 16);
      WdLogGlobalForLineNumber = 1450;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"0x%I64x failed, failed to create a sync object on logical adapter 0x%I64x returning 0x%I64x",
        (__int64)v9,
        *(_QWORD *)(*(_QWORD *)(v26 + 16) + 16LL),
        v24,
        0LL,
        0LL);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v33);
      DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v31);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v42);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v32);
      v18 = v24;
      goto LABEL_47;
    }
    VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(v21, v25);
    if ( !VidSchSyncObject )
    {
      WdLogSingleEntry1(2LL, v21);
      WdLogGlobalForLineNumber = 1461;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"0x%p sync object adapter state is destroyed, thus it cannot be signaled.",
        (__int64)v21,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v33);
      DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v31);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v42);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v32);
      v18 = -1073741811;
      goto LABEL_47;
    }
    if ( (*(_DWORD *)(v15 + 392) & 0x10) != 0 )
    {
      v37 = *(struct VIDSCH_HW_QUEUE **)(v15 + 288);
      v27 = VIDSCH_EXPORT::VidSchSubmitSignalToHwQueue(
              *(VIDSCH_EXPORT **)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 16LL) + 736LL),
              1u,
              &v37,
              1u,
              &VidSchSyncObject,
              0,
              &v29);
    }
    else
    {
      v38 = *(struct _VIDSCH_CONTEXT **)(v15 + 256);
      v27 = VIDSCH_EXPORT::VidSchSignalSyncObjectsFromGpu(
              *(VIDSCH_EXPORT **)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 16LL) + 736LL),
              0,
              0LL,
              1u,
              &v38,
              1u,
              &VidSchSyncObject,
              0,
              &v29,
              0);
    }
    v18 = v27;
    if ( v27 < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1501;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"NT_SUCCESS(ntStatus)", 1501LL, 0LL, 0LL, 0LL, 0LL);
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v33);
    goto LABEL_45;
  }
  v18 = -1073741811;
  WdLogSingleEntry3(2LL, v9, 0LL, -1073741811LL);
  WdLogGlobalForLineNumber = 1383;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"0x%I64x failed with invalid hContext 0x%I64x returning 0x%I64x",
    (__int64)v9,
    0LL,
    -1073741811LL,
    0LL,
    0LL);
LABEL_47:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v34);
  return (unsigned int)v18;
}
