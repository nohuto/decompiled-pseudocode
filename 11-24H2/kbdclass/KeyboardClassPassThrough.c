/*
 * XREFs of KeyboardClassPassThrough @ 0x1C000FAB0
 * Callers:
 *     KeyboardClassSystemControl @ 0x1C0010A50 (KeyboardClassSystemControl.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall KeyboardClassPassThrough(__int64 a1, IRP *a2)
{
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 64) + 16LL), a2);
}
