/*
 * XREFs of LoadMemDDB @ 0x14006B950
 * Callers:
 *     Load @ 0x14006F3B0 (Load.c)
 * Callees:
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     LoadDDB @ 0x14006B644 (LoadDDB.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall LoadMemDDB(__int64 Entry, const char *a2, __int64 a3)
{
  int v6; // eax
  const void *v7; // rbp
  unsigned int v8; // ebx

  if ( ghValidateTable && (v6 = ghValidateTable(a2, qword_140088E48), (v7 = (const void *)v6) != 0LL) )
  {
    v8 = -1072431079;
    LogError(-1072431079);
    AcpiDiagTraceAmlError(Entry, -1072431079);
    PrintDebugMessage(0x51u, v7, 0LL, 0LL, 0LL);
  }
  else
  {
    return (unsigned int)LoadDDB((char *)Entry, a2, *(_QWORD *)(Entry + 80), a3);
  }
  return v8;
}
