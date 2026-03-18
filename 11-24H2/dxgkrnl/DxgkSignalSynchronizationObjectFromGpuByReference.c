/*
 * XREFs of DxgkSignalSynchronizationObjectFromGpuByReference @ 0x1403E7E60
 * Callers:
 *     ?SignalTokenSync@CAdapter@@UEAAJPEAX_K_N@Z @ 0x140037170 (-SignalTokenSync@CAdapter@@UEAAJPEAX_K_N@Z.c)
 *     ?AddSignalToContextByPtr@CAdapter@@UEAAJIPEAX_K@Z @ 0x14009B290 (-AddSignalToContextByPtr@CAdapter@@UEAAJIPEAX_K@Z.c)
 *     ?IssueFlipManagerSignal@CAdapter@@QEAAJPEAUFlipManagerObject@@PEAXPEAU_KEVENT@@_K@Z @ 0x14009B808 (-IssueFlipManagerSignal@CAdapter@@QEAAJPEAUFlipManagerObject@@PEAXPEAU_KEVENT@@_K@Z.c)
 *     ?VmBusSignalFenceNtSharedByRef@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1403E7B90 (-VmBusSignalFenceNtSharedByRef@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14000E5A0 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x14000E830 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14000EF08 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x140023750 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x14002BEA0 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14002BEF0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?VidSchSignalSyncObjectsFromGpu@VIDSCH_EXPORT@@QEAAJKPEAPEAUVIDSCH_HW_QUEUE@@KPEAPEAU_VIDSCH_CONTEXT@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KE@Z @ 0x14002D620 (-VidSchSignalSyncObjectsFromGpu@VIDSCH_EXPORT@@QEAAJKPEAPEAUVIDSCH_HW_QUEUE@@KPEAPEAU_VIDSCH_CON.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002DD50 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x14002FE40 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ?VidSchSubmitSignalToHwQueue@VIDSCH_EXPORT@@QEAAJKPEAPEAUVIDSCH_HW_QUEUE@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_K@Z @ 0x140039410 (-VidSchSubmitSignalToHwQueue@VIDSCH_EXPORT@@QEAAJKPEAPEAUVIDSCH_HW_QUEUE@@IPEAPEAU_VIDSCH_SYNC_O.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@PEAVDXGPAGINGQUEUE@@PEAE_N4@Z @ 0x140183008 (-GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@PE.c)
 *     ?VmBusSendSignalFenceNtSharedByRef@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@I_K@Z @ 0x1401858AC (-VmBusSendSignalFenceNtSharedByRef@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTE.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1402B3760 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectFromGpuByReference(int *a1, unsigned __int64 a2, unsigned int a3)
{
  struct DXGPROCESS *Current; // r14
  struct DXGCONTEXT *v6; // rdi
  int v7; // ebx
  __int64 v8; // r9
  struct DXGGLOBAL *Global; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  int DxgAdapterSyncObject; // eax
  __int64 v13; // rdx
  __int64 v14; // r15
  __int64 v15; // rax
  int v16; // eax
  unsigned __int64 v18; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v19[16]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v20[16]; // [rsp+68h] [rbp-98h] BYREF
  struct DXGCONTEXT *v21; // [rsp+78h] [rbp-88h] BYREF
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v23[16]; // [rsp+88h] [rbp-78h] BYREF
  struct DXGADAPTERSYNCOBJECT *v24; // [rsp+98h] [rbp-68h] BYREF
  struct VIDSCH_HW_QUEUE *v25; // [rsp+A0h] [rbp-60h] BYREF
  struct _VIDSCH_CONTEXT *v26; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v27[16]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v28[160]; // [rsp+C0h] [rbp-40h] BYREF

  v18 = a2;
  v21 = 0LL;
  Current = DXGPROCESS::GetCurrent((__int64)a1);
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v27, a3, (struct _KTHREAD **)Current, &v21, 0, 1);
  v6 = v21;
  if ( v21 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v20,
      *((struct DXGDEVICE **)v21 + 2));
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v28, *((_QWORD *)v6 + 2), 0, v8, 0);
    v7 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v28, 0LL);
    if ( v7 < 0 )
    {
LABEL_25:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v28);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v20);
      goto LABEL_26;
    }
    Global = DXGGLOBAL::GetGlobal();
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v19, Global, 0);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v19);
    if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*(ADAPTER_RENDER **)(*((_QWORD *)v6 + 2) + 16LL)) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1397;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"pDxgContext->GetRenderCore()->IsCoreResourceSharedOwner()",
        1397LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (*((_DWORD *)Current + 102) & 0x180) != 0 )
    {
      v10 = (__int64)a1;
    }
    else
    {
      v10 = *(_QWORD *)a1;
      if ( (*(_DWORD *)(*(_QWORD *)a1 + 412LL) & 2) != 0 )
      {
        if ( *((_BYTE *)v6 + 434) )
        {
          v7 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalFenceNtSharedByRef(
                 (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) + 16LL) + 4664LL),
                 Current,
                 v6,
                 a1[2],
                 v18);
LABEL_24:
          DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v19);
          goto LABEL_25;
        }
        goto LABEL_11;
      }
      if ( *((_BYTE *)v6 + 434) )
      {
LABEL_11:
        WdLogSingleEntry2(2LL, *(_QWORD *)a1, v6);
        WdLogGlobalForLineNumber = 1419;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Sync object and context must both be paravirtualized, sync object: 0x%I64x, context: 0x%I64x",
          v10,
          (__int64)v6,
          0LL,
          0LL,
          0LL);
        goto LABEL_12;
      }
    }
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, (struct DXGFASTMUTEX *const)(v10 + 32), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
    v11 = *((_QWORD *)v6 + 2);
    v24 = 0LL;
    DxgAdapterSyncObject = DXGSYNCOBJECT::GetDxgAdapterSyncObject(
                             (DXGSYNCOBJECT *)v10,
                             *(struct ADAPTER_RENDER **)(v11 + 16),
                             &v24,
                             0LL,
                             0LL,
                             0,
                             0);
    v13 = *((_QWORD *)v6 + 2);
    v14 = DxgAdapterSyncObject;
    if ( DxgAdapterSyncObject < 0 )
    {
      WdLogSingleEntry3(2LL, Current, *(_QWORD *)(*(_QWORD *)(v13 + 16) + 16LL), DxgAdapterSyncObject);
      v15 = *(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL);
      WdLogGlobalForLineNumber = 1450;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"0x%I64x failed, failed to create a sync object on logical adapter 0x%I64x returning 0x%I64x",
        (__int64)Current,
        *(_QWORD *)(v15 + 16),
        v14,
        0LL,
        0LL);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v23);
      DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v19);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v28);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v20);
      v7 = v14;
      goto LABEL_26;
    }
    VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject((DXGSYNCOBJECT *)v10, *(struct ADAPTER_RENDER **)(v13 + 16));
    if ( VidSchSyncObject )
    {
      if ( (*((_DWORD *)v6 + 98) & 0x10) != 0 )
      {
        v25 = (struct VIDSCH_HW_QUEUE *)*((_QWORD *)v6 + 36);
        v16 = VIDSCH_EXPORT::VidSchSubmitSignalToHwQueue(
                *(VIDSCH_EXPORT **)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) + 736LL),
                1u,
                &v25,
                1u,
                &VidSchSyncObject,
                0,
                &v18);
      }
      else
      {
        v26 = (struct _VIDSCH_CONTEXT *)*((_QWORD *)v6 + 32);
        v16 = VIDSCH_EXPORT::VidSchSignalSyncObjectsFromGpu(
                *(VIDSCH_EXPORT **)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) + 736LL),
                0,
                0LL,
                1u,
                &v26,
                1u,
                &VidSchSyncObject,
                0,
                &v18,
                0);
      }
      v7 = v16;
      if ( v16 < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1501;
        DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"NT_SUCCESS(ntStatus)", 1501LL, 0LL, 0LL, 0LL, 0LL);
      }
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v23);
      goto LABEL_24;
    }
    WdLogSingleEntry1(2LL, v10);
    WdLogGlobalForLineNumber = 1461;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"0x%p sync object adapter state is destroyed, thus it cannot be signaled.",
      v10,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v23);
LABEL_12:
    DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v19);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v28);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v20);
    v7 = -1073741811;
    goto LABEL_26;
  }
  v7 = -1073741811;
  WdLogSingleEntry3(2LL, Current, 0LL, -1073741811LL);
  WdLogGlobalForLineNumber = 1373;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"0x%I64x failed with invalid hContext 0x%I64x returning 0x%I64x",
    (__int64)Current,
    0LL,
    -1073741811LL,
    0LL,
    0LL);
LABEL_26:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v27);
  return (unsigned int)v7;
}
