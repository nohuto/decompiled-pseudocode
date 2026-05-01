/*
 * XREFs of ??_ECWinRTApplicationView@@UEAAPEAXI@Z @ 0x180311540
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CWinRTApplicationView@@UEAA@XZ @ 0x180311440 (--1CWinRTApplicationView@@UEAA@XZ.c)
 */

CWinRTApplicationView *__fastcall CWinRTApplicationView::`vector deleting destructor'(
        CWinRTApplicationView *this,
        char a2)
{
  CWinRTApplicationView::~CWinRTApplicationView(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xF0);
  return this;
}
