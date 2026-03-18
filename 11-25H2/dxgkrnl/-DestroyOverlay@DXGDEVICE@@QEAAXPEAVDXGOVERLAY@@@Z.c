/*
 * XREFs of ?DestroyOverlay@DXGDEVICE@@QEAAXPEAVDXGOVERLAY@@@Z @ 0x1401B73F0
 * Callers:
 *     DxgkDestroyOverlay @ 0x1401E39B0 (DxgkDestroyOverlay.c)
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1403B5958 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??_GDXGOVERLAY@@QEAAPEAXI@Z @ 0x14006CA1C (--_GDXGOVERLAY@@QEAAPEAXI@Z.c)
 */

void __fastcall DXGDEVICE::DestroyOverlay(DXGDEVICE *this, struct DXGOVERLAY ***a2)
{
  struct DXGOVERLAY **v3; // rcx
  struct DXGOVERLAY **v4; // rax

  if ( !*((_BYTE *)this + 72) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4062;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"IsDeviceLockExclusiveOwner()", 4062LL, 0LL, 0LL, 0LL, 0LL);
  }
  v3 = *a2;
  if ( (*a2)[1] != (struct DXGOVERLAY *)a2 || (v4 = a2[1], *v4 != (struct DXGOVERLAY *)a2) )
    __fastfail(3u);
  *v4 = (struct DXGOVERLAY *)v3;
  v3[1] = (struct DXGOVERLAY *)v4;
  DXGOVERLAY::`scalar deleting destructor'((DXGOVERLAY *)a2);
}
