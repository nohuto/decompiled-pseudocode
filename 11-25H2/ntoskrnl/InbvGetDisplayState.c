/*
 * XREFs of InbvGetDisplayState @ 0x14058BC2C
 * Callers:
 *     FinalizeBootLogo @ 0x14058BF4C (FinalizeBootLogo.c)
 *     InbvRotateGuiBootDisplay @ 0x14058BFA0 (InbvRotateGuiBootDisplay.c)
 *     RotBarUpdate @ 0x14058C0FC (RotBarUpdate.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall InbvGetDisplayState(__int64 a1)
{
  if ( qword_140E65AE8 && *(_QWORD *)(qword_140E65AE8 + 144) )
    return guard_dispatch_icall_no_overrides(a1);
  else
    return 2LL;
}
