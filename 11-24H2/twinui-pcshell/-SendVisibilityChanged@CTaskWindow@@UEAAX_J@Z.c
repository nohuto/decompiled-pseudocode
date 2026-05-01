/*
 * XREFs of ?SendVisibilityChanged@CTaskWindow@@UEAAX_J@Z @ 0x1803075C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@_J@Z @ 0x180069570 (-ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImme.c)
 *     ?ReportOwnedWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@_J@Z @ 0x18006966C (-ReportOwnedWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAU.c)
 *     ?s_UpdateDelayedVisibilityTimestamp@CTaskWindow@@CAXPEAUTASK_WINDOW@1@_J@Z @ 0x180307BF0 (-s_UpdateDelayedVisibilityTimestamp@CTaskWindow@@CAXPEAUTASK_WINDOW@1@_J@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CTaskWindow::SendVisibilityChanged(CTaskWindow *this, __int64 a2)
{
  struct IImmersiveMonitor *v4; // r9
  __int64 v5; // rsi
  void (__fastcall *v6)(__int64, struct IImmersiveMonitor **); // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  struct IImmersiveMonitor *v9; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0LL;
  v9 = 0LL;
  v5 = *((_QWORD *)this + 16);
  if ( v5 )
  {
    v6 = *(void (__fastcall **)(__int64, struct IImmersiveMonitor **))(*(_QWORD *)v5 + 464LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v9);
    v6(v5, &v9);
    v4 = v9;
  }
  v7 = *((_QWORD *)this + 6);
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 344LL))(v7, (unsigned int)(a2 & 1) + 3);
    v8 = (*(__int64 (__fastcall **)(CTaskWindow *))(*(_QWORD *)this + 32LL))(this);
    if ( v8 )
      CReportWindowVisibilityChange::ReportOwnedWindowsVisibilityChange(
        (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
        v8,
        1u,
        v9,
        *((struct IImmersiveApplicationInternal **)this + 16),
        a2);
  }
  else
  {
    CReportWindowVisibilityChange::ReportWindowsVisibilityChange(
      (__int64)&CApplicationManagerUtility::g_pIAMGlobals[1],
      *((_QWORD *)this + 4),
      0xDu,
      v4,
      *((struct IImmersiveApplicationInternal **)this + 16),
      a2);
    CTaskWindow::s_UpdateDelayedVisibilityTimestamp((CTaskWindow *)((char *)this + 32), a2);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v9);
}
