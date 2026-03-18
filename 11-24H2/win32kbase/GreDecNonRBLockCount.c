/*
 * XREFs of GreDecNonRBLockCount @ 0x14003AFE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140039940 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 */

struct _GRETHREAD *__fastcall GreDecNonRBLockCount(__int64 a1)
{
  struct _GRETHREAD *result; // rax

  result = GreGetCurrentThread(a1);
  if ( result )
    --*((_DWORD *)result + 88);
  return result;
}
