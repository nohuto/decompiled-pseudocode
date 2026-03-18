/*
 * XREFs of _anonymous_namespace_::GetKeyboardProcessor @ 0x140108298
 * Callers:
 *     ?ApplyRimDevBackedDeviceSummaryInformation@CBaseInput@@AEAAXW4_RIM_DEVICE_TYPE@@@Z @ 0x14006C4E8 (-ApplyRimDevBackedDeviceSummaryInformation@CBaseInput@@AEAAXW4_RIM_DEVICE_TYPE@@@Z.c)
 *     ApplyGatheredKeyboardDeviceCount @ 0x140108250 (ApplyGatheredKeyboardDeviceCount.c)
 *     GetKeyboardInputRoutingPolicy @ 0x140108280 (GetKeyboardInputRoutingPolicy.c)
 *     xxxKeyEventEx @ 0x14014BF54 (xxxKeyEventEx.c)
 *     NtMITSetKeyboardOverriderState @ 0x1401B8C00 (NtMITSetKeyboardOverriderState.c)
 *     SetKeyboardInputRoutingPolicy @ 0x140213370 (SetKeyboardInputRoutingPolicy.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall anonymous_namespace_::GetKeyboardProcessor(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(W32GetUserSessionState(a1) + 3192);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  else
    return 0LL;
}
