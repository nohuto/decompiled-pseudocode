/*
 * XREFs of ??_GTwoFingerGestureRecognizer@@UEAAPEAXI@Z @ 0x1801B59B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

TwoFingerGestureRecognizer *__fastcall TwoFingerGestureRecognizer::`scalar deleting destructor'(
        TwoFingerGestureRecognizer *this,
        char a2)
{
  *((_QWORD *)this + 11) = &GestureRecognizer::`vftable';
  *((_QWORD *)this + 2) = &GestureRecognizer::`vftable';
  *(_QWORD *)this = &GestureRecognizer::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xE0);
  return this;
}
