/*
 * XREFs of DxgkStartPnPStop @ 0x1401A0B10
 * Callers:
 *     DpiFdoStopAdapter @ 0x140248100 (DpiFdoStopAdapter.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x14000CBC0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x14000EE70 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14000F358 (-AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x140029C50 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKEXCLUSIVE@@QEAA@XZ @ 0x1400682AC (--1DXGADAPTERSTOPRESETLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x14029AE64 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     DxgkInvalidateQdcCache @ 0x140349C08 (DxgkInvalidateQdcCache.c)
 */

__int64 __fastcall DxgkStartPnPStop(DXGADAPTER *this)
{
  bool v2; // di
  unsigned __int64 v3; // rdx
  struct DXGGLOBAL *Global; // rax
  DXGADAPTER *v6; // [rsp+50h] [rbp-68h] BYREF
  char v7; // [rsp+58h] [rbp-60h]
  _BYTE v8[64]; // [rsp+60h] [rbp-58h] BYREF

  v6 = this;
  _InterlockedIncrement64((volatile signed __int64 *)this + 3);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 136, 0LL);
  *((_QWORD *)this + 18) = KeGetCurrentThread();
  v7 = 1;
  COREACCESS::COREACCESS((COREACCESS *)v8, this);
  COREACCESS::AcquireExclusive((__int64)v8, 1u, 0);
  v2 = *((_QWORD *)this + 391) && *((_DWORD *)this + 50) == 1;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1337;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"IsCoreResourceExclusiveOwner()",
      1337LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *((_BYTE *)this + 3017) = 1;
  COREACCESS::~COREACCESS((COREACCESS *)v8, v3);
  DXGADAPTERSTOPRESETLOCKEXCLUSIVE::~DXGADAPTERSTOPRESETLOCKEXCLUSIVE((DXGADAPTERSTOPRESETLOCKEXCLUSIVE *)&v6);
  if ( v2 )
  {
    Global = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::IterateAdaptersWithCallback(Global, DxgkCheckPairedRenderAdapterForStopCallBack, this, 1LL);
  }
  return DxgkInvalidateQdcCache();
}
