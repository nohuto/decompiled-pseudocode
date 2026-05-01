/*
 * XREFs of ??_E?$heap_implements@UTabTipAdapter@KeyboardHosting@@@impl@winrt@@UEAAPEAXI@Z @ 0x18017BBCC
 * Callers:
 *     ??_E?$heap_implements@UTabTipAdapter@KeyboardHosting@@@impl@winrt@@WBA@EAAPEAXI@Z @ 0x18046F5C0 (--_E-$heap_implements@UTabTipAdapter@KeyboardHosting@@@impl@winrt@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1TabTipAdapter@KeyboardHosting@@UEAA@XZ @ 0x18017BC08 (--1TabTipAdapter@KeyboardHosting@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

KeyboardHosting::TabTipAdapter *__fastcall winrt::impl::heap_implements<KeyboardHosting::TabTipAdapter>::`vector deleting destructor'(
        KeyboardHosting::TabTipAdapter *a1,
        char a2)
{
  KeyboardHosting::TabTipAdapter::~TabTipAdapter(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x248);
  return a1;
}
