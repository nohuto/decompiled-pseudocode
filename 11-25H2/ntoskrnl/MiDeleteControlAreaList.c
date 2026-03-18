/*
 * XREFs of MiDeleteControlAreaList @ 0x140459604
 * Callers:
 *     MiSegmentDereferenceWorker @ 0x140459230 (MiSegmentDereferenceWorker.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiDeleteControlArea @ 0x14043A3F8 (MiDeleteControlArea.c)
 */

void __fastcall MiDeleteControlAreaList(__int64 a1)
{
  volatile LONG *v2; // rsi
  KIRQL v3; // al
  _QWORD *v4; // rdi

  if ( *(_QWORD *)(a1 + 2152) )
  {
    v2 = (volatile LONG *)(a1 + 1728);
    while ( 1 )
    {
      v3 = ExAcquireSpinLockExclusive(v2);
      v4 = *(_QWORD **)(a1 + 2152);
      if ( v4 )
        *(_QWORD *)(a1 + 2152) = *v4;
      MiReleaseSpinLockExclusive(v2, v3);
      if ( !v4 )
        break;
      MiDeleteControlArea(v4 - 1);
    }
  }
}
