/*
 * XREFs of ExpInitExpCheckTestSigningInfo @ 0x1406578C0
 * Callers:
 *     <none>
 * Callees:
 *     ZwQuerySystemInformation @ 0x1406A6AD0 (ZwQuerySystemInformation.c)
 */

_BOOL8 __fastcall ExpInitExpCheckTestSigningInfo(PRTL_RUN_ONCE RunOnce, PVOID Parameter, PVOID *Context)
{
  int v3; // eax
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF

  v5 = 8LL;
  v3 = ZwQuerySystemInformation(103LL, &v5);
  if ( v3 >= 0 && (v5 & 0x200000000LL) != 0 )
    ExpTestSigningEnabled = 1;
  return v3 >= 0;
}
