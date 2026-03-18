/*
 * XREFs of ??1COccluderClipStack@@QEAA@XZ @ 0x18026FEFC
 * Callers:
 *     ??1COcclusionContext@@QEAA@XZ @ 0x180083B2C (--1COcclusionContext@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 */

void __fastcall COccluderClipStack::~COccluderClipStack(void **this)
{
  operator delete(this[3]);
  operator delete(*this);
}
