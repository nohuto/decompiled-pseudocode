/*
 * XREFs of StorPortInitializeVrfy @ 0x14018C120
 * Callers:
 *     <none>
 * Callees:
 *     StorPortInitialize @ 0x14006FD50 (StorPortInitialize.c)
 */

__int64 __fastcall StorPortInitializeVrfy(
        __int64 DriverObject,
        _DWORD *BugCheckParameter3,
        unsigned int *a3,
        __int64 a4)
{
  if ( !VerifierApiCodeSectionHandle )
    VerifierApiCodeSectionHandle = (__int64)MmLockPagableDataSection(StorPortFreeDeviceBaseVrfy);
  if ( !DriverObject || !BugCheckParameter3 )
    KeBugCheckEx(0xF1u, 0x2000uLL, DriverObject, (ULONG_PTR)BugCheckParameter3, 0LL);
  return StorPortInitialize(DriverObject, BugCheckParameter3, a3, a4);
}
