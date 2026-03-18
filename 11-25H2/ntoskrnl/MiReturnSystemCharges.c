/*
 * XREFs of MiReturnSystemCharges @ 0x140377DD8
 * Callers:
 *     MiGetPageTablePages @ 0x14022A2B8 (MiGetPageTablePages.c)
 *     MiDeleteSystemPageTableTail @ 0x140377BC0 (MiDeleteSystemPageTableTail.c)
 *     MiReturnPoolCharges @ 0x140377D44 (MiReturnPoolCharges.c)
 *     MiCleanupPageTablePages @ 0x14038FA38 (MiCleanupPageTablePages.c)
 *     MiInitializeDynamicBitmap @ 0x14066DC0C (MiInitializeDynamicBitmap.c)
 *     MiDeleteSparseRange @ 0x1407EAF44 (MiDeleteSparseRange.c)
 *     MiGetLargePagesForSystemMapping @ 0x140AA7D14 (MiGetLargePagesForSystemMapping.c)
 * Callees:
 *     MiReturnResident @ 0x14022F8D0 (MiReturnResident.c)
 *     MiReturnCommit @ 0x140329900 (MiReturnCommit.c)
 */

unsigned __int64 __fastcall MiReturnSystemCharges(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v7; // rax

  MiReturnCommit(a1, a3, 0);
  if ( a4 != 1 )
  {
    v7 = -(__int64)a2;
    if ( a4 == 3 )
      _InterlockedAdd64(&qword_140E373B8, v7);
    else
      _InterlockedAdd64(&qword_140E373A0, v7);
  }
  return MiReturnResident(a1, a2);
}
