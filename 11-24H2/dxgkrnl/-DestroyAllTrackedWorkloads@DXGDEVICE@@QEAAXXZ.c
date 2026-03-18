/*
 * XREFs of ?DestroyAllTrackedWorkloads@DXGDEVICE@@QEAAXXZ @ 0x14039DF98
 * Callers:
 *     ?DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z @ 0x14039D208 (-DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z.c)
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1403A7C64 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??_GDXGTRACKEDWORKLOAD@@QEAAPEAXI@Z @ 0x14007983C (--_GDXGTRACKEDWORKLOAD@@QEAAPEAXI@Z.c)
 */

void __fastcall DXGDEVICE::DestroyAllTrackedWorkloads(DXGDEVICE *this)
{
  DXGTRACKEDWORKLOAD **v2; // rbx
  DXGTRACKEDWORKLOAD *v3; // rcx

  if ( !*((_BYTE *)this + 72) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 875;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"IsDeviceLockExclusiveOwner()", 875LL, 0LL, 0LL, 0LL, 0LL);
  }
  v2 = (DXGTRACKEDWORKLOAD **)((char *)this + 560);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == (DXGTRACKEDWORKLOAD *)v2 )
      break;
    if ( v3 )
      DXGTRACKEDWORKLOAD::`scalar deleting destructor'(v3);
  }
}
