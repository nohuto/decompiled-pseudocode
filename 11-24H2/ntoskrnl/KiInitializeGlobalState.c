/*
 * XREFs of KiInitializeGlobalState @ 0x1405B70E4
 * Callers:
 *     KiInitializeBootStructures @ 0x140B580C0 (KiInitializeBootStructures.c)
 * Callees:
 *     <none>
 */

void *KiInitializeGlobalState()
{
  void *result; // rax

  KiGlobalState = &KiInitState;
  result = &unk_140F225E4;
  qword_140F21E78 = &unk_140F225E4;
  return result;
}
