/*
 * XREFs of MiObtainSystemCharges @ 0x14022A218
 * Callers:
 *     MiGetPageTablePages @ 0x14022A2B8 (MiGetPageTablePages.c)
 *     MiGetLargePagesForSystemMapping @ 0x140AA7D14 (MiGetLargePagesForSystemMapping.c)
 * Callees:
 *     MiChargeResident @ 0x14022CAE0 (MiChargeResident.c)
 *     MiChargeCommit @ 0x14022E7B0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140329900 (MiReturnCommit.c)
 */

__int64 __fastcall MiObtainSystemCharges(__int64 a1, unsigned __int64 a2, int a3, __int64 a4)
{
  __int64 v7; // r8

  if ( !(unsigned int)MiChargeCommit(a1, a2, 1LL, a4) )
    return 0LL;
  v7 = 128LL;
  if ( a3 != 1 )
    v7 = 0LL;
  if ( !(unsigned int)MiChargeResident(a1, a2, v7) )
  {
    MiReturnCommit(a1, a2, 0LL);
    return 0LL;
  }
  if ( a3 != 1 )
  {
    if ( a3 == 3 )
      _InterlockedAdd64(&qword_140E373B8, a2);
    else
      _InterlockedAdd64(&qword_140E373A0, a2);
  }
  return 1LL;
}
