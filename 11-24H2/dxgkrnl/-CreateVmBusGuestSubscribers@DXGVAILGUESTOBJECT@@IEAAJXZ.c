/*
 * XREFs of ?CreateVmBusGuestSubscribers@DXGVAILGUESTOBJECT@@IEAAJXZ @ 0x140206610
 * Callers:
 *     ?Initialize@DXGVAILGUESTOBJECT@@QEAAJXZ @ 0x140207080 (-Initialize@DXGVAILGUESTOBJECT@@QEAAJXZ.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?RegisterSubscriber@DXGVMBUSCHANNEL@@QEAAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAPEAUIDXGCHANNEL@@@Z @ 0x14020C1C4 (-RegisterSubscriber@DXGVMBUSCHANNEL@@QEAAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAPEAUIDXGCHANNEL@@@Z.c)
 */

__int64 __fastcall DXGVAILGUESTOBJECT::CreateVmBusGuestSubscribers(DXGVAILGUESTOBJECT *this)
{
  __int64 v2; // rax
  DXGVMBUSCHANNEL *v3; // rcx
  int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rax
  DXGVMBUSCHANNEL *v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  _BYTE v12[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, (DXGVAILGUESTOBJECT *)((char *)this + 16), 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
  if ( *((_OWORD *)this + 5) != 0LL )
  {
    v5 = -1073740528;
    goto LABEL_15;
  }
  v2 = operator new(0x18uLL, 0x4B677844u, 256LL);
  if ( v2 )
  {
    *(_QWORD *)(v2 + 8) = 0LL;
    *(_QWORD *)v2 = &DXG_GUEST_REMOTEOBJECTCHANNEL::`vftable';
    *(_WORD *)(v2 + 16) = 0;
    v3 = (DXGVMBUSCHANNEL *)*((_QWORD *)this + 9);
    *((_QWORD *)this + 10) = v2;
    v4 = DXGVMBUSCHANNEL::RegisterSubscriber(
           v3,
           0x6F746D72u,
           (struct IDXGCHANNELSUBSCRIBER *)v2,
           (struct IDXGCHANNEL **)(v2 + 8));
    v5 = v4;
    if ( v4 >= 0 )
    {
      v6 = operator new(0x18uLL, 0x4B677844u, 256LL);
      if ( v6 )
      {
        *(_QWORD *)(v6 + 8) = 0LL;
        *(_QWORD *)v6 = &DXG_GUEST_COMPOSITIONOBJECTCHANNEL::`vftable';
        *(_WORD *)(v6 + 16) = 0;
        v7 = (DXGVMBUSCHANNEL *)*((_QWORD *)this + 9);
        *((_QWORD *)this + 11) = v6;
        v8 = DXGVMBUSCHANNEL::RegisterSubscriber(
               v7,
               0x706D6F63u,
               (struct IDXGCHANNELSUBSCRIBER *)v6,
               (struct IDXGCHANNEL **)(v6 + 8));
        v5 = v8;
        if ( v8 >= 0 )
          goto LABEL_15;
        WdLogSingleEntry1(3LL, v8);
        WdLogGlobalForLineNumber = 2096;
      }
      else
      {
        *((_QWORD *)this + 11) = 0LL;
        v5 = -1073741801;
        WdLogSingleEntry1(3LL, -1073741801LL);
        WdLogGlobalForLineNumber = 2084;
      }
    }
    else
    {
      WdLogSingleEntry1(3LL, v4);
      WdLogGlobalForLineNumber = 2073;
    }
  }
  else
  {
    *((_QWORD *)this + 10) = 0LL;
    v5 = -1073741801;
    WdLogSingleEntry1(3LL, -1073741801LL);
    WdLogGlobalForLineNumber = 2061;
  }
  v9 = *((_QWORD *)this + 10);
  if ( v9 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 56LL))(v9);
    *((_QWORD *)this + 10) = 0LL;
  }
  v10 = *((_QWORD *)this + 11);
  if ( v10 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 56LL))(v10);
    *((_QWORD *)this + 11) = 0LL;
  }
LABEL_15:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v12);
  return v5;
}
