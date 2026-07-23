/*
 * XREFs of PsSetContextThread @ 0x140A98550
 * Callers:
 *     <none>
 * Callees:
 *     PspSetContextThreadInternal @ 0x14091FB00 (PspSetContextThreadInternal.c)
 */

int __fastcall PsSetContextThread(struct _KTHREAD *a1, _CONTEXT *a2, char a3)
{
  return PspSetContextThreadInternal(a1, a2, a3, a3, 1);
}
