/*
 * XREFs of ?DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z @ 0x140353CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B8F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1400422B4 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?RemoveNtSharedAllocObject@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1400497A4 (-RemoveNtSharedAllocObject@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1401F41B4 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z.c)
 *     ?VmBusSendDestroyNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x14022A68C (-VmBusSendDestroyNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x140352CD4 (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 */

void __fastcall DxgkSharedAllocationObDeleteProcedure(struct _LIST_ENTRY *a1, __int64 a2, __int64 a3)
{
  struct _LIST_ENTRY *Flink; // rdi
  struct _LIST_ENTRY *Blink; // rsi
  struct _LIST_ENTRY *v6; // r14
  __int64 v7; // rcx
  __int64 v8; // r8
  PERESOURCE *v9; // rax
  struct DXGGLOBAL *Global; // rax
  int v11; // [rsp+20h] [rbp-79h] BYREF
  __int64 v12; // [rsp+28h] [rbp-71h]
  char v13; // [rsp+30h] [rbp-69h]
  _BYTE v14[88]; // [rsp+40h] [rbp-59h] BYREF
  DXGADAPTER *v15; // [rsp+98h] [rbp-1h]

  v11 = -1;
  v12 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v13 = 1;
    v11 = 16000;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 16000);
  }
  else
  {
    v13 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v11, 16000);
  Flink = a1[1].Flink;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v14, (struct DXGADAPTER *const)Flink[5].Flink[1].Flink, 0LL);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v15) )
    COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v14, 0LL);
  _InterlockedDecrement((volatile signed __int32 *)&Flink[4]);
  ADAPTER_RENDER::RemoveNtSharedAllocObject((ADAPTER_RENDER *)Flink[5].Flink, a1);
  Blink = a1[1].Blink;
  v6 = a1[2].Flink;
  if ( LODWORD(a1[2].Blink) )
  {
    Global = DXGGLOBAL::GetGlobal();
    DXG_GUEST_GLOBAL_VMBUS::VmBusSendDestroyNtSharedObject(*((DXG_GUEST_GLOBAL_VMBUS **)Global + 210), (int)a1[2].Blink);
    LODWORD(a1[2].Blink) = 0;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Flink[4].Flink + 1, 0xFFFFFFFF) == 1 )
    DXGSHAREDRESOURCE::Destroy((DXGSHAREDRESOURCE *)Flink, 0LL, 0);
  a1[1].Flink = 0LL;
  if ( Blink )
  {
    DXGKEYEDMUTEX::ReleaseReference((DXGKEYEDMUTEX *)Blink);
    a1[1].Blink = 0LL;
  }
  if ( v6 )
  {
    v9 = (PERESOURCE *)DXGGLOBAL::GetGlobal();
    DXGGLOBAL::DestroySyncObject(v9, (struct DXGSYNCOBJECT *)v6, 0, 0);
    a1[2].Flink = 0LL;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v14);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v11);
  if ( v13 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v7, (__int64)&EventProfilerExit, v8, v11);
  }
}
