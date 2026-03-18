/*
 * XREFs of Controller_UcxEvtEnableForwardProgress @ 0x1400796C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Controller_UcxEvtEnableForwardProgress(__int64 a1)
{
  *(_BYTE *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
               WdfDriverGlobals,
               a1,
               off_14006B290)
           + 784) = 1;
  return 0LL;
}
