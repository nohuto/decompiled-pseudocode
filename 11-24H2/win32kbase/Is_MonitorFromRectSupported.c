/*
 * XREFs of Is_MonitorFromRectSupported @ 0x140045BA0
 * Callers:
 *     PhysicalToLogicalDPIRect @ 0x1400453C0 (PhysicalToLogicalDPIRect.c)
 *     TransformRectBetweenCoordinateSpaces @ 0x140047880 (TransformRectBetweenCoordinateSpaces.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 Is_MonitorFromRectSupported()
{
  __int64 (*v0)(void); // rax

  v0 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 3952LL);
  if ( v0 )
    return v0();
  else
    return 3221225659LL;
}
