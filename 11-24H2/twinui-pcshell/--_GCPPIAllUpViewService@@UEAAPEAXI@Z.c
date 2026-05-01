/*
 * XREFs of ??_GCPPIAllUpViewService@@UEAAPEAXI@Z @ 0x18049AD50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CPPIAllUpViewService@@UEAA@XZ @ 0x18049ABD8 (--1CPPIAllUpViewService@@UEAA@XZ.c)
 */

CPPIAllUpViewService *__fastcall CPPIAllUpViewService::`scalar deleting destructor'(
        CPPIAllUpViewService *this,
        char a2)
{
  CPPIAllUpViewService::~CPPIAllUpViewService(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
