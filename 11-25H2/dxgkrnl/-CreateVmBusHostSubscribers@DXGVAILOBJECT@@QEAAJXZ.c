/*
 * XREFs of ?CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1402000D0
 * Callers:
 *     NtDxgkVailConnect @ 0x140203500 (NtDxgkVailConnect.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?Initialize@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAVDXGVMBUSCHANNEL@@@Z @ 0x1401B3904 (-Initialize@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAVDXGVMBUSCHANNEL@@@Z.c)
 *     ?AllocateDefaultSecurityDescriptor@DXGVAILOBJECT@@SAJKPEAPEAX@Z @ 0x1401FF2A4 (-AllocateDefaultSecurityDescriptor@DXGVAILOBJECT@@SAJKPEAPEAX@Z.c)
 *     ?AllocateResourceSecurityDescriptor@DXGVAILOBJECT@@QEAAJEKPEAPEAX@Z @ 0x1401FF50C (-AllocateResourceSecurityDescriptor@DXGVAILOBJECT@@QEAAJEKPEAPEAX@Z.c)
 *     ?RegisterSubscriber@DXGVMBUSCHANNEL@@QEAAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAPEAUIDXGCHANNEL@@@Z @ 0x140205AF4 (-RegisterSubscriber@DXGVMBUSCHANNEL@@QEAAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAPEAUIDXGCHANNEL@@@Z.c)
 */

__int64 __fastcall DXGVAILOBJECT::CreateVmBusHostSubscribers(DXGVAILOBJECT *this)
{
  __int64 v2; // rcx
  __int64 *v3; // rsi
  int DefaultSecurityDescriptor; // eax
  int v5; // ebx
  int v6; // eax
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 CurrentProcess; // rax
  void *v10; // r15
  DXGVMBUSCHANNEL *v11; // rcx
  int v12; // eax
  int v13; // eax
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rdx
  void *v17; // r14
  struct DXGVMBUSCHANNEL *v18; // rdx
  int v19; // eax
  __int64 v20; // rcx
  char v21; // bl
  char v22; // al
  _BYTE v24[16]; // [rsp+20h] [rbp-10h] BYREF
  void *v25; // [rsp+70h] [rbp+40h] BYREF
  void *v26; // [rsp+78h] [rbp+48h] BYREF
  void *v27; // [rsp+80h] [rbp+50h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v24, (DXGVAILOBJECT *)((char *)this + 40), 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
  v2 = *((_QWORD *)this + 15);
  v3 = (__int64 *)((char *)this + 128);
  if ( !v2 && !*v3 )
  {
    v27 = 0LL;
    v26 = 0LL;
    v25 = 0LL;
    DefaultSecurityDescriptor = DXGVAILOBJECT::AllocateDefaultSecurityDescriptor(0x20000u, (struct _ACL **)&v27);
    v5 = DefaultSecurityDescriptor;
    if ( DefaultSecurityDescriptor < 0 )
    {
      WdLogSingleEntry1(3LL, DefaultSecurityDescriptor);
      WdLogGlobalForLineNumber = 1748;
LABEL_25:
      if ( v27 )
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v27);
LABEL_27:
      if ( v5 >= 0 )
        goto LABEL_35;
      goto LABEL_28;
    }
    v6 = DXGVAILOBJECT::AllocateResourceSecurityDescriptor(this, 0, 0x10000000u, &v26);
    v5 = v6;
    if ( v6 < 0 )
    {
      WdLogSingleEntry1(3LL, v6);
      WdLogGlobalForLineNumber = 1772;
LABEL_22:
      v10 = v26;
LABEL_23:
      if ( v10 )
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v10);
      goto LABEL_25;
    }
    v8 = operator new(0x30uLL, 0x4B677844u, 256LL, v7);
    if ( !v8 )
    {
      *((_QWORD *)this + 15) = 0LL;
      v5 = -1073741801;
      WdLogSingleEntry1(3LL, -1073741801LL);
      WdLogGlobalForLineNumber = 1789;
      goto LABEL_22;
    }
    CurrentProcess = *((_QWORD *)this + 13);
    *(_QWORD *)v8 = &DXG_HOST_REMOTEOBJECTCHANNEL::`vftable';
    *(_QWORD *)(v8 + 8) = 0LL;
    *(_WORD *)(v8 + 16) = 0;
    *(_QWORD *)(v8 + 24) = 0LL;
    *(_QWORD *)(v8 + 32) = 0LL;
    *(_QWORD *)(v8 + 40) = 0LL;
    if ( !CurrentProcess )
      CurrentProcess = PsGetCurrentProcess(&DXG_HOST_REMOTEOBJECTCHANNEL::`vftable');
    *(_QWORD *)(v8 + 24) = CurrentProcess;
    *(_QWORD *)(v8 + 32) = v27;
    v10 = 0LL;
    *(_QWORD *)(v8 + 40) = v26;
    v11 = (DXGVMBUSCHANNEL *)*((_QWORD *)this + 14);
    *((_QWORD *)this + 15) = v8;
    v27 = 0LL;
    v26 = 0LL;
    v12 = DXGVMBUSCHANNEL::RegisterSubscriber(
            v11,
            0x6F746D72u,
            (struct IDXGCHANNELSUBSCRIBER *)v8,
            (struct IDXGCHANNEL **)(v8 + 8));
    v5 = v12;
    if ( v12 < 0 )
    {
      WdLogSingleEntry1(3LL, v12);
      WdLogGlobalForLineNumber = 1810;
LABEL_28:
      v20 = *((_QWORD *)this + 15);
      if ( v20 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 56LL))(v20);
        *((_QWORD *)this + 15) = 0LL;
      }
      if ( *v3 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)*v3 + 56LL))(*v3);
        *v3 = 0LL;
      }
      goto LABEL_35;
    }
    v13 = DXGVAILOBJECT::AllocateResourceSecurityDescriptor(this, 1, 3u, &v25);
    v5 = v13;
    if ( v13 >= 0 )
    {
      v15 = operator new(0x38uLL, 0x4B677844u, 256LL, v14);
      if ( v15 )
      {
        v16 = *((_QWORD *)this + 13);
        *(_QWORD *)v15 = &DXG_HOST_COMPOSITIONOBJECTCHANNEL::`vftable';
        v17 = 0LL;
        *(_QWORD *)(v15 + 48) = v25;
        *(_QWORD *)(v15 + 8) = 0LL;
        *(_WORD *)(v15 + 16) = 0;
        *(_QWORD *)(v15 + 24) = 0LL;
        *(_QWORD *)(v15 + 32) = 0LL;
        *(_QWORD *)(v15 + 40) = v16;
        v18 = (struct DXGVMBUSCHANNEL *)*((_QWORD *)this + 14);
        *v3 = v15;
        v25 = 0LL;
        v19 = DXG_HOST_COMPOSITIONOBJECTCHANNEL::Initialize((struct _EPROCESS **)v15, v18);
        v5 = v19;
        if ( v19 >= 0 )
          goto LABEL_35;
        WdLogSingleEntry1(3LL, v19);
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
      WdLogSingleEntry1(3LL, v13);
      WdLogGlobalForLineNumber = 1836;
    }
    v17 = v25;
LABEL_19:
    if ( !v17 )
      goto LABEL_27;
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v17);
    goto LABEL_23;
  }
  v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 64LL))(v2);
  v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v3 + 64LL))(*v3);
  if ( v21 || (v5 = -1073740528, v22) )
    v5 = 0;
LABEL_35:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v24);
  return (unsigned int)v5;
}
