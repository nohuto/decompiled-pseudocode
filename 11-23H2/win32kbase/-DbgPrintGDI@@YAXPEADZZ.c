/*
 * XREFs of ?DbgPrintGDI@@YAXPEADZZ @ 0x1C0150000
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0004A38 (rimProcessDeviceBufferAndStartRead.c)
 *     rimStackAttachAndProcessInput @ 0x1C00058FC (rimStackAttachAndProcessInput.c)
 *     RIMWatchDog @ 0x1C0074320 (RIMWatchDog.c)
 *     RIMStartDeviceSpecificRead @ 0x1C00789D8 (RIMStartDeviceSpecificRead.c)
 *     RIMOpenDevWorker @ 0x1C00BEDB0 (RIMOpenDevWorker.c)
 *     ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C00C1EDC (-dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     rimInputApc @ 0x1C00E2180 (rimInputApc.c)
 * Callees:
 *     <none>
 */

void DbgPrintGDI(PCCH Format, ...)
{
  va_list va; // [rsp+48h] [rbp+10h] BYREF

  va_start(va, Format);
  vDbgPrintEx(0x70u, 0, Format, va);
}
