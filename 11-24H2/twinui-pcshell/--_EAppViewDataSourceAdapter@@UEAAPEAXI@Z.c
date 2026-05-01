/*
 * XREFs of ??_EAppViewDataSourceAdapter@@UEAAPEAXI@Z @ 0x1806BFC00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1AppViewDataSourceAdapter@@UEAA@XZ @ 0x1806BFAA8 (--1AppViewDataSourceAdapter@@UEAA@XZ.c)
 */

AppViewDataSourceAdapter *__fastcall AppViewDataSourceAdapter::`vector deleting destructor'(
        AppViewDataSourceAdapter *this,
        char a2)
{
  AppViewDataSourceAdapter::~AppViewDataSourceAdapter(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x100);
  return this;
}
