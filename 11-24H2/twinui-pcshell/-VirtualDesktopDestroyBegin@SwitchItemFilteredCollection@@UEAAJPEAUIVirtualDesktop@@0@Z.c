/*
 * XREFs of ?VirtualDesktopDestroyBegin@SwitchItemFilteredCollection@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x1804B6920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SwitchItemFilteredCollection::VirtualDesktopDestroyBegin(
        SwitchItemFilteredCollection *this,
        struct IVirtualDesktop *a2,
        struct IVirtualDesktop *a3)
{
  ++*((_DWORD *)this + 29);
  return 0LL;
}
