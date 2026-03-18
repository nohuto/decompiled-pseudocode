/*
 * XREFs of PopPluginUnregisterDevice @ 0x1405CDD70
 * Callers:
 *     PopFxUnregisterDevice @ 0x140A72854 (PopFxUnregisterDevice.c)
 * Callees:
 *     PopFxBugCheck @ 0x14034E260 (PopFxBugCheck.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopPluginUnregisterDevice(ULONG_PTR BugCheckParameter3)
{
  __int64 result; // rax

  result = guard_dispatch_icall_no_overrides(4LL);
  if ( !(_BYTE)result )
    PopFxBugCheck(0x605uLL, 4uLL, BugCheckParameter3, 0LL);
  return result;
}
