/*
 * XREFs of MiReturnSystemCharges @ 0x14044FC38
 * Callers:
 *     MiGetPageTablePages @ 0x14021CA98 (MiGetPageTablePages.c)
 *     MiCleanupPageTablePages @ 0x14026DA8C (MiCleanupPageTablePages.c)
 *     MiDeleteSystemPageTableTail @ 0x14044FA20 (MiDeleteSystemPageTableTail.c)
 *     MiReturnPoolCharges @ 0x14044FBA4 (MiReturnPoolCharges.c)
 *     MiInitializeDynamicBitmap @ 0x14067A698 (MiInitializeDynamicBitmap.c)
 *     MiDeleteSparseRange @ 0x1407FB544 (MiDeleteSparseRange.c)
 *     MiGetLargePagesForSystemMapping @ 0x140AA81E4 (MiGetLargePagesForSystemMapping.c)
 * Callees:
 *     MiReturnCommit @ 0x14029EB80 (MiReturnCommit.c)
 *     MiReturnResident @ 0x140338A10 (MiReturnResident.c)
 */

unsigned __int64 __fastcall MiReturnSystemCharges(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v7; // rax

  MiReturnCommit(a1, a3, 0);
  if ( a4 != 1 )
  {
    v7 = -(__int64)a2;
    if ( a4 == 3 )
      _InterlockedAdd64(&qword_140E37738, v7);
    else
      _InterlockedAdd64(&qword_140E37720, v7);
  }
  return MiReturnResident(a1, a2);
}
