/*
 * XREFs of ??_GFlickRecognizer@@UEAAPEAXI@Z @ 0x1801B3AB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

FlickRecognizer *__fastcall FlickRecognizer::`scalar deleting destructor'(FlickRecognizer *this, char a2)
{
  *(_QWORD *)this = &GestureRecognizer::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xA8);
  return this;
}
