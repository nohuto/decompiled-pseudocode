/*
 * XREFs of ?SignalVSyncEvent@BLTQUEUE@@AEAAXXZ @ 0x14005E2E4
 * Callers:
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x140430240 (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x140012854 (McTemplateK0qqqqq_EtwWriteTransfer.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x140022C10 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOSPINLOCK@@QEAAXXZ @ 0x140033AB4 (-Acquire@DXGAUTOSPINLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOSPINLOCK@@QEAA@XZ @ 0x1400354BC (--1DXGAUTOSPINLOCK@@QEAA@XZ.c)
 *     ?TriggerRemoteVsync@HOSTVMMONITORMAPPING@@QEAAXU_LUID@@IJ_K@Z @ 0x1400374A0 (-TriggerRemoteVsync@HOSTVMMONITORMAPPING@@QEAAXU_LUID@@IJ_K@Z.c)
 *     ?NumberOfVSyncWaiter@DXGADAPTER@@QEAAKI@Z @ 0x140038380 (-NumberOfVSyncWaiter@DXGADAPTER@@QEAAKI@Z.c)
 *     ?LogVsyncInterval@BLTQUEUE@@AEAAXT_LARGE_INTEGER@@0@Z @ 0x1400389A0 (-LogVsyncInterval@BLTQUEUE@@AEAAXT_LARGE_INTEGER@@0@Z.c)
 *     ?QuantizeVSync@BLTQUEUE@@QEAAXKPEA_J0@Z @ 0x14006237C (-QuantizeVSync@BLTQUEUE@@QEAAXKPEA_J0@Z.c)
 *     Feature_DodVsyncEnsureLocked__private_IsEnabledDeviceUsageNoInline @ 0x140094360 (Feature_DodVsyncEnsureLocked__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline @ 0x140094408 (Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0xqqiqqq_EtwWriteTransfer @ 0x140094944 (McTemplateK0xqqiqqq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

void __fastcall BLTQUEUE::SignalVSyncEvent(BLTQUEUE *this)
{
  __int64 v2; // rbx
  __int64 v3; // r9
  _DWORD *v4; // rbx
  unsigned int v5; // esi
  __int64 v6; // rcx
  __int64 v7; // r8
  struct DXGGLOBAL *Global; // rax
  unsigned int v9; // r9d
  bool v10; // cc
  LARGE_INTEGER v11; // rbx
  __int64 v12; // r9
  bool v13; // zf
  struct DXGGLOBAL *v14; // rax
  int v15; // r14d
  char LowPart; // al
  int v17; // edx
  int v18; // r8d
  _BYTE v19[8]; // [rsp+50h] [rbp-19h] BYREF
  DXGPUSHLOCK *v20; // [rsp+58h] [rbp-11h]
  int v21; // [rsp+60h] [rbp-9h]
  _BYTE v22[8]; // [rsp+68h] [rbp-1h] BYREF
  char *v23; // [rsp+70h] [rbp+7h]
  char v24; // [rsp+90h] [rbp+27h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+D0h] [rbp+67h] BYREF
  union _LARGE_INTEGER v26; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 QuadPart; // [rsp+E0h] [rbp+77h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v19, (struct _KTHREAD **)this + 53, 0);
  DXGPUSHLOCK::AcquireExclusive(v20);
  v21 = 2;
  if ( (unsigned int)Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline() )
  {
    v24 = 0;
    v23 = (char *)this + 456;
    if ( (unsigned int)Feature_DodVsyncEnsureLocked__private_IsEnabledDeviceUsageNoInline() )
      DXGAUTOSPINLOCK::Acquire((DXGAUTOSPINLOCK *)v22);
    PerformanceFrequency.QuadPart = 0LL;
    QuadPart = KeQueryPerformanceCounter(&PerformanceFrequency).QuadPart;
    v2 = QuadPart;
    BLTQUEUE::LogVsyncInterval(this, (union _LARGE_INTEGER)QuadPart, PerformanceFrequency, v3);
    *((_QWORD *)this + 61) = v2;
    v4 = (_DWORD *)((char *)this + 136);
    if ( *((_DWORD *)this + 34) != 1 )
    {
      if ( (unsigned int)Feature_DodVsyncEnsureLocked__private_IsEnabledDeviceUsageNoInline() )
        DXGAUTOSPINLOCK::~DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v22);
      BLTQUEUE::QuantizeVSync(this, 0, (__int64 *)&PerformanceFrequency, &QuadPart);
      if ( (unsigned int)Feature_DodVsyncEnsureLocked__private_IsEnabledDeviceUsageNoInline() )
        DXGAUTOSPINLOCK::Acquire((DXGAUTOSPINLOCK *)v22);
    }
    v5 = *((_DWORD *)this + 118);
    DXGAUTOSPINLOCK::~DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v22);
    if ( *v4 != 1 )
    {
      if ( *((_DWORD *)this + 103) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0qqqqq_EtwWriteTransfer(
            v6,
            &EventDWMVsyncSignal,
            v7,
            *((_DWORD *)this + 102),
            v5,
            0,
            *((_DWORD *)this + 103),
            *v4);
        KePulseEvent(*((PRKEVENT *)this + 49), 0, 0);
        if ( *(_QWORD *)this )
        {
          Global = DXGGLOBAL::GetGlobal();
          HOSTVMMONITORMAPPING::TriggerRemoteVsync(
            (KSPIN_LOCK *)Global + 38164,
            *(struct _LUID *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 88LL) + 16LL) + 412LL),
            *((_DWORD *)this + 65),
            0,
            0);
        }
      }
      if ( *((_QWORD *)this + 50) )
      {
        v9 = *((_DWORD *)this + 102);
        v10 = v9 <= v5;
        goto LABEL_27;
      }
    }
  }
  else
  {
    v26.QuadPart = 0LL;
    v11 = KeQueryPerformanceCounter(&v26);
    BLTQUEUE::LogVsyncInterval(this, v11, v26, v12);
    v13 = *((_DWORD *)this + 34) == 1;
    *((LARGE_INTEGER *)this + 61) = v11;
    v4 = (_DWORD *)((char *)this + 136);
    if ( !v13 )
    {
      BLTQUEUE::QuantizeVSync(this, 0, (__int64 *)&v26, (__int64 *)this + 61);
      if ( *((_DWORD *)this + 103) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0qqqqq_EtwWriteTransfer(
            v6,
            &EventDWMVsyncSignal,
            v7,
            *((_DWORD *)this + 102),
            *((_DWORD *)this + 118),
            0,
            *((_DWORD *)this + 103),
            *((_DWORD *)this + 34));
        KePulseEvent(*((PRKEVENT *)this + 49), 0, 0);
        if ( *(_QWORD *)this )
        {
          v14 = DXGGLOBAL::GetGlobal();
          HOSTVMMONITORMAPPING::TriggerRemoteVsync(
            (KSPIN_LOCK *)v14 + 38164,
            *(struct _LUID *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 88LL) + 16LL) + 412LL),
            *((_DWORD *)this + 65),
            0,
            0);
        }
      }
      if ( *((_QWORD *)this + 50) )
      {
        v9 = *((_DWORD *)this + 102);
        v10 = v9 <= *((_DWORD *)this + 118);
LABEL_27:
        if ( v10 )
        {
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v6, (__int64)&EventBltQueueSignalPrivateDwmVSync, v7, v9);
          KeSetEvent(*((PRKEVENT *)this + 50), 0, 0);
        }
      }
    }
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v19);
  if ( *v4 != 2 && (*((_DWORD *)this + 268) & 2) != 0 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 16) + 48LL))(*((_QWORD *)this + 16));
  v15 = *((_DWORD *)this + 103);
  if ( *(_QWORD *)this )
    *((_DWORD *)this + 103) = *((_DWORD *)this + 756)
                            + DXGADAPTER::NumberOfVSyncWaiter(
                                *(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)this + 88LL) + 16LL),
                                *((_DWORD *)this + 64));
  else
    *((_DWORD *)this + 103) = 0;
  if ( bTracingEnabled )
  {
    LowPart = KeQueryPerformanceCounter(0LL).LowPart;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
        McTemplateK0xqqiqqq_EtwWriteTransfer(
          *((_DWORD *)this + 103),
          v17,
          v18,
          *((_QWORD *)this + 31),
          *((_DWORD *)this + 65),
          *((_DWORD *)this + 64),
          LowPart,
          v15,
          *((_DWORD *)this + 103),
          *((_DWORD *)this + 104));
    }
  }
}
