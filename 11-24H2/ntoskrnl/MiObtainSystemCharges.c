/*
 * XREFs of MiObtainSystemCharges @ 0x14021D05C
 * Callers:
 *     MiGetPageTablePages @ 0x14021CA98 (MiGetPageTablePages.c)
 *     MiGetLargePagesForSystemMapping @ 0x140AA81E4 (MiGetLargePagesForSystemMapping.c)
 * Callees:
 *     MiReturnCommit @ 0x14029EB80 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x14033A7B0 (MiChargeCommit.c)
 *     MiChargeResident @ 0x14033DD30 (MiChargeResident.c)
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
      _InterlockedAdd64(&qword_140E37738, a2);
    else
      _InterlockedAdd64(&qword_140E37720, a2);
  }
  return 1LL;
}
