/*
 * XREFs of PsSetContextThread @ 0x140A974B0
 * Callers:
 *     <none>
 * Callees:
 *     PspSetContextThreadInternal @ 0x1409095F0 (PspSetContextThreadInternal.c)
 */

__int64 __fastcall PsSetContextThread(struct _KTHREAD *a1, int *a2, char a3)
{
  return PspSetContextThreadInternal(a1, a2, a3, a3, 1);
}
