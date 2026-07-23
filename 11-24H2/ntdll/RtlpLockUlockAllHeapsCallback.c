/*
 * XREFs of RtlpLockUlockAllHeapsCallback @ 0x1800207F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlUnlockHeap @ 0x180020820 (RtlUnlockHeap.c)
 *     RtlLockHeap @ 0x180020A10 (RtlLockHeap.c)
 */

__int64 __fastcall RtlpLockUlockAllHeapsCallback(void *a1, __int64 a2)
{
  if ( a2 )
    RtlLockHeap(a1);
  else
    RtlUnlockHeap(a1);
  return 0LL;
}
