/*
 * XREFs of PopPluginUnregisterDevice @ 0x1405D25F0
 * Callers:
 *     PopFxUnregisterDevice @ 0x140A74BB4 (PopFxUnregisterDevice.c)
 * Callees:
 *     PopFxBugCheck @ 0x140377108 (PopFxBugCheck.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopPluginUnregisterDevice(ULONG_PTR BugCheckParameter3, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = a2;
  result = guard_dispatch_icall_no_overrides(4LL, &v6, a3, a4);
  if ( !(_BYTE)result )
    PopFxBugCheck(0x605uLL, 4uLL, BugCheckParameter3, 0LL);
  return result;
}
