/*
 * XREFs of ?SetAllocationForSinglePlanePresent@ADAPTER_DISPLAY@@QEAAXIPEBVDXGALLOCATION@@@Z @ 0x140314430
 * Callers:
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x140037374 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?SetAllocationForSinglePlanePresentUnsafe@DISPLAY_SOURCE@@QEAAXPEBVDXGALLOCATION@@@Z @ 0x140314560 (-SetAllocationForSinglePlanePresentUnsafe@DISPLAY_SOURCE@@QEAAXPEBVDXGALLOCATION@@@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::SetAllocationForSinglePlanePresent(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        const struct DXGALLOCATION *a3)
{
  __int64 v3; // rsi
  struct _KTHREAD **v6; // [rsp+50h] [rbp-18h] BYREF
  char v7; // [rsp+58h] [rbp-10h]

  v3 = a2;
  v6 = (struct _KTHREAD **)((char *)this + 616);
  v7 = 0;
  if ( this == (ADAPTER_DISPLAY *)-616LL )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 638;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_pMutex != NULL", 638LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( v6[3] == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 645;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 645LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v6);
  DISPLAY_SOURCE::SetAllocationForSinglePlanePresentUnsafe((DISPLAY_SOURCE *)(*((_QWORD *)this + 16) + 3984 * v3), a3);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v6);
}
