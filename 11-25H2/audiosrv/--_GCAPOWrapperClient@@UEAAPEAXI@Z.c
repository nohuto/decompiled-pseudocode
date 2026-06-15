/*
 * XREFs of ??_GCAPOWrapperClient@@UEAAPEAXI@Z @ 0x18000BEB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAPOWrapperClient@@UEAA@XZ @ 0x18000BEEC (--1CAPOWrapperClient@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CAPOWrapperClient *__fastcall CAPOWrapperClient::`scalar deleting destructor'(CAPOWrapperClient *this, char a2)
{
  CAPOWrapperClient::~CAPOWrapperClient(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xB0);
  return this;
}
