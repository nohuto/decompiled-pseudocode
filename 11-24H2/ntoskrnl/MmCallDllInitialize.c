/*
 * XREFs of MmCallDllInitialize @ 0x1407E7F48
 * Callers:
 *     MmLoadSystemImageEx @ 0x1409B7B70 (MmLoadSystemImageEx.c)
 *     PipInitializeCoreDriversAndElam @ 0x140C65540 (PipInitializeCoreDriversAndElam.c)
 *     PipInitializeDriverDependentDLLs @ 0x140C65954 (PipInitializeDriverDependentDLLs.c)
 * Callees:
 *     MiIssueDllInitializeCall @ 0x1407E7C54 (MiIssueDllInitializeCall.c)
 *     RtlFindExportedRoutineByName @ 0x140907090 (RtlFindExportedRoutineByName.c)
 */

__int64 (__fastcall *__fastcall MmCallDllInitialize(__int64 a1))(UNICODE_STRING *)
{
  __int64 (__fastcall *result)(UNICODE_STRING *); // rax

  result = (__int64 (__fastcall *)(UNICODE_STRING *))RtlFindExportedRoutineByName(*(PVOID *)(a1 + 48), "DllInitialize");
  if ( result )
    return (__int64 (__fastcall *)(UNICODE_STRING *))MiIssueDllInitializeCall(a1, result);
  return result;
}
