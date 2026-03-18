/*
 * XREFs of ??_ECEventResponse@@UEAAPEAXI@Z @ 0x180217760
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 */

HANDLE *__fastcall CEventResponse::`vector deleting destructor'(HANDLE *this, char a2)
{
  *this = &CEventResponse::`vftable';
  CloseHandle(this[5]);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x38uLL);
  return this;
}
