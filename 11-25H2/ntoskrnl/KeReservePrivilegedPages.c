/*
 * XREFs of KeReservePrivilegedPages @ 0x1404B4A34
 * Callers:
 *     MiReleasePrivilegedPtes @ 0x1407D8544 (MiReleasePrivilegedPtes.c)
 *     MiUnlockDriverPages @ 0x140A3A2AC (MiUnlockDriverPages.c)
 *     MiReservePrivilegedPtes @ 0x140A5B774 (MiReservePrivilegedPtes.c)
 *     MiFreeInitializationCode @ 0x140AD58A0 (MiFreeInitializationCode.c)
 * Callees:
 *     VslReserveProtectedPages @ 0x140A769CC (VslReserveProtectedPages.c)
 */

__int64 KeReservePrivilegedPages()
{
  return VslReserveProtectedPages();
}
