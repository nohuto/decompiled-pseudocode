/*
 * XREFs of DxgkStartPnPStop @ 0x14019E5EC
 * Callers:
 *     DpiFdoStopAdapter @ 0x1402412FC (DpiFdoStopAdapter.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x14001C1A0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x14001E450 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14001E938 (-AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400294B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ??1DXGADAPTERSTOPRESETLOCKEXCLUSIVE@@QEAA@XZ @ 0x140068634 (--1DXGADAPTERSTOPRESETLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x140295218 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     DxgkInvalidateQdcCache @ 0x14031B098 (DxgkInvalidateQdcCache.c)
 */

__int64 __fastcall DxgkStartPnPStop(DXGADAPTER *this)
{
  char *v2; // rdi
  bool v3; // di
  unsigned __int64 v4; // rdx
  struct DXGGLOBAL *Global; // rax
  DXGADAPTER *v7; // [rsp+50h] [rbp-68h] BYREF
  char v8; // [rsp+58h] [rbp-60h]
  _BYTE v9[64]; // [rsp+60h] [rbp-58h] BYREF

  v7 = this;
  _InterlockedIncrement64((volatile signed __int64 *)this + 3);
  v2 = (char *)this + 136;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v2, 0LL);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)v2 + 1) = KeGetCurrentThread();
  v8 = 1;
  COREACCESS::COREACCESS((COREACCESS *)v9, this);
  COREACCESS::AcquireExclusive((__int64)v9, 1u, 0);
  v3 = *((_QWORD *)this + 391) && *((_DWORD *)this + 50) == 1;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1328;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"IsCoreResourceExclusiveOwner()", 1328LL, 0LL, 0LL, 0LL, 0LL);
  }
  *((_BYTE *)this + 3017) = 1;
  COREACCESS::~COREACCESS((COREACCESS *)v9, v4);
  DXGADAPTERSTOPRESETLOCKEXCLUSIVE::~DXGADAPTERSTOPRESETLOCKEXCLUSIVE((DXGADAPTERSTOPRESETLOCKEXCLUSIVE *)&v7);
  if ( v3 )
  {
    Global = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::IterateAdaptersWithCallback(Global, DxgkCheckPairedRenderAdapterForStopCallBack, this, 1LL);
  }
  return DxgkInvalidateQdcCache();
}
