/*
 * XREFs of _dynamic_initializer_for__Contexts__ @ 0x180007500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_initializer_for__Contexts__()
{
  RtlInitializeSRWLock(&unk_180406AE8);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__Contexts__);
}
