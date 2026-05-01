/*
 * XREFs of ??_GDDAScreenCapture@@QEAAPEAXI@Z @ 0x1803F0288
 * Callers:
 *     ??1?$unique_ptr@VDDAScreenCapture@@U?$default_delete@VDDAScreenCapture@@@std@@@std@@QEAA@XZ @ 0x1803F01D0 (--1-$unique_ptr@VDDAScreenCapture@@U-$default_delete@VDDAScreenCapture@@@std@@@std@@QEAA@XZ.c)
 *     ?_Destroy@?$_Ref_count@VDDAScreenCapture@@@std@@EEAAXXZ @ 0x1803F0B30 (-_Destroy@-$_Ref_count@VDDAScreenCapture@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1DDAScreenCapture@@QEAA@XZ @ 0x1803F01F0 (--1DDAScreenCapture@@QEAA@XZ.c)
 */

DDAScreenCapture *__fastcall DDAScreenCapture::`scalar deleting destructor'(DDAScreenCapture *this)
{
  DDAScreenCapture::~DDAScreenCapture(this);
  operator delete(this, (const struct std::nothrow_t *)0x88);
  return this;
}
