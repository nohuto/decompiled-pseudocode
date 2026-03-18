/*
 * XREFs of ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1401B927C
 * Callers:
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x14019D7E8 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400136BC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400199A0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140026F40 (-IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?Stop@DXGOVERLAY@@QEAAXXZ @ 0x1401E2E78 (-Stop@DXGOVERLAY@@QEAAXXZ.c)
 *     ?SendWnfNotification@DXGPROCESS@@QEAAJPEBU_WNF_STATE_NAME@@PEAXK@Z @ 0x1401E7E9C (-SendWnfNotification@DXGPROCESS@@QEAAJPEBU_WNF_STATE_NAME@@PEAXK@Z.c)
 *     OutputDuplProcessDestroyDevice @ 0x1402E5BFC (OutputDuplProcessDestroyDevice.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x140334CA4 (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DrainCoreAllocations@DXGDEVICE@@QEAAXXZ @ 0x1403396CC (-DrainCoreAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x140339754 (-DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z @ 0x1403BE5B8 (-FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z.c)
 *     ?FlushPagingQueues@DXGDEVICE@@QEAAXXZ @ 0x1403D95D4 (-FlushPagingQueues@DXGDEVICE@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::Stop(ADAPTER_RENDER **this, char a2)
{
  ADAPTER_RENDER *v4; // rcx
  DXGOVERLAY *i; // rdi
  ADAPTER_RENDER *j; // rdi
  DXGPROCESS *v7; // rcx
  const struct _WNF_STATE_NAME *v8; // rdx
  unsigned int v9; // r9d
  int v10; // [rsp+58h] [rbp-19h] BYREF
  _BYTE v11[16]; // [rsp+60h] [rbp-11h] BYREF
  _BYTE v12[24]; // [rsp+70h] [rbp-1h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp+17h] BYREF

  if ( !ADAPTER_RENDER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1728;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"GetRenderCore()->IsCoreResourceExclusiveOwner()",
      1728LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  WdLogSingleEntry1(4LL, this);
  WdLogGlobalForLineNumber = 1730;
  if ( !a2 )
  {
    v4 = this[5];
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(*((PRKPROCESS *)v4 + 7), &ApcState);
    OutputDuplProcessDestroyDevice(this[235], this);
    DXGDEVICE::FlushDeferredDestruction((DXGDEVICE *)this, 0LL, 0, 0);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (ADAPTER_RENDER *)((char *)this[2] + 856), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
    for ( i = this[64]; i != (DXGOVERLAY *)(this + 64) && i; i = *(DXGOVERLAY **)i )
      DXGOVERLAY::Stop(i);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11);
    DXGDEVICE::FlushPagingQueues((DXGDEVICE *)this);
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v12, this + 30);
    for ( j = this[7]; j; j = (ADAPTER_RENDER *)*((_QWORD *)j + 5) )
      DXGDEVICE::DestroyCoreAllocations((DXGDEVICE *)this, j, *((struct DXGALLOCATION **)j + 3));
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12);
    DXGDEVICE::DrainCoreAllocations((DXGDEVICE *)this);
    DXGDEVICE::DestroyDevice((DXGDEVICE *)this, 0LL);
    KeUnstackDetachProcess(&ApcState);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v11);
  }
  *((_DWORD *)this + 152) = 4;
  WdLogSingleEntry1(4LL, this);
  v7 = this[5];
  WdLogGlobalForLineNumber = 1799;
  v10 = 1;
  if ( (int)DXGPROCESS::SendWnfNotification(v7, v8, &v10, v9) < 0 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1809;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"DXGPROCESS::SendWnfNotification failed during DXGDEVICE::Stop.",
      1809LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
}
