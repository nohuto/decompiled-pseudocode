/*
 * XREFs of ?CreateVmBusGuestSubscribers@DXGVAILGUESTOBJECT@@IEAAJXZ @ 0x1401FFF00
 * Callers:
 *     ?Initialize@DXGVAILGUESTOBJECT@@QEAAJXZ @ 0x140200970 (-Initialize@DXGVAILGUESTOBJECT@@QEAAJXZ.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?RegisterSubscriber@DXGVMBUSCHANNEL@@QEAAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAPEAUIDXGCHANNEL@@@Z @ 0x140205AF4 (-RegisterSubscriber@DXGVMBUSCHANNEL@@QEAAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAPEAUIDXGCHANNEL@@@Z.c)
 */

__int64 __fastcall DXGVAILGUESTOBJECT::CreateVmBusGuestSubscribers(DXGVAILGUESTOBJECT *this)
{
  __int64 v2; // r9
  __int64 v3; // rax
  DXGVMBUSCHANNEL *v4; // rcx
  int v5; // eax
  __int64 v6; // r9
  unsigned int v7; // edi
  __int64 v8; // rax
  DXGVMBUSCHANNEL *v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  _BYTE v14[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (DXGVAILGUESTOBJECT *)((char *)this + 16), 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
  if ( *((_OWORD *)this + 5) != 0LL )
  {
    v7 = -1073740528;
    goto LABEL_15;
  }
  v3 = operator new(0x18uLL, 0x4B677844u, 256LL, v2);
  if ( v3 )
  {
    *(_QWORD *)(v3 + 8) = 0LL;
    *(_QWORD *)v3 = &DXG_GUEST_REMOTEOBJECTCHANNEL::`vftable';
    *(_WORD *)(v3 + 16) = 0;
    v4 = (DXGVMBUSCHANNEL *)*((_QWORD *)this + 9);
    *((_QWORD *)this + 10) = v3;
    v5 = DXGVMBUSCHANNEL::RegisterSubscriber(
           v4,
           0x6F746D72u,
           (struct IDXGCHANNELSUBSCRIBER *)v3,
           (struct IDXGCHANNEL **)(v3 + 8));
    v7 = v5;
    if ( v5 >= 0 )
    {
      v8 = operator new(0x18uLL, 0x4B677844u, 256LL, v6);
      if ( v8 )
      {
        *(_QWORD *)(v8 + 8) = 0LL;
        *(_QWORD *)v8 = &DXG_GUEST_COMPOSITIONOBJECTCHANNEL::`vftable';
        *(_WORD *)(v8 + 16) = 0;
        v9 = (DXGVMBUSCHANNEL *)*((_QWORD *)this + 9);
        *((_QWORD *)this + 11) = v8;
        v10 = DXGVMBUSCHANNEL::RegisterSubscriber(
                v9,
                0x706D6F63u,
                (struct IDXGCHANNELSUBSCRIBER *)v8,
                (struct IDXGCHANNEL **)(v8 + 8));
        v7 = v10;
        if ( v10 >= 0 )
          goto LABEL_15;
        WdLogSingleEntry1(3LL, v10);
        WdLogGlobalForLineNumber = 2096;
      }
      else
      {
        *((_QWORD *)this + 11) = 0LL;
        v7 = -1073741801;
        WdLogSingleEntry1(3LL, -1073741801LL);
        WdLogGlobalForLineNumber = 2084;
      }
    }
    else
    {
      WdLogSingleEntry1(3LL, v5);
      WdLogGlobalForLineNumber = 2073;
    }
  }
  else
  {
    *((_QWORD *)this + 10) = 0LL;
    v7 = -1073741801;
    WdLogSingleEntry1(3LL, -1073741801LL);
    WdLogGlobalForLineNumber = 2061;
  }
  v11 = *((_QWORD *)this + 10);
  if ( v11 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 56LL))(v11);
    *((_QWORD *)this + 10) = 0LL;
  }
  v12 = *((_QWORD *)this + 11);
  if ( v12 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 56LL))(v12);
    *((_QWORD *)this + 11) = 0LL;
  }
LABEL_15:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v14);
  return v7;
}
