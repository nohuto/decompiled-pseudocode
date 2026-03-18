/*
 * XREFs of PopPluginAbandonDevice @ 0x1404D98B8
 * Callers:
 *     PoFxAbandonDevice @ 0x140A74894 (PoFxAbandonDevice.c)
 * Callees:
 *     PopFxBugCheck @ 0x140377108 (PopFxBugCheck.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall PopPluginAbandonDevice(ULONG_PTR BugCheckParameter3, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]

  v7 = 0LL;
  v6 = a2;
  if ( !(unsigned __int8)guard_dispatch_icall_no_overrides(2LL, &v6, a3, a4) )
    PopFxBugCheck(0x605uLL, 2uLL, BugCheckParameter3, 0LL);
  return v7;
}
