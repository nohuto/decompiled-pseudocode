/*
 * XREFs of RtlIdnToUnicode @ 0x1800BEAE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     IdnaMemAlloc @ 0x1800BEB6C (IdnaMemAlloc.c)
 *     RtlpIdnToUnicodeWorker @ 0x1800C04F0 (RtlpIdnToUnicodeWorker.c)
 */

NTSTATUS __cdecl RtlIdnToUnicode(
        ULONG Flags,
        PCWSTR SourceString,
        LONG SourceStringLength,
        PWSTR DestinationString,
        PLONG DestinationStringLength)
{
  __int64 v9; // rax
  void *v10; // rdi
  NTSTATUS v11; // ebx

  v9 = IdnaMemAlloc(1022LL);
  v10 = (void *)v9;
  if ( !v9 )
    return -1073741801;
  v11 = RtlpIdnToUnicodeWorker(
          Flags,
          SourceString,
          (unsigned int)SourceStringLength,
          DestinationString,
          DestinationStringLength,
          v9);
  RtlpSysVolFree(v10);
  return v11;
}
