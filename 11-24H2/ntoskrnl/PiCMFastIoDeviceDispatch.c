/*
 * XREFs of PiCMFastIoDeviceDispatch @ 0x1408C3290
 * Callers:
 *     IopXxxControlFile @ 0x1408C1970 (IopXxxControlFile.c)
 *     PiDaFastIoDispatch @ 0x1408C4730 (PiDaFastIoDispatch.c)
 * Callees:
 *     IoIs32bitProcess @ 0x14040A050 (IoIs32bitProcess.c)
 *     PiCMHandleIoctl @ 0x1408C3A00 (PiCMHandleIoctl.c)
 */

char __fastcall PiCMFastIoDeviceDispatch(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        _DWORD *a8)
{
  BOOLEAN v9; // al

  v9 = IoIs32bitProcess(0LL);
  *a8 = PiCMHandleIoctl(a3, a8 + 2, a7, v9);
  return 1;
}
