/*
 * XREFs of KeReservePrivilegedPages @ 0x1404B4380
 * Callers:
 *     MiReleasePrivilegedPtes @ 0x1407E8404 (MiReleasePrivilegedPtes.c)
 *     MiUnlockDriverPages @ 0x140A3E5CC (MiUnlockDriverPages.c)
 *     MiReservePrivilegedPtes @ 0x140A5E748 (MiReservePrivilegedPtes.c)
 *     MiFreeInitializationCode @ 0x140AE67EC (MiFreeInitializationCode.c)
 * Callees:
 *     VslReserveProtectedPages @ 0x140A7872C (VslReserveProtectedPages.c)
 */

__int64 KeReservePrivilegedPages()
{
  return VslReserveProtectedPages();
}
