/*
 * XREFs of TransformRectBetweenCoordinateSpacesPerMonitor @ 0x1400464E8
 * Callers:
 *     TransformRectBetweenCoordinateSpaces @ 0x140047880 (TransformRectBetweenCoordinateSpaces.c)
 * Callees:
 *     PhysicalToLogicalDPIRect @ 0x1400453C0 (PhysicalToLogicalDPIRect.c)
 *     LogicalToPhysicalDPIRect @ 0x140046540 (LogicalToPhysicalDPIRect.c)
 */

__int64 TransformRectBetweenCoordinateSpacesPerMonitor(_OWORD *a1, __int64 a2, unsigned int a3, unsigned int a4, ...)
{
  int v6; // ebx
  va_list va; // [rsp+50h] [rbp+28h] BYREF

  va_start(va, a4);
  v6 = LogicalToPhysicalDPIRect(a1, a2, a4, (__int64 *)va);
  return v6 | (unsigned int)PhysicalToLogicalDPIRect((__int64)a1, a1, a3, (__int64 *)va);
}
