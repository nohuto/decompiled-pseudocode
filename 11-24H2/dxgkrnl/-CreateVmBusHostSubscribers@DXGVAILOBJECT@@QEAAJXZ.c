/*
 * XREFs of ?CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1402067E0
 * Callers:
 *     NtDxgkVailConnect @ 0x140209C10 (NtDxgkVailConnect.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?Initialize@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAVDXGVMBUSCHANNEL@@@Z @ 0x1401B5EB4 (-Initialize@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAVDXGVMBUSCHANNEL@@@Z.c)
 *     ?AllocateDefaultSecurityDescriptor@DXGVAILOBJECT@@SAJKPEAPEAX@Z @ 0x1402059B8 (-AllocateDefaultSecurityDescriptor@DXGVAILOBJECT@@SAJKPEAPEAX@Z.c)
 *     ?AllocateResourceSecurityDescriptor@DXGVAILOBJECT@@QEAAJEKPEAPEAX@Z @ 0x140205C20 (-AllocateResourceSecurityDescriptor@DXGVAILOBJECT@@QEAAJEKPEAPEAX@Z.c)
 *     ?RegisterSubscriber@DXGVMBUSCHANNEL@@QEAAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAPEAUIDXGCHANNEL@@@Z @ 0x14020C1C4 (-RegisterSubscriber@DXGVMBUSCHANNEL@@QEAAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAPEAUIDXGCHANNEL@@@Z.c)
 */

