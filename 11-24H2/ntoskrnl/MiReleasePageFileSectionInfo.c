/*
 * XREFs of MiReleasePageFileSectionInfo @ 0x14049A6D8
 * Callers:
 *     MiGetPageFileSectionForReservation @ 0x14048C2E0 (MiGetPageFileSectionForReservation.c)
 * Callees:
 *     MiDecrementModifiedWriteCount @ 0x140259314 (MiDecrementModifiedWriteCount.c)
 *     MiUnlockProtoPoolPage @ 0x14029C7F0 (MiUnlockProtoPoolPage.c)
 *     MiReleaseControlAreaWaiters @ 0x140338770 (MiReleaseControlAreaWaiters.c)
 */

void __fastcall MiReleasePageFileSectionInfo(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 *v6; // rax

  v5 = *(_QWORD *)(a1 + 8);
  if ( v5 )
  {
    LOBYTE(a2) = *(_BYTE *)(a1 + 32);
    MiUnlockProtoPoolPage(v5, a2, a3, a4);
  }
  v6 = MiDecrementModifiedWriteCount(*(_QWORD *)a1, 0);
  if ( v6 )
    MiReleaseControlAreaWaiters(v6);
}
