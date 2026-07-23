/*
 * XREFs of KiIntSteerEventTraceControlCallback @ 0x14073A9C0
 * Callers:
 *     <none>
 * Callees:
 *     KiIntSteerLogStatus @ 0x1402AF804 (KiIntSteerLogStatus.c)
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
