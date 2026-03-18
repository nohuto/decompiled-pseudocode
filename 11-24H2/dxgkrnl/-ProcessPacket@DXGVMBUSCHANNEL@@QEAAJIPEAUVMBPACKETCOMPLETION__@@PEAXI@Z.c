/*
 * XREFs of ?ProcessPacket@DXGVMBUSCHANNEL@@QEAAJIPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x14020BFFC
 * Callers:
 *     ProcessRingPacket @ 0x14020C600 (ProcessRingPacket.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?ProxyFromSubscriberTag@DXGVMBUSCHANNEL@@AEAAJIPEAPEAVDXGCHANNELENDPOINTPROXY@@@Z @ 0x14020C130 (-ProxyFromSubscriberTag@DXGVMBUSCHANNEL@@AEAAJIPEAPEAVDXGCHANNELENDPOINTPROXY@@@Z.c)
 */

__int64 __fastcall DXGVMBUSCHANNEL::ProcessPacket(
        struct _EX_RUNDOWN_REF *this,
        unsigned int a2,
        struct VMBPACKETCOMPLETION__ *a3,
        void *a4,
        unsigned int a5)
{
  struct _EX_RUNDOWN_REF *v5; // rsi
  int v10; // ebx
  int v11; // eax
  struct DXGCHANNELENDPOINTPROXY *v12; // rdi
  __int64 v13; // r8
  __int64 (__fastcall ***v14)(_QWORD, void *, __int64); // rcx
  _BYTE v16[40]; // [rsp+20h] [rbp-28h] BYREF
  struct DXGCHANNELENDPOINTPROXY *v17; // [rsp+50h] [rbp+8h] BYREF

  v5 = this + 8;
  v10 = -1073741823;
  if ( ExAcquireRundownProtection(this + 8) )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, (struct DXGFASTMUTEX *const)&this[9], 1);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
    v17 = 0LL;
    v11 = DXGVMBUSCHANNEL::ProxyFromSubscriberTag((DXGVMBUSCHANNEL *)this, a2, &v17);
    v10 = v11;
    if ( v11 < 0 )
    {
      WdLogSingleEntry3(3LL, v17, v11, this);
      WdLogGlobalForLineNumber = 452;
    }
    else
    {
      v12 = v17;
      v13 = a5;
      v14 = (__int64 (__fastcall ***)(_QWORD, void *, __int64))*((_QWORD *)v17 + 17);
      *((_QWORD *)v17 + 18) = a3;
      v10 = (**v14)(v14, a4, v13);
      if ( v10 >= 0 && *((_QWORD *)v12 + 18) )
      {
        ((void (__fastcall *)(struct VMBPACKETCOMPLETION__ *, _QWORD, _QWORD))qword_1401603D8)(a3, 0LL, 0LL);
        *((_QWORD *)v12 + 18) = 0LL;
      }
    }
    ExReleaseRundownProtection(v5);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v16);
  }
  return (unsigned int)v10;
}
