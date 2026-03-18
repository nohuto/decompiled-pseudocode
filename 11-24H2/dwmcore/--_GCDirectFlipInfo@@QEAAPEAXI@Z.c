/*
 * XREFs of ??_GCDirectFlipInfo@@QEAAPEAXI@Z @ 0x1802688D8
 * Callers:
 *     ?ClearDirectFlip@COverlayContext@@AEAAXXZ @ 0x1802181DC (-ClearDirectFlip@COverlayContext@@AEAAXXZ.c)
 *     ??1?$unique_ptr@VCDirectFlipInfo@@U?$default_delete@VCDirectFlipInfo@@@std@@@std@@QEAA@XZ @ 0x1802503E0 (--1-$unique_ptr@VCDirectFlipInfo@@U-$default_delete@VCDirectFlipInfo@@@std@@@std@@QEAA@XZ.c)
 * Callees:
 *     ??1CDirectFlipInfo@@QEAA@XZ @ 0x18024CBCC (--1CDirectFlipInfo@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 */

CDirectFlipInfo *__fastcall CDirectFlipInfo::`scalar deleting destructor'(CDirectFlipInfo *this)
{
  CDirectFlipInfo::~CDirectFlipInfo(this);
  operator delete(this);
  return this;
}
