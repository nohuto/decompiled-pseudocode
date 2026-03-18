/*
 * XREFs of ?_ValidateMonitorOrientation@DXGMONITOR@@AEAAEK@Z @ 0x14027EE00
 * Callers:
 *     ?_RetrieveMonitorOrientationFromAcpi@DXGMONITOR@@AEAAJXZ @ 0x14027686C (-_RetrieveMonitorOrientationFromAcpi@DXGMONITOR@@AEAAJXZ.c)
 *     ?_PrepareDefaultMonitorConfiguration@DXGMONITOR@@AEAAXXZ @ 0x1404063AC (-_PrepareDefaultMonitorConfiguration@DXGMONITOR@@AEAAXXZ.c)
 * Callees:
 *     ?_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ @ 0x14031B458 (-_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ.c)
 */

bool __fastcall DXGMONITOR::_ValidateMonitorOrientation(DXGMONITOR *this)
{
  bool IsVirtualModeSupportDisabled; // al
  __int64 v2; // rcx
  int v3; // r9d
  char v4; // r8

  IsVirtualModeSupportDisabled = DXGMONITOR::_IsVirtualModeSupportDisabled(this);
  v4 = 0;
  if ( IsVirtualModeSupportDisabled )
    return v3 == 0;
  if ( (v3 & 0xFFFFFFFD) == 0 || v3 == *(_DWORD *)(v2 + 304) )
    return 1;
  return v4;
}
