/*
 * XREFs of ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1403A35BC
 * Callers:
 *     ?DxgkReportGlobalState@@YAXXZ @ 0x1403A359C (-DxgkReportGlobalState@@YAXXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14000F84C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1400105C8 (McTemplateK0_EtwWriteTransfer.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14002BEF0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002DD50 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002DE40 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z @ 0x140072E4C (--0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z.c)
 *     ??1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ @ 0x1400730D4 (--1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ @ 0x1400732F4 (-AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ.c)
 *     McTemplateK0j_EtwWriteTransfer @ 0x140073AE0 (McTemplateK0j_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?ReportVirtualMachine@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1401ED5EC (-ReportVirtualMachine@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 *     ?VmBusSendQueryEtwSession@DXG_GUEST_GLOBAL_VMBUS@@QEAA?AU_GUID@@XZ @ 0x14022DD58 (-VmBusSendQueryEtwSession@DXG_GUEST_GLOBAL_VMBUS@@QEAA-AU_GUID@@XZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1402C84A8 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?ReportAdapterObjectState@DXGADAPTERSYNCOBJECT@@QEAAXPEAVDXGSYNCOBJECT@@@Z @ 0x1403A38DC (-ReportAdapterObjectState@DXGADAPTERSYNCOBJECT@@QEAAXPEAVDXGSYNCOBJECT@@@Z.c)
 *     ?ReportProcess@DXGPROCESS@@QEAAXXZ @ 0x1403A3C34 (-ReportProcess@DXGPROCESS@@QEAAXXZ.c)
 *     ?ReportState@DXGSYNCOBJECTCA@@QEAAXXZ @ 0x1403A3D34 (-ReportState@DXGSYNCOBJECTCA@@QEAAXXZ.c)
 *     ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1403A3D80 (-ReportState@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsVmConnectedToHost@DXGGLOBAL@@QEBAEXZ @ 0x1403A4510 (-IsVmConnectedToHost@DXGGLOBAL@@QEBAEXZ.c)
 */

void __fastcall DXGGLOBAL::ReportState(DXGGLOBAL *this)
{
  volatile signed __int32 *v2; // rdi
  DXGGLOBAL *i; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  DXGGLOBAL *j; // rbx
  DXGGLOBAL *v7; // rdi
  DXGGLOBAL *v8; // rbx
  DXGGLOBAL *v9; // rdi
  DXGGLOBAL *v10; // rbx
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r8
  struct DXGGLOBAL *Global; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  _BYTE v20[16]; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v21[16]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v22[16]; // [rsp+40h] [rbp-C0h] BYREF
  DXGADAPTERLISTLOCK *v23[2]; // [rsp+50h] [rbp-B0h] BYREF
  struct _GUID v24; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v25[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (volatile signed __int32 *)((char *)this + 432);
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v2, 0LL);
  _InterlockedIncrement(v2 + 4);
  for ( i = (DXGGLOBAL *)*((_QWORD *)this + 52);
        i != (DXGGLOBAL *)((char *)this + 416) && i && i != (DXGGLOBAL *)8;
        i = *(DXGGLOBAL **)i )
  {
    DXGPROCESS::ReportProcess((DXGGLOBAL *)((char *)i - 8));
  }
  _InterlockedDecrement(v2 + 4);
  ExReleasePushLockSharedEx(v2, 0LL);
  KeLeaveCriticalRegion();
  DXGPUSHLOCK::AcquireShared((DXGGLOBAL *)((char *)this + 488));
  for ( j = (DXGGLOBAL *)*((_QWORD *)this + 211); j != (DXGGLOBAL *)((char *)this + 1688); j = *(DXGGLOBAL **)j )
    DXGVIRTUALMACHINE::ReportVirtualMachine((DXGGLOBAL *)((char *)j - 8), v4, v5);
  _InterlockedDecrement((volatile signed __int32 *)this + 126);
  ExReleasePushLockSharedEx((char *)this + 488, 0LL);
  KeLeaveCriticalRegion();
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v20, this, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v20);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v22, (DXGGLOBAL *)((char *)this + 536), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
  v7 = (DXGGLOBAL *)*((_QWORD *)this + 73);
  while ( v7 != (DXGGLOBAL *)((char *)this + 584) && v7 )
  {
    v8 = v7;
    v7 = *(DXGGLOBAL **)v7;
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v21, (DXGGLOBAL *)((char *)v8 + 32), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
    if ( (*((_DWORD *)v8 + 102) & 4) != 0 )
      DXGSYNCOBJECTCA::ReportState(v8);
    else
      DXGADAPTERSYNCOBJECT::ReportAdapterObjectState((DXGGLOBAL *)((char *)v8 + 424), v8);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v21);
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v22);
  if ( v20[8] )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v20);
  DXGAUTOADAPTERLISTLOCK::DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v23, (DXGGLOBAL *)((char *)this + 672));
  DXGAUTOADAPTERLISTLOCK::AcquireShared(v23);
  v9 = (DXGGLOBAL *)*((_QWORD *)this + 100);
LABEL_18:
  while ( v9 != (DXGGLOBAL *)((char *)this + 800) && v9 )
  {
    v10 = v9;
    v9 = *(DXGGLOBAL **)v9;
    _m_prefetchw((char *)v10 + 24);
    v11 = *((_QWORD *)v10 + 3);
    while ( v11 )
    {
      v12 = v11;
      v11 = _InterlockedCompareExchange64((volatile signed __int64 *)v10 + 3, v11 + 1, v11);
      if ( v12 == v11 )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v25, v10, 0LL);
        DXGADAPTER::ReleaseReference(v10);
        if ( (int)COREADAPTERACCESS::AcquireExclusive((__int64)v25, 2u, 0) >= 0 )
        {
          v13 = *((_QWORD *)v10 + 391);
          if ( v13 )
            ADAPTER_RENDER::FlushScheduler(v13, 6, 0xFFFFFFFFLL, 0);
          DXGADAPTER::ReportState(v10);
          v14 = *((_QWORD *)v10 + 391);
          if ( v14 )
            ADAPTER_RENDER::FlushScheduler(v14, 7, 0xFFFFFFFFLL, 0);
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v25);
        goto LABEL_18;
      }
    }
  }
  DXGAUTOADAPTERLISTLOCK::~DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v23);
  if ( DXGGLOBAL::IsVmConnectedToHost(this) )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
      McTemplateK0_EtwWriteTransfer(v15, (__int64)&EventVGPUGuestStart, v16);
    Global = DXGGLOBAL::GetGlobal();
    DXG_GUEST_GLOBAL_VMBUS::VmBusSendQueryEtwSession(*((DXG_GUEST_GLOBAL_VMBUS **)Global + 210), &v24);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
      McTemplateK0j_EtwWriteTransfer(v18, &EventVGPUGuestEnd, v19, (__int64)&v24);
  }
}
