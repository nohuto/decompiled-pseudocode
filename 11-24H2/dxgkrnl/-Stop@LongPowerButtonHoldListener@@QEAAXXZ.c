/*
 * XREFs of ?Stop@LongPowerButtonHoldListener@@QEAAXXZ @ 0x14006EE28
 * Callers:
 *     ?Initialize@DisplayDiagnostics@@QEAAXXZ @ 0x14006EE70 (-Initialize@DisplayDiagnostics@@QEAAXXZ.c)
 *     ??1LongPowerButtonHoldListener@@QEAA@XZ @ 0x14007315C (--1LongPowerButtonHoldListener@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall LongPowerButtonHoldListener::Stop(LongPowerButtonHoldListener *this)
{
  if ( *(_QWORD *)this )
  {
    ExUnsubscribeWnfStateChange();
    *(_QWORD *)this = 0LL;
  }
}
