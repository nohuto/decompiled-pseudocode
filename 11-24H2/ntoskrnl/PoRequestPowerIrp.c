/*
 * XREFs of PoRequestPowerIrp @ 0x1403A7FA0
 * Callers:
 *     <none>
 * Callees:
 *     PopRequestPowerIrp @ 0x1403A7FD0 (PopRequestPowerIrp.c)
 */

NTSTATUS __stdcall PoRequestPowerIrp(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        PREQUEST_POWER_COMPLETE CompletionFunction,
        PVOID Context,
        PIRP *Irp)
{
  return ((__int64 (__fastcall *)(_DWORD, _BYTE, _DWORD, _DWORD, __int64, char, __int64))PopRequestPowerIrp)(
           (_DWORD)DeviceObject,
           MinorFunction,
           (POWER_STATE)PowerState.SystemState,
           (_DWORD)CompletionFunction,
           (__int64)Context,
           0,
           (__int64)Irp);
}
