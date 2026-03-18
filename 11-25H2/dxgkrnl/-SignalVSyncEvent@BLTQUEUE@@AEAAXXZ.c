/*
 * XREFs of ?SignalVSyncEvent@BLTQUEUE@@AEAAXXZ @ 0x140305090
 * Callers:
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x140304A00 (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x140013BA0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x140015A54 (McTemplateK0qqqqq_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?TriggerRemoteVsync@HOSTVMMONITORMAPPING@@QEAAXU_LUID@@IJ_K@Z @ 0x140037818 (-TriggerRemoteVsync@HOSTVMMONITORMAPPING@@QEAAXU_LUID@@IJ_K@Z.c)
 *     ?NumberOfVSyncWaiter@DXGADAPTER@@QEAAKI@Z @ 0x1400386F4 (-NumberOfVSyncWaiter@DXGADAPTER@@QEAAKI@Z.c)
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x14004CB54 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     McTemplateK0pqxqqipqx_EtwWriteTransfer @ 0x140055684 (McTemplateK0pqxqqipqx_EtwWriteTransfer.c)
 *     ?QuantizeVSync@BLTQUEUE@@QEAAXKPEA_J0@Z @ 0x140061AC0 (-QuantizeVSync@BLTQUEUE@@QEAAXKPEA_J0@Z.c)
 *     Feature_RemoteVsyncWaiterFix__private_IsEnabledDeviceUsageNoInline @ 0x140091F58 (Feature_RemoteVsyncWaiterFix__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0xqqiqqq_EtwWriteTransfer @ 0x140092494 (McTemplateK0xqqiqqq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?LogVsyncInterval@BLTQUEUE@@AEAAXT_LARGE_INTEGER@@0@Z @ 0x1403875F4 (-LogVsyncInterval@BLTQUEUE@@AEAAXT_LARGE_INTEGER@@0@Z.c)
 */

void __fastcall BLTQUEUE::SignalVSyncEvent(BLTQUEUE *this)
{
  LARGE_INTEGER v2; // rbx
  bool v3; // zf
  __int64 v4; // rcx
  __int64 v5; // r8
  struct DXGADAPTER *Adapter; // rax
  __int64 v7; // r10
  unsigned int v8; // r9d
  int v9; // ebp
  DXGADAPTER *v10; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v12; // rdx
  LARGE_INTEGER v13; // r8
  DXGADAPTER *v14; // rax
  struct DXGADAPTER *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  char v18[8]; // [rsp+20h] [rbp-78h]
  __int64 v19; // [rsp+28h] [rbp-70h]
  __int64 v20; // [rsp+38h] [rbp-60h]
  unsigned int v21; // [rsp+40h] [rbp-58h]
  _BYTE v22[8]; // [rsp+60h] [rbp-38h] BYREF
  DXGPUSHLOCK *v23; // [rsp+68h] [rbp-30h]
  int v24; // [rsp+70h] [rbp-28h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+A0h] [rbp+8h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v22, (struct _KTHREAD **)this + 53, 0);
  DXGPUSHLOCK::AcquireExclusive(v23);
  v24 = 2;
  PerformanceFrequency.QuadPart = 0LL;
  v2 = KeQueryPerformanceCounter(&PerformanceFrequency);
  BLTQUEUE::LogVsyncInterval(this, v2, PerformanceFrequency);
  v3 = *((_DWORD *)this + 34) == 1;
  *((LARGE_INTEGER *)this + 61) = v2;
  if ( !v3 )
  {
    BLTQUEUE::QuantizeVSync(this, 0, (__int64 *)&PerformanceFrequency, (__int64 *)this + 61);
    if ( *((_DWORD *)this + 103) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqqqq_EtwWriteTransfer(
          v4,
          &EventDWMVsyncSignal,
          v5,
          *((_DWORD *)this + 102),
          *((_DWORD *)this + 118),
          0,
          *((_DWORD *)this + 103),
          *((_DWORD *)this + 34));
      KePulseEvent(*((PRKEVENT *)this + 49), 0, 0);
      if ( *(_QWORD *)this )
      {
        DXGGLOBAL::GetGlobal();
        Adapter = DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this);
        HOSTVMMONITORMAPPING::TriggerRemoteVsync(
          (KSPIN_LOCK *)(v7 + 305232),
          *(struct _LUID *)((char *)Adapter + 412),
          *((_DWORD *)this + 65),
          0,
          0);
      }
    }
    if ( *((_QWORD *)this + 50) )
    {
      v8 = *((_DWORD *)this + 102);
      if ( v8 <= *((_DWORD *)this + 118) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v4, (__int64)&EventBltQueueSignalPrivateDwmVSync, v5, v8);
        KeSetEvent(*((PRKEVENT *)this + 50), 0, 0);
      }
    }
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v22);
  if ( *((_DWORD *)this + 34) != 2 && (*((_DWORD *)this + 250) & 2) != 0 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 16) + 48LL))(*((_QWORD *)this + 16));
  if ( (unsigned int)Feature_RemoteVsyncWaiterFix__private_IsEnabledDeviceUsageNoInline() )
  {
    v9 = *((_DWORD *)this + 103);
    if ( *(_QWORD *)this )
    {
      v10 = DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this);
      *((_DWORD *)this + 103) = *((_DWORD *)this + 738) + DXGADAPTER::NumberOfVSyncWaiter(v10, *((_DWORD *)this + 64));
    }
    else
    {
      *((_DWORD *)this + 103) = 0;
    }
    if ( bTracingEnabled )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
        {
          v21 = *((_DWORD *)this + 103);
          LODWORD(v20) = v9;
          LODWORD(v19) = *((_DWORD *)this + 64);
          *(_DWORD *)v18 = *((_DWORD *)this + 65);
          McTemplateK0xqqiqqq_EtwWriteTransfer(
            v21,
            v12.QuadPart,
            v13.QuadPart,
            *((_QWORD *)this + 31),
            *(_QWORD *)v18,
            v19,
            PerformanceCounter.QuadPart,
            v20,
            v21,
            *((_DWORD *)this + 104));
        }
      }
    }
  }
  else
  {
    if ( *(_QWORD *)this )
    {
      v14 = DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this);
      *((_DWORD *)this + 103) = *((_DWORD *)this + 738) + DXGADAPTER::NumberOfVSyncWaiter(v14, *((_DWORD *)this + 64));
    }
    if ( bTracingEnabled )
    {
      if ( *(_QWORD *)this )
      {
        KeQueryPerformanceCounter(0LL);
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
          {
            v15 = DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this);
            *(_DWORD *)v18 = *((_DWORD *)this + 65);
            McTemplateK0pqxqqipqx_EtwWriteTransfer(*(unsigned int *)v18, v16, v17, v15, *(_QWORD *)v18);
          }
        }
      }
    }
  }
}
