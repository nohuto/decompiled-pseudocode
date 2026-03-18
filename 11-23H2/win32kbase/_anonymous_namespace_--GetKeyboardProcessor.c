/*
 * XREFs of _anonymous_namespace_::GetKeyboardProcessor @ 0x1C006B304
 * Callers:
 *     GetKeyboardInputRoutingPolicy @ 0x1C006A7B0 (GetKeyboardInputRoutingPolicy.c)
 *     xxxKeyEventEx @ 0x1C006A7C8 (xxxKeyEventEx.c)
 *     ApplyGatheredKeyboardDeviceCount @ 0x1C006C690 (ApplyGatheredKeyboardDeviceCount.c)
 *     SetKeyboardInputRoutingPolicy @ 0x1C006C724 (SetKeyboardInputRoutingPolicy.c)
 *     ?GatherDeviceInfoSummaryInformation@CBaseInput@@AEAAXPEAUDEVICEINFO@@PEAK1PEAH11@Z @ 0x1C0077020 (-GatherDeviceInfoSummaryInformation@CBaseInput@@AEAAXPEAUDEVICEINFO@@PEAK1PEAH11@Z.c)
 *     NtMITSetKeyboardOverriderState @ 0x1C01420E0 (NtMITSetKeyboardOverriderState.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall anonymous_namespace_::GetKeyboardProcessor(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 3352);
  if ( v4 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  else
    return 0LL;
}
