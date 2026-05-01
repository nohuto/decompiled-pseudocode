/*
 * XREFs of ??_GCClassicWindow@@MEAAPEAXI@Z @ 0x1801A4D30
 * Callers:
 *     <none>
 * Callees:
 *     ??1CClassicWindow@@MEAA@XZ @ 0x1801A4D6C (--1CClassicWindow@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CClassicWindow *__fastcall CClassicWindow::`scalar deleting destructor'(CClassicWindow *this, char a2)
{
  CClassicWindow::~CClassicWindow(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x58);
  return this;
}
