/*
 * XREFs of ?DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@_N@Z @ 0x14019ACC8
 * Callers:
 *     ?DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z @ 0x1401A8AE0 (-DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z.c)
 *     DxgkSetIndirectDisplayRenderAdapter @ 0x1401AD31C (DxgkSetIndirectDisplayRenderAdapter.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14001EE2C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x140041DBC (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x140052068 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@PEAVDXGADAPTER@@E@Z @ 0x14019DA2C (-StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@PEAVDXGADAPTER@@E@Z.c)
 */

void __fastcall ADAPTER_RENDER::DisconnectFromDisplayAdapters(ADAPTER_RENDER *this, struct DXGADAPTER *a2, char a3)
{
  unsigned int v3; // esi
  struct _LUID *v7; // rdx
  ADAPTER_DISPLAY *v8; // rax
  unsigned int i; // edi
  PVOID v10; // rcx
  struct _IO_WORKITEM *WorkItem; // rax
  PVOID Context[2]; // [rsp+50h] [rbp-C8h] BYREF
  _BYTE v13[144]; // [rsp+60h] [rbp-B8h] BYREF

  v3 = -1;
  if ( a2 && *(struct _KTHREAD **)(*((_QWORD *)a2 + 390) + 176LL) != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5226;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"(pDisplayDevice == NULL) || pDisplayDevice->GetDisplayCore()->GetChangePairedAdapterLock()->IsOwner()",
      5226LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  if ( *((struct _KTHREAD **)this + 4) != KeGetCurrentThread() )
    goto LABEL_9;
  if ( !(unsigned int)Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( *((struct _KTHREAD **)this + 7) == KeGetCurrentThread() )
      goto LABEL_10;
    goto LABEL_9;
  }
  if ( *((struct _KTHREAD **)this + 7) != KeGetCurrentThread() )
  {
LABEL_9:
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5227;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"m_DeviceCreationLock.IsExclusiveOwner() && m_DeviceCreationLockCdd.IsExclusiveOwner()",
      5227LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
LABEL_10:
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v13, *((struct DXGADAPTER *const *)this + 2), a2);
  if ( (int)COREADAPTERACCESS::AcquireExclusive((__int64)v13, 1u, 0) >= 0 )
  {
    ADAPTER_RENDER::StopDisplayDevices(this, 2LL, a2);
    ADAPTER_RENDER::StopDisplayDevices(this, 1LL, a2);
    if ( a2 )
      *(_BYTE *)(*((_QWORD *)a2 + 390) + 288LL) = 1;
  }
  if ( a3 )
  {
    v8 = (ADAPTER_DISPLAY *)*((_QWORD *)a2 + 390);
    for ( i = 0; i < *((_DWORD *)v8 + 24); ++i )
    {
      if ( ADAPTER_DISPLAY::IsPartOfDesktop(v8, i) )
        break;
      v8 = (ADAPTER_DISPLAY *)*((_QWORD *)a2 + 390);
    }
    if ( i < *(_DWORD *)(*((_QWORD *)a2 + 390) + 96LL) )
    {
      Context[0] = 0LL;
      DXGADAPTER::IsAdapterSessionized(a2, v7, 0LL, (unsigned __int64 *)Context);
      v10 = Context[0];
      if ( Context[0] == (PVOID)0x200000000LL )
        v10 = (PVOID)*(unsigned int *)(*((_QWORD *)DXGGLOBAL::GetGlobal() + 118) + 144LL);
      if ( v10 != (PVOID)0x100000000LL )
        v3 = (unsigned int)v10;
      WorkItem = IoAllocateWorkItem(*((PDEVICE_OBJECT *)a2 + 27));
      if ( WorkItem )
        IoQueueWorkItemEx(WorkItem, DisconnectFromDisplayAdaptersWorkItem, DelayedWorkQueue, (PVOID)v3);
    }
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v13);
}
