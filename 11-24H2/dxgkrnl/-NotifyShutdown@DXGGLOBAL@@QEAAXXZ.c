/*
 * XREFs of ?NotifyShutdown@DXGGLOBAL@@QEAAXXZ @ 0x1401D60B0
 * Callers:
 *     DxgkShutdown @ 0x1401CBE50 (DxgkShutdown.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14000F84C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z @ 0x140072E4C (--0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z.c)
 *     ??1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ @ 0x1400730D4 (--1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ @ 0x1400732F4 (-AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?NodeUsageTelemetry@DXGADAPTER@@QEAAX_N@Z @ 0x140193274 (-NodeUsageTelemetry@DXGADAPTER@@QEAAX_N@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1402C84A8 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 */

void __fastcall DXGGLOBAL::NotifyShutdown(DXGGLOBAL *this)
{
  _QWORD **v1; // r14
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx
  signed __int64 v4; // rax
  signed __int64 v5; // rtt
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rcx
  DXGADAPTERLISTLOCK *v9[2]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v10[144]; // [rsp+30h] [rbp-A8h] BYREF

  v1 = (_QWORD **)((char *)this + 800);
  DXGAUTOADAPTERLISTLOCK::DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v9, (DXGGLOBAL *)((char *)this + 672));
  DXGAUTOADAPTERLISTLOCK::AcquireShared(v9);
  v2 = *v1;
LABEL_2:
  while ( v2 != v1 && v2 )
  {
    v3 = v2;
    v2 = (_QWORD *)*v2;
    _m_prefetchw(v3 + 3);
    v4 = v3[3];
    while ( v4 )
    {
      v5 = v4;
      v4 = _InterlockedCompareExchange64(v3 + 3, v4 + 1, v4);
      if ( v5 == v4 )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v10, (struct DXGADAPTER *const)v3, 0LL);
        DXGADAPTER::ReleaseReference((DXGADAPTER *)v3);
        if ( (int)COREADAPTERACCESS::AcquireExclusive((__int64)v10, 2u, 0) >= 0 )
        {
          v6 = v3[391];
          if ( v6 )
            ADAPTER_RENDER::FlushScheduler(v6, 6LL, 0xFFFFFFFFLL);
          v7 = v3[391];
          if ( v7 && !*(_BYTE *)(*(_QWORD *)(v7 + 16) + 209LL) )
          {
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(v7 + 760) + 8LL) + 40LL))(*(_QWORD *)(v7 + 768));
            DXGADAPTER::NodeUsageTelemetry(*(DXGADAPTER **)(v7 + 16));
          }
          v8 = v3[391];
          if ( v8 )
            ADAPTER_RENDER::FlushScheduler(v8, 7LL, 0xFFFFFFFFLL);
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v10);
        goto LABEL_2;
      }
    }
  }
  DXGAUTOADAPTERLISTLOCK::~DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v9);
}
