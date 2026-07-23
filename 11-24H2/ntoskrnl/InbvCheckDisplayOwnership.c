/*
 * XREFs of InbvCheckDisplayOwnership @ 0x14058C2B0
 * Callers:
 *     HaliHaltSystem @ 0x140542250 (HaliHaltSystem.c)
 *     HalpCheckPowerButton @ 0x1405422F0 (HalpCheckPowerButton.c)
 *     InbvRotateGuiBootDisplay @ 0x14058C7A0 (InbvRotateGuiBootDisplay.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall InbvCheckDisplayOwnership(__int64 a1, __int64 a2)
{
  if ( qword_140E65E70 && *(_QWORD *)(qword_140E65E70 + 64) )
    return guard_dispatch_icall_no_overrides(a1, a2);
  else
    return 0;
}
