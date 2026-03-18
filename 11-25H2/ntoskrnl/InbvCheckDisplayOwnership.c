/*
 * XREFs of InbvCheckDisplayOwnership @ 0x14058BAB0
 * Callers:
 *     HaliHaltSystem @ 0x1405420D0 (HaliHaltSystem.c)
 *     HalpCheckPowerButton @ 0x140542170 (HalpCheckPowerButton.c)
 *     InbvRotateGuiBootDisplay @ 0x14058BFA0 (InbvRotateGuiBootDisplay.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall InbvCheckDisplayOwnership(__int64 a1)
{
  if ( qword_140E65AE8 && *(_QWORD *)(qword_140E65AE8 + 64) )
    return guard_dispatch_icall_no_overrides(a1);
  else
    return 0;
}
