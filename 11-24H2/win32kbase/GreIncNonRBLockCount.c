/*
 * XREFs of GreIncNonRBLockCount @ 0x140039A40
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140039940 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 */

struct _GRETHREAD *__fastcall GreIncNonRBLockCount(__int64 a1)
{
  struct _GRETHREAD *result; // rax

  result = GreGetCurrentThread(a1);
  if ( result )
    ++*((_DWORD *)result + 88);
  return result;
}
