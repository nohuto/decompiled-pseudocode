/*
 * XREFs of HUBDSM_UnregsiteringWithHsmOnDetach @ 0x140024F00
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_UnregisterWithHSM @ 0x1400120A0 (HUBMUX_UnregisterWithHSM.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBDSM_UnregsiteringWithHsmOnDetach(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  HUBMUX_UnregisterWithHSM(v1);
  (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(v1 + 8) + 1240LL))(*(_QWORD *)(v1 + 8), 3006LL);
  return 4077LL;
}
