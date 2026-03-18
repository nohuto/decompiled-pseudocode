/*
 * XREFs of ?RegisterSubscriber@DXGVMBUSCHANNEL@@QEAAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAPEAUIDXGCHANNEL@@@Z @ 0x14020C1C4
 * Callers:
 *     ?Initialize@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAVDXGVMBUSCHANNEL@@@Z @ 0x1401B5EB4 (-Initialize@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAVDXGVMBUSCHANNEL@@@Z.c)
 *     ?CreateVmBusGuestSubscribers@DXGVAILGUESTOBJECT@@IEAAJXZ @ 0x140206610 (-CreateVmBusGuestSubscribers@DXGVAILGUESTOBJECT@@IEAAJXZ.c)
 *     ?CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1402067E0 (-CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Create@DXGCHANNELENDPOINTPROXY@@SAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAVDXGVMBUSCHANNEL@@PEAPEAV1@@Z @ 0x14020B2B0 (-Create@DXGCHANNELENDPOINTPROXY@@SAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAVDXGVMBUSCHANNEL@@PEAPEAV1@@Z.c)
 *     ?ProxyFromSubscriberTag@DXGVMBUSCHANNEL@@AEAAJIPEAPEAVDXGCHANNELENDPOINTPROXY@@@Z @ 0x14020C130 (-ProxyFromSubscriberTag@DXGVMBUSCHANNEL@@AEAAJIPEAPEAVDXGCHANNELENDPOINTPROXY@@@Z.c)
 */

__int64 __fastcall DXGVMBUSCHANNEL::RegisterSubscriber(
        DXGVMBUSCHANNEL *this,
        unsigned int a2,
        struct IDXGCHANNELSUBSCRIBER *a3,
        struct IDXGCHANNEL **a4)
{
  __int64 v5; // rbp
  char *v6; // rbx
  unsigned int v9; // esi
  int v10; // eax
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  struct DXGCHANNELENDPOINTPROXY *v13; // rax
  char **v14; // rcx
  char *v15; // rdi
  struct DXGCHANNELENDPOINTPROXY *v17; // [rsp+50h] [rbp-38h] BYREF
  _BYTE v18[24]; // [rsp+58h] [rbp-30h] BYREF

  v5 = a2;
  v6 = 0LL;
  v17 = 0LL;
  v9 = -1073740008;
  if ( (unsigned int)DXGVMBUSCHANNEL::ProxyFromSubscriberTag(this, a2, &v17) == -1073741275 )
  {
    v10 = DXGCHANNELENDPOINTPROXY::Create(v5, a3, this, &v17);
    v9 = v10;
    if ( v10 < 0 )
    {
      WdLogSingleEntry3(3LL, v5, v10, this);
      WdLogGlobalForLineNumber = 508;
    }
    else
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v18, (DXGVMBUSCHANNEL *)((char *)this + 72), 1);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
      _m_prefetchw((char *)this + 8);
      v11 = *((_DWORD *)this + 2);
      while ( v11 )
      {
        v12 = v11;
        v11 = _InterlockedCompareExchange((volatile signed __int32 *)this + 2, v11 + 1, v11);
        if ( v12 == v11 )
          goto LABEL_8;
      }
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 498;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"b", 498LL, 0LL, 0LL, 0LL, 0LL);
LABEL_8:
      v13 = v17;
      if ( v17 )
        v6 = (char *)v17 + 16;
      v14 = (char **)*((_QWORD *)this + 7);
      v15 = (char *)this + 48;
      if ( *v14 != v15 )
        __fastfail(3u);
      *((_QWORD *)v6 + 1) = v14;
      *(_QWORD *)v6 = v15;
      *v14 = v6;
      *((_QWORD *)v15 + 1) = v6;
      *a4 = v13;
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v18);
    }
  }
  return v9;
}
