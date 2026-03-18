/*
 * XREFs of MiReleasePageFileSectionInfo @ 0x1404A0974
 * Callers:
 *     MiGetPageFileSectionForReservation @ 0x140492424 (MiGetPageFileSectionForReservation.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x14022F630 (MiReleaseControlAreaWaiters.c)
 *     MiUnlockProtoPoolPage @ 0x1402353A0 (MiUnlockProtoPoolPage.c)
 *     MiDecrementModifiedWriteCount @ 0x14035A754 (MiDecrementModifiedWriteCount.c)
 */

__int64 *__fastcall MiReleasePageFileSectionInfo(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  ULONG_PTR v5; // rcx
  __int64 *result; // rax

  v5 = *(_QWORD *)(a1 + 8);
  if ( v5 )
    MiUnlockProtoPoolPage(v5, *(_BYTE *)(a1 + 32), a3, a4);
  result = MiDecrementModifiedWriteCount(*(_QWORD *)a1, 0);
  if ( result )
    return (__int64 *)MiReleaseControlAreaWaiters(result);
  return result;
}
