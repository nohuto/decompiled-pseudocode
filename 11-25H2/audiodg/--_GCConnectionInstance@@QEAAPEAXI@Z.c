/*
 * XREFs of ??_GCConnectionInstance@@QEAAPEAXI@Z @ 0x14000EC98
 * Callers:
 *     ?CreateAPOConnectionList@CPipeInstance@@AEAAJXZ @ 0x140004930 (-CreateAPOConnectionList@CPipeInstance@@AEAAJXZ.c)
 *     ?Cleanup@CPipeInstance@@AEAAXXZ @ 0x14000E964 (-Cleanup@CPipeInstance@@AEAAXXZ.c)
 * Callees:
 *     ??1CConnectionInstance@@QEAA@XZ @ 0x14000ECC4 (--1CConnectionInstance@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400591B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CConnectionInstance *__fastcall CConnectionInstance::`scalar deleting destructor'(CConnectionInstance *this)
{
  CConnectionInstance::~CConnectionInstance(this);
  operator delete(this);
  return this;
}
