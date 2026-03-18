/*
 * XREFs of HUBPDO_CreatePdo @ 0x140080088
 * Callers:
 *     HUBDSM_CreatingChildPDOAndReportingToPnp @ 0x1400217C0 (HUBDSM_CreatingChildPDOAndReportingToPnp.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 *     HUBPDO_CreatePdoInternal @ 0x14008014C (HUBPDO_CreatePdoInternal.c)
 */

__int64 __fastcall HUBPDO_CreatePdo(_QWORD *a1, __int64 a2)
{
  unsigned int PdoInternal; // esi
  void (__fastcall *v4)(_QWORD, _QWORD, __int64); // rbx
  __int64 v5; // rax
  __int64 v6; // rax

  *((_DWORD *)a1 + 610) = 0;
  LOBYTE(a2) = 1;
  PdoInternal = HUBPDO_CreatePdoInternal(a1, a2);
  if ( PdoInternal == 4077 )
  {
    v4 = *(void (__fastcall **)(_QWORD, _QWORD, __int64))(*a1 + 432LL);
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1[2]);
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 248))(WdfDriverGlobals, v5);
    v4(*(_QWORD *)(*a1 + 248LL), a1[3], v6);
    *(_DWORD *)(a1[1] + 1424LL) = 1;
  }
  else
  {
    *(_DWORD *)(a1[1] + 1424LL) = 3;
  }
  return PdoInternal;
}
