/*
 * XREFs of KiInitializeGlobalState @ 0x1405B4444
 * Callers:
 *     KiInitializeBootStructures @ 0x140B5A140 (KiInitializeBootStructures.c)
 * Callees:
 *     <none>
 */

void *KiInitializeGlobalState()
{
  void *result; // rax

  KiGlobalState = &KiInitState;
  result = &unk_140F227C4;
  qword_140F22998 = &unk_140F227C4;
  return result;
}
