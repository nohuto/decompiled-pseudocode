/*
 * XREFs of ?s_SetWindowCloak@CTaskWindow@@CAJPEBUWINDOW_ACTION_DATA@1@@Z @ 0x180307AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@_J@Z @ 0x180069570 (-ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImme.c)
 *     ?s_UpdateDelayedVisibilityTimestamp@CTaskWindow@@CAXPEAUTASK_WINDOW@1@_J@Z @ 0x180307BF0 (-s_UpdateDelayedVisibilityTimestamp@CTaskWindow@@CAXPEAUTASK_WINDOW@1@_J@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTaskWindow::s_SetWindowCloak(const struct CTaskWindow::WINDOW_ACTION_DATA *a1)
{
  __int64 v2; // rax
  char v3; // cl
  unsigned int v4; // esi
  struct IImmersiveMonitor *v5; // rbx
  unsigned __int64 v6; // rbp
  __int64 v7; // r14
  void (__fastcall *v8)(__int64, struct IImmersiveMonitor **); // rbx
  __int64 v9; // r10
  struct IImmersiveMonitor *v11; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 3);
  v3 = *((_BYTE *)a1 + 8);
  if ( v3 != *(_BYTE *)(v2 + 24) )
  {
    v4 = 1;
    if ( (*(_BYTE *)(v2 + 28) & 1) == 0 )
    {
      *(_BYTE *)(v2 + 24) = v3;
      v5 = 0LL;
      if ( (*(int (__fastcall **)(PVOID, _QWORD, bool))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr
                                                      + 24LL))(
             CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
             **((_QWORD **)a1 + 3),
             *((_BYTE *)a1 + 8) != 0) >= 0 )
      {
        v6 = *(unsigned int *)(*((_QWORD *)a1 + 3) + 84LL) | (unsigned __int64)(*((_BYTE *)a1 + 8) == 0);
        v11 = 0LL;
        v7 = *((_QWORD *)a1 + 2);
        if ( v7 )
        {
          v8 = *(void (__fastcall **)(__int64, struct IImmersiveMonitor **))(*(_QWORD *)v7 + 464LL);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v11);
          v8(v7, &v11);
          v5 = v11;
        }
        v9 = *((_QWORD *)a1 + 3);
        if ( *(_DWORD *)(v9 + 12) == 4 )
        {
          v4 = 13;
        }
        else if ( *(_DWORD *)(v9 + 12) != 5 )
        {
          v4 = *(_DWORD *)(v9 + 12) + 8;
        }
        CReportWindowVisibilityChange::ReportWindowsVisibilityChange(
          (__int64)&CApplicationManagerUtility::g_pIAMGlobals[1],
          *(_QWORD *)v9,
          v4,
          v5,
          *((struct IImmersiveApplicationInternal **)a1 + 2),
          v6);
        CTaskWindow::s_UpdateDelayedVisibilityTimestamp(*((struct CTaskWindow::TASK_WINDOW **)a1 + 3), v6);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v11);
      }
    }
  }
  return 0LL;
}
