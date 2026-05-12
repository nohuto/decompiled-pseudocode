/*
 * XREFs of StorpUninitializePerfTelemetry @ 0x1400BD130
 * Callers:
 *     StorpInitializePerfTelemetry @ 0x1400AFB78 (StorpInitializePerfTelemetry.c)
 *     StorpUnRegisterTraceLogging @ 0x14018CB74 (StorpUnRegisterTraceLogging.c)
 * Callees:
 *     <none>
 */

void StorpUninitializePerfTelemetry()
{
  if ( P )
    ExFreePoolWithTag(P, 0x65546152u);
  if ( *(&P + 1) )
    ExFreePoolWithTag(*(&P + 1), 0x65546152u);
  if ( xmmword_140170DB8 )
    ExFreePoolWithTag(xmmword_140170DB8, 0x65546152u);
  if ( *(&xmmword_140170DB8 + 1) )
    ExFreePoolWithTag(*(&xmmword_140170DB8 + 1), 0x65546152u);
  if ( *((_QWORD *)&xmmword_140170DD0 + 1) )
    ExFreePoolWithTag(*((PVOID *)&xmmword_140170DD0 + 1), 0x65546152u);
  if ( xmmword_140170DE0 )
    ExFreePoolWithTag(xmmword_140170DE0, 0x65546152u);
  if ( *(&xmmword_140170DE0 + 1) )
    ExFreePoolWithTag(*(&xmmword_140170DE0 + 1), 0x65546152u);
  if ( xmmword_140170DF0 )
    ExFreePoolWithTag(xmmword_140170DF0, 0x65546152u);
  if ( *((_QWORD *)&xmmword_140170E00 + 1) )
    ExFreePoolWithTag(*((PVOID *)&xmmword_140170E00 + 1), 0x65546152u);
  if ( xmmword_140170E10 )
    ExFreePoolWithTag(xmmword_140170E10, 0x65546152u);
  if ( *(&xmmword_140170E10 + 1) )
    ExFreePoolWithTag(*(&xmmword_140170E10 + 1), 0x65546152u);
  if ( xmmword_140170E20 )
    ExFreePoolWithTag(xmmword_140170E20, 0x65546152u);
  if ( FeatureFixTRIMAddSCSIPassthrough )
  {
    if ( qword_140170E58 )
    {
      ExFreePoolWithTag(qword_140170E58, 0x65546152u);
      qword_140170E58 = 0LL;
    }
    if ( qword_140170E60 )
    {
      ExFreePoolWithTag(qword_140170E60, 0x65546152u);
      qword_140170E60 = 0LL;
    }
    if ( qword_140170E68 )
    {
      ExFreePoolWithTag(qword_140170E68, 0x65546152u);
      qword_140170E68 = 0LL;
    }
  }
}
