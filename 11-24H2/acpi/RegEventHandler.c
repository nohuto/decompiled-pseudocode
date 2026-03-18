/*
 * XREFs of RegEventHandler @ 0x14006D210
 * Callers:
 *     AMLIRegEventHandler @ 0x140051D40 (AMLIRegEventHandler.c)
 * Callees:
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 */

__int64 __fastcall RegEventHandler(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( *a1 && a2 )
  {
    LogError(-1072431090);
    AcpiDiagTraceAmlError(0LL, -1072431090);
    PrintDebugMessage(0xA5u, 0LL, 0LL, 0LL, 0LL);
    return (unsigned int)-1072431090;
  }
  else
  {
    *a1 = a2;
    a1[1] = a3;
  }
  return v3;
}
