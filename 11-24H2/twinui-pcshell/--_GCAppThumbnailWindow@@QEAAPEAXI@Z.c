/*
 * XREFs of ??_GCAppThumbnailWindow@@QEAAPEAXI@Z @ 0x18049CF1C
 * Callers:
 *     ??1?$_Temporary_owner@VCAppThumbnailWindow@@@std@@QEAA@XZ @ 0x18049C27C (--1-$_Temporary_owner@VCAppThumbnailWindow@@@std@@QEAA@XZ.c)
 *     ?_Destroy@?$_Ref_count@VCAppThumbnailWindow@@@std@@EEAAXXZ @ 0x1804A01E0 (-_Destroy@-$_Ref_count@VCAppThumbnailWindow@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAppThumbnailWindow@@QEAA@XZ @ 0x18049C430 (--1CAppThumbnailWindow@@QEAA@XZ.c)
 */

CAppThumbnailWindow *__fastcall CAppThumbnailWindow::`scalar deleting destructor'(CAppThumbnailWindow *this)
{
  CAppThumbnailWindow::~CAppThumbnailWindow(this);
  operator delete(this, (const struct std::nothrow_t *)0x258);
  return this;
}
