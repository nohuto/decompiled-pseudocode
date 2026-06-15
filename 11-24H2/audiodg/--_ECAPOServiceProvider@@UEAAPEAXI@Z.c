/*
 * XREFs of ??_ECAPOServiceProvider@@UEAAPEAXI@Z @ 0x14003A190
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAPOServiceProvider@@UEAA@XZ @ 0x14003A1CC (--1CAPOServiceProvider@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400590C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CAPOServiceProvider *__fastcall CAPOServiceProvider::`vector deleting destructor'(CAPOServiceProvider *this, char a2)
{
  CAPOServiceProvider::~CAPOServiceProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
