/*
 * XREFs of ?_MonitorFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveMonitor@@@Z @ 0x18017C764
 * Callers:
 *     ?OnShowWindowPolicy@CApplicationManager@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z @ 0x1802E96A0 (-OnShowWindowPolicy@CApplicationManager@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CApplicationManager::_MonitorFromWindow(
        CApplicationManager *this,
        HWND a2,
        struct IImmersiveMonitor **a3)
{
  unsigned int v6; // edi

  *a3 = 0LL;
  v6 = -2147023728;
  if ( GetShellWindow() != a2
    && !(unsigned int)GetPropW(a2, L"MultimonitorActivationException")
    && (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 94) + 24LL))(*((_QWORD *)this + 94)) != a2 )
  {
    return (*(unsigned int (__fastcall **)(_QWORD, HWND, GUID *, GUID *, struct IImmersiveMonitor **))(**((_QWORD **)this + 70) + 88LL))(
             *((_QWORD *)this + 70),
             a2,
             &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
             &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
             a3);
  }
  return v6;
}
