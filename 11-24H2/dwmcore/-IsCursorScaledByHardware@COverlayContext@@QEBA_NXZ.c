/*
 * XREFs of ?IsCursorScaledByHardware@COverlayContext@@QEBA_NXZ @ 0x18026C508
 * Callers:
 *     ?UpdateHardwareCursor@COverlayContext@@AEAA_NXZ @ 0x18026D0CC (-UpdateHardwareCursor@COverlayContext@@AEAA_NXZ.c)
 * Callees:
 *     ?GetMonitorTransform@COverlayContext@@QEBAAEBVCMonitorTransform@@XZ @ 0x180060010 (-GetMonitorTransform@COverlayContext@@QEBAAEBVCMonitorTransform@@XZ.c)
 */

bool __fastcall COverlayContext::IsCursorScaledByHardware(COverlayContext *this)
{
  const struct CMonitorTransform *MonitorTransform; // rax
  __int64 v3; // rcx

  if ( *((_QWORD *)this + 2439) )
  {
    MonitorTransform = COverlayContext::GetMonitorTransform(this);
    if ( *((_BYTE *)MonitorTransform + 256) || *((_BYTE *)MonitorTransform + 259) )
      return 1;
  }
  v3 = *((_QWORD *)this + 1585);
  if ( *((_QWORD *)this + 1586) - v3 == 392 && !*(_DWORD *)(v3 + 376) && (*(_BYTE *)(v3 + 32) & 4) != 0 )
    return 1;
  if ( *((_BYTE *)this + 19089) )
  {
    if ( !*((_BYTE *)this + 19581) )
      return (*((_DWORD *)this + 4744) & 4) != 0;
    return 1;
  }
  return 0;
}
