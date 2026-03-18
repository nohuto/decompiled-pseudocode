/*
 * XREFs of McGenEventRegister_EtwRegister @ 0x14057D754
 * Callers:
 *     CcInitializeVolumeCacheMap @ 0x1402CDF18 (CcInitializeVolumeCacheMap.c)
 *     PdcInitializeETW @ 0x140607A64 (PdcInitializeETW.c)
 *     CarEtwRegister @ 0x1406159C4 (CarEtwRegister.c)
 *     IoInitSystemPreDrivers @ 0x140C1AA0C (IoInitSystemPreDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140C1F07C (IopInitializePlugPlayServices.c)
 * Callees:
 *     EtwRegister @ 0x140A574E0 (EtwRegister.c)
 */

NTSTATUS __fastcall McGenEventRegister_EtwRegister(const GUID *a1, __int64 a2, void *a3, ULONGLONG *a4)
{
  NTSTATUS result; // eax

  result = 0;
  if ( !*a4 )
    return EtwRegister(a1, McGenControlCallbackV2, a3, a4);
  return result;
}
