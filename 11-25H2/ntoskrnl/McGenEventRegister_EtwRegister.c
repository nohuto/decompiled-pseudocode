/*
 * XREFs of McGenEventRegister_EtwRegister @ 0x14057A434
 * Callers:
 *     CcInitializeVolumeCacheMap @ 0x1403A5574 (CcInitializeVolumeCacheMap.c)
 *     PdcInitializeETW @ 0x1405FB724 (PdcInitializeETW.c)
 *     CarEtwRegister @ 0x140609A04 (CarEtwRegister.c)
 *     IoInitSystemPreDrivers @ 0x140C0996C (IoInitSystemPreDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140C0DF14 (IopInitializePlugPlayServices.c)
 * Callees:
 *     EtwRegister @ 0x1408B7480 (EtwRegister.c)
 */

NTSTATUS __fastcall McGenEventRegister_EtwRegister(const GUID *a1, __int64 a2, void *a3, ULONGLONG *a4)
{
  NTSTATUS result; // eax

  result = 0;
  if ( !*a4 )
    return EtwRegister(a1, McGenControlCallbackV2, a3, a4);
  return result;
}
