/*
 * XREFs of InbvGetDisplayState @ 0x14058C42C
 * Callers:
 *     FinalizeBootLogo @ 0x14058C74C (FinalizeBootLogo.c)
 *     InbvRotateGuiBootDisplay @ 0x14058C7A0 (InbvRotateGuiBootDisplay.c)
 *     RotBarUpdate @ 0x14058C8FC (RotBarUpdate.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall InbvGetDisplayState(__int64 a1, __int64 a2)
{
  if ( qword_140E65E70 && *(_QWORD *)(qword_140E65E70 + 144) )
    return guard_dispatch_icall_no_overrides(a1, a2);
  else
    return 2LL;
}
