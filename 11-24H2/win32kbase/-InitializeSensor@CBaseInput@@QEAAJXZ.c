/*
 * XREFs of ?InitializeSensor@CBaseInput@@QEAAJXZ @ 0x1400E4040
 * Callers:
 *     _anonymous_namespace_::InitializeInputSensorPass1Worker @ 0x1400E4154 (_anonymous_namespace_--InitializeInputSensorPass1Worker.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B060 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B0F4 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x14020BD10 (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CBaseInput::InitializeSensor(CBaseInput *this)
{
  __int64 v2; // rax
  void (*v3)(struct RIMDevChangeStruct *); // r9
  int Handles; // edi
  unsigned __int64 v6; // [rsp+34h] [rbp-74h] BYREF
  _BYTE v7[80]; // [rsp+40h] [rbp-68h] BYREF

  if ( !PtiCurrent((__int64)this) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 942LL);
  v2 = *(_QWORD *)this;
  LODWORD(v6) = 0;
  (*(void (__fastcall **)(CBaseInput *, _BYTE *, unsigned __int64 *))(v2 + 24))(this, v7, &v6);
  Handles = CRIMBase::CreateHandles(
              this,
              (const enum CRIMBase::DispatcherHandleName *const)v7,
              (unsigned int)v6,
              v3,
              this);
  if ( Handles >= 0 )
  {
    Handles = (*(__int64 (__fastcall **)(CBaseInput *))(*(_QWORD *)this + 32LL))(this);
    if ( Handles >= 0 )
    {
      W32AcquirePushLockExclusiveEx((CBaseInput *)((char *)this + 1312), 0);
      *((_DWORD *)this + 330) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
      *((_DWORD *)this + 331) = (unsigned int)PsGetCurrentThreadId();
      W32ReleasePushLockExclusiveEx((CBaseInput *)((char *)this + 1312), 0LL);
    }
  }
  return (unsigned int)Handles;
}
