/*
 * XREFs of ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z @ 0x1C006DC70
 * Callers:
 *     HandleInputThreadActivated @ 0x1C006DB3C (HandleInputThreadActivated.c)
 *     UserDeactivateMITInputProcessing @ 0x1C0087D08 (UserDeactivateMITInputProcessing.c)
 * Callees:
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C0057EC8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     ?ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z @ 0x1C006C548 (-ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z.c)
 *     GetKnownRIMDeviceKind @ 0x1C006D78C (GetKnownRIMDeviceKind.c)
 *     RimInputTypeToDeviceInputType @ 0x1C006EEF0 (RimInputTypeToDeviceInputType.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseInput::HandleInputThreadStateChange(__int64 a1, int a2)
{
  __int64 v4; // rbx
  int v5; // ebp
  __int64 i; // rdi
  __int64 result; // rax
  int KnownRIMDeviceKind; // eax

  if ( !CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1449LL);
  if ( a2 )
  {
    if ( a2 != 1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1484LL);
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    if ( result )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 1256);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v4, 0LL);
    v5 = RimInputTypeToDeviceInputType(*(unsigned int *)(a1 + 144));
    for ( i = **(_QWORD **)(a1 + 1264); i; i = *(_QWORD *)(i + 56) )
    {
      if ( *(unsigned __int8 *)(i + 48) == v5 )
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
