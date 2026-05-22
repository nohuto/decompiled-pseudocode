/*
 * XREFs of ??_ETwoFingerDragRecognizer@@UEAAPEAXI@Z @ 0x1801B5E80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

TwoFingerDragRecognizer *__fastcall TwoFingerDragRecognizer::`vector deleting destructor'(
        TwoFingerDragRecognizer *this,
        char a2)
{
  *(_QWORD *)this = &GestureRecognizer::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x58);
  return this;
}
