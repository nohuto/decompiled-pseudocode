/*
 * XREFs of ?PinShellLink@CPinnedList@@W7EAAJPEBGPEAUIShellLinkW@@@Z @ 0x180688300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CPinnedList::PinShellLink(__int64 a1, const unsigned __int16 *a2, struct IShellLinkW *a3)
{
  return CPinnedList::PinShellLink((CPinnedList *)(a1 - 8), a2, a3);
}
