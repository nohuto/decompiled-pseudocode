/*
 * XREFs of McGenEventRegister_EtwRegister @ 0x1400959E4
 * Callers:
 *     DriverEntry @ 0x14018B234 (DriverEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall McGenEventRegister_EtwRegister(const GUID *a1, __int64 a2, void *a3, ULONGLONG *a4)
{
  NTSTATUS result; // eax

  result = 0;
  if ( !*a4 )
    return EtwRegister(a1, McGenControlCallbackV2, a3, a4);
  return result;
}
