/*
 * XREFs of KiGetHalExtensionList @ 0x140C15B64
 * Callers:
 *     sub_140BD00B0 @ 0x140BD00B0 (sub_140BD00B0.c)
 * Callees:
 *     <none>
 */

__int64 KiGetHalExtensionList()
{
  __int64 v0; // rax

  v0 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
  return *(_QWORD *)(v0 + 240) + 2584LL;
}
