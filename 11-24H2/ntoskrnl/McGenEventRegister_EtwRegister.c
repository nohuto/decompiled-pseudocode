/*
 * XREFs of McGenEventRegister_EtwRegister @ 0x14057ABE4
 * Callers:
 *     CcInitializeVolumeCacheMap @ 0x14040BF18 (CcInitializeVolumeCacheMap.c)
 *     PdcInitializeETW @ 0x14060506C (PdcInitializeETW.c)
 *     CarEtwRegister @ 0x140613F84 (CarEtwRegister.c)
 *     IoInitSystemPreDrivers @ 0x140C1CA4C (IoInitSystemPreDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140C210BC (IopInitializePlugPlayServices.c)
 * Callees:
 *     EtwRegister @ 0x1409EA180 (EtwRegister.c)
 */

NTSTATUS __fastcall McGenEventRegister_EtwRegister(const GUID *a1, __int64 a2, void *a3, ULONGLONG *a4)
{
  NTSTATUS result; // eax

  result = 0;
  if ( !*a4 )
    return EtwRegister(a1, McGenControlCallbackV2, a3, a4);
  return result;
}
