/*
 * XREFs of ??_GCDefaultClock@@UEAAPEAXI@Z @ 0x180265630
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 */

CDefaultClock *__fastcall CDefaultClock::`scalar deleting destructor'(CDefaultClock *this, char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
