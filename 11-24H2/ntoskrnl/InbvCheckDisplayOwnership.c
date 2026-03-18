/*
 * XREFs of InbvCheckDisplayOwnership @ 0x14058F290
 * Callers:
 *     HaliHaltSystem @ 0x140544990 (HaliHaltSystem.c)
 *     HalpCheckPowerButton @ 0x140544A30 (HalpCheckPowerButton.c)
 *     InbvRotateGuiBootDisplay @ 0x14058F780 (InbvRotateGuiBootDisplay.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall InbvCheckDisplayOwnership(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( qword_140E65D40 && *(_QWORD *)(qword_140E65D40 + 64) )
    return guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  else
    return 0;
}
