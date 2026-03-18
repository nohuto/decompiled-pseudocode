/*
 * XREFs of MiObtainSystemCharges @ 0x1402F779C
 * Callers:
 *     MiGetPageTablePages @ 0x14039E9BC (MiGetPageTablePages.c)
 *     MiGetLargePagesForSystemMapping @ 0x140AAD164 (MiGetLargePagesForSystemMapping.c)
 * Callees:
 *     MiChargeCommit @ 0x140211450 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x14028EF80 (MiReturnCommit.c)
 *     MiChargeResident @ 0x1402F5FA0 (MiChargeResident.c)
 */

__int64 __fastcall MiObtainSystemCharges(ULONG *a1, unsigned __int64 a2, int a3)
{
  __int64 v6; // r8

  if ( !(unsigned int)MiChargeCommit((__int64)a1, a2, 1) )
    return 0LL;
  v6 = 128LL;
  if ( a3 != 1 )
    v6 = 0LL;
  if ( !(unsigned int)MiChargeResident(a1, a2, v6) )
  {
    MiReturnCommit((__int64)a1, a2, 0);
    return 0LL;
  }
  if ( a3 != 1 )
  {
    if ( a3 == 3 )
      _InterlockedAdd64(&qword_140E375F8, a2);
    else
      _InterlockedAdd64(&qword_140E375E0, a2);
  }
  return 1LL;
}
