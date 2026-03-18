/*
 * XREFs of HUBDSM_CheckingIfLTMShouldBeEnabled @ 0x140020A90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBDSM_CheckingIfLTMShouldBeEnabled(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  bool v3; // zf
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 960);
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_14006C1E8);
  if ( (*(_DWORD *)(v1 + 1640) & 0x100020) != 0x100020 )
    return 4061LL;
  v3 = (*(_DWORD *)(v2 + 4) & 0x40000) == 0;
  result = 4089LL;
  if ( v3 )
    return 4061LL;
  return result;
}
