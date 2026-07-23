/*
 * XREFs of MmCallDllInitialize @ 0x1407D7AC0
 * Callers:
 *     MmLoadSystemImageEx @ 0x1409B0468 (MmLoadSystemImageEx.c)
 *     PipInitializeCoreDriversAndElam @ 0x140C520B0 (PipInitializeCoreDriversAndElam.c)
 *     PipInitializeDriverDependentDLLs @ 0x140C524C4 (PipInitializeDriverDependentDLLs.c)
 * Callees:
 *     MiIssueDllInitializeCall @ 0x1407D77CC (MiIssueDllInitializeCall.c)
 *     RtlFindExportedRoutineByName @ 0x1408E85B0 (RtlFindExportedRoutineByName.c)
 */

__int64 (__fastcall *__fastcall MmCallDllInitialize(__int64 a1))(UNICODE_STRING *)
{
  __int64 (__fastcall *result)(UNICODE_STRING *); // rax

  result = (__int64 (__fastcall *)(UNICODE_STRING *))RtlFindExportedRoutineByName(*(PVOID *)(a1 + 48), "DllInitialize");
  if ( result )
    return (__int64 (__fastcall *)(UNICODE_STRING *))MiIssueDllInitializeCall(a1, result);
  return result;
}
