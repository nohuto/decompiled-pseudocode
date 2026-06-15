/*
 * XREFs of ??_GCConnectionInstance@@QEAAPEAXI@Z @ 0x14000ECC8
 * Callers:
 *     ?CreateAPOConnectionList@CPipeInstance@@AEAAJXZ @ 0x140004960 (-CreateAPOConnectionList@CPipeInstance@@AEAAJXZ.c)
 *     ?Cleanup@CPipeInstance@@AEAAXXZ @ 0x14000E994 (-Cleanup@CPipeInstance@@AEAAXXZ.c)
 * Callees:
 *     ??1CConnectionInstance@@QEAA@XZ @ 0x14000ECF4 (--1CConnectionInstance@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400590C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CConnectionInstance *__fastcall CConnectionInstance::`scalar deleting destructor'(CConnectionInstance *this)
{
  CConnectionInstance::~CConnectionInstance(this);
  operator delete(this);
  return this;
}
