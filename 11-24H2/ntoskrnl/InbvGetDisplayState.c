/*
 * XREFs of InbvGetDisplayState @ 0x14058F40C
 * Callers:
 *     FinalizeBootLogo @ 0x14058F72C (FinalizeBootLogo.c)
 *     InbvRotateGuiBootDisplay @ 0x14058F780 (InbvRotateGuiBootDisplay.c)
 *     RotBarUpdate @ 0x14058F8DC (RotBarUpdate.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall InbvGetDisplayState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( qword_140E65D40 && *(_QWORD *)(qword_140E65D40 + 144) )
    return guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  else
    return 2LL;
}
