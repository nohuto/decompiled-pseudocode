/*
 * XREFs of HUBMISC_CheckIfDeviceShouldBeDisabledOnRemove @ 0x14002E57C
 * Callers:
 *     HUBDSM_CheckingIfDeviceShouldBeDisabled @ 0x14001FE70 (HUBDSM_CheckingIfDeviceShouldBeDisabled.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBMISC_CheckIfDeviceShouldBeDisabledOnRemove(_DWORD *a1)
{
  __int64 v2; // rax
  bool v3; // sf
  __int64 result; // rax

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_14006C1E8);
  if ( (a1[411] & 8) == 0 )
    return 4061LL;
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 40LL) & 0x40000000) == 0 )
    return 4061LL;
  v3 = (*(_DWORD *)(v2 + 4) & 0x80u) != 0;
  result = 4089LL;
  if ( !v3 )
    return 4061LL;
  return result;
}
