/*
 * XREFs of ??_ECAllUpViewService@@UEAAPEAXI@Z @ 0x180499DF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAllUpViewService@@UEAA@XZ @ 0x180499BA8 (--1CAllUpViewService@@UEAA@XZ.c)
 */

CAllUpViewService *__fastcall CAllUpViewService::`vector deleting destructor'(CAllUpViewService *this, char a2)
{
  CAllUpViewService::~CAllUpViewService(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x48);
  return this;
}
