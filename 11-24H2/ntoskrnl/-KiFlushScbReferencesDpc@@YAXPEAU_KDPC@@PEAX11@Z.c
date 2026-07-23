/*
 * XREFs of ?KiFlushScbReferencesDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1405C4D10
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 */

void __fastcall KiFlushScbReferencesDpc(struct _KDPC *a1, struct _KEVENT *a2, void *a3, void *a4)
{
  KeSetEvent(a2, 0, 0);
}
