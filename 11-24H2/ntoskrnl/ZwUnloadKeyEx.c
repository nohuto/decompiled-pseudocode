/*
 * XREFs of ZwUnloadKeyEx @ 0x1406AAF30
 * Callers:
 *     PiDrvDbUnloadHive @ 0x140A73AB0 (PiDrvDbUnloadHive.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUnloadKeyEx(POBJECT_ATTRIBUTES TargetKey, HANDLE Event)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetKey);
}
