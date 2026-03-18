/*
 * XREFs of ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z @ 0x14020C73C
 * Callers:
 *     HandleInputThreadActivated @ 0x14015A2D4 (HandleInputThreadActivated.c)
 *     HandleInputThreadDeactivated @ 0x14019FC50 (HandleInputThreadDeactivated.c)
 * Callees:
 *     RimInputTypeToDeviceInputType @ 0x140054F78 (RimInputTypeToDeviceInputType.c)
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140069000 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     IsInputThread @ 0x1400BB380 (IsInputThread.c)
 *     GetKnownRIMDeviceKind @ 0x140143F70 (GetKnownRIMDeviceKind.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z @ 0x14020C158 (-ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CBaseInput::HandleInputThreadStateChange(__int64 a1, int a2)
{
  struct W32_PUSH_LOCK *v4; // rbx
  int v5; // ebp
  __int64 i; // rdi
  int KnownRIMDeviceKind; // eax
  __int64 result; // rax

  if ( !IsInputThread(a1) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1471);
  if ( a2 )
  {
    if ( a2 != 1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1506);
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    if ( result )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  }
  else
  {
    v4 = *(struct W32_PUSH_LOCK **)(a1 + 1232);
    W32AcquirePushLockSharedEx(v4, 0);
    v5 = RimInputTypeToDeviceInputType(*(_DWORD *)(a1 + 144));
    for ( i = **(_QWORD **)(a1 + 1240); i; i = *(_QWORD *)(i + 56) )
    {
      if ( *(_DWORD *)(i + 48) == v5 )
      {
        KnownRIMDeviceKind = GetKnownRIMDeviceKind(i);
        CBaseInput::ForwardPnpNotificationToISM(KnownRIMDeviceKind, i, *(_QWORD *)i, 2);
      }
    }
    ExReleasePushLockSharedEx(v4, 0LL);
    KeLeaveCriticalRegion();
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    if ( result )
      return (**(__int64 (__fastcall ***)(__int64))result)(result);
  }
  return result;
}
