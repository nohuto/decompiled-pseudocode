/*
 * XREFs of ?GreGetCurrentSystemThread@@YAPEAU_ETHREAD@@XZ @ 0x1400BF180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _ETHREAD *GreGetCurrentSystemThread(void)
{
  return KeGetCurrentThread();
}
