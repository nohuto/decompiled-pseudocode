/*
 * XREFs of Is_MonitorFromRectSupported @ 0x1C000B650
 * Callers:
 *     TransformRectBetweenCoordinateSpaces @ 0x1C0062C80 (TransformRectBetweenCoordinateSpaces.c)
 *     PhysicalToLogicalDPIRect @ 0x1C009AB80 (PhysicalToLogicalDPIRect.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 Is_MonitorFromRectSupported()
{
  if ( qword_1C0296048 )
    return qword_1C0296048();
  else
    return 3221225659LL;
}
