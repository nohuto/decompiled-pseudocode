/*
 * XREFs of ??_GCJumpViewExperienceEventArgs@@UEAAPEAXI@Z @ 0x180235B50
 * Callers:
 *     <none>
 * Callees:
 *     ??1StateChangedEventArgsImpl@@UEAA@XZ @ 0x1802CC424 (--1StateChangedEventArgsImpl@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CJumpViewExperienceEventArgs *__fastcall CJumpViewExperienceEventArgs::`scalar deleting destructor'(
        CJumpViewExperienceEventArgs *this,
        char a2)
{
  StateChangedEventArgsImpl::~StateChangedEventArgsImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x48);
  return this;
}
