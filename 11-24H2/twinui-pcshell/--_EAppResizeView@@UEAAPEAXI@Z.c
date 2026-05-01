/*
 * XREFs of ??_EAppResizeView@@UEAAPEAXI@Z @ 0x18052F200
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1AppResizeView@@UEAA@XZ @ 0x18052F128 (--1AppResizeView@@UEAA@XZ.c)
 */

AppResizeView *__fastcall AppResizeView::`vector deleting destructor'(AppResizeView *this, char a2)
{
  AppResizeView::~AppResizeView(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x1F0);
  return this;
}
