/*
 * XREFs of ?HampSystemDeleteValue@@YAJPEAUHKEY__@@PEBG@Z @ 0x180068694
 * Callers:
 *     ?RmpTelemetryTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800658D0 (-RmpTelemetryTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     <none>
 */

LSTATUS __fastcall HampSystemDeleteValue(HKEY a1, const unsigned __int16 *a2)
{
  LSTATUS result; // eax

  result = RegDeleteValueW(a1, a2);
  if ( result > 0 )
    return (unsigned __int16)result | 0xC0070000;
  return result;
}
