/*
 * XREFs of ??_GCAPOWrapperClient@@UEAAPEAXI@Z @ 0x180022F40
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAPOWrapperClient@@UEAA@XZ @ 0x180022F7C (--1CAPOWrapperClient@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CAPOWrapperClient *__fastcall CAPOWrapperClient::`scalar deleting destructor'(CAPOWrapperClient *this, char a2)
{
  CAPOWrapperClient::~CAPOWrapperClient(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xB0);
  return this;
}
