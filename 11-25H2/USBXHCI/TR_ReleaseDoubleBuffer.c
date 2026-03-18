/*
 * XREFs of TR_ReleaseDoubleBuffer @ 0x140023F10
 * Callers:
 *     Bulk_CompleteTransfers @ 0x140011C6C (Bulk_CompleteTransfers.c)
 * Callees:
 *     <none>
 */

void __fastcall TR_ReleaseDoubleBuffer(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rcx

  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v4 = *(_QWORD **)(a1 + 232);
  if ( *v4 != a1 + 224 )
    __fastfail(3u);
  a2[1] = v4;
  *a2 = a1 + 224;
  *v4 = a2;
  *(_QWORD *)(a1 + 232) = a2;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
}
