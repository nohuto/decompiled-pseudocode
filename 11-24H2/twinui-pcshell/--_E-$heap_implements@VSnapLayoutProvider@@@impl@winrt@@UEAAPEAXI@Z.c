/*
 * XREFs of ??_E?$heap_implements@VSnapLayoutProvider@@@impl@winrt@@UEAAPEAXI@Z @ 0x18059D8FC
 * Callers:
 *     ??_ESnapLayoutProvider@@W7EAAPEAXI@Z @ 0x18059D780 (--_ESnapLayoutProvider@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SnapLayoutProvider@@UEAA@XZ @ 0x18059D24C (--1SnapLayoutProvider@@UEAA@XZ.c)
 */

SnapLayoutProvider *__fastcall winrt::impl::heap_implements<SnapLayoutProvider>::`vector deleting destructor'(
        SnapLayoutProvider *a1,
        char a2)
{
  SnapLayoutProvider::~SnapLayoutProvider(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0xA0);
  return a1;
}
