/*
 * XREFs of ??1PdoInit@@QEAA@XZ @ 0x14004C9CC
 * Callers:
 *     ??1WDFDEVICE_INIT@@QEAA@XZ @ 0x14004C7E0 (--1WDFDEVICE_INIT@@QEAA@XZ.c)
 * Callees:
 *     ?Clear@FxCollectionInternal@@QEAAXXZ @ 0x14004C5A8 (-Clear@FxCollectionInternal@@QEAAXXZ.c)
 */

void __fastcall PdoInit::~PdoInit(PdoInit *this)
{
  FxCollectionInternal::Clear(&this->CompatibleIDs);
  FxCollectionInternal::Clear(&this->HardwareIDs);
}
