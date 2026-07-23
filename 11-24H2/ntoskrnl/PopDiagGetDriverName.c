/*
 * XREFs of PopDiagGetDriverName @ 0x1403CBCB8
 * Callers:
 *     PopDiagTraceIrpFinishTelemetry @ 0x1402E66B0 (PopDiagTraceIrpFinishTelemetry.c)
 *     PopRecordPoIrpBlackboxInformation @ 0x1404BD7D4 (PopRecordPoIrpBlackboxInformation.c)
 *     PopDiagTraceDriverVeto @ 0x140B618A8 (PopDiagTraceDriverVeto.c)
 * Callees:
 *     RtlStringCbCopyNW @ 0x1403CC204 (RtlStringCbCopyNW.c)
 */

NTSTATUS __fastcall PopDiagGetDriverName(__int64 a1, wchar_t *a2)
{
  __int64 v2; // rax
  const wchar_t *v3; // r8

  if ( a1 && (v2 = *(_QWORD *)(a1 + 8), (v3 = *(const wchar_t **)(v2 + 64)) != 0LL) && *(_WORD *)(v2 + 56) )
    return RtlStringCbCopyNW(a2, 0x80uLL, v3, *(unsigned __int16 *)(v2 + 56));
  else
    return -1073741823;
}
