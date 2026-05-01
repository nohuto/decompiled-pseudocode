/*
 * XREFs of ?SetInputCallback@DragInputHandler@@UEAAJPEAUITabletModeInputCallback@@@Z @ 0x1804D62C0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 */

__int64 __fastcall DragInputHandler::SetInputCallback(DragInputHandler *this, struct ITabletModeInputCallback *a2)
{
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 4, (__int64)a2);
  return 0LL;
}
