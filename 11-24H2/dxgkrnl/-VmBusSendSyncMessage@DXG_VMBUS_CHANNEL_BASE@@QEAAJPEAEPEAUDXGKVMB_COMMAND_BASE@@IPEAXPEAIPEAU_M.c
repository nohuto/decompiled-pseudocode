/*
 * XREFs of ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x14022EE74
 * Callers:
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x14018462C (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPE.c)
 *     ?VmBusSendCreateNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAIPEAVDXGPROCESS@@IPEAVDXGSYNCOBJECT@@PEAVDXGDEVICESYNCOBJECT@@PEAVDXGRESOURCE@@@Z @ 0x140229844 (-VmBusSendCreateNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAIPEAVDXGPROCESS@@IPEAVDXGSYNCOBJECT@@.c)
 *     ?VmBusSendCreateProcess@DXG_GUEST_GLOBAL_VMBUS@@QEAAIPEAVDXGPROCESS@@PEBU_UNICODE_STRING@@@Z @ 0x140229BC0 (-VmBusSendCreateProcess@DXG_GUEST_GLOBAL_VMBUS@@QEAAIPEAVDXGPROCESS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?VmBusSendDestroyKeyedMutex@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z @ 0x14022A5B4 (-VmBusSendDestroyKeyedMutex@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z.c)
 *     ?VmBusSendDestroyNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x14022A68C (-VmBusSendDestroyNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z.c)
 *     ?VmBusSendDestroyProcess@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x14022A82C (-VmBusSendDestroyProcess@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z.c)
 *     ?VmBusSendDestroySyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z @ 0x14022A8F8 (-VmBusSendDestroySyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z.c)
 *     ?VmBusSendIsFeatureEnabled@DXG_GUEST_GLOBAL_VMBUS@@QEAAJW4_DXGK_FEATURE_ID@@PEAUDXGK_FEATURE_DESC@@PEAU_DXGK_ISFEATUREENABLED_RESULT@@@Z @ 0x14022C584 (-VmBusSendIsFeatureEnabled@DXG_GUEST_GLOBAL_VMBUS@@QEAAJW4_DXGK_FEATURE_ID@@PEAUDXGK_FEATURE_DES.c)
 *     ?VmBusSendNotifyProcessFreeze@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x14022CA28 (-VmBusSendNotifyProcessFreeze@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z.c)
 *     ?VmBusSendNotifyProcessThaw@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x14022CAF4 (-VmBusSendNotifyProcessThaw@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z.c)
 *     ?VmBusSendOpenKeyedMutex@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I@Z @ 0x14022D260 (-VmBusSendOpenKeyedMutex@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I@Z.c)
 *     ?VmBusSendOpmRequest@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@IIPEAXK1PEAK@Z @ 0x14022D49C (-VmBusSendOpmRequest@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@IIPEAXK1PEAK@Z.c)
 *     ?VmBusSendQueryEtwSession@DXG_GUEST_GLOBAL_VMBUS@@QEAA?AU_GUID@@XZ @ 0x14022DD58 (-VmBusSendQueryEtwSession@DXG_GUEST_GLOBAL_VMBUS@@QEAA-AU_GUID@@XZ.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x14022EE3C (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 *     ?VmBusSendUpdateMonitorMapping@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@I_NI@Z @ 0x14022F268 (-VmBusSendUpdateMonitorMapping@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@I_NI@Z.c)
 *     ?VmBusSendVsyncControl@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@IPEAX_N@Z @ 0x14022F3A4 (-VmBusSendVsyncControl@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@IPEAX_N@Z.c)
 *     ?VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYNCOBJECT@@PEAVDXGDEVICESYNCOBJECT@@IU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1403DF520 (-VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYN.c)
 *     ?VmBusSendAcquireKeyedMutexSync@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I_KHPEAT_LARGE_INTEGER@@PEA_K4@Z @ 0x1403DF7A8 (-VmBusSendAcquireKeyedMutexSync@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0pxqt_EtwWriteTransfer @ 0x140013278 (McTemplateK0pxqt_EtwWriteTransfer.c)
 *     ?CheckDebugBreak@DXGGLOBAL@@QEAAXXZ @ 0x140013980 (-CheckDebugBreak@DXGGLOBAL@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400456A8 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     McTemplateK0pxq_EtwWriteTransfer @ 0x14004C6F0 (McTemplateK0pxq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 */

