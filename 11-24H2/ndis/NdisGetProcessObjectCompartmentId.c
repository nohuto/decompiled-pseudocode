/*
 * XREFs of NdisGetProcessObjectCompartmentId @ 0x140029CC0
 * Callers:
 *     ?ndisCmValidateCompartmentChange@@YAPEAXII@Z @ 0x140029B90 (-ndisCmValidateCompartmentChange@@YAPEAXII@Z.c)
 * Callees:
 *     NdisGetJobObjectCompartmentId @ 0x140029680 (NdisGetJobObjectCompartmentId.c)
 *     NdisGetSessionCompartmentId @ 0x140029740 (NdisGetSessionCompartmentId.c)
 */

__int64 __fastcall NdisGetProcessObjectCompartmentId(__int64 a1)
{
  __int64 ProcessJob; // rax
  unsigned int ProcessSessionId; // eax

  ProcessJob = PsGetProcessJob();
  if ( ProcessJob )
    return NdisGetJobObjectCompartmentId(ProcessJob);
  ProcessSessionId = PsGetProcessSessionId(a1);
  return NdisGetSessionCompartmentId(ProcessSessionId);
}
