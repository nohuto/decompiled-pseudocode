/*
 * XREFs of ??1CCD_BTL@@MEAA@XZ @ 0x140268EA8
 * Callers:
 *     ??_ECCD_BTL@@MEAAPEAXI@Z @ 0x140090C60 (--_ECCD_BTL@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Purge@CDS_JOURNAL@@QEAAJXZ @ 0x14018AA54 (-Purge@CDS_JOURNAL@@QEAAJXZ.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x14031B384 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 */

void __fastcall CCD_BTL::~CCD_BTL(CCD_BTL *this)
{
  *(_QWORD *)this = &CCD_BTL_FULL::`vftable';
  CDS_JOURNAL::Purge((CCD_BTL *)((char *)this + 112));
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_BTL *)((char *)this + 8));
}