__int64 __fastcall DXGVAILOBJECT::CreateVmBusHostSubscribers(DXGVAILOBJECT *this)
{
  __int64 v2; // rcx
  __int64 *v3; // rsi
  int DefaultSecurityDescriptor; // eax
  int v5; // ebx
  int v6; // eax
  __int64 v7; // rbx
  __int64 CurrentProcess; // rax
  void *v9; // r15
  DXGVMBUSCHANNEL *v10; // rcx
  int v11; // eax
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rdx
  void *v15; // r14
  struct DXGVMBUSCHANNEL *v16; // rdx
  int v17; // eax
  __int64 v18; // rcx
  char v19; // bl
  char v20; // al
  _BYTE v22[16]; // [rsp+20h] [rbp-10h] BYREF
  void *v23; // [rsp+70h] [rbp+40h] BYREF
  void *v24; // [rsp+78h] [rbp+48h] BYREF
  void *v25; // [rsp+80h] [rbp+50h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v22, (DXGVAILOBJECT *)((char *)this + 40), 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
  v2 = *((_QWORD *)this + 15);
  v3 = (__int64 *)((char *)this + 128);
  if ( !v2 && !*v3 )
  {
    v25 = 0LL;
    v24 = 0LL;
    v23 = 0LL;
    DefaultSecurityDescriptor = DXGVAILOBJECT::AllocateDefaultSecurityDescriptor(0x20000u, (struct _ACL **)&v25);
    v5 = DefaultSecurityDescriptor;
    if ( DefaultSecurityDescriptor < 0 )
    {
      WdLogSingleEntry1(3LL, DefaultSecurityDescriptor);
      WdLogGlobalForLineNumber = 1748;
LABEL_25:
      if ( v25 )
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v25);
LABEL_27:
      if ( v5 >= 0 )
        goto LABEL_35;
      goto LABEL_28;
    }
    v6 = DXGVAILOBJECT::AllocateResourceSecurityDescriptor(this, 0, 0x10000000u, &v24);
    v5 = v6;
    if ( v6 < 0 )
    {
      WdLogSingleEntry1(3LL, v6);
      WdLogGlobalForLineNumber = 1772;
LABEL_22:
      v9 = v24;
LABEL_23:
      if ( v9 )
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v9);
      goto LABEL_25;
    }
    v7 = operator new(0x30uLL, 0x4B677844u, 256LL);
    if ( !v7 )
    {
      *((_QWORD *)this + 15) = 0LL;
      v5 = -1073741801;
      WdLogSingleEntry1(3LL, -1073741801LL);
      WdLogGlobalForLineNumber = 1789;
      goto LABEL_22;
    }
    CurrentProcess = *((_QWORD *)this + 13);
    *(_QWORD *)v7 = &DXG_HOST_REMOTEOBJECTCHANNEL::`vftable';
    *(_QWORD *)(v7 + 8) = 0LL;
    *(_WORD *)(v7 + 16) = 0;
    *(_QWORD *)(v7 + 24) = 0LL;
    *(_QWORD *)(v7 + 32) = 0LL;
    *(_QWORD *)(v7 + 40) = 0LL;
    if ( !CurrentProcess )
      CurrentProcess = PsGetCurrentProcess(&DXG_HOST_REMOTEOBJECTCHANNEL::`vftable');
    *(_QWORD *)(v7 + 24) = CurrentProcess;
    *(_QWORD *)(v7 + 32) = v25;
    v9 = 0LL;
    *(_QWORD *)(v7 + 40) = v24;
    v10 = (DXGVMBUSCHANNEL *)*((_QWORD *)this + 14);
    *((_QWORD *)this + 15) = v7;
    v25 = 0LL;
    v24 = 0LL;
    v11 = DXGVMBUSCHANNEL::RegisterSubscriber(
            v10,
            0x6F746D72u,
            (struct IDXGCHANNELSUBSCRIBER *)v7,
            (struct IDXGCHANNEL **)(v7 + 8));
    v5 = v11;
    if ( v11 < 0 )
    {
      WdLogSingleEntry1(3LL, v11);
      WdLogGlobalForLineNumber = 1810;
LABEL_28:
      v18 = *((_QWORD *)this + 15);
      if ( v18 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 56LL))(v18);
        *((_QWORD *)this + 15) = 0LL;
      }
      if ( *v3 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)*v3 + 56LL))(*v3);
        *v3 = 0LL;
      }
      goto LABEL_35;
    }
    v12 = DXGVAILOBJECT::AllocateResourceSecurityDescriptor(this, 1, 3u, &v23);
    v5 = v12;
    if ( v12 >= 0 )
    {
      v13 = operator new(0x38uLL, 0x4B677844u, 256LL);
      if ( v13 )
      {
        v14 = *((_QWORD *)this + 13);
        *(_QWORD *)v13 = &DXG_HOST_COMPOSITIONOBJECTCHANNEL::`vftable';
        v15 = 0LL;
        *(_QWORD *)(v13 + 48) = v23;
        *(_QWORD *)(v13 + 8) = 0LL;
        *(_WORD *)(v13 + 16) = 0;
        *(_QWORD *)(v13 + 24) = 0LL;
        *(_QWORD *)(v13 + 32) = 0LL;
        *(_QWORD *)(v13 + 40) = v14;
        v16 = (struct DXGVMBUSCHANNEL *)*((_QWORD *)this + 14);
        *v3 = v13;
        v23 = 0LL;
        v17 = DXG_HOST_COMPOSITIONOBJECTCHANNEL::Initialize((struct _EPROCESS **)v13, v16);
        v5 = v17;
        if ( v17 >= 0 )
          goto LABEL_35;
        WdLogSingleEntry1(3LL, v17);
        WdLogGlobalForLineNumber = 1871;
        goto LABEL_19;
      }
      *v3 = 0LL;
      v5 = -1073741801;
      WdLogSingleEntry1(3LL, -1073741801LL);
      WdLogGlobalForLineNumber = 1852;
    }
    else
    {
      WdLogSingleEntry1(3LL, v12);
      WdLogGlobalForLineNumber = 1836;
    }
    v15 = v23;
LABEL_19:
    if ( !v15 )
      goto LABEL_27;
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v15);
    goto LABEL_23;
  }
  v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 64LL))(v2);
  v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v3 + 64LL))(*v3);
  if ( v19 || (v5 = -1073740528, v20) )
    v5 = 0;
LABEL_35:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v22);
  return (unsigned int)v5;
}
