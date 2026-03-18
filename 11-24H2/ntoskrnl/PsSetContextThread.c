/*
 * XREFs of PsSetContextThread @ 0x140A9CFE0
 * Callers:
 *     <none>
 * Callees:
 *     PspSetContextThreadInternal @ 0x1408FD220 (PspSetContextThreadInternal.c)
 */

__int64 __fastcall PsSetContextThread(struct _KTHREAD *a1, __int64 a2, char a3)
{
  return PspSetContextThreadInternal(a1, a2, a3, a3, 1);
}
