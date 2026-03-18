/*
 * XREFs of ?Stop@LongPowerButtonHoldListener@@QEAAXXZ @ 0x14006E3A4
 * Callers:
 *     ?Initialize@DisplayDiagnostics@@QEAAXXZ @ 0x14006E3EC (-Initialize@DisplayDiagnostics@@QEAAXXZ.c)
 *     ??1LongPowerButtonHoldListener@@QEAA@XZ @ 0x1400727C8 (--1LongPowerButtonHoldListener@@QEAA@XZ.c)
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
