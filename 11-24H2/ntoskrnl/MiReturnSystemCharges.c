/*
 * XREFs of MiReturnSystemCharges @ 0x14045A7E8
 * Callers:
 *     MiGetPageTablePages @ 0x14039E9BC (MiGetPageTablePages.c)
 *     MiCleanupPageTablePages @ 0x1403A679C (MiCleanupPageTablePages.c)
 *     MiDeleteSystemPageTableTail @ 0x14045A5D0 (MiDeleteSystemPageTableTail.c)
 *     MiReturnPoolCharges @ 0x14045A754 (MiReturnPoolCharges.c)
 *     MiInitializeDynamicBitmap @ 0x1406794B8 (MiInitializeDynamicBitmap.c)
 *     MiDeleteSparseRange @ 0x1407FADD4 (MiDeleteSparseRange.c)
 *     MiGetLargePagesForSystemMapping @ 0x140AAD164 (MiGetLargePagesForSystemMapping.c)
 * Callees:
 *     MiReturnResident @ 0x14020F6B0 (MiReturnResident.c)
 *     MiReturnCommit @ 0x14028EF80 (MiReturnCommit.c)
 */

unsigned __int64 __fastcall MiReturnSystemCharges(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v7; // rax

  MiReturnCommit(a1, a3, 0);
  if ( a4 != 1 )
  {
    v7 = -(__int64)a2;
    if ( a4 == 3 )
      _InterlockedAdd64(&qword_140E375F8, v7);
    else
      _InterlockedAdd64(&qword_140E375E0, v7);
  }
  return MiReturnResident(a1, a2);
}
