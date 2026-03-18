/*
 * XREFs of ??1LongPowerButtonHoldListener@@QEAA@XZ @ 0x14007315C
 * Callers:
 *     ??1DisplayDiagnostics@@QEAA@XZ @ 0x14007311C (--1DisplayDiagnostics@@QEAA@XZ.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x14005D990 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ?Stop@LongPowerButtonHoldListener@@QEAAXXZ @ 0x14006EE28 (-Stop@LongPowerButtonHoldListener@@QEAAXXZ.c)
 */

void __fastcall LongPowerButtonHoldListener::~LongPowerButtonHoldListener(LongPowerButtonHoldListener *this)
{
  LongPowerButtonHoldListener::Stop(this);
  DXGFASTMUTEX::~DXGFASTMUTEX((LongPowerButtonHoldListener *)((char *)this + 24));
}
