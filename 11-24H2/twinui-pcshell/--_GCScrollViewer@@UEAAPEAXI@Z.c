/*
 * XREFs of ??_GCScrollViewer@@UEAAPEAXI@Z @ 0x1804DA410
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CScrollViewer@@UEAA@XZ @ 0x1804DA3B0 (--1CScrollViewer@@UEAA@XZ.c)
 */

CScrollViewer *__fastcall CScrollViewer::`scalar deleting destructor'(CScrollViewer *this, char a2)
{
  CScrollViewer::~CScrollViewer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x128);
  return this;
}
