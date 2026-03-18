/*
 * XREFs of MiDeleteControlAreaList @ 0x1403F7F80
 * Callers:
 *     MiSegmentDereferenceWorker @ 0x1403F7BB0 (MiSegmentDereferenceWorker.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiDeleteControlArea @ 0x14036F6E8 (MiDeleteControlArea.c)
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
