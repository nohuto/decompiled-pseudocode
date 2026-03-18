/*
 * XREFs of MiReleasePageFileSectionInfo @ 0x14037012C
 * Callers:
 *     MiGetPageFileSectionForReservation @ 0x14049161C (MiGetPageFileSectionForReservation.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x14020F410 (MiReleaseControlAreaWaiters.c)
 *     MiUnlockProtoPoolPage @ 0x14028CBF0 (MiUnlockProtoPoolPage.c)
 *     MiDecrementModifiedWriteCount @ 0x140370FD4 (MiDecrementModifiedWriteCount.c)
 */

_QWORD *__fastcall MiReleasePageFileSectionInfo(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  ULONG_PTR v4; // rcx
  _QWORD *result; // rax
  __int64 v6; // rdx
  __int64 v7; // r8

  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 )
  {
    LOBYTE(a2) = *(_BYTE *)(a1 + 32);
    MiUnlockProtoPoolPage(v4, a2, a3);
  }
  result = (_QWORD *)MiDecrementModifiedWriteCount(*(_QWORD *)a1, 0LL);
  if ( result )
    return MiReleaseControlAreaWaiters(result, v6, v7);
  return result;
}
