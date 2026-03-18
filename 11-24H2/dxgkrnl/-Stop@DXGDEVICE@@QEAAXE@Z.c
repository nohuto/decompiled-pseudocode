/*
 * XREFs of ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1401BBA38
 * Callers:
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x14019FC38 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A3C0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140022D5C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140029490 (-IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?Stop@DXGOVERLAY@@QEAAXXZ @ 0x1401E80A8 (-Stop@DXGOVERLAY@@QEAAXXZ.c)
 *     ?SendWnfNotification@DXGPROCESS@@QEAAJPEBU_WNF_STATE_NAME@@PEAXK@Z @ 0x1401ED894 (-SendWnfNotification@DXGPROCESS@@QEAAJPEBU_WNF_STATE_NAME@@PEAXK@Z.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1402CE23C (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     OutputDuplProcessDestroyDevice @ 0x1403064C0 (OutputDuplProcessDestroyDevice.c)
 *     ?DrainCoreAllocations@DXGDEVICE@@QEAAXXZ @ 0x140325254 (-DrainCoreAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x1403252DC (-DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z @ 0x1403B2418 (-FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z.c)
 *     ?FlushPagingQueues@DXGDEVICE@@QEAAXXZ @ 0x1403D2690 (-FlushPagingQueues@DXGDEVICE@@QEAAXXZ.c)
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
    WdLogGlobalForLineNumber = 1780;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"GetRenderCore()->IsCoreResourceExclusiveOwner()",
      1780LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  WdLogSingleEntry1(4LL, this);
  WdLogGlobalForLineNumber = 1782;
  if ( !a2 )
  {
    v4 = this[5];
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(*((PRKPROCESS *)v4 + 7), &ApcState);
    OutputDuplProcessDestroyDevice(this[237], this);
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
  WdLogGlobalForLineNumber = 1851;
  v10 = 1;
  if ( (int)DXGPROCESS::SendWnfNotification(v7, v8, &v10, v9) < 0 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1861;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"DXGPROCESS::SendWnfNotification failed during DXGDEVICE::Stop.",
      1861LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
}
