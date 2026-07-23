/*
 * XREFs of KeReservePrivilegedPages @ 0x1404AEBCC
 * Callers:
 *     MiReleasePrivilegedPtes @ 0x1407E89D4 (MiReleasePrivilegedPtes.c)
 *     MiUnlockDriverPages @ 0x140A33EDC (MiUnlockDriverPages.c)
 *     MiReservePrivilegedPtes @ 0x140A55814 (MiReservePrivilegedPtes.c)
 *     MiFreeInitializationCode @ 0x140AE80CC (MiFreeInitializationCode.c)
 * Callees:
 *     VslReserveProtectedPages @ 0x140A72A2C (VslReserveProtectedPages.c)
 */

__int64 KeReservePrivilegedPages()
{
  return VslReserveProtectedPages();
}
