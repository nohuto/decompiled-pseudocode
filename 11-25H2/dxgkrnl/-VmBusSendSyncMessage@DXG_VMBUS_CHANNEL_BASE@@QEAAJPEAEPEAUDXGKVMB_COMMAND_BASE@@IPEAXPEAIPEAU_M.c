/*
 * XREFs of ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x140228588
 * Callers:
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x140182164 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPE.c)
 *     ?VmBusSendCreateNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAIPEAVDXGPROCESS@@IPEAVDXGSYNCOBJECT@@PEAVDXGDEVICESYNCOBJECT@@PEAVDXGRESOURCE@@@Z @ 0x140222F58 (-VmBusSendCreateNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAIPEAVDXGPROCESS@@IPEAVDXGSYNCOBJECT@@.c)
 *     ?VmBusSendCreateProcess@DXG_GUEST_GLOBAL_VMBUS@@QEAAIPEAVDXGPROCESS@@PEBU_UNICODE_STRING@@@Z @ 0x1402232D4 (-VmBusSendCreateProcess@DXG_GUEST_GLOBAL_VMBUS@@QEAAIPEAVDXGPROCESS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?VmBusSendDestroyKeyedMutex@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z @ 0x140223CC8 (-VmBusSendDestroyKeyedMutex@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z.c)
 *     ?VmBusSendDestroyNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x140223DA0 (-VmBusSendDestroyNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z.c)
 *     ?VmBusSendDestroyProcess@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x140223F40 (-VmBusSendDestroyProcess@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z.c)
 *     ?VmBusSendDestroySyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z @ 0x14022400C (-VmBusSendDestroySyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z.c)
 *     ?VmBusSendIsFeatureEnabled@DXG_GUEST_GLOBAL_VMBUS@@QEAAJW4_DXGK_FEATURE_ID@@PEAUDXGK_FEATURE_DESC@@PEAU_DXGK_ISFEATUREENABLED_RESULT@@@Z @ 0x140225C98 (-VmBusSendIsFeatureEnabled@DXG_GUEST_GLOBAL_VMBUS@@QEAAJW4_DXGK_FEATURE_ID@@PEAUDXGK_FEATURE_DES.c)
 *     ?VmBusSendNotifyProcessFreeze@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x14022613C (-VmBusSendNotifyProcessFreeze@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z.c)
 *     ?VmBusSendNotifyProcessThaw@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x140226208 (-VmBusSendNotifyProcessThaw@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z.c)
 *     ?VmBusSendOpenKeyedMutex@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I@Z @ 0x140226974 (-VmBusSendOpenKeyedMutex@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I@Z.c)
 *     ?VmBusSendOpmRequest@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@IIPEAXK1PEAK@Z @ 0x140226BB0 (-VmBusSendOpmRequest@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@IIPEAXK1PEAK@Z.c)
 *     ?VmBusSendQueryEtwSession@DXG_GUEST_GLOBAL_VMBUS@@QEAA?AU_GUID@@XZ @ 0x14022746C (-VmBusSendQueryEtwSession@DXG_GUEST_GLOBAL_VMBUS@@QEAA-AU_GUID@@XZ.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x140228550 (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 *     ?VmBusSendUpdateMonitorMapping@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@I_NI@Z @ 0x14022897C (-VmBusSendUpdateMonitorMapping@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@I_NI@Z.c)
 *     ?VmBusSendVsyncControl@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@IPEAX_N@Z @ 0x140228AB8 (-VmBusSendVsyncControl@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@IPEAX_N@Z.c)
 *     ?VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYNCOBJECT@@PEAVDXGDEVICESYNCOBJECT@@IU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1402F9478 (-VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYN.c)
 *     ?VmBusSendAcquireKeyedMutexSync@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I_KHPEAT_LARGE_INTEGER@@PEA_K4@Z @ 0x1402F9700 (-VmBusSendAcquireKeyedMutexSync@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140013C98 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0pxqt_EtwWriteTransfer @ 0x140016478 (McTemplateK0pxqt_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?CheckDebugBreak@DXGGLOBAL@@QEAAXXZ @ 0x14001F970 (-CheckDebugBreak@DXGGLOBAL@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0pxq_EtwWriteTransfer @ 0x14004CC40 (McTemplateK0pxq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
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
  __int64 v12; // r9
  unsigned int v13; // ebx
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int v18; // eax
  signed __int64 v19; // rcx
  bool v20; // zf
  const EVENT_DESCRIPTOR *v21; // rdx
  DXGGLOBAL *Global; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  const EVENT_DESCRIPTOR *v25; // rdx
  unsigned int v26; // eax
  unsigned int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // [rsp+28h] [rbp-89h]
  __int64 v31; // [rsp+28h] [rbp-89h]
  __int64 v32; // [rsp+30h] [rbp-81h]
  unsigned int v33; // [rsp+50h] [rbp-61h] BYREF
  unsigned int v34; // [rsp+54h] [rbp-5Dh]
  int v35; // [rsp+58h] [rbp-59h] BYREF
  __int64 v36; // [rsp+60h] [rbp-51h]
  char v37; // [rsp+68h] [rbp-49h]
  unsigned __int8 *v38; // [rsp+70h] [rbp-41h]
  void *v39; // [rsp+78h] [rbp-39h]
  _BYTE v40[24]; // [rsp+80h] [rbp-31h] BYREF
  char v41; // [rsp+98h] [rbp-19h] BYREF

  v35 = -1;
  v6 = 0;
  v8 = a5;
  v34 = a4;
  v38 = a2;
  v39 = a5;
  v36 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v37 = 1;
    v35 = 2136;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, (__int64)a3, 2136);
  }
  else
  {
    v37 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v35, 2136);
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v40, this + 2);
  if ( a4 < 0x18 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 15325;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"CommandSize >= sizeof(DXGKVMB_COMMAND_VGPU_TO_HOST)",
      15325LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( a6 )
    v13 = *a6;
  else
    v13 = 0;
  LODWORD(v14) = -1073741823;
  v33 = v13;
  if ( !this[1] )
  {
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v40);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
    if ( v37 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit, v16, v35);
    }
    return 3221226166LL;
  }
  if ( v34 - 24 <= 0x1FFE7 && v13 < 0x20000 )
  {
    if ( (v13 & 7) != 0 )
    {
      v18 = (v13 + 7) & 0xFFFFFFF8;
      v33 = v18;
      if ( v18 < v13 )
      {
        LODWORD(v14) = -1073741811;
        goto LABEL_45;
      }
      v8 = (char *)operator new[](v18, 0x4B677844u, 64LL, v12);
      if ( !v8 )
      {
        LODWORD(v14) = -1073741801;
        goto LABEL_45;
      }
      v6 = 1;
    }
    else if ( !v13 )
    {
      v8 = &v41;
      v33 = 8;
    }
    v19 = _InterlockedIncrement64(&qword_14015DC70);
    v20 = bTracingEnabled == 0;
    *(_QWORD *)a3 = v19;
    if ( !v20 )
    {
      if ( *((_BYTE *)a3 + 12) == 1 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) == 0 )
          goto LABEL_32;
        v21 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandGlobalBegin;
      }
      else
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) == 0 )
          goto LABEL_32;
        v21 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandBegin;
      }
      LODWORD(v30) = *((_DWORD *)a3 + 4);
      McTemplateK0pxq_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, v21, v11, this[1], v19, v30);
    }
LABEL_32:
    v14 = (int)((__int64 (__fastcall *)(struct _KTHREAD *, unsigned __int8 *, _QWORD, _QWORD, int, char *, unsigned int *, _QWORD))qword_14015D3E0)(
                 this[1],
                 v38,
                 v34,
                 0LL,
                 1,
                 v8,
                 &v33,
                 0LL);
    Global = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::CheckDebugBreak(Global);
    if ( !bTracingEnabled )
      goto LABEL_39;
    if ( *((_BYTE *)a3 + 12) == 1 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) == 0 )
        goto LABEL_39;
      v25 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandGlobalEnd;
    }
    else
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) == 0 )
        goto LABEL_39;
      v25 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandEnd;
    }
    LODWORD(v32) = v14;
    LODWORD(v31) = *((_DWORD *)a3 + 4);
    McTemplateK0pxqt_EtwWriteTransfer(v23, v25, v24, this[1], *(_QWORD *)a3, v31, v32);
LABEL_39:
    if ( (int)v14 >= 0 )
    {
      if ( v6 )
      {
        v26 = v33;
        if ( v13 < v33 )
          v26 = v13;
        memmove(v39, v8, v26);
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, v14);
      WdLogGlobalForLineNumber = 15422;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"VmbChannelSendSynchronousRequest failed: 0x%I64x",
        v14,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
LABEL_45:
  if ( a6 )
  {
    v27 = 0;
    if ( (int)v14 >= 0 )
      v27 = v33;
    *a6 = v27;
  }
  if ( v6 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v8);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v40);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
  if ( v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v28, (__int64)&EventProfilerExit, v29, v35);
  return (unsigned int)v14;
}
