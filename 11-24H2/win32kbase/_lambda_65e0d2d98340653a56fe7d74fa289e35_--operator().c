/*
 * XREFs of _lambda_65e0d2d98340653a56fe7d74fa289e35_::operator() @ 0x14020B8D0
 * Callers:
 *     ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x1401140EC (-RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B060 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B0F4 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1401874A0 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall lambda_65e0d2d98340653a56fe7d74fa289e35_::operator()(_QWORD *a1, __int64 a2, int a3)
{
  __int64 v4; // rdi
  struct W32_PUSH_LOCK *v6; // rbx
  unsigned int v7; // edi

  v4 = 2LL * (unsigned int)(a3 - 1);
  if ( *((_DWORD *)&funcs_14020B939 + 4 * (unsigned int)(a3 - 1) + 2) != a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2288);
  v6 = *(struct W32_PUSH_LOCK **)(*a1 + 1232LL);
  W32AcquirePushLockExclusiveEx(v6, 0);
  v7 = ((__int64 (__fastcall *)(_QWORD, __int64))*(&funcs_14020B939 + v4))(*a1, a2);
  W32ReleasePushLockExclusiveEx(v6, 0LL);
  return v7;
}
