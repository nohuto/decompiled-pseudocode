/*
 * XREFs of ?UpdateMonitorPowerState@CComposition@@IEAAXW4_MONITOR_DISPLAY_STATE@@@Z @ 0x18025BA9C
 * Callers:
 *     ?s_PowerNotification@CComposition@@KAKPEAXK0@Z @ 0x1802310B0 (-s_PowerNotification@CComposition@@KAKPEAXK0@Z.c)
 * Callees:
 *     McTemplateU0t_EventWriteTransfer @ 0x18006DBC8 (McTemplateU0t_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CComposition::UpdateMonitorPowerState(CComposition *this, unsigned int a2)
{
  CGlobalComposition *v2; // rdi
  int v4; // eax

  v2 = g_pComposition;
  v4 = *((_DWORD *)g_pComposition + 1621);
  if ( v4 != a2 )
  {
    if ( !v4 )
    {
      *(_BYTE *)(*((_QWORD *)g_pComposition + 77) + 754LL) = 1;
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v2 + 78) + 72LL))(*((_QWORD *)v2 + 78));
    }
    *((_DWORD *)v2 + 1621) = a2;
    if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 )
      McTemplateU0t_EventWriteTransfer(
        (__int64)Microsoft_Windows_Dwm_Compositor_Context,
        (__int64)&MonitorPowerStateChanged,
        a2);
  }
}
