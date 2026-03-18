/*
 * XREFs of ??1PdoInit@@QEAA@XZ @ 0x140040BAC
 * Callers:
 *     ??1WDFDEVICE_INIT@@QEAA@XZ @ 0x1400409C0 (--1WDFDEVICE_INIT@@QEAA@XZ.c)
 * Callees:
 *     ?Clear@FxCollectionInternal@@QEAAXXZ @ 0x140040788 (-Clear@FxCollectionInternal@@QEAAXXZ.c)
 */

void __fastcall PdoInit::~PdoInit(PdoInit *this)
{
  FxCollectionInternal::Clear(&this->CompatibleIDs);
  FxCollectionInternal::Clear(&this->HardwareIDs);
}
