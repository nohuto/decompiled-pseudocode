/*
 * XREFs of ??_GCDrawListEntryBatch@@EEAAPEAXI@Z @ 0x1801BEC60
 * Callers:
 *     ??1?$com_ptr_t@VCDrawListEntryBatch@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801BEA00 (--1-$com_ptr_t@VCDrawListEntryBatch@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@CDrawListEntryBatch@@UEAAKXZ @ 0x1801BEB30 (-Release@CDrawListEntryBatch@@UEAAKXZ.c)
 * Callees:
 *     ??1CDrawListEntryBatch@@EEAA@XZ @ 0x1801BEDF8 (--1CDrawListEntryBatch@@EEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 */

CDrawListEntryBatch *__fastcall CDrawListEntryBatch::`scalar deleting destructor'(CDrawListEntryBatch *this, char a2)
{
  CDrawListEntryBatch::~CDrawListEntryBatch(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0xB8uLL);
  return this;
}
