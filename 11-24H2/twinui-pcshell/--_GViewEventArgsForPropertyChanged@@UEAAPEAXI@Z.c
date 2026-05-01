/*
 * XREFs of ??_GViewEventArgsForPropertyChanged@@UEAAPEAXI@Z @ 0x1801E61E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ViewEventArgsForPropertyChanged@@UEAA@XZ @ 0x1801E621C (--1ViewEventArgsForPropertyChanged@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

ViewEventArgsForPropertyChanged *__fastcall ViewEventArgsForPropertyChanged::`scalar deleting destructor'(
        ViewEventArgsForPropertyChanged *this,
        char a2)
{
  ViewEventArgsForPropertyChanged::~ViewEventArgsForPropertyChanged(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x68);
  return this;
}
