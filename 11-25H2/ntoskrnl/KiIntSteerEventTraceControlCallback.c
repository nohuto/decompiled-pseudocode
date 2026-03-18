/*
 * XREFs of KiIntSteerEventTraceControlCallback @ 0x140730A70
 * Callers:
 *     <none>
 * Callees:
 *     KiIntSteerLogStatus @ 0x1403AE85C (KiIntSteerLogStatus.c)
 */

void __fastcall KiIntSteerEventTraceControlCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  if ( (ControlCode & 0xFFFFFFFD) == 0 )
    KiIntSteerLogStatus(1);
}
