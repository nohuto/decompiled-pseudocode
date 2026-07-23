/*
 * XREFs of RtlEnumProcessHeaps @ 0x180143030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlEnumProcessHeaps(PRTL_ENUM_HEAPS_ROUTINE EnumRoutine, PVOID Parameter)
{
  return RtlpEnumProcessHeaps((__int64 (__fastcall *)(__int64, __int64, __int64 *))EnumRoutine, (__int64)Parameter, 0);
}
