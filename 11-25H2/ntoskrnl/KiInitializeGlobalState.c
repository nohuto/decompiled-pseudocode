/*
 * XREFs of KiInitializeGlobalState @ 0x1405B3214
 * Callers:
 *     KiInitializeBootStructures @ 0x140B48120 (KiInitializeBootStructures.c)
 * Callees:
 *     <none>
 */

void *KiInitializeGlobalState()
{
  void *result; // rax

  KiGlobalState = &KiInitState;
  result = &unk_140F21E44;
  qword_140F216A8 = &unk_140F21E44;
  return result;
}
