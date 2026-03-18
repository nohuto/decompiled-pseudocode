/*
 * XREFs of IopIoRingWaitForCompletionEvent @ 0x1405941BC
 * Callers:
 *     NtSubmitIoRing @ 0x1404C5230 (NtSubmitIoRing.c)
 *     IopProcessIoRingEntry @ 0x1406EC178 (IopProcessIoRingEntry.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 */

__int64 __fastcall IopIoRingWaitForCompletionEvent(__int64 a1, KPROCESSOR_MODE a2, BOOLEAN a3, LARGE_INTEGER *a4)
{
  void *v4; // r14
  unsigned int v6; // edi
  char v7; // si
  KIRQL v8; // al

  v4 = (void *)(a1 + 136);
  v6 = KeWaitForSingleObject((PVOID)(a1 + 136), WrIoRing, a2, a3, a4);
  if ( v6 )
  {
    v7 = 0;
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 104));
    if ( *(_BYTE *)(a1 + 160) )
      *(_BYTE *)(a1 + 160) = 0;
    else
      v7 = 1;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 104), v8);
    if ( v7 )
      return (unsigned int)KeWaitForSingleObject(v4, WrIoRing, 0, 0, 0LL);
  }
  return v6;
}
