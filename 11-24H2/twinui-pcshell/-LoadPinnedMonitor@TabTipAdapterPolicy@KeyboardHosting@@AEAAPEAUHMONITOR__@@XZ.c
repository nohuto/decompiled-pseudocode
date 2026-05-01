/*
 * XREFs of ?LoadPinnedMonitor@TabTipAdapterPolicy@KeyboardHosting@@AEAAPEAUHMONITOR__@@XZ @ 0x1801DAB98
 * Callers:
 *     ?InitializeMonitors@TabTipAdapterPolicy@KeyboardHosting@@AEAAJXZ @ 0x1801DAA5C (-InitializeMonitors@TabTipAdapterPolicy@KeyboardHosting@@AEAAJXZ.c)
 *     ?HandleDisplayChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x18021D2E0 (-HandleDisplayChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@Shell.c)
 * Callees:
 *     ?LoadGlobalPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NPEAUHKEY__@@AEAUtagPOINT@@@Z @ 0x1801DAC14 (-LoadGlobalPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NPEAUHKEY__@@AEAUtagPOINT@@@Z.c)
 */

HMONITOR __fastcall KeyboardHosting::TabTipAdapterPolicy::LoadPinnedMonitor(KeyboardHosting::TabTipAdapterPolicy *this)
{
  __int64 v1; // rbx
  POINT v3; // rcx
  POINT v5; // [rsp+38h] [rbp+10h] BYREF
  POINT pt; // [rsp+40h] [rbp+18h] BYREF

  v1 = 0LL;
  v5 = 0LL;
  pt = 0LL;
  if ( KeyboardHosting::TabTipAdapterPolicy::LoadGlobalPosition(this, HKEY_CURRENT_USER, &v5) )
  {
    v3 = v5;
    return MonitorFromPoint(v3, 1u);
  }
  if ( KeyboardHosting::TabTipAdapterPolicy::LoadGlobalPosition(this, HKEY_LOCAL_MACHINE, &pt) )
  {
    v3 = pt;
    return MonitorFromPoint(v3, 1u);
  }
  return (HMONITOR)v1;
}
