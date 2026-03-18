/*
 * XREFs of ??1LongPowerButtonHoldListener@@QEAA@XZ @ 0x1400727C8
 * Callers:
 *     ??1DisplayDiagnostics@@QEAA@XZ @ 0x140072788 (--1DisplayDiagnostics@@QEAA@XZ.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x14005DA48 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ?Stop@LongPowerButtonHoldListener@@QEAAXXZ @ 0x14006E3A4 (-Stop@LongPowerButtonHoldListener@@QEAAXXZ.c)
 */

void __fastcall LongPowerButtonHoldListener::~LongPowerButtonHoldListener(LongPowerButtonHoldListener *this)
{
  LongPowerButtonHoldListener::Stop(this);
  DXGFASTMUTEX::~DXGFASTMUTEX((LongPowerButtonHoldListener *)((char *)this + 24));
}
