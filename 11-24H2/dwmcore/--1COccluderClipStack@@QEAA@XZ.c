/*
 * XREFs of ??1COccluderClipStack@@QEAA@XZ @ 0x180263EAC
 * Callers:
 *     ??1COcclusionContext@@QEAA@XZ @ 0x1800F8AFC (--1COcclusionContext@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 */

void __fastcall COccluderClipStack::~COccluderClipStack(void **this)
{
  operator delete(this[3]);
  operator delete(*this);
}
