/*
 * XREFs of DisableImeForProcess @ 0x140280880
 * Callers:
 *     <none>
 * Callees:
 *     ?UserDisableImeForProcess@@YAXPEAUtagPROCESSINFO@@@Z @ 0x14023843C (-UserDisableImeForProcess@@YAXPEAUtagPROCESSINFO@@@Z.c)
 */

void __fastcall DisableImeForProcess(struct tagPROCESSINFO *a1)
{
  UserDisableImeForProcess(a1);
}
