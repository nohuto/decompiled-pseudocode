/*
 * XREFs of ??1ClipPlaneIterator@@QEAA@XZ @ 0x1801DE484
 * Callers:
 *     ??1CDrawingContext@@MEAA@XZ @ 0x1801DE2FC (--1CDrawingContext@@MEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800E54D0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall ClipPlaneIterator::~ClipPlaneIterator(ClipPlaneIterator *this)
{
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 88);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 56);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 24);
}
