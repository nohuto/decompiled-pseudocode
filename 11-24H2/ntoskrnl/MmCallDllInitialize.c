/*
 * XREFs of MmCallDllInitialize @ 0x1407E7978
 * Callers:
 *     MmLoadSystemImageEx @ 0x1409C87D8 (MmLoadSystemImageEx.c)
 *     PipInitializeCoreDriversAndElam @ 0x140C633C4 (PipInitializeCoreDriversAndElam.c)
 *     PipInitializeDriverDependentDLLs @ 0x140C637D8 (PipInitializeDriverDependentDLLs.c)
 * Callees:
 *     MiIssueDllInitializeCall @ 0x1407E7684 (MiIssueDllInitializeCall.c)
 *     RtlFindExportedRoutineByName @ 0x1408B0E30 (RtlFindExportedRoutineByName.c)
 */

__int64 (__fastcall *__fastcall MmCallDllInitialize(__int64 a1))(UNICODE_STRING *)
{
  __int64 (__fastcall *result)(UNICODE_STRING *); // rax

  result = (__int64 (__fastcall *)(UNICODE_STRING *))RtlFindExportedRoutineByName(*(_QWORD *)(a1 + 48), "DllInitialize");
  if ( result )
    return (__int64 (__fastcall *)(UNICODE_STRING *))MiIssueDllInitializeCall(a1, result);
  return result;
}
