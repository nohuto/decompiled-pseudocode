/*
 * XREFs of ??1TMPBUFOBJ@@QEAA@XZ @ 0x140336AEC
 * Callers:
 *     NtGdiScaleValues @ 0x1403383B0 (NtGdiScaleValues.c)
 * Callees:
 *     ??1?$AutoResource@$1?FreeTmpBuffer@@YAXPEAX@Z@@QEAA@XZ @ 0x1401BB7B4 (--1-$AutoResource@$1-FreeTmpBuffer@@YAXPEAX@Z@@QEAA@XZ.c)
 */

void __fastcall TMPBUFOBJ::~TMPBUFOBJ(TMPBUFOBJ *this)
{
  AutoResource<&void FreeTmpBuffer(void *)>::~AutoResource<&void FreeTmpBuffer(void *)>((__int64 *)this);
}