__int64 __fastcall DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(
        struct _KTHREAD **this,
        unsigned __int8 *a2,
        struct DXGKVMB_COMMAND_BASE *a3,
        unsigned int a4,
        char *a5,
        unsigned int *a6)
{
  char v6; // r13
  char *v8; // r14
  __int64 v11; // r8
  unsigned int v12; // ebx
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int v17; // eax
  signed __int64 v18; // rcx
  bool v19; // zf
  const EVENT_DESCRIPTOR *v20; // rdx
  DXGGLOBAL *Global; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  const EVENT_DESCRIPTOR *v24; // rdx
  unsigned int v25; // eax
  unsigned int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // [rsp+28h] [rbp-89h]
  __int64 v30; // [rsp+28h] [rbp-89h]
  __int64 v31; // [rsp+30h] [rbp-81h]
  unsigned int v32; // [rsp+50h] [rbp-61h] BYREF
  unsigned int v33; // [rsp+54h] [rbp-5Dh]
  int v34; // [rsp+58h] [rbp-59h] BYREF
  __int64 v35; // [rsp+60h] [rbp-51h]
  char v36; // [rsp+68h] [rbp-49h]
  unsigned __int8 *v37; // [rsp+70h] [rbp-41h]
  void *v38; // [rsp+78h] [rbp-39h]
  _BYTE v39[24]; // [rsp+80h] [rbp-31h] BYREF
  char v40; // [rsp+98h] [rbp-19h] BYREF

  v34 = -1;
  v6 = 0;
  v8 = a5;
  v33 = a4;
  v37 = a2;
  v38 = a5;
  v35 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v36 = 1;
    v34 = 2136;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, (__int64)a3, 2136);
  }
  else
  {
    v36 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v34, 2136);
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v39, this + 2);
  if ( a4 < 0x18 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 15513;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"CommandSize >= sizeof(DXGKVMB_COMMAND_VGPU_TO_HOST)",
      15513LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( a6 )
    v12 = *a6;
  else
    v12 = 0;
  LODWORD(v13) = -1073741823;
  v32 = v12;
  if ( !this[1] )
  {
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v39);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
    if ( v36 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit, v15, v34);
    }
    return 3221226166LL;
  }
  if ( v33 - 24 <= 0x1FFE7 && v12 < 0x20000 )
  {
    if ( (v12 & 7) != 0 )
    {
      v17 = (v12 + 7) & 0xFFFFFFF8;
      v32 = v17;
      if ( v17 < v12 )
      {
        LODWORD(v13) = -1073741811;
        goto LABEL_45;
      }
      v8 = (char *)operator new[](v17, 0x4B677844u, 64LL);
      if ( !v8 )
      {
        LODWORD(v13) = -1073741801;
        goto LABEL_45;
      }
      v6 = 1;
    }
    else if ( !v12 )
    {
      v8 = &v40;
      v32 = 8;
    }
    v18 = _InterlockedIncrement64(&qword_140160C58);
    v19 = bTracingEnabled == 0;
    *(_QWORD *)a3 = v18;
    if ( !v19 )
    {
      if ( *((_BYTE *)a3 + 12) == 1 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) == 0 )
          goto LABEL_32;
        v20 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandGlobalBegin;
      }
      else
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) == 0 )
          goto LABEL_32;
        v20 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandBegin;
      }
      LODWORD(v29) = *((_DWORD *)a3 + 4);
      McTemplateK0pxq_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, v20, v11, this[1], v18, v29);
    }
LABEL_32:
    v13 = (int)((__int64 (__fastcall *)(struct _KTHREAD *, unsigned __int8 *, _QWORD, _QWORD, int, char *, unsigned int *, _QWORD))qword_140160400)(
                 this[1],
                 v37,
                 v33,
                 0LL,
                 1,
                 v8,
                 &v32,
                 0LL);
    Global = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::CheckDebugBreak(Global);
    if ( !bTracingEnabled )
      goto LABEL_39;
    if ( *((_BYTE *)a3 + 12) == 1 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) == 0 )
        goto LABEL_39;
      v24 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandGlobalEnd;
    }
    else
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) == 0 )
        goto LABEL_39;
      v24 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandEnd;
    }
    LODWORD(v31) = v13;
    LODWORD(v30) = *((_DWORD *)a3 + 4);
    McTemplateK0pxqt_EtwWriteTransfer(v22, v24, v23, this[1], *(_QWORD *)a3, v30, v31);
LABEL_39:
    if ( (int)v13 >= 0 )
    {
      if ( v6 )
      {
        v25 = v32;
        if ( v12 < v32 )
          v25 = v12;
        memmove(v38, v8, v25);
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, v13);
      WdLogGlobalForLineNumber = 15610;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"VmbChannelSendSynchronousRequest failed: 0x%I64x",
        v13,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
LABEL_45:
  if ( a6 )
  {
    v26 = 0;
    if ( (int)v13 >= 0 )
      v26 = v32;
    *a6 = v26;
  }
  if ( v6 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v8);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v39);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
  if ( v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v27, (__int64)&EventProfilerExit, v28, v34);
  return (unsigned int)v13;
}
